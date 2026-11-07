// FUN_0166dec8 @ 0166dec8 size=556 calls_out=4 calls_in=2
// strings: 

void FUN_0166dec8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uStack_44;
  
  uVar15 = param_1[1];
  uVar12 = 0;
  if ((int)uVar15 < 0) {
LAB_0166dee4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,uVar15);
  }
  uVar19 = *param_1;
  uVar5 = param_1[2];
  piVar6 = (int *)param_1[4];
  if (uVar15 == 0) {
    uVar3 = 1;
    uVar20 = 0;
  }
  else {
    uVar12 = 1;
    uVar3 = FUN_01298504(uVar15,1);
    if (uVar3 == 0) goto LAB_0166dee4;
    uVar20 = uVar15;
  }
  FUN_01bed4e2(uVar3,uVar19,uVar15);
  uVar7 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar13 = param_2[3];
  uVar14 = param_2[4];
  uVar16 = param_2[5];
  puVar4 = (uint *)*piVar6;
  uVar11 = piVar6[1];
  uVar8 = uVar11 & uVar5;
  uVar17 = *(uint *)((int)puVar4 + uVar8) & 0x80808080;
  if (uVar17 == 0) {
    iVar18 = 4;
    do {
      uVar8 = uVar8 + iVar18;
      iVar18 = iVar18 + 4;
      uVar8 = uVar8 & uVar11;
      uVar17 = *(uint *)((int)puVar4 + uVar8) & 0x80808080;
    } while (uVar17 == 0);
  }
  uVar8 = uVar8 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                 (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) & uVar11;
  bVar1 = *(byte *)((int)puVar4 + uVar8);
  if (-1 < (char)bVar1) {
    uVar8 = *puVar4 & 0x80808080;
    uVar8 = LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
    bVar1 = *(byte *)((int)puVar4 + (uVar8 >> 3));
    uVar8 = uVar8 >> 3;
  }
  uVar17 = bVar1 & 1;
  bVar2 = (byte)(uVar5 >> 0x18);
  if ((piVar6[2] == 0) && (uVar17 = 0, (bVar1 & 1) != 0)) {
    FUN_016670b4(piVar6,uVar8,piVar6[4],piVar6[5]);
    puVar4 = (uint *)*piVar6;
    uVar11 = piVar6[1];
    uVar5 = uVar11 & uVar5;
    uVar8 = *(uint *)((int)puVar4 + uVar5) & 0x80808080;
    if (uVar8 == 0) {
      iVar18 = 4;
      do {
        uVar5 = uVar5 + iVar18;
        iVar18 = iVar18 + 4;
        uVar5 = uVar5 & uVar11;
        uVar8 = *(uint *)((int)puVar4 + uVar5) & 0x80808080;
      } while (uVar8 == 0);
    }
    uVar8 = uVar5 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar11;
    uVar5 = (uint)*(char *)((int)puVar4 + uVar8);
    if (-1 < (int)uVar5) {
      uVar5 = *puVar4 & 0x80808080;
      uVar8 = LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      uVar5 = (uint)*(byte *)((int)puVar4 + (uVar8 >> 3));
      uVar8 = uVar8 >> 3;
    }
    iVar18 = piVar6[2];
    *(byte *)((int)puVar4 + uVar8) = bVar2 >> 1;
    iVar18 = iVar18 - (uVar5 & 1);
  }
  else {
    iVar18 = piVar6[2] - uVar17;
    *(byte *)((int)puVar4 + uVar8) = bVar2 >> 1;
  }
  piVar6[2] = iVar18;
  *(byte *)((int)puVar4 + (uVar8 - 4 & uVar11) + 4) = bVar2 >> 1;
  piVar6[3] = piVar6[3] + 1;
  puVar4[uVar8 * -10 + -10] = uVar20;
  puVar4[uVar8 * -10 + -9] = uVar3;
  puVar4[uVar8 * -10 + -8] = uVar15;
  puVar4[uVar8 * -10 + -7] = uStack_44;
  puVar4[uVar8 * -10 + -6] = uVar7;
  puVar4[uVar8 * -10 + -5] = uVar9;
  puVar4[uVar8 * -10 + -4] = uVar10;
  puVar4[uVar8 * -10 + -3] = uVar13;
  puVar4[uVar8 * -10 + -2] = uVar14;
  puVar4[uVar8 * -10 + -1] = uVar16;
  return;
}

