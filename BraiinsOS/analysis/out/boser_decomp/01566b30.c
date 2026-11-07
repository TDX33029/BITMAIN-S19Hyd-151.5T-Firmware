// FUN_01566b30 @ 01566b30 size=284 calls_out=5 calls_in=0
// strings: 

void FUN_01566b30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_01577618(param_1,param_2,param_5);
  if (iVar1 == 0) {
    uVar3 = FUN_01576990(param_1 + 0x28,param_2,param_3,param_4,param_5);
    FUN_014ff278(&local_34,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    local_20 = local_34;
    local_1c = iStack_30 + iStack_2c * 4;
    local_28 = iStack_30;
    local_24 = iStack_30;
    piVar2 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
  }
  else {
    uVar3 = FUN_01576990(param_1 + 0x14,param_2,param_3,param_4,param_5);
    FUN_014ff278(&local_40,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    local_20 = local_40;
    local_1c = iStack_3c + iStack_38 * 4;
    local_28 = iStack_3c;
    local_24 = iStack_3c;
    piVar2 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
  }
  *piVar2 = local_28;
  piVar2[1] = local_24;
  piVar2[2] = local_20;
  piVar2[3] = local_1c;
  return;
}

