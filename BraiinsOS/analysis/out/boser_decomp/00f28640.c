// FUN_00f28640 @ 00f28640 size=280 calls_out=4 calls_in=1
// strings: 

void FUN_00f28640(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x90)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x8c);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421350(*(undefined4 *)(param_1 + 0x8c));
      }
    }
    if (*(char *)(param_1 + 0x88) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x78) + 0x10))
                (param_1 + 0x84,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    }
    goto LAB_00f28760;
  default:
    return;
  case 3:
    piVar2 = *(int **)(param_1 + 0x98);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421350(*(undefined4 *)(param_1 + 0x98));
      }
    }
    break;
  case 4:
    FUN_00f28824(param_1 + 0x98);
    break;
  case 5:
    FUN_00f28878(param_1 + 0x98);
  }
  *(undefined1 *)(param_1 + 0x93) = 0;
  bVar4 = *(char *)(param_1 + 0x92) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x88);
  }
  if (bVar4 && cVar1 != '\x02') {
    (**(code **)(*(int *)(param_1 + 0x78) + 0x10))
              (param_1 + 0x84,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x91) == '\0') {
    return;
  }
LAB_00f28760:
  FUN_00d33eb4(param_1 + 0x20);
  return;
}

