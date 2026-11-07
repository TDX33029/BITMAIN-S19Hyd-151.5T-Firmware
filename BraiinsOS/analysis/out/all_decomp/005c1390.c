// FUN_005c1390 @ 005c1390 size=308 calls_out=3 calls_in=3
// strings: 

void FUN_005c1390(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x17] == '\0') {
    param_1 = param_1 + 1;
    iVar3 = *param_1;
    piVar2 = (int *)(iVar3 + 0x104);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar3 + 0x88);
    }
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  else {
    if ((char)param_1[0x17] != '\x03') {
      return;
    }
    if ((char)param_1[0x16] == '\x03') {
      cVar1 = (char)param_1[0x15];
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)((int)param_1 + 0x31);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0xd);
        if (param_1[0x11] != 0) {
          (**(code **)(param_1[0x11] + 0xc))(param_1[0x12]);
        }
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
    }
    param_1 = param_1 + 3;
    iVar3 = *param_1;
    piVar2 = (int *)(iVar3 + 0x104);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar3 + 0x88);
    }
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac2e8(*param_1);
    return;
  }
  return;
}

