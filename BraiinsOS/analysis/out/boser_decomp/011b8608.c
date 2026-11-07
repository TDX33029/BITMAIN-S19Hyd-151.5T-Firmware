// FUN_011b8608 @ 011b8608 size=188 calls_out=2 calls_in=1
// strings: 

void FUN_011b8608(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_011b86c0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x90) == '\x03') {
      FUN_01192a14(param_1 + 0x38);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x90) == '\x03') {
      FUN_01192a14(param_1 + 0x38);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x90) == '\x03') {
      FUN_01192a14(param_1 + 0x38);
    }
  }
  puVar4 = (undefined4 *)(param_1 + 0xc);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_011b86c0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011827d4(*puVar4);
    return;
  }
  return;
}

