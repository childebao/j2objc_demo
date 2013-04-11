# j2objc Demo

## Über diese Demo

* **Ziel:** Euch zeigen, wie man mit Hilfe von j2objc eine Android App in eine iOS App überführen kann
* **Wie?** Ausgehend von einer Android App werde ich die einzelnen Schritte erklären, die notwendig sind um eine iOS App mit gleicher Funktionalität zu bekommen
    * Der Anfangszustand jedes dieser Schritte lässt sich über ein entsprechendes git Tag auschecken
* **Womit?** Git, Android SDK, XCode und natürlich j2objc

Das git Repository in dem ich die Demo entwickelt habe ist bei github gehostet. Jeder der will kann das ganze auch selbst mal austesten:

    # git clone https://github.com/schroepf/j2objc_demo.git

## Die Demo

### STEP_0: Ausganssituation:

    # git checkout STEP_0

**Szenario:** Eine Android App soll in eine iOS App mit gleicher Funktionalität überführt werden.

#### Android App
* MainActivity.java: Meine sehr einfache Android UI
    * hat keine UI
    * Nimmt ein Array von Objekten und sortiert es
    * loggt das Ergebnis in die Konsole
* SortingAlgorithm.java: Definiert ein Interface für Sortier-Algorithmen
* BubbleSortAlgorithm.java: Implementiert das SortingAlgorithm Interface mit dem alt bekannten Bubble-Sort Algorithmus
* SortableItem.java: POJO. Klasse der Items, die mit Hilfe des SortingAlgorithm Interfaces sortiert werden können
* ItemType.java: Enumeration der verschiedenen Item Typen

#### iOS App

* AppDelegate: Ein leerer AppDelegate
* ViewController: Ein leerer View Controller

### STEP_1: Aktuelles j2objc installieren

#### Entweder

* Aktuelles j2objc downloaden von: https://code.google.com/p/j2objc/downloads/list
* Entpacken
* fertig

#### Oder

    # git checkout STEP_1

### STEP_2: Den Code konvertieren

#### Entweder

Mal schaun was j2objc kann:

    # j2objc-0.6.1/j2objc

Gleich mal versuchen:

    # j2objc-0.6.1/j2objc -d objc/gen java/src/com/jambit/j2ojbcdemoapp/util/*


Zweiter Versuch:

    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/SortableItem.java
    
-> Falsches Verzeichnis. Man muss analog zum `javac` den `-sourcepath` parameter angeben

Dritter Versuch:

    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/SortableItem.java
    # cat objc/gen/com/jambit/j2ojbcdemoapp/util/ItemType.h
    
-> Juhu! Code! ... gleich weiter:

    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/ItemType.java
    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/SortingAlgorithm.java
    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/BubbleSortAlgorithm.java

Das geht auch in einem Kommando:

    # rm -rf objc/gen
    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/BubbleSortAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortingAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortableItem.java objc/gen com/jambit/j2ojbcdemoapp/util/ItemType.java
    
... ist aber mühsam. Deshalb gibt's auf der Projektseite von j2objc eine Anleitung, wie man sich ein Makefile bastelt, oder j2objc in den xcodebuild integriert

Unsere Business-Logic ist also jetzt konvertiert. Fehlt nur noch...:

    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/MainActivity.java
    
... OOOPS... Was ist passiert?

* j2objc kann alle Android-Spezifischen Abhängigkeiten nicht konvertieren. Ist aber auch irgendwie klar... ;)
* Konkret kann j2obc nur Code konvertieren, dessen Abhängigkeiten sich vollständig über die JRE Emulation abbilden lassen:

#### Oder

    # j2objc-0.6.1/j2objc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/BubbleSortAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortingAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortableItem.java objc/gen com/jambit/j2ojbcdemoapp/util/ItemType.java

#### Findings aus STEP_2

* j2objc verwendet als Ausgangsbasis Java Source Code (**Sämtlicher Code der konvertiert werden soll muss samt Abhängigkeiten im Quelltext vorliegen**)
* Java Enums werden nicht nur in ein `typedef enum` konvertiert sondern auch in eine Klasse, die für jeden Enum-Wert eine statische Methode anbietet
* Aus den Java Paketen werden Präfixe für den jeweiligen konvertierten Klassen-Namen (dieses Verhalten kann aber über ein Mapping beeinflusst werden)
* Ein Java Interface wird straight-forward zu einem Objective-C protocol
* Praktisch: Die `toString()` Methode von `SortableItem` wurde zum Objective-C counterpart `description`
* Nicht alles kann konvertiert werden. Code der nicht in der JRE emulation enthalten ist bzw. nicht im SourceCode vorliegt kann nicht konvertiert werden.


