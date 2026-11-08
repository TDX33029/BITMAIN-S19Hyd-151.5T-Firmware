// FUN_008836c4 @ 008836c4 size=632 calls_out=2 calls_in=0
// strings: 

void FUN_008836c4(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int unaff_r4;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint local_4c;
  uint local_28;
  
  iVar7 = *param_2;
  piVar19 = param_1 + 4;
  iVar8 = param_2[2];
  puVar9 = (uint *)param_2[3];
  puVar21 = (uint *)param_2[1];
  uVar10 = (int)puVar9 - (int)puVar21;
  uVar11 = (uVar10 >> 3) + 1 >> 1;
  if (param_1[3] == 0) {
    uVar11 = uVar10 >> 3;
  }
  if ((uint)param_1[2] < uVar11) {
    FUN_00883960(param_1,uVar11,piVar19);
  }
joined_r0x0088372c:
  if (puVar21 == puVar9) {
    if (iVar8 == 0) {
      return;
    }
    if (iVar7 == 0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar11 = *(byte *)(iVar7 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar24 = uVar10 - 0x10, uVar10 == 0)) {
      iVar24 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar10 = (uint)(*(byte *)(iVar7 + -3) >> 5);
    iVar20 = *(int *)(iVar8 + 8) + 0x10;
    iVar18 = iVar24 * uVar11 + iVar24 + -4;
    iVar24 = iVar20 + iVar18;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar10 = *(uint *)(iVar24 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar24 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar24 - iVar7) < uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar24 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar20 + iVar18) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar4 = *(byte *)(iVar8 + 0x14);
    uVar10 = 1 << uVar11;
    *(undefined1 *)(iVar7 + -3) = 0xff;
    *(undefined2 *)(iVar7 + -2) = 0;
    do {
      uVar15 = *(uint *)(iVar8 + 0x10);
      uVar17 = *(uint *)(iVar8 + 0xc) | uVar15;
      if ((uVar10 & uVar17) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar15 == 0) || (uVar17 + uVar10 == (2 << (bVar4 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&local_28,iVar8,uVar11);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar16 = *puVar13;
        FUN_016d6ac4(local_28,unaff_r4);
        *puVar13 = uVar16;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar8 + 0x10) = uVar10 + uVar15;
        return;
      }
      puVar21 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar21);
        uVar17 = *puVar21;
        if (uVar15 != uVar17) goto LAB_016d409c;
        bVar6 = (bool)hasExclusiveAccess(puVar21);
      } while (!bVar6);
      *puVar21 = uVar10 + uVar15;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar15 == uVar17) {
        return;
      }
    } while( true );
  }
  local_28 = *puVar21;
  uVar10 = puVar21[1];
  uVar11 = FUN_00834998(*piVar19,param_1[5],param_1[6],param_1[7],local_28);
  if (param_1[2] == 0) {
    FUN_00883960(param_1,1,piVar19);
  }
  puVar21 = puVar21 + 2;
  puVar12 = (uint *)*param_1;
  uVar15 = param_1[1];
  iVar24 = 0;
  bVar6 = false;
  uVar17 = uVar11;
  do {
    uVar17 = uVar15 & uVar17;
    uVar23 = *(uint *)((int)puVar12 + uVar17);
    uVar14 = uVar23 ^ (uVar11 >> 0x19) * 0x1010101;
    uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
    while (uVar14 != 0) {
      uVar22 = uVar14 >> 8;
      uVar1 = uVar14 >> 0x10;
      uVar2 = uVar14 >> 0x18;
      uVar3 = uVar14 << 0x18;
      uVar14 = uVar14 - 1 & uVar14;
      uVar22 = uVar17 + ((uint)LZCOUNT(uVar3 | (uVar22 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2
                                      ) >> 3) & uVar15;
      if (local_28 == puVar12[uVar22 * -2 + -2]) goto LAB_00883858;
    }
    uVar14 = uVar23 & 0x80808080;
    uVar22 = local_4c;
    if (bVar6) {
LAB_00883820:
      if ((uVar14 & uVar23 << 1) != 0) break;
      bVar6 = true;
      local_4c = uVar22;
    }
    else {
      if (uVar14 != 0) {
        uVar22 = uVar17 + ((uint)LZCOUNT((uVar23 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                 uVar15;
        goto LAB_00883820;
      }
      bVar6 = false;
    }
    iVar24 = iVar24 + 4;
    uVar17 = iVar24 + uVar17;
  } while( true );
  uVar17 = (uint)*(char *)((int)puVar12 + uVar22);
  if (-1 < (int)uVar17) {
    uVar17 = *puVar12 & 0x80808080;
    uVar22 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
    uVar17 = (uint)*(byte *)((int)puVar12 + (uVar22 >> 3));
    uVar22 = uVar22 >> 3;
  }
  bVar4 = (byte)(uVar11 >> 0x19);
  *(byte *)((int)puVar12 + uVar22) = bVar4;
  param_1[2] = param_1[2] - (uVar17 & 1);
  param_1[3] = param_1[3] + 1;
  *(byte *)((int)puVar12 + (uVar15 & uVar22 - 4) + 4) = bVar4;
  puVar12[uVar22 * -2 + -2] = local_28;
LAB_00883858:
  puVar12[uVar22 * -2 + -1] = uVar10;
  goto joined_r0x0088372c;
}

