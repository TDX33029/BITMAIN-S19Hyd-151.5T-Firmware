// FUN_0134ec5c @ 0134ec5c size=448 calls_out=5 calls_in=2
// strings: 

void FUN_0134ec5c(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint local_54;
  uint uStack_44;
  
  uVar14 = param_1[1];
  uVar2 = 0;
  if ((int)uVar14 < 0) {
LAB_0134ec7c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,uVar14);
  }
  uVar17 = param_1[2];
  puVar18 = (undefined4 *)param_1[4];
  uVar2 = *param_1;
  uVar12 = param_1[3];
  if (uVar14 == 0) {
    uVar3 = 1;
    local_54 = 0;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(uVar14);
    if (uVar3 == 0) {
      uVar2 = 1;
      goto LAB_0134ec7c;
    }
    local_54 = uVar14;
  }
  FUN_016dd1aa(uVar3,uVar2,uVar14);
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar11 = param_2[3];
  uVar13 = param_2[4];
  uVar15 = param_2[5];
  puVar16 = (uint *)*puVar18;
  uVar19 = puVar18[1];
  uVar4 = uVar19 & uVar17;
  uVar9 = *(uint *)((int)puVar16 + uVar4) & 0x80808080;
  if (uVar9 == 0) {
    iVar6 = 4;
    do {
      uVar4 = uVar4 + iVar6;
      iVar6 = iVar6 + 4;
      uVar4 = uVar4 & uVar19;
      uVar9 = *(uint *)((int)puVar16 + uVar4) & 0x80808080;
    } while (uVar9 == 0);
  }
  uVar4 = uVar4 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                 (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar19;
  bVar1 = *(byte *)((int)puVar16 + uVar4);
  if ((char)bVar1 < '\0') {
    iVar6 = puVar18[2];
  }
  else {
    uVar4 = *puVar16 & 0x80808080;
    uVar4 = LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
    bVar1 = *(byte *)((int)puVar16 + (uVar4 >> 3));
    uVar4 = uVar4 >> 3;
    iVar6 = puVar18[2];
  }
  uVar9 = bVar1 & 1;
  if (((bVar1 & 1) != 0) && (iVar6 == 0)) {
    FUN_01342170(puVar18,puVar18 + 4);
    puVar16 = (uint *)*puVar18;
    uVar19 = puVar18[1];
    uVar4 = FUN_0134eea4(puVar16,uVar19,uVar17,uVar12);
    iVar6 = puVar18[2];
    uVar9 = *(byte *)((int)puVar16 + uVar4) & 1;
  }
  iVar10 = puVar18[3];
  bVar1 = (byte)(uVar17 >> 0x19);
  *(byte *)((int)puVar16 + uVar4) = bVar1;
  *(byte *)((int)puVar16 + (uVar4 - 4 & uVar19) + 4) = bVar1;
  puVar18[2] = iVar6 - uVar9;
  puVar18[3] = iVar10 + 1;
  puVar16[uVar4 * -10 + -10] = local_54;
  puVar16[uVar4 * -10 + -9] = uVar3;
  puVar16[uVar4 * -10 + -8] = uVar14;
  puVar16[uVar4 * -10 + -7] = uStack_44;
  puVar16[uVar4 * -10 + -6] = uVar5;
  puVar16[uVar4 * -10 + -5] = uVar7;
  puVar16[uVar4 * -10 + -4] = uVar8;
  puVar16[uVar4 * -10 + -3] = uVar11;
  puVar16[uVar4 * -10 + -2] = uVar13;
  puVar16[uVar4 * -10 + -1] = uVar15;
  return;
}

