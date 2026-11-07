// FUN_01651bb0 @ 01651bb0 size=268 calls_out=3 calls_in=0
// strings: 

void FUN_01651bb0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if ((char)param_1[0x13] == '\0') {
    iVar2 = *param_1;
    piVar3 = (int *)(iVar2 + 0xa0);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
  }
  else {
    if ((char)param_1[0x13] != '\x03') {
      return;
    }
    cVar1 = (char)param_1[0x12];
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)((int)param_1 + 0x25);
    }
    if (bVar5 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 10);
      if (param_1[0xe] != 0) {
        (**(code **)(param_1[0xe] + 0xc))(param_1[0xf]);
      }
      *(undefined1 *)(param_1 + 9) = 0;
    }
    param_1 = param_1 + 2;
    iVar2 = *param_1;
    piVar3 = (int *)(iVar2 + 0xa0);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*param_1);
    return;
  }
  return;
}

