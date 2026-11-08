// FUN_00dde308 @ 00dde308 size=224 calls_out=6 calls_in=2
// strings: 

void FUN_00dde308(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  FUN_00ef6fa0();
  if (*param_1 == 0) {
    FUN_00e469ec(param_1[1]);
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[1]);
    }
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa8be8(param_1[2]);
    }
  }
  FUN_005c728c(param_1 + 3);
  if ((char)param_1[0x17] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x16];
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0x35);
  }
  if (!bVar4 || cVar1 != '\x04') {
    return;
  }
  FUN_0163bdc0(param_1 + 0xe);
  if (param_1[0x12] != 0) {
    (**(code **)(param_1[0x12] + 0xc))(param_1[0x13]);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

