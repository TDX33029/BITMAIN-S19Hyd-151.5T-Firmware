// FUN_00ad4780 @ 00ad4780 size=188 calls_out=4 calls_in=4
// strings: 

void FUN_00ad4780(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    if (*(char *)(param_1 + 0x28) == '\x04') {
      if (*(char *)(param_1 + 0x3c) == '\x03') {
        uVar5 = *(undefined4 *)(param_1 + 0x34);
        puVar6 = *(undefined4 **)(param_1 + 0x38);
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
      }
      FUN_00c822ec(*(undefined4 *)(param_1 + 0x24));
    }
    else if ((*(char *)(param_1 + 0x28) == '\x03') && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1);
    }
    piVar2 = *(int **)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f31e8(*(undefined4 *)(param_1 + 0x48));
      return;
    }
  }
  return;
}

