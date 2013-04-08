package com.jambit.j2ojbcdemoapp;

import java.util.ArrayList;
import java.util.List;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;

import com.jambit.j2ojbcdemoapp.util.BubbleSortAlgorithm;
import com.jambit.j2ojbcdemoapp.util.SortableItem;
import com.jambit.j2ojbcdemoapp.util.SortingAlgorithm;

public class MainActivity extends Activity {
	
	private static final String TAG = "MainActivity";
	
	private SortingAlgorithm sortingAlgorithm;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        this.sortingAlgorithm = new BubbleSortAlgorithm();
        
        List<SortableItem> aBunchOfItems = new ArrayList<SortableItem>();
        aBunchOfItems.add(new SortableItem(5, "Item number five", SortableItem.ItemType.MEDIUM_ITEM));
        aBunchOfItems.add(new SortableItem(9, "Item number nine", SortableItem.ItemType.BIG_ITEM));
        aBunchOfItems.add(new SortableItem(0, "Item number zero", SortableItem.ItemType.SMALL_ITEM));
        aBunchOfItems.add(new SortableItem(7, "Item number seven", SortableItem.ItemType.BIG_ITEM));
        aBunchOfItems.add(new SortableItem(3, "Item number three", SortableItem.ItemType.MEDIUM_ITEM));
        aBunchOfItems.add(new SortableItem(8, "Item number eight", SortableItem.ItemType.SMALL_ITEM));
        aBunchOfItems.add(new SortableItem(1, "Item number one", SortableItem.ItemType.SMALL_ITEM));
        aBunchOfItems.add(new SortableItem(6, "Item number six", SortableItem.ItemType.BIG_ITEM));
        aBunchOfItems.add(new SortableItem(4, "Item number four", SortableItem.ItemType.MEDIUM_ITEM));
        aBunchOfItems.add(new SortableItem(2, "Item number two", SortableItem.ItemType.MEDIUM_ITEM));
        
        Log.d(TAG, "Unsorted List: " + aBunchOfItems);
        Log.d(TAG, "Sorted List: " + this.sortingAlgorithm.sortByKey(aBunchOfItems));
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
}
