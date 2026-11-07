// FUN_016bbe24 @ 016bbe24 size=200 calls_out=1 calls_in=0
// strings: slot_ranges | GroupInfoInner | memory_extra | name_to_index | index_to_name

void FUN_016bbe24(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int local_28;
  
  iVar1 = *(int *)*param_1;
  local_28 = iVar1 + 0x2c;
  FUN_01303f28(param_2,"GroupInfoInner",0xe,"slot_ranges",0xb,iVar1 + 8,FUN_016c1898,"name_to_index"
               ,0xd,iVar1 + 0x14,FUN_016c17dc,"index_to_name",0xd,iVar1 + 0x20,FUN_016c1530,
               "memory_extra",0xc,&local_28,&LAB_006616e8);
  return;
}

