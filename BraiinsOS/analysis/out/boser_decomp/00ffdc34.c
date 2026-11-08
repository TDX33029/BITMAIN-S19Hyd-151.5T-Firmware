// FUN_00ffdc34 @ 00ffdc34 size=92 calls_out=4 calls_in=4
// strings: 

void FUN_00ffdc34(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_006764c0(*param_1);
  FUN_014a8744(param_1[1],param_1[2]);
  FUN_014a8798(param_1[3]);
  piVar3 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[5]);
  }
  piVar3 = (int *)param_1[6];
  FUN_0068fb7c();
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_0068d308(piVar3 + 8);
  if (piVar3[0x10] != 0) {
    (**(code **)(piVar3[0x10] + 0xc))(piVar3[0x11]);
  }
  if (piVar3 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = piVar3 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

