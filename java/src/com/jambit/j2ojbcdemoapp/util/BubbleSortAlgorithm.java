package com.jambit.j2ojbcdemoapp.util;

import java.util.ArrayList;
import java.util.List;

public class BubbleSortAlgorithm implements SortingAlgorithm {

	@Override
	public List<SortableItem> sortByKey(List<SortableItem> itemList) {
		List<SortableItem> resultList = new ArrayList<SortableItem>(itemList);
		
		for (int k = 0; k < resultList.size() - 1; k++) {
			boolean isSorted = true;
			
			for (int i = 1; i <  resultList.size() - k; i++) {
				if (resultList.get(i).getKey() < resultList.get(i - 1).getKey()) {
					SortableItem tempItem = resultList.get(i);
					resultList.set(i, resultList.get(i - 1));
					resultList.set(i - 1,	tempItem);
					
					isSorted = false;
				}
			}

			if (isSorted) {
				break;
			}
		}
		
		return resultList;
	}
}