### STEP_3: XCode project setup

#### Entweder

* den generierten Code (in `objc/gen`) zum XCode Projekt hinzufügen
* Header Search Path hinzufügen (`../gen`)
* j2objc-Header ebenfalls zum Header Search Path hinzufügen (`../../j2objc-0.6.1/include`)
* Library search path setzen: (`../../j2objc-0.6.1/lib`)
* Other linker flags setzen: (`-ljre_emul -ObjC -force_load ../../j2objc-0.6.1/lib/libjre_emul.a`)

Für ein ARC Projekt muss man zudem den converter mit dem `-use-arc` Parameter laufen lassen:

    # j2objc-0.6.1/j2objc -use-arc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/BubbleSortAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortingAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortableItem.java objc/gen com/jambit/j2ojbcdemoapp/util/ItemType.java

#### Oder

    # git checkout STEP_3
    # j2objc-0.6.1/j2objc -use-arc -sourcepath java/src -d objc/gen com/jambit/j2ojbcdemoapp/util/BubbleSortAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortingAlgorithm.java com/jambit/j2ojbcdemoapp/util/SortableItem.java objc/gen com/jambit/j2ojbcdemoapp/util/ItemType.java
    
#### Findings aus STEP_3

* Man kann ganz einfach über einen Kommandozeilen-Parameter bestimmen ob der konvertierte Code ARC verwenden soll oder nicht
* Das XCode Projekt muss gegen die `libjre_emul` linken damit der konvertierte Code funktionsfähig ist

### STEP_4: Den konvertierten Code verwenden

* Wir wollen jetzt letztendlich ein Array in die Methode `sortByKeyWithJavaUtilList` stecken
* Das Ergebnis raus loggen

* `sortByKeyWithJavaUtilList` verwendet als Argument und als Rückgabe-Typ `id<JavaUtilList>` (ein Protokoll, aus der `libjre_emul`)
* wir müssen uns also ein Objekt erzeugen, das dieses Protokoll implementiert.
* dafür kann man die Klasse `JavaUtilArrayList` aus der jre_emul Bibliothek verwenden

Der Code dafür sieht so aus:

Notwendige Imports:

    #import "java/util/ArrayList.h"
    #import "SortableItem.h"
    #import "ItemType.h"
    #import "java/lang/Integer.h"
    #import "BubbleSortAlgorithm.h"
    
Verwenden der generierten Klassen:

    id<JavaUtilList> aBunchOfItems = [[JavaUtilArrayList alloc] init];    
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:5] withNSString:@"Item number five" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:9] withNSString:@"Item number nine" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum BIG_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:0] withNSString:@"Item number zero" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum SMALL_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:7] withNSString:@"Item number seven" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum BIG_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:3] withNSString:@"Item number three" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:8] withNSString:@"Item number eight" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum SMALL_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:1] withNSString:@"Item number one" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum SMALL_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:6] withNSString:@"Item number six" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum BIG_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:4] withNSString:@"Item number four" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    [((id<JavaUtilList>) aBunchOfItems) addWithId:[[ComJambitJ2ojbcdemoappUtilSortableItem alloc] initWithJavaLangInteger:[JavaLangInteger valueOfWithInt:2] withNSString:@"Item number two" withComJambitJ2ojbcdemoappUtilItemTypeEnum:[ComJambitJ2ojbcdemoappUtilItemTypeEnum MEDIUM_ITEM]]];
    
    ComJambitJ2ojbcdemoappUtilBubbleSortAlgorithm *sortingAlgorithm = [ComJambitJ2ojbcdemoappUtilBubbleSortAlgorithm new];
    id<JavaUtilList> sortedList = [sortingAlgorithm sortByKeyWithJavaUtilList:aBunchOfItems];
    NSLog(@"%s -- Unsorted List: %@", __PRETTY_FUNCTION__, aBunchOfItems);
    NSLog(@"%s -- Sorted List: %@", __PRETTY_FUNCTION__, sortedList);

#### Oder aus dem git...

    # git checkout STEP_4
    
#### Findings aus STEP_4

* die API des generierten Codes ist nicht wirklich schön und gut lesbar
* aber sie funktioniert

## Sum up

* j2objc eignet sich zur Konvertierung von Business-Logik => Alle Abhängigkeiten müssen sich auf die JRE Emulation zurückführen lassen
* der generierte Code ist nicht schön => Viele Konstrukte aus Java lassen sich nicht 1:1 in Objective-C überführen (enums, packages). Deshalb sieht der generierte Code oft komplexer aus als er sein müsste.
* aber er funktioniert => Wenn man die API nicht veröffentlichen muss ist j2objc tatsächlich eine Alternative zur doppelten Implementierung des Codes