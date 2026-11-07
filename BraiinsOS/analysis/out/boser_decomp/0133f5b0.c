// FUN_0133f5b0 @ 0133f5b0 size=240 calls_out=8 calls_in=0
// strings: 

void FUN_0133f5b0(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0xc0);
  puVar6 = *(undefined4 **)(param_1 + 0xc4);
  pcVar3 = (code *)*puVar6;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_01be4678(uVar5);
  }
  FUN_0133b004(param_1 + 0xcc);
  if (*(int *)(param_1 + 0xb0) != 2) {
    FUN_0134aee0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),4,4,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
    FUN_0134aee0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),4,4);
    FUN_00b0c000(param_1 + 0x8c);
    FUN_016c9114(param_1);
    FUN_01334b38(param_1 + 0x30);
    FUN_0134aee0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),4,4);
    FUN_0134bd64(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0x20) == 1) {
      piVar2 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
        return;
      }
      return;
    }
  }
  return;
}

