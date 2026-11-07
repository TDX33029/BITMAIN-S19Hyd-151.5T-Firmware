// FUN_00aa9648 @ 00aa9648 size=248 calls_out=6 calls_in=0
// strings: 

void FUN_00aa9648(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar1 = *(char *)(param_1 + 0x234);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if ((*(char *)(param_1 + 0x244) == '\x03') && (*(int *)(param_1 + 0x23c) != 0)) {
        FUN_00aa190c(*(int *)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x240),1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00a9b4b4(param_1 + 0x238);
      FUN_00aa13c0(*(undefined4 *)(param_1 + 0x224));
    }
    puVar5 = (undefined4 *)(param_1 + 0x220);
    FUN_01663cc4(*puVar5);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar5);
    }
    *(undefined1 *)(param_1 + 0x232) = 0;
    FUN_00b50e5c(param_1);
    *(undefined1 *)(param_1 + 0x233) = 0;
    return;
  }
  FUN_00b50e5c(param_1 + 0x110);
  puVar5 = (undefined4 *)(param_1 + 0x22c);
  FUN_01663cc4(*puVar5);
  piVar3 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar5);
    return;
  }
  return;
}

