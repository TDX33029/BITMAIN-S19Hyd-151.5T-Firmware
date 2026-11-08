// FUN_0193efb0 @ 0193efb0 size=244 calls_out=5 calls_in=9
// strings: 

void FUN_0193efb0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x21)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(*(undefined4 *)(param_1 + 0x1c));
      return;
    }
    return;
  default:
    goto switchD_0193efcc_caseD_1;
  case 3:
    break;
  case 4:
    if (*(char *)(param_1 + 0x2c) == '\x04') {
      FUN_005f1388(param_1 + 0x30);
    }
    FUN_005fb2fc(param_1 + 0x180);
    break;
  case 5:
    FUN_005efecc(param_1 + 0x28);
    piVar2 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38f34(*(undefined4 *)(param_1 + 0x24));
    }
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    piVar2 = *(int **)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(*(undefined4 *)(param_1 + 0x14));
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
switchD_0193efcc_caseD_1:
  return;
}

