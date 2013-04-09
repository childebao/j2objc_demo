package com.jambit.j2ojbcdemoapp.util;

public class SortableItem {
	
	private Integer key;
	
	private String value;
	
	private ItemType type;

	public SortableItem(Integer key, String value, ItemType type) {
		super();
		this.key = key;
		this.value = value;
		this.type = type;
	}

	public Integer getKey() {
		return this.key;
	}

	public String getValue() {
		return this.value;
	}
	
	public ItemType getType() {
		return this.type;
	}

	@Override
	public String toString() {
		return "SortableItem [key=" + key + ", value=" + value + ", type="
				+ type + "]\n";
	}
}
