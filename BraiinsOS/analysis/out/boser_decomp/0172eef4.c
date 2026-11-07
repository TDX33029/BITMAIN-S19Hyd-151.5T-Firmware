// FUN_0172eef4 @ 0172eef4 size=164 calls_out=3 calls_in=7
// strings: 

void FUN_0172eef4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 4) == '\x03') {
    return;
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[1]);
  }
  FUN_01423570(param_1 + 2);
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_0141eb2c(piVar3 + 2);
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
  if (piVar3[2] != 3 || piVar3[3] != 0) {
    if (piVar3[9] != 0) {
      thunk_FUN_01be4678(piVar3[8]);
    }
    iVar4 = piVar3[0xb];
    FUN_01410ec8(iVar4,piVar3[0xc]);
    FUN_0134aee0(piVar3[10],iVar4,4,0x34);
    FUN_008e0ddc(piVar3 + 0xd);
  }
  if (piVar3[0x14] != 0) {
    (**(code **)(piVar3[0x14] + 0xc))(piVar3[0x15]);
  }
  if (piVar3[0x17] != 0) {
    (**(code **)(piVar3[0x17] + 0xc))(piVar3[0x18]);
  }
  if (piVar3 != (int *)&DAT_ffffffff) {
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
  }
  return;
}

