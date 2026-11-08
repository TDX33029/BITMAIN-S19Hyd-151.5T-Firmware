// FUN_00d4a514 @ 00d4a514 size=196 calls_out=4 calls_in=0
// strings: 

void FUN_00d4a514(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    goto LAB_00d4a5d4;
  default:
    return;
  case 3:
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x5ec);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x5e4);
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_00d4b978(param_1 + 0x28);
    }
    break;
  case 5:
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar5 = *(int *)(param_1 + 0x2c) - (uint)(uVar3 < 3);
    bVar6 = 1 < uVar3 - 3;
    if (uVar5 != 0 || uVar5 < bVar6) {
      FUN_005f6588((uint *)(param_1 + 0x28),uVar5 - !bVar6);
    }
  }
  FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
LAB_00d4a5d4:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}

