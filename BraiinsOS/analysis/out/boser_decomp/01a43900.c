// FUN_01a43900 @ 01a43900 size=404 calls_out=5 calls_in=0
// strings: 

void FUN_01a43900(char *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_260 [112];
  int aiStack_1f0 [26];
  undefined1 *puStack_188;
  int *piStack_184;
  undefined1 auStack_180 [88];
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int aiStack_f8 [2];
  undefined1 auStack_f0 [20];
  undefined1 auStack_dc [76];
  undefined1 *puStack_90;
  int *piStack_8c;
  undefined1 auStack_88 [104];
  
  uVar5 = 6;
  if (1 < *(uint *)(param_2 + 0x54)) {
    uVar5 = *(uint *)(param_2 + 0x54) - 2;
  }
  if (uVar5 < 5) {
    return;
  }
  if (uVar5 != 5) {
    uVar9 = FUN_01a61a00(param_2);
    iVar2 = (int)((ulonglong)uVar9 >> 0x20);
    piVar4 = (int *)((uint)aiStack_f8 | 4);
    uVar10 = (**(code **)(iVar2 + 0xc))((int)uVar9);
    piVar6 = (int *)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 == 0) {
      FUN_018f2d80((int)uVar9,iVar2);
      return;
    }
    if (param_1[1] == '\x01') {
      iVar2 = *piVar6;
    }
    else {
      FUN_01bed4e2(auStack_260,piVar6,0x70);
      *piVar6 = 0;
      FUN_01a55f68(aiStack_f8,auStack_260);
      aiStack_1f0[0] = aiStack_f8[0];
      if (aiStack_f8[0] == 4) {
        FUN_01bed4e2((uint)auStack_88 | 4,auStack_f0,0x60);
        aiStack_1f0[0] = 2;
        puVar3 = auStack_260;
        piVar7 = piVar6;
      }
      else {
        FUN_01bed4e2(auStack_88,piVar4,100);
        puVar3 = puStack_90;
        piVar7 = piStack_8c;
      }
      FUN_01bed4e2((uint)aiStack_1f0 | 4,auStack_88,100);
      puStack_188 = puVar3;
      piStack_184 = piVar7;
      FUN_01a5665c(aiStack_f8,aiStack_1f0);
      iStack_110 = *piVar4;
      iStack_10c = piVar4[1];
      iStack_108 = piVar4[2];
      iStack_104 = piVar4[3];
      iStack_100 = piVar4[4];
      iStack_fc = piVar4[5];
      iVar2 = 3;
      if (aiStack_f8[0] != 4) {
        FUN_01bed4e2(auStack_180,auStack_dc,0x54);
        iVar2 = aiStack_f8[0];
      }
      iStack_128 = iStack_110;
      iStack_124 = iStack_10c;
      iStack_120 = iStack_108;
      iStack_11c = iStack_104;
      iStack_118 = iStack_100;
      iStack_114 = iStack_fc;
      param_1[1] = iVar2 == 1;
      FUN_01a43344(piVar6);
      *piVar6 = iVar2;
      piVar6[1] = iStack_128;
      piVar6[2] = iStack_124;
      piVar6[3] = iStack_120;
      piVar6[4] = iStack_11c;
      piVar6[5] = iStack_118;
      piVar6[6] = iStack_114;
      FUN_01bed4e2(piVar6 + 7,auStack_180,0x54);
    }
                    /* WARNING: Could not recover jumptable at 0x01a43d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_01a43d9c + *(int *)(&LAB_01a43d9c + iVar2 * 4)))();
    return;
  }
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  puVar1 = (undefined4 *)FUN_01a5592c(uVar8,uVar5);
  piVar4 = (int *)*puVar1;
  while (piVar6 = piVar4, piVar6 != (int *)puVar1[1]) {
    iVar2 = *piVar6;
    *puVar1 = piVar6 + 0x1c;
    piVar4 = piVar6 + 0x1c;
    if (iVar2 == 1) {
      iVar2 = 6;
      if (1 < (uint)piVar6[0x17]) {
        iVar2 = piVar6[0x17] - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x01a4397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01a43980 + *(int *)(&DAT_01a43980 + iVar2 * 4)))(piVar6 + 2);
      return;
    }
  }
  FUN_018f2d80(puVar1,&DAT_01d2c38c);
  if ((*param_1 == '\0') || (uVar5 < 2)) {
    if (-1 < *(int *)(param_2 + 0x18)) {
      FUN_0134bd64(*(int *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
    }
    *(undefined4 *)(param_2 + 0x18) = 0x80000000;
    uVar8 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_01a5592c(uVar8,uVar5);
    piVar4 = (int *)*puVar1;
    while (piVar6 = piVar4, piVar6 != (int *)puVar1[1]) {
      iVar2 = *piVar6;
      *puVar1 = piVar6 + 0x1c;
      piVar4 = piVar6 + 0x1c;
      if (iVar2 == 1) {
        iVar2 = 6;
        if (1 < (uint)piVar6[0x17]) {
          iVar2 = piVar6[0x17] - 2;
        }
                    /* WARNING: Could not recover jumptable at 0x01a43a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01a43a80 + *(int *)(&DAT_01a43a80 + iVar2 * 4)))(piVar6 + 2);
        return;
      }
    }
    FUN_018f2d80(puVar1,&DAT_01d2c38c);
    puVar3 = (undefined1 *)thunk_FUN_01be5118(1);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,1);
    }
    iVar2 = *(int *)(param_2 + 0x18);
    *puVar3 = 10;
    if (-1 < iVar2) {
      FUN_0134bd64(iVar2,*(undefined4 *)(param_2 + 0x1c));
    }
    uVar8 = 1;
    *(undefined4 *)(param_2 + 0x18) = 1;
    *(undefined1 **)(param_2 + 0x1c) = puVar3;
  }
  *(char *)(param_2 + 0x3c) = (char)uVar8;
  *(undefined4 *)(param_2 + 0x20) = uVar8;
  return;
}

