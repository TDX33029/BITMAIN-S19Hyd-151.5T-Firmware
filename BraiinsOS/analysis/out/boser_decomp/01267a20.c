// FUN_01267a20 @ 01267a20 size=84 calls_out=3 calls_in=2
// strings: 

void FUN_01267a20(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint uVar3;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 auStack_88 [128];
  
  puVar4 = auStack_88 + 0x80;
  iVar1 = FUN_01ab6a58();
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_01ac25d8(param_1 + 0x60);
  bVar5 = *piVar2 == 0;
  if (bVar5) {
    if (piVar2[3] != 0) {
      piVar2[3] = piVar2[3] + -1;
    }
    *piVar2 = 0;
    return;
  }
  piVar2 = (int *)FUN_01306fc8(&DAT_01c25374);
  if (bVar5) {
    puVar4 = (undefined1 *)(unaff_r11 + param_1 * 0x40000);
  }
  *(undefined4 *)(puVar4 + -4) = 0x1267a70;
  *(undefined4 *)(puVar4 + -8) = unaff_r10;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r9;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r8;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r7;
  *(undefined4 *)(puVar4 + -0x18) = unaff_r6;
  *(undefined4 *)(puVar4 + -0x1c) = unaff_r5;
  *(int *)(puVar4 + -0x20) = param_1;
  *(undefined4 *)(puVar4 + -0x180) = extraout_r2;
  *(undefined4 *)(puVar4 + -0x17c) = extraout_r3;
  iVar1 = FUN_01ab6a58(piVar2,puVar4 + -0x180);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01267b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar4 + -4))();
    return;
  }
  if (*piVar2 == 0) {
    bVar5 = (bool)hasExclusiveAccess(piVar2);
    if (bVar5) {
      *piVar2 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_01267abc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar2);
LAB_01267abc:
  uVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar3 = FUN_0197ac0c();
    uVar3 = uVar3 ^ 1;
  }
  if ((char)piVar2[2] == '\0') {
    FUN_01ab93e4(puVar4 + -0x178,piVar2 + 4,extraout_r2,extraout_r3);
    if (*(int *)(puVar4 + -0x178) != 2) {
      FUN_01ab1fe0(puVar4 + -0x178);
    }
  }
  else if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar1 = FUN_0197ac0c(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74(&DAT_00531614,0xd,&DAT_01c25384);
  }
  FUN_01ac2a34(piVar2,uVar3);
  return;
}

