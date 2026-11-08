// FUN_00f47aec @ 00f47aec size=652 calls_out=3 calls_in=2
// strings: 

void FUN_00f47aec(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r4;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint local_80;
  uint uStack_44;
  undefined4 uStack_28;
  
  uVar15 = param_3[1];
  uVar18 = param_3[2];
  uVar4 = FUN_006a526c(param_2[4],param_2[5],param_2[6],param_2[7],uVar15,uVar18);
  if (param_2[2] == 0) {
    FUN_00f39e60(param_2,param_2 + 4);
  }
  puVar10 = (uint *)*param_2;
  uVar11 = param_2[1];
  bVar3 = false;
  iVar22 = 0;
  uVar19 = uVar4;
  do {
    uVar19 = uVar11 & uVar19;
    uVar5 = *(uint *)((int)puVar10 + uVar19);
    uVar6 = uVar5 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = uVar19 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar11;
      if ((uVar18 == puVar10[uVar7 * -10 + -8]) &&
         (iVar8 = thunk_FUN_016dd50a(uVar15,puVar10[uVar7 * -10 + -9]), iVar8 == 0)) {
        uVar4 = puVar10[uVar7 * -10 + -5];
        uVar18 = puVar10[uVar7 * -10 + -4];
        uVar19 = puVar10[uVar7 * -10 + -3];
        uVar11 = puVar10[uVar7 * -10 + -2];
        uVar6 = puVar10[uVar7 * -10 + -1];
        *param_1 = puVar10[uVar7 * -10 + -6];
        param_1[1] = uVar4;
        param_1[2] = uVar18;
        param_1[3] = uVar19;
        param_1[4] = uVar11;
        param_1[5] = uVar6;
        uVar4 = param_4[1];
        uVar18 = param_4[2];
        uVar19 = param_4[3];
        uVar11 = param_4[4];
        uVar6 = param_4[5];
        puVar10[uVar7 * -10 + -6] = *param_4;
        puVar10[uVar7 * -10 + -5] = uVar4;
        puVar10[uVar7 * -10 + -4] = uVar18;
        puVar10[uVar7 * -10 + -3] = uVar19;
        puVar10[uVar7 * -10 + -2] = uVar11;
        puVar10[uVar7 * -10 + -1] = uVar6;
        if (*param_3 == 0) {
          return;
        }
        if (uVar15 == 0) {
          return;
        }
        iVar22 = FUN_016d3bc8();
        uVar4 = *(byte *)(uVar15 - 3) & 0x1f;
        if (((*(byte *)(iVar22 + 0x14) & 0x1f) != 0) ||
           (uVar18 = *(uint *)(iVar22 + 0x14) & 0xfffff000, iVar8 = uVar18 - 0x10, uVar18 == 0)) {
          iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar22 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar18 = (uint)(*(byte *)(uVar15 - 3) >> 5);
        iVar21 = *(int *)(iVar22 + 8) + 0x10;
        iVar17 = iVar8 * uVar4 + iVar8 + -4;
        iVar8 = iVar21 + iVar17;
        if (4 < uVar18) {
          if (uVar18 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar18 = *(uint *)(iVar8 + -4);
          if (uVar18 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if (iVar8 - uVar15 < uVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 - uVar18) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar21 + iVar17) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar22 + 0x14);
        uVar18 = 1 << uVar4;
        *(undefined1 *)(uVar15 - 3) = 0xff;
        *(undefined2 *)(uVar15 - 2) = 0;
        goto LAB_016d4066;
      }
    }
    uVar6 = uVar5 & 0x80808080;
    if (bVar3) {
LAB_00f47c4c:
      if ((uVar6 & uVar5 << 1) != 0) {
        uVar15 = (uint)*(char *)((int)puVar10 + local_80);
        if (-1 < (int)uVar15) {
          uVar15 = *puVar10 & 0x80808080;
          uVar18 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
          uVar15 = (uint)*(byte *)((int)puVar10 + (uVar18 >> 3));
          local_80 = uVar18 >> 3;
        }
        uVar19 = *param_3;
        uVar5 = param_3[1];
        uVar7 = param_3[2];
        uVar18 = *param_4;
        uVar6 = param_4[1];
        uVar12 = param_4[2];
        uVar13 = param_4[3];
        uVar16 = param_4[4];
        uVar20 = param_4[5];
        iVar22 = param_2[2];
        iVar8 = param_2[3];
        bVar1 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)puVar10 + local_80) = bVar1;
        *(byte *)((int)puVar10 + (uVar11 & local_80 - 4) + 4) = bVar1;
        param_2[2] = iVar22 - (uVar15 & 1);
        param_2[3] = iVar8 + 1;
        puVar10[local_80 * -10 + -10] = uVar19;
        puVar10[local_80 * -10 + -9] = uVar5;
        puVar10[local_80 * -10 + -8] = uVar7;
        puVar10[local_80 * -10 + -7] = uStack_44;
        puVar10[local_80 * -10 + -6] = uVar18;
        puVar10[local_80 * -10 + -5] = uVar6;
        puVar10[local_80 * -10 + -4] = uVar12;
        puVar10[local_80 * -10 + -3] = uVar13;
        puVar10[local_80 * -10 + -2] = uVar16;
        puVar10[local_80 * -10 + -1] = uVar20;
        *param_1 = 9;
        return;
      }
      bVar3 = true;
    }
    else {
      if (uVar6 != 0) {
        local_80 = uVar19 + ((uint)LZCOUNT((uVar5 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar11;
        goto LAB_00f47c4c;
      }
      bVar3 = false;
    }
    iVar22 = iVar22 + 4;
    uVar19 = iVar22 + uVar19;
  } while( true );
LAB_016d4066:
  uVar19 = *(uint *)(iVar22 + 0x10);
  uVar15 = *(uint *)(iVar22 + 0xc) | uVar19;
  if ((uVar18 & uVar15) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar2)();
  }
  if ((uVar19 == 0) || (uVar15 + uVar18 == (2 << (bVar1 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar22,uVar4);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar9 = (undefined4 *)FUN_016d2bc8();
    uVar14 = *puVar9;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar9 = uVar14;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar22 + 0x10) = uVar18 + uVar19;
    return;
  }
  puVar10 = (uint *)(iVar22 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar10);
    uVar15 = *puVar10;
    if (uVar19 != uVar15) goto LAB_016d409c;
    bVar3 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar3);
  *puVar10 = uVar18 + uVar19;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar19 == uVar15) {
    return;
  }
  goto LAB_016d4066;
}

