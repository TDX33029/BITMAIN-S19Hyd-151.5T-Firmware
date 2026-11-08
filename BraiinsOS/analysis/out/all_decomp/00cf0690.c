// FUN_00cf0690 @ 00cf0690 size=176 calls_out=4 calls_in=1
// strings: 

void FUN_00cf0690(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x10);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_00cf0744;
  default:
    return;
  case 3:
    FUN_00a07b4c(param_1 + 0x20);
    break;
  case 4:
    if (*(char *)(param_1 + 0x54) == '\x03') {
      FUN_00b216bc(param_1 + 0x24);
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 0x20);
    break;
  case 6:
    FUN_00cf4290(param_1 + 0x20);
  }
  puVar4 = (undefined4 *)(param_1 + 0x14);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00cf0744:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*puVar4);
    return;
  }
  return;
}

