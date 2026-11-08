// FUN_00a69d80 @ 00a69d80 size=136 calls_out=4 calls_in=4
// strings: 

void FUN_00a69d80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_3b [19];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  iVar1 = thunk_FUN_016d4a50(0x13);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x13);
  }
  local_20 = 0;
  local_28 = 0x13;
  local_24 = iVar1;
  iVar2 = FUN_00fabdb8(param_3,param_4,auStack_3b,0x13);
  FUN_016dd1aa(iVar1,auStack_3b + iVar2,0x13 - iVar2);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = 0x13 - iVar2;
  return;
}

