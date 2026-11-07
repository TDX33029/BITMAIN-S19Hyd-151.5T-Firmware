// FUN_00ed010c @ 00ed010c size=388 calls_out=6 calls_in=2
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_00ed010c(byte param_1,undefined1 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte local_3e;
  undefined1 local_3d;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 uStack_19;
  
  local_3e = param_1 & 1;
  local_34 = 0;
  local_3c = 0;
  local_24 = 0;
  local_28 = &DAT_60000020;
  local_30 = &local_3c;
  local_2c = &DAT_01868210;
  local_38 = 1;
  local_3d = param_2;
  iVar3 = FUN_0093efbc(&local_3e,&local_30);
  uVar4 = local_34;
  uVar2 = local_38;
  iVar1 = local_3c;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                 &DAT_01868228,&DAT_018af130);
  }
  iVar3 = param_3[2];
  if (*param_3 == iVar3) {
    FUN_00edff4c(param_3,iVar3,1,1,1);
    iVar3 = param_3[2];
  }
  *(undefined1 *)(param_3[1] + iVar3) = 0x22;
  param_3[2] = iVar3 + 1;
  local_30 = (int *)CONCAT31(local_30._1_3_,4);
  FUN_00e57bb4(&local_30,param_3,uVar2,uVar4);
  if ((char)local_30 == '\x04') {
    iVar3 = param_3[2];
    if (*param_3 == iVar3) {
      FUN_00edff4c(param_3,iVar3,1,1,1);
      iVar3 = param_3[2];
    }
    *(undefined1 *)(param_3[1] + iVar3) = 0x22;
    param_3[2] = iVar3 + 1;
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0157c4a0(local_30,local_2c);
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  return uVar4;
}

