// FUN_010c35a0 @ 010c35a0 size=2096 calls_out=7 calls_in=1
// strings: 

void FUN_010c35a0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  ushort *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int unaff_r4;
  uint uVar20;
  undefined1 *puVar21;
  int iVar22;
  short *psVar23;
  undefined1 *puVar24;
  int iVar25;
  undefined1 *puVar26;
  short *psVar27;
  undefined4 uVar28;
  short *psVar29;
  short *psVar30;
  ushort *puVar31;
  ushort *unaff_r9;
  ushort uVar32;
  undefined4 unaff_r11;
  short *psVar33;
  uint *puVar34;
  bool bVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint local_d4;
  undefined1 *local_d0;
  int local_a4;
  undefined1 *local_94;
  ushort auStack_90 [42];
  int local_3c;
  short *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar26 = *(undefined1 **)(param_3 + 0x50);
  local_94 = &DAT_3b9aca00;
  if (puVar26 == &DAT_3b9aca00) {
    puVar26 = *(undefined1 **)(param_3 + 0x40);
    uVar36 = CONCAT44(unaff_r11,param_3);
    if (puVar26 != &DAT_3b9aca00) {
      uVar36 = CONCAT44(unaff_r11,param_3);
      if (param_2[3] != param_2[1]) {
        uVar20 = *(uint *)(param_3 + 0x38);
        iVar22 = *(int *)(param_3 + 0x3c);
        uVar9 = (uint)(param_2[3] - param_2[1]) >> 5;
        iVar7 = FUN_018462e8(puVar26,uVar9);
        uVar36 = FUN_01846088(uVar20,iVar22,uVar9,0);
        uVar13 = (uint)(uVar36 >> 0x20);
        uVar17 = (uint)uVar36;
        lVar4 = (ulonglong)uVar9 * (uVar36 & 0xffffffff);
        uVar8 = (uint)lVar4;
        lVar4 = (ulonglong)(uVar20 - uVar8) * 1000000000 +
                CONCAT44((iVar22 - (uVar13 * uVar9 + (int)((ulonglong)lVar4 >> 0x20) +
                                   (uint)(uVar20 < uVar8))) * 1000000000,
                         (int)puVar26 - iVar7 * uVar9);
        iVar22 = FUN_01846088((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),uVar9,0);
        local_94 = (undefined1 *)(iVar7 + iVar22);
        if ((undefined1 *)0x3b9ac9ff < local_94) {
          uVar8 = (uint)((ulonglong)((uint)local_94 >> 9) * 0x44b83 >> 0x20);
          uVar9 = uVar8 >> 7;
          uVar36 = uVar36 + uVar9;
          if (CARRY4(uVar13,(uint)CARRY4(uVar17,uVar9))) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
          }
          local_94 = local_94 + (uVar8 >> 7) * -1000000000;
        }
      }
    }
    uVar18 = param_2[1];
    uVar19 = param_2[2];
    uVar28 = *param_2;
    uVar15 = param_2[3];
    *param_1 = 2;
    param_1[1] = 0;
    param_1[0x22] = local_94;
    param_1[0x24] = param_3;
    *(ulonglong *)(param_1 + 0x20) = uVar36;
    param_1[0x1c] = uVar28;
    param_1[0x1d] = uVar18;
    param_1[0x1e] = uVar19;
    param_1[0x1f] = uVar15;
    return;
  }
  uVar15 = *(undefined4 *)(param_3 + 0x48);
  uVar18 = *(undefined4 *)(param_3 + 0x4c);
  if (*(char *)(param_3 + 0x75) == '\x01') {
    if (*(char *)(param_3 + 0x7a) != '\0') goto LAB_010c37ec;
    psVar33 = (short *)*param_2;
    psVar23 = (short *)param_2[1];
    psVar27 = (short *)param_2[3];
    local_a4 = param_2[2];
    psVar29 = psVar33;
    if (psVar23 != psVar27) {
      unaff_r9 = (ushort *)0x0;
      psVar30 = psVar33;
      do {
        sVar2 = *psVar23;
        FUN_016dd1aa(auStack_90,psVar23 + 1,0x1e);
        psVar29 = psVar30;
        if (sVar2 == 0) {
          psVar29 = psVar30 + 0x10;
          *psVar30 = 0;
          FUN_016dd1aa(psVar30 + 1,auStack_90,0x1e);
        }
        psVar23 = psVar23 + 0x10;
        psVar30 = psVar29;
      } while (psVar23 != psVar27);
    }
  }
  else {
    if (*(char *)(param_3 + 0x7a) == '\0') {
LAB_010c37ec:
      puVar31 = (ushort *)param_2[1];
      uVar32 = 0;
      unaff_r9 = (ushort *)param_2[3];
      iVar22 = 0;
      uVar19 = *param_2;
      iVar7 = 4;
      if (unaff_r9 != puVar31) {
        uVar32 = *puVar31;
      }
      iVar25 = param_2[2];
      local_34 = 0;
      local_38 = (short *)&DAT_00000004;
      local_3c = 0;
      local_28 = 0;
      local_2c = 4;
      local_30 = 0;
      if (unaff_r9 != puVar31) {
        do {
          while( true ) {
            uVar3 = *puVar31;
            FUN_016dd1aa(auStack_90,puVar31 + 1,0x1e);
            iVar10 = local_34;
            if (((uVar3 == 0 ^ uVar32) & 1) == 0) break;
            if (local_34 == local_3c) {
              FUN_015afa08(&local_3c);
            }
            local_38[iVar10 * 0x10] = uVar3;
            FUN_016dd1aa(local_38 + iVar10 * 0x10 + 1,auStack_90,0x1e);
            local_34 = iVar10 + 1;
            puVar31 = puVar31 + 0x10;
            if (puVar31 == unaff_r9) goto LAB_010c3910;
          }
          if (iVar22 == local_30) {
            FUN_015afa08(&local_30);
            iVar7 = local_2c;
          }
          puVar16 = (ushort *)(iVar7 + iVar22 * 0x20);
          *puVar16 = uVar3;
          FUN_016dd1aa(puVar16 + 1,auStack_90,0x1e);
          iVar22 = iVar22 + 1;
          puVar31 = puVar31 + 0x10;
          local_28 = iVar22;
        } while (puVar31 != unaff_r9);
      }
LAB_010c3910:
      if (iVar25 != 0) {
        thunk_FUN_016d3fb4(uVar19);
      }
      local_a4 = local_3c;
      iVar25 = local_2c + iVar22 * 0x20;
      psVar29 = local_38 + local_34 * 0x10;
      iVar7 = local_30;
      iVar22 = local_2c;
      psVar33 = local_38;
      goto LAB_010c3944;
    }
    psVar33 = (short *)*param_2;
    psVar23 = (short *)param_2[1];
    psVar27 = (short *)param_2[3];
    local_a4 = param_2[2];
    psVar29 = psVar33;
    if (psVar23 != psVar27) {
      unaff_r9 = auStack_90;
      psVar30 = psVar33;
      do {
        sVar2 = *psVar23;
        FUN_016dd1aa(unaff_r9,psVar23 + 1,0x1e);
        psVar29 = psVar30;
        if (sVar2 != 0) {
          psVar29 = psVar30 + 0x10;
          *psVar30 = sVar2;
          FUN_016dd1aa(psVar30 + 1,unaff_r9,0x1e);
        }
        psVar23 = psVar23 + 0x10;
        psVar30 = psVar29;
      } while (psVar23 != psVar27);
    }
  }
  iVar25 = 4;
  iVar7 = 0;
  iVar22 = 4;
