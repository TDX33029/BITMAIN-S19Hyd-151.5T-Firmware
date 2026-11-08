// FUN_016228e8 @ 016228e8 size=732 calls_out=6 calls_in=1
// strings: 

void FUN_016228e8(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int unaff_r4;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 uVar23;
  uint local_80;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar4 = thunk_FUN_016d4a50(param_4);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_4);
  }
  FUN_016dd1aa(uVar4,param_3,param_4);
  uVar19 = param_2[4];
  uVar13 = param_2[5];
  uVar15 = param_2[6];
  uVar17 = param_2[7];
  uVar23 = FUN_01620b88(uVar19,uVar13,uVar15,uVar17,uVar4,param_4);
  uVar21 = (uint)uVar23;
  if (param_2[2] == 0) {
    FUN_0161b3e8(param_2,(int)((ulonglong)uVar23 >> 0x20),uVar19,uVar13,uVar15,uVar17);
  }
  uVar12 = uVar21 >> 0x19;
  uVar9 = param_2[1];
  puVar11 = (uint *)*param_2;
  bVar3 = false;
  iVar22 = 0;
  do {
    uVar21 = uVar9 & uVar21;
    uVar20 = *(uint *)((int)puVar11 + uVar21);
    uVar5 = uVar20 ^ uVar12 * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar21 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      if ((param_4 == puVar11[uVar6 * -0x10 + -0xe]) &&
         (iVar7 = thunk_FUN_016dd50a(uVar4,puVar11[uVar6 * -0x10 + -0xf],param_4), iVar7 == 0)) {
        uVar21 = puVar11[uVar6 * -0x10 + -0xb];
        uVar12 = puVar11[uVar6 * -0x10 + -10];
        uVar9 = puVar11[uVar6 * -0x10 + -9];
        uVar5 = puVar11[uVar6 * -0x10 + -8];
        uVar20 = puVar11[uVar6 * -0x10 + -7];
        *param_1 = puVar11[uVar6 * -0x10 + -0xc];
        param_1[1] = uVar21;
        param_1[2] = uVar12;
        param_1[3] = uVar9;
        param_1[4] = uVar5;
        param_1[5] = uVar20;
        uVar21 = puVar11[uVar6 * -0x10 + -5];
        uVar12 = puVar11[uVar6 * -0x10 + -4];
        uVar9 = puVar11[uVar6 * -0x10 + -3];
        uVar5 = puVar11[uVar6 * -0x10 + -2];
        uVar20 = puVar11[uVar6 * -0x10 + -1];
        param_1[6] = puVar11[uVar6 * -0x10 + -6];
        param_1[7] = uVar21;
        param_1[8] = uVar12;
        param_1[9] = uVar9;
        param_1[10] = uVar5;
        param_1[0xb] = uVar20;
        uVar21 = param_5[1];
        uVar12 = param_5[2];
        uVar9 = param_5[3];
        uVar5 = param_5[4];
        uVar20 = param_5[5];
        puVar11[uVar6 * -0x10 + -0xc] = *param_5;
        puVar11[uVar6 * -0x10 + -0xb] = uVar21;
        puVar11[uVar6 * -0x10 + -10] = uVar12;
        puVar11[uVar6 * -0x10 + -9] = uVar9;
        puVar11[uVar6 * -0x10 + -8] = uVar5;
        puVar11[uVar6 * -0x10 + -7] = uVar20;
        uVar21 = param_5[7];
        uVar12 = param_5[8];
        uVar9 = param_5[9];
        uVar5 = param_5[10];
        uVar20 = param_5[0xb];
        puVar11[uVar6 * -0x10 + -6] = param_5[6];
        puVar11[uVar6 * -0x10 + -5] = uVar21;
        puVar11[uVar6 * -0x10 + -4] = uVar12;
        puVar11[uVar6 * -0x10 + -3] = uVar9;
        puVar11[uVar6 * -0x10 + -2] = uVar5;
        puVar11[uVar6 * -0x10 + -1] = uVar20;
        if (uVar4 == 0) {
          return;
        }
        iVar22 = FUN_016d3bc8();
        uVar21 = *(byte *)(uVar4 - 3) & 0x1f;
        if (((*(byte *)(iVar22 + 0x14) & 0x1f) != 0) ||
           (uVar12 = *(uint *)(iVar22 + 0x14) & 0xfffff000, iVar7 = uVar12 - 0x10, uVar12 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar22 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar12 = (uint)(*(byte *)(uVar4 - 3) >> 5);
        iVar16 = *(int *)(iVar22 + 8) + 0x10;
        iVar14 = iVar7 * uVar21 + iVar7 + -4;
        iVar7 = iVar16 + iVar14;
        if (4 < uVar12) {
          if (uVar12 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar12 = *(uint *)(iVar7 + -4);
          if (uVar12 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if (iVar7 - uVar4 < uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar22 + 0x14);
        uVar12 = 1 << uVar21;
        *(undefined1 *)(uVar4 - 3) = 0xff;
        *(undefined2 *)(uVar4 - 2) = 0;
        goto LAB_016d4066;
      }
    }
    uVar5 = uVar20 & 0x80808080;
    if (bVar3) {
LAB_01622a74:
      if ((uVar5 & uVar20 << 1) != 0) {
        uVar21 = (uint)*(char *)((int)puVar11 + local_80);
        if (-1 < (int)uVar21) {
          uVar21 = *puVar11 & 0x80808080;
          uVar12 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                           (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18);
          uVar21 = (uint)*(byte *)((int)puVar11 + (uVar12 >> 3));
          local_80 = uVar12 >> 3;
        }
        puVar10 = (uint *)((uint)&local_58 | 4);
        uVar12 = param_5[1];
        uVar5 = param_5[2];
        uVar20 = param_5[3];
        uVar6 = param_5[4];
        uVar18 = param_5[5];
        *puVar10 = *param_5;
        puVar10[1] = uVar12;
        puVar10[2] = uVar5;
        puVar10[3] = uVar20;
        puVar10[4] = uVar6;
        puVar10[5] = uVar18;
        uVar12 = param_5[7];
        uVar5 = param_5[8];
        uVar20 = param_5[9];
        uVar6 = param_5[10];
        uVar18 = param_5[0xb];
        puVar10[6] = param_5[6];
        puVar10[7] = uVar12;
        puVar10[8] = uVar5;
        puVar10[9] = uVar20;
        puVar10[10] = uVar6;
        puVar10[0xb] = uVar18;
        bVar1 = (byte)((ulonglong)uVar23 >> 0x18) >> 1;
        *(byte *)((int)puVar11 + local_80) = bVar1;
        iVar22 = param_2[2];
        iVar7 = param_2[3];
        *(byte *)((int)puVar11 + (uVar9 & local_80 - 4) + 4) = bVar1;
        param_2[2] = iVar22 - (uVar21 & 1);
        puVar11[local_80 * -0x10 + -0x10] = param_4;
        puVar11[local_80 * -0x10 + -0xf] = uVar4;
        puVar11[local_80 * -0x10 + -0xe] = param_4;
        param_2[3] = iVar7 + 1;
        puVar11[local_80 * -0x10 + -0xd] = local_58;
        puVar11[local_80 * -0x10 + -0xc] = uStack_54;
        puVar11[local_80 * -0x10 + -0xb] = uStack_50;
        puVar11[local_80 * -0x10 + -10] = uStack_4c;
        puVar11[local_80 * -0x10 + -9] = local_48;
        puVar11[local_80 * -0x10 + -8] = uStack_44;
        puVar11[local_80 * -0x10 + -7] = uStack_40;
        puVar11[local_80 * -0x10 + -6] = uStack_3c;
        puVar11[local_80 * -0x10 + -5] = local_38;
        puVar11[local_80 * -0x10 + -4] = uStack_34;
        puVar11[local_80 * -0x10 + -3] = uStack_30;
        puVar11[local_80 * -0x10 + -2] = uStack_2c;
        puVar11[local_80 * -0x10 + -1] = uStack_28;
        param_1[8] = 0x80000000;
        return;
      }
      bVar3 = true;
    }
    else {
      if (uVar5 != 0) {
        local_80 = uVar21 + ((uint)LZCOUNT((uVar20 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_01622a74;
      }
      bVar3 = false;
    }
    iVar22 = iVar22 + 4;
    uVar21 = iVar22 + uVar21;
  } while( true );
LAB_016d4066:
  uVar9 = *(uint *)(iVar22 + 0x10);
  uVar4 = *(uint *)(iVar22 + 0xc) | uVar9;
  if ((uVar12 & uVar4) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar2)();
  }
  if ((uVar9 == 0) || (uVar4 + uVar12 == (2 << (bVar1 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar22,uVar21);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar8 = (undefined4 *)FUN_016d2bc8();
    uVar13 = *puVar8;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar8 = uVar13;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar22 + 0x10) = uVar12 + uVar9;
    return;
  }
  puVar11 = (uint *)(iVar22 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar11);
    uVar4 = *puVar11;
    if (uVar9 != uVar4) goto LAB_016d409c;
    bVar3 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar3);
  *puVar11 = uVar12 + uVar9;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar9 == uVar4) {
    return;
  }
  goto LAB_016d4066;
}

