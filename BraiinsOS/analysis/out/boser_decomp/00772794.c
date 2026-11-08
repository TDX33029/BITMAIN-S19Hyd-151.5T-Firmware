// FUN_00772794 @ 00772794 size=216 calls_out=7 calls_in=1
// strings: 

void FUN_00772794(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x6ee) == '\0') {
    FUN_00772924(param_1);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    return;
  }
  if (*(char *)(param_1 + 0x6ee) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x6e5) == '\x03') {
    FUN_00772a08(param_1 + 0x370);
    FUN_007921ac(param_1 + 0x440);
    FUN_01139b38(*(undefined4 *)(param_1 + 0x438),*(undefined4 *)(param_1 + 0x43c));
    piVar2 = *(int **)(param_1 + 0x4f4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0076db24(*(undefined4 *)(param_1 + 0x4f4));
    }
    FUN_00772c10(param_1 + 0x44c);
    *(undefined1 *)(param_1 + 0x6e4) = 0;
  }
  else if (*(char *)(param_1 + 0x6e5) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6d8),*(undefined4 *)(param_1 + 0x6dc));
  }
  *(undefined1 *)(param_1 + 0x6ef) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x360),*(undefined4 *)(param_1 + 0x364));
  FUN_00772924(param_1 + 0x1b8);
  return;
}