LAB_010c3944:
  uVar37 = CONCAT44(psVar33,iVar25);
  uVar36 = CONCAT44(psVar33,unaff_r9);
  uVar9 = *(uint *)(param_3 + 0x38);
  puVar21 = *(undefined1 **)(param_3 + 0x40);
  puVar24 = &DAT_3b9aca00;
  iVar10 = *(int *)(param_3 + 0x3c);
  if (iVar25 == iVar22) {
    if (puVar21 != &DAT_3b9aca00 && psVar33 != psVar29) {
      uVar17 = (uint)((int)psVar29 - (int)psVar33) >> 5;
      iVar25 = FUN_018462e8(puVar21,uVar17);
      uVar37 = FUN_01846088(uVar9,iVar10,uVar17,0);
      uVar20 = (uint)(uVar37 >> 0x20);
      uVar8 = (uint)uVar37;
      lVar4 = (ulonglong)uVar17 * (uVar37 & 0xffffffff);
      uVar13 = (uint)lVar4;
      lVar4 = (ulonglong)(uVar9 - uVar13) * 1000000000 +
              CONCAT44((iVar10 - (uVar20 * uVar17 + (int)((ulonglong)lVar4 >> 0x20) +
                                 (uint)(uVar9 < uVar13))) * 1000000000,
                       (int)puVar21 - iVar25 * uVar17);
      iVar10 = FUN_01846088((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),uVar17,0);
      puVar24 = (undefined1 *)(iVar25 + iVar10);
      if ((undefined1 *)0x3b9ac9ff < puVar24) {
        uVar17 = (uint)((ulonglong)((uint)puVar24 >> 9) * 0x44b83 >> 0x20);
        uVar9 = uVar17 >> 7;
        uVar37 = uVar37 + uVar9;
        if (CARRY4(uVar20,(uint)CARRY4(uVar8,uVar9))) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
        }
        puVar24 = puVar24 + (uVar17 >> 7) * -1000000000;
      }
    }
    *param_1 = 2;
    param_1[1] = 0;
    param_1[0x24] = param_3;
    param_1[0x1c] = psVar33;
    param_1[0x1d] = psVar33;
    param_1[0x1e] = local_a4;
    param_1[0x1f] = psVar29;
    *(ulonglong *)(param_1 + 0x20) = uVar37;
    param_1[0x22] = puVar24;
    if (iVar7 != 0) {
      if (iVar22 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar9 = *(byte *)(iVar22 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar17 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar25 = uVar17 - 0x10, uVar17 == 0)) {
        iVar25 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar17 = (uint)(*(byte *)(iVar22 + -3) >> 5);
      iVar12 = *(int *)(iVar7 + 8) + 0x10;
      iVar10 = iVar25 * uVar9 + iVar25 + -4;
      iVar25 = iVar12 + iVar10;
      if (4 < uVar17) {
        if (uVar17 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar17 = *(uint *)(iVar25 + -4);
        if (uVar17 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar25 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar25 - iVar22) < uVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar25 - uVar17) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar6 = *(byte *)(iVar7 + 0x14);
      uVar17 = 1 << uVar9;
      *(undefined1 *)(iVar22 + -3) = 0xff;
      *(undefined2 *)(iVar22 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar7 + 0x10);
        uVar8 = *(uint *)(iVar7 + 0xc) | uVar13;
        if ((uVar17 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar17 == (2 << (bVar6 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar7,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar15 = *puVar14;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar14 = uVar15;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar17 + uVar13;
          return;
        }
        puVar34 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar34);
          uVar8 = *puVar34;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar34);
        } while (!bVar1);
        *puVar34 = uVar17 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (puVar21 != &DAT_3b9aca00 && psVar33 != psVar29) {
      uVar17 = (uint)((int)psVar29 - (int)psVar33) >> 5;
      iVar12 = FUN_018462e8(puVar21,uVar17);
      uVar36 = FUN_01846088(uVar9,iVar10,uVar17,0);
      local_d4 = (uint)(uVar36 >> 0x20);
      lVar4 = (ulonglong)uVar17 * (uVar36 & 0xffffffff);
      uVar8 = (uint)lVar4;
      lVar4 = (ulonglong)(uVar9 - uVar8) * 1000000000 +
              CONCAT44((iVar10 - (local_d4 * uVar17 + (int)((ulonglong)lVar4 >> 0x20) +
                                 (uint)(uVar9 < uVar8))) * 1000000000,(int)puVar21 - iVar12 * uVar17
                      );
      iVar11 = FUN_01846088((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),uVar17,0);
      local_d0 = (undefined1 *)(iVar12 + iVar11);
      if ((undefined1 *)0x3b9ac9ff < local_d0) {
        uVar8 = (uint)((ulonglong)((uint)local_d0 >> 9) * 0x44b83 >> 0x20);
        uVar17 = uVar8 >> 7;
        bVar35 = CARRY4((uint)uVar36,uVar17);
        bVar1 = CARRY4(local_d4,(uint)bVar35);
        local_d4 = local_d4 + bVar35;
        uVar36 = uVar36 + uVar17;
        if (bVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
        }
        local_d0 = local_d0 + (uVar8 >> 7) * -1000000000;
      }
    }
    else {
      local_d0 = &DAT_3b9aca00;
    }
    uVar8 = (uint)(uVar36 >> 0x20);
    puVar24 = &DAT_3b9aca00;
    FUN_01656eb8(auStack_90,&DAT_01884e08,uVar15,uVar18,puVar26,&DAT_01884e08);
    uVar17 = param_3;
    if (puVar21 != &DAT_3b9aca00) {
      uVar17 = (uint)(iVar25 - iVar22) >> 5;
      iVar12 = FUN_018462e8(puVar21,uVar17);
      uVar37 = FUN_01846088(uVar9,iVar10,uVar17,0);
      uVar8 = (uint)(uVar37 >> 0x20);
      lVar4 = (ulonglong)uVar17 * (uVar37 & 0xffffffff);
      uVar13 = (uint)lVar4;
      lVar4 = (ulonglong)(uVar9 - uVar13) * 1000000000 +
              CONCAT44((iVar10 - (uVar8 * uVar17 + (int)((ulonglong)lVar4 >> 0x20) +
                                 (uint)(uVar9 < uVar13))) * 1000000000,
                       (int)puVar21 - iVar12 * uVar17);
      iVar10 = FUN_01846088((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),uVar17,0);
      puVar24 = (undefined1 *)(iVar12 + iVar10);
      if (puVar24 < (undefined1 *)0x3b9aca00) {
        uVar17 = (uint)uVar37;
      }
      else {
        uVar17 = (uint)((ulonglong)((uint)puVar24 >> 9) * 0x44b83 >> 0x20);
        uVar9 = uVar17 >> 7;
        lVar4 = uVar37 + uVar9;
        bVar1 = CARRY4(uVar8,(uint)CARRY4((uint)uVar37,uVar9));
        uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
        if (bVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
        }
        puVar24 = puVar24 + (uVar17 >> 7) * -1000000000;
        uVar17 = (uint)lVar4;
      }
    }
    FUN_016dd1aa(param_1,auStack_90,0x50);
    param_1[0x1f] = psVar29;
    param_1[0x20] = (int)uVar36;
    param_1[0x21] = local_d4;
    param_1[0x18] = uVar17;
    param_1[0x19] = uVar8;
    param_1[0x1c] = psVar33;
    param_1[0x1d] = psVar33;
    param_1[0x1e] = local_a4;
    param_1[0x22] = local_d0;
    param_1[0x16] = iVar7;
    param_1[0x14] = iVar22;
    param_1[0x15] = iVar22;
    param_1[0x17] = iVar25;
    param_1[0x24] = param_3;
    param_1[0x1a] = puVar24;
  }
  return;
}

