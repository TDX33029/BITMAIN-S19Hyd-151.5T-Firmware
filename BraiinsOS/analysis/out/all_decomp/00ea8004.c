// FUN_00ea8004 @ 00ea8004 size=128 calls_out=2 calls_in=0
// strings: 

void FUN_00ea8004(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 in_d0;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_00f09308(param_1,param_2,param_2,0);
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < 8) {
    FUN_00edff4c(param_1,iVar2,8,1,1);
    iVar2 = param_1[2];
  }
  iVar1 = param_1[1];
  local_18 = (undefined4)in_d0;
  uStack_14 = (undefined4)((ulonglong)in_d0 >> 0x20);
  param_1[2] = iVar2 + 8;
  *(undefined4 *)(iVar1 + iVar2) = local_18;
  ((undefined4 *)(iVar1 + iVar2))[1] = uStack_14;
  return;
}

