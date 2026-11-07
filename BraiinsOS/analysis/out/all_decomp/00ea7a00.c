// FUN_00ea7a00 @ 00ea7a00 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_00ea7a00(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  int iStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 uStack_19;
  undefined4 local_18;
  
  FUN_00f09308(param_1,param_2,param_2,0);
  if (*param_3 == 0) {
    iVar3 = param_1[2];
    if (*param_1 == iVar3) {
      local_18 = 1;
      FUN_00edff4c(param_1,iVar3,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0;
    param_1[2] = iVar3 + 1;
    return;
  }
  if (*param_3 == 1) {
    iVar3 = param_1[2];
    if (*param_1 == iVar3) {
      local_18 = 1;
      FUN_00edff4c(param_1,iVar3,1,1);
      iVar3 = param_1[2];
    }
    iVar4 = param_1[1];
    uVar5 = 1;
  }
  else {
    iVar3 = param_1[2];
    if (*param_1 == iVar3) {
      local_18 = 1;
      FUN_00edff4c(param_1,iVar3,1,1);
      iVar3 = param_1[2];
    }
    iVar4 = param_1[1];
    uVar5 = 2;
  }
  *(undefined1 *)(iVar4 + iVar3) = uVar5;
  param_1[2] = iVar3 + 1;
  uStack_20 = 0;
  uStack_24 = 1;
  iStack_28 = 0;
  uVar6 = FUN_00efec9c(param_3 + 1,&iStack_28,&DAT_0187b3f4);
  uVar2 = uStack_20;
  uVar1 = uStack_24;
  iVar3 = iStack_28;
  if ((int)uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                 &DAT_0187b40c,&DAT_018af130);
  }
  FUN_00f09308(param_1,(int)((ulonglong)uVar6 >> 0x20),uStack_20,0);
  iVar4 = param_1[2];
  if ((uint)(*param_1 - iVar4) < uVar2) {
    FUN_00edff4c(param_1,iVar4,uVar2,1,1);
    iVar4 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar4,uVar1,uVar2);
  param_1[2] = iVar4 + uVar2;
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
  return;
}

