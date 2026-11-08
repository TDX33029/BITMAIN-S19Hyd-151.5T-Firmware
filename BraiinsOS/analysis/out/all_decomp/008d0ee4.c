// FUN_008d0ee4 @ 008d0ee4 size=96 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008d0ee4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 auStack_a8 [144];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_c = 0;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_1;
  local_b = param_4;
  iVar1 = thunk_FUN_016d4a50(0xa0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa0);
  }
  FUN_016dd1aa(iVar1,auStack_a8,0xa0);
  return CONCAT44(&UNK_01864f60,iVar1);
}

