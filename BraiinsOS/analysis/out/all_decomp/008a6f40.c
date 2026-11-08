// FUN_008a6f40 @ 008a6f40 size=88 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008a6f40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_190 [360];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = param_1;
  local_24 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x180);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x180);
  }
  FUN_016dd1aa(iVar1,auStack_190,0x180);
  return CONCAT44(&UNK_01863724,iVar1);
}

