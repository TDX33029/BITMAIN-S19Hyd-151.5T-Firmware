// FUN_007a910c @ 007a910c size=248 calls_out=3 calls_in=4
// strings: 

void FUN_007a910c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r11;
  int unaff_lr;
  int aiStack_210 [128];
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x30));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x38));
  }
  if ((1 < *(int *)(param_1 + 0x78) - 2U) && (*(int *)(param_1 + 0x78) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  piVar2 = aiStack_210 + 0x82;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
    piVar2 = aiStack_210 + 0x83;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x88) * 0x20;
    unaff_lr = 8;
  }
  *piVar2 = iVar3;
  iVar3 = 0;
  if (unaff_lr != 0) {
    iVar3 = unaff_r11;
  }
  if (unaff_lr != 0 && iVar3 != 0) {
    thunk_FUN_01be4678(uVar4);
    return;
  }
  return;
}

