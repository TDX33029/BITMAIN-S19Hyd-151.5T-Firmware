// FUN_0075a528 @ 0075a528 size=6144 calls_out=27 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0075b0d8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0075a528(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  bool bVar35;
  uint in_fpscr;
  double in_d0;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  int local_20c;
  uint local_1ec;
  int local_1e4;
  int local_1e0;
  uint local_1dc;
  int local_1d4;
  undefined1 auStack_1d0 [240];
  int local_e0;
  int local_dc;
  uint local_d8;
  uint local_d0;
  undefined *local_cc;
  uint local_c8;
  undefined1 *puStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  uint local_94;
  undefined1 *local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (0x20 < param_2) {
    local_20c = param_6;
    uVar41 = thunk_FUN_016de0ee(param_6,0x1c4);
    ppuVar5 = (undefined **)((int)uVar41 + (int)((ulonglong)uVar41 >> 0x20));
    dVar37 = 0.9944598480048967;
LAB_0075a640:
    uVar23 = param_2;
LAB_0075a644:
    if (param_5 == 0) {
      FUN_00758f80(param_1,uVar23,param_3,param_4);
      return;
    }
    uVar30 = (uVar23 >> 3) * 0x690 + param_1;
    uVar20 = param_1 + ((uVar23 >> 3) * 0x10 - (uVar23 >> 3)) * 0x40;
    uVar11 = SUB84(in_d0,0);
    uVar15 = (uint)((ulonglong)in_d0 >> 0x20);
    uVar21 = (int)uVar15 >> 0x1f;
    bVar3 = (byte)((longlong)in_d0 >> 0x3f);
    if (uVar23 < 0x40) {
      iVar31 = *(int *)(uVar20 + 0xe4);
      iVar4 = *(int *)(param_1 + 0xe4) + 8;
      FUN_0107d010(iVar4);
      FUN_0107d010();
      iVar7 = *(int *)(uVar30 + 0xe4);
      FUN_0107d010(iVar4);
      FUN_0107d010();
      uVar17 = uVar21 >> 1 ^ uVar15;
      uVar32 = uVar21 >> 1 ^ uVar15;
      uVar33 = uVar21 >> 1 ^ uVar15;
      uVar14 = ((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11;
      uVar27 = uVar21 >> 1 ^ uVar15;
      uVar22 = ((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11;
      bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11) <
               (((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11);
      uVar26 = param_1;
      if (((int)(uVar33 - (uVar27 + (uVar14 < uVar22))) < 0 !=
          (SBORROW4(uVar33,uVar27) != SBORROW4(uVar33 - uVar27,(uint)(uVar14 < uVar22)))) ==
          ((int)(uVar17 - (uVar32 + bVar34)) < 0 !=
          (SBORROW4(uVar17,uVar32) != SBORROW4(uVar17 - uVar32,(uint)bVar34)))) {
        FUN_0107d010(iVar31 + 8);
        FUN_0107d010(iVar7 + 8);
        uVar17 = uVar21 >> 1 ^ uVar15;
        uVar32 = uVar21 >> 1 ^ uVar15;
        bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11) <
                 (((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11);
        uVar26 = uVar20;
        if (((int)(uVar33 - (uVar27 + (uVar14 < uVar22))) < 0 !=
            (SBORROW4(uVar33,uVar27) != SBORROW4(uVar33 - uVar27,(uint)(uVar14 < uVar22)))) !=
            ((int)(uVar17 - (uVar32 + bVar34)) < 0 !=
            (SBORROW4(uVar17,uVar32) != SBORROW4(uVar17 - uVar32,(uint)bVar34)))) {
          uVar26 = uVar30;
        }
      }
    }
    else {
      uVar26 = FUN_0075c290(param_1,uVar20,uVar30);
    }
    param_5 = param_5 + -1;
    FUN_016dd1aa(auStack_1d0,uVar26,0xf0);
    uVar20 = uVar26 - param_1 >> 4;
    if (local_20c != 0) {
      iVar4 = *(int *)(uVar26 + 0xe4);
      FUN_0107d010(*(int *)(local_20c + 0xe4) + 8);
      FUN_0107d010(iVar4 + 8);
      uVar30 = uVar21 >> 1 ^ uVar15;
      uVar15 = uVar21 >> 1 ^ uVar15;
      bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11) <
               (((uint)(bVar3 & 1) << 0x1f | uVar21 >> 1) ^ uVar11);
      if ((int)(uVar30 - (uVar15 + bVar34)) < 0 ==
          (SBORROW4(uVar30,uVar15) != SBORROW4(uVar30 - uVar15,(uint)bVar34))) goto LAB_0075af20;
    }
    if (uVar23 <= param_4) {
      param_2 = 0;
      uVar30 = param_3 + uVar23 * 0xf0;
      uVar21 = uVar20 * -0x11111111;
      uVar15 = param_1;
      do {
        for (; uVar15 < param_1 + uVar21 * 0xf0; uVar15 = uVar15 + 0xf0) {
          iVar4 = *(int *)(param_1 + uVar20 * 0x10 + 0xe4);
          uVar8 = *(undefined4 *)(*(int *)(uVar15 + 0xe4) + 0xc);
          DataMemoryBarrier(0xb);
          iVar31 = *(int *)(*(int *)(uVar15 + 0xe4) + 8);
          pcVar18 = (char *)(iVar31 + 8);
          if (*pcVar18 == '\0') {
            bVar34 = (bool)hasExclusiveAccess(pcVar18);
            if (!bVar34) goto LAB_0075ad90;
            *pcVar18 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_0075ad90:
            FUN_01280da8(pcVar18);
          }
          dVar36 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
          FUN_0128236c(pcVar18);
          puVar28 = *(undefined1 **)(iVar31 + 0x18);
          if (puVar28 != &DAT_3b9aca00) {
            uVar11 = *(uint *)(iVar31 + 0x14);
            iVar7 = *(int *)(iVar31 + 0x10);
            iVar31 = FUN_016e0392(1,&local_98);
            if (iVar31 == -1) {
              puVar9 = (undefined4 *)FUN_016d2bc8();
              local_cc = (undefined *)*puVar9;
              local_d0 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
            }
            if (999999999 < local_94) {
              local_d0 = 2;
              local_cc = &DAT_018aad2c;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
            }
            local_d8 = local_94;
            local_e0 = local_98;
            local_dc = local_98 >> 0x1f;
            local_98 = iVar7;
            local_94 = uVar11;
            local_90 = puVar28;
            FUN_015f3c24(&local_d0,&local_e0,&local_98);
            dVar38 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
            dVar39 = (double)FUN_01845f30(local_c8,puStack_c4);
            dVar39 = dVar38 / 1000000000.0 + dVar39;
            FUN_016d5578(SUB84(dVar39,0),(int)((ulonglong)dVar39 >> 0x20),0);
            FUN_016d5330(SUB84(dVar39 / -180.0,0));
            in_d0 = dVar39 / -180.0;
            if ((local_d0 & 1) != 0) {
              in_d0 = dVar37;
            }
            dVar36 = in_d0 * dVar36;
          }
          bVar34 = true;
          local_d0 = 0;
          ppuVar6 = ppuVar5;
          if (*(char *)(ppuVar5 + 0xd) != '\x01') {
            ppuVar6 = (undefined **)FUN_01284e64();
            if (ppuVar6 == (undefined **)0x0) {
              FUN_01283788(&local_98);
              local_d0 = 1;
              bVar34 = false;
              local_c8 = local_94;
              puStack_c4 = local_90;
              local_c0 = uStack_8c;
              local_bc = local_88;
              local_b8 = iStack_84;
              local_b4 = uStack_80;
              local_b0 = iStack_7c;
              local_ac = local_78;
              local_a8 = uStack_74;
              uStack_a4 = uStack_70;
              uStack_a0 = uStack_6c;
              uStack_9c = uStack_68;
              ppuVar6 = &local_cc;
            }
          }
          puVar13 = ppuVar6[8];
          puVar16 = ppuVar6[9];
          iVar31 = (int)puVar16 * -4;
          puVar10 = puVar16;
          do {
            if (iVar31 == 0) goto LAB_0075aae4;
            iVar7 = -4 - iVar31;
            iVar31 = iVar31 + 4;
            puVar10 = puVar10 + -1;
          } while (*(char **)(puVar13 + iVar7) != pcVar18);
          *(undefined4 *)(puVar13 + (int)puVar10 * 4) =
               *(undefined4 *)(puVar13 + (int)(puVar16 + -1) * 4);
          ppuVar6[9] = puVar16 + -1;
LAB_0075aae4:
          if (bVar34) {
LAB_0075ab4c:
            cVar2 = *pcVar18;
          }
          else {
            do {
              iVar31 = DAT_018dd954 + -1;
              bVar34 = (bool)hasExclusiveAccess(0x18dd954);
            } while (!bVar34);
            DAT_018dd954 = iVar31;
            if (local_b0 != 0) {
              thunk_FUN_016d3fb4(local_ac);
            }
            if (local_b8 == 3) goto LAB_0075ab4c;
            if (local_b8 == 0) {
              FUN_012848c0(local_b4);
              goto LAB_0075ab4c;
            }
            if (local_b8 == 1) {
              FUN_01283d28();
              cVar2 = *pcVar18;
            }
            else {
              FUN_01284358();
              cVar2 = *pcVar18;
            }
          }
          if (cVar2 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar34 = (bool)hasExclusiveAccess(pcVar18);
              if (bVar34) {
                *pcVar18 = '\0';
                goto LAB_0075ab80;
              }
            } while (*pcVar18 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar18);
LAB_0075ab80:
          uVar8 = *(undefined4 *)(iVar4 + 0xc);
          DataMemoryBarrier(0xb);
          iVar4 = *(int *)(iVar4 + 8);
          pcVar18 = (char *)(iVar4 + 8);
          if (*pcVar18 == '\0') {
            bVar34 = (bool)hasExclusiveAccess(pcVar18);
            if (!bVar34) goto LAB_0075ada0;
            *pcVar18 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_0075ada0:
            FUN_01280da8(pcVar18);
          }
          dVar39 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
          FUN_0128236c(pcVar18);
          puVar28 = *(undefined1 **)(iVar4 + 0x18);
          if (puVar28 != &DAT_3b9aca00) {
            uVar11 = *(uint *)(iVar4 + 0x14);
            iVar31 = *(int *)(iVar4 + 0x10);
            iVar4 = FUN_016e0392(1,&local_98);
            if (iVar4 == -1) {
              puVar9 = (undefined4 *)FUN_016d2bc8();
              local_cc = (undefined *)*puVar9;
              local_d0 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
            }
            if (999999999 < local_94) {
              local_d0 = 2;
              local_cc = &DAT_018aad2c;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
            }
            local_d8 = local_94;
            local_e0 = local_98;
            local_dc = local_98 >> 0x1f;
            local_98 = iVar31;
            local_94 = uVar11;
            local_90 = puVar28;
            FUN_015f3c24(&local_d0,&local_e0,&local_98);
            dVar40 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
            dVar38 = (double)FUN_01845f30(local_c8,puStack_c4);
            dVar38 = dVar40 / 1000000000.0 + dVar38;
            FUN_016d5578(SUB84(dVar38,0),(int)((ulonglong)dVar38 >> 0x20),0);
            FUN_016d5330(SUB84(dVar38 / -180.0,0));
            in_d0 = dVar38 / -180.0;
            if ((local_d0 & 1) != 0) {
              in_d0 = dVar37;
            }
            dVar39 = in_d0 * dVar39;
          }
          bVar34 = true;
          local_d0 = 0;
          ppuVar6 = ppuVar5;
          if (*(char *)(ppuVar5 + 0xd) != '\x01') {
            ppuVar6 = (undefined **)FUN_01284e64();
            if (ppuVar6 == (undefined **)0x0) {
              FUN_01283788(&local_98);
              local_d0 = 1;
              bVar34 = false;
              local_c8 = local_94;
              puStack_c4 = local_90;
              local_c0 = uStack_8c;
              local_bc = local_88;
              local_b8 = iStack_84;
              local_b4 = uStack_80;
              local_b0 = iStack_7c;
              local_ac = local_78;
              local_a8 = uStack_74;
              uStack_a4 = uStack_70;
              uStack_a0 = uStack_6c;
              uStack_9c = uStack_68;
              ppuVar6 = &local_cc;
            }
          }
          puVar13 = ppuVar6[8];
          puVar16 = ppuVar6[9];
          iVar4 = (int)puVar16 * -4;
          puVar10 = puVar16;
          do {
            if (iVar4 == 0) goto LAB_0075accc;
            iVar31 = -4 - iVar4;
            iVar4 = iVar4 + 4;
            puVar10 = puVar10 + -1;
          } while (*(char **)(puVar13 + iVar31) != pcVar18);
          *(undefined4 *)(puVar13 + (int)puVar10 * 4) =
               *(undefined4 *)(puVar13 + (int)(puVar16 + -1) * 4);
          ppuVar6[9] = puVar16 + -1;
LAB_0075accc:
          if (bVar34) {
LAB_0075ad4c:
            cVar2 = *pcVar18;
          }
          else {
            do {
              iVar4 = DAT_018dd954 + -1;
              bVar34 = (bool)hasExclusiveAccess(0x18dd954);
            } while (!bVar34);
            DAT_018dd954 = iVar4;
            if (local_b0 != 0) {
              thunk_FUN_016d3fb4(local_ac);
            }
            if (local_b8 == 3) goto LAB_0075ad4c;
            if (local_b8 == 0) {
              FUN_012848c0(local_b4);
              goto LAB_0075ad4c;
            }
            if (local_b8 == 1) {
              FUN_01283d28();
              cVar2 = *pcVar18;
            }
            else {
              FUN_01284358();
              cVar2 = *pcVar18;
            }
          }
          if (cVar2 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar34 = (bool)hasExclusiveAccess(pcVar18);
              if (bVar34) {
                *pcVar18 = '\0';
                goto LAB_0075a914;
              }
            } while (*pcVar18 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar18);
LAB_0075a914:
          uVar33 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar17 = (uint)((ulonglong)dVar36 >> 0x20);
          uVar11 = (int)uVar33 >> 0x1f;
          uVar33 = uVar11 >> 1 ^ uVar33;
          uVar26 = (int)uVar17 >> 0x1f;
          uVar17 = uVar26 >> 1 ^ uVar17;
          bVar34 = (((uint)((byte)((longlong)dVar36 >> 0x3f) & 1) << 0x1f | uVar26 >> 1) ^
                   SUB84(dVar36,0)) <
                   (((uint)((byte)((longlong)dVar39 >> 0x3f) & 1) << 0x1f | uVar11 >> 1) ^
                   SUB84(dVar39,0));
          uVar30 = uVar30 - 0xf0;
          uVar26 = uVar30;
          uVar11 = param_2;
          if ((int)(uVar17 - (uVar33 + bVar34)) < 0 !=
              (SBORROW4(uVar17,uVar33) != SBORROW4(uVar17 - uVar33,(uint)bVar34))) {
            uVar11 = param_2 + 1;
            uVar26 = param_3;
          }
          FUN_016dd1aa(uVar26 + param_2 * 0xf0,uVar15,0xf0);
          param_2 = uVar11;
        }
        if (uVar21 == uVar23) goto LAB_0075ae78;
        uVar30 = uVar30 - 0xf0;
        FUN_016dd1aa(uVar30 + param_2 * 0xf0,uVar15,0xf0);
        uVar15 = uVar15 + 0xf0;
        uVar21 = uVar23;
      } while( true );
    }
    goto LAB_0075bd64;
  }
LAB_0075a558:
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_0075bd64;
  local_1dc = param_2 >> 1;
  iVar4 = local_1dc * 0x10 - (param_2 >> 1);
  uVar21 = param_3 + iVar4 * 0x10;
  iVar4 = param_1 + iVar4 * 0x10;
  uVar20 = SUB84(in_d0,0);
  uVar15 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar23 = (int)uVar15 >> 0x1f;
  bVar3 = (byte)((longlong)in_d0 >> 0x3f);
  if (param_2 < 8) {
    FUN_016dd1aa(param_3,param_1,0xf0);
    FUN_016dd1aa(uVar21,iVar4,0xf0);
    local_1ec = 1;
    if (1 < local_1dc) goto LAB_0075b5dc;
  }
  else {
    FUN_0075c004(param_1,param_3);
    FUN_0075c004(iVar4,uVar21);
    local_1ec = 4;
    if (4 < local_1dc) {
LAB_0075b5dc:
      local_1e0 = local_1ec * -0xf0 + 0xf0;
      uVar30 = local_1ec;
      do {
        uVar11 = param_3 + uVar30 * 0xf0;
        FUN_016dd1aa(uVar11,param_1 + uVar30 * 0xf0,0xf0);
        iVar31 = *(int *)(uVar11 + 0xe4);
        iVar19 = iVar31 + 8;
        iVar7 = *(int *)(uVar11 - 0xc);
        FUN_0107d010(iVar19);
        uVar33 = uVar23 >> 1 ^ uVar15;
        FUN_0107d010(iVar7 + 8);
        uVar26 = uVar23 >> 1 ^ uVar15;
        bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20) <
                 (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20);
        if ((int)(uVar33 - (uVar26 + bVar34)) < 0 !=
            (SBORROW4(uVar33,uVar26) != SBORROW4(uVar33 - uVar26,(uint)bVar34))) {
          FUN_016dd1aa(auStack_1d0,uVar11,0xe4);
          uVar12 = *(undefined4 *)(uVar11 + 0xe8);
          uVar8 = *(undefined4 *)(uVar11 + 0xec);
          iVar7 = local_1e0;
          do {
            uVar26 = uVar11;
            uVar11 = uVar26 - 0xf0;
            FUN_016dd1aa(uVar26,uVar11,0xf0);
            if (iVar7 == 0) {
              uVar11 = param_3;
              break;
            }
            iVar25 = *(int *)(uVar26 - 0xfc);
            FUN_0107d010(iVar19);
            FUN_0107d010(iVar25 + 8);
            iVar7 = iVar7 + 0xf0;
            uVar33 = uVar23 >> 1 ^ uVar15;
            uVar17 = uVar23 >> 1 ^ uVar15;
            bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20) <
                     (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20);
          } while ((int)(uVar17 - (uVar33 + bVar34)) < 0 !=
                   (SBORROW4(uVar17,uVar33) != SBORROW4(uVar17 - uVar33,(uint)bVar34)));
          FUN_016dd1aa(uVar11,auStack_1d0,0xe4);
          *(int *)(uVar26 - 0xc) = iVar31;
          *(undefined4 *)(uVar26 - 8) = uVar12;
          *(undefined4 *)(uVar26 - 4) = uVar8;
        }
        uVar30 = uVar30 + 1;
        local_1e0 = local_1e0 + -0xf0;
      } while (uVar30 != local_1dc);
    }
  }
  if (local_1ec < param_2 - local_1dc) {
    iVar31 = local_1ec * 0xf0;
    local_1e4 = 0xf0;
    uVar30 = uVar21;
    do {
      iVar25 = uVar21 + local_1ec * 0xf0;
      FUN_016dd1aa(iVar25,iVar4 + local_1ec * 0xf0,0xf0);
      iVar7 = *(int *)(iVar25 + 0xe4);
      iVar29 = iVar7 + 8;
      iVar19 = *(int *)(iVar25 + -0xc);
      FUN_0107d010(iVar29);
      uVar26 = uVar23 >> 1 ^ uVar15;
      FUN_0107d010(iVar19 + 8);
      uVar11 = uVar23 >> 1 ^ uVar15;
      bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20) <
               (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20);
      if ((int)(uVar26 - (uVar11 + bVar34)) < 0 !=
          (SBORROW4(uVar26,uVar11) != SBORROW4(uVar26 - uVar11,(uint)bVar34))) {
        FUN_016dd1aa(auStack_1d0,iVar25,0xe4);
        uVar12 = *(undefined4 *)(iVar25 + 0xe8);
        uVar8 = *(undefined4 *)(iVar25 + 0xec);
        uVar11 = uVar30;
        iVar19 = local_1e4;
        do {
          iVar25 = uVar11 + iVar31;
          FUN_016dd1aa(iVar25,iVar25 + -0xf0,0xf0);
          if (iVar31 == iVar19) {
            uVar11 = uVar21;
            goto LAB_0075b7b0;
          }
          iVar24 = *(int *)(iVar25 + -0xfc);
          FUN_0107d010(iVar29);
          FUN_0107d010(iVar24 + 8);
          iVar19 = iVar19 + 0xf0;
          uVar11 = uVar11 - 0xf0;
          uVar33 = uVar23 >> 1 ^ uVar15;
          uVar26 = uVar23 >> 1 ^ uVar15;
          bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20) <
                   (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20);
        } while ((int)(uVar26 - (uVar33 + bVar34)) < 0 !=
                 (SBORROW4(uVar26,uVar33) != SBORROW4(uVar26 - uVar33,(uint)bVar34)));
        uVar11 = uVar11 + iVar31;
LAB_0075b7b0:
        FUN_016dd1aa(uVar11,auStack_1d0,0xe4);
        *(int *)(iVar25 + -0xc) = iVar7;
        *(undefined4 *)(iVar25 + -8) = uVar12;
        *(undefined4 *)(iVar25 + -4) = uVar8;
      }
      uVar30 = uVar30 + 0xf0;
      local_1ec = local_1ec + 1;
      local_1e4 = local_1e4 + -0xf0;
    } while (local_1ec != param_2 - local_1dc);
  }
  iVar31 = uVar21 - 0xf0;
  iVar4 = 0;
  local_1d4 = param_3 + param_2 * 0xf0 + -0xf0;
  do {
    iVar7 = *(int *)(param_3 + 0xe4);
    FUN_0107d010(*(int *)(uVar21 + 0xe4) + 8);
    FUN_0107d010(iVar7 + 8);
    uVar30 = uVar23 >> 1 ^ uVar15;
    uVar11 = uVar23 >> 1 ^ uVar15;
    bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20) <
             (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20);
    bVar35 = SBORROW4(uVar11,uVar30) != SBORROW4(uVar11 - uVar30,(uint)bVar34);
    bVar34 = (int)(uVar11 - (uVar30 + bVar34)) < 0;
    uVar11 = (uint)(bVar34 != bVar35);
    uVar30 = param_3;
    if (uVar11 != 0) {
      uVar30 = uVar21;
    }
    FUN_016dd1aa(param_1 + iVar4,uVar30,0xf0);
    iVar7 = *(int *)(iVar31 + 0xe4);
    FUN_0107d010(*(int *)(local_1d4 + 0xe4) + 8);
    FUN_0107d010(iVar7 + 8);
    param_3 = param_3 + (uint)(bVar34 == bVar35) * 0xf0;
    uVar21 = uVar21 + uVar11 * 0xf0;
    uVar30 = uVar23 >> 1 ^ uVar15;
    uVar11 = uVar23 >> 1 ^ uVar15;
    bVar34 = (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20) <
             (((uint)(bVar3 & 1) << 0x1f | uVar23 >> 1) ^ uVar20);
    bVar35 = SBORROW4(uVar11,uVar30) != SBORROW4(uVar11 - uVar30,(uint)bVar34);
    bVar34 = (int)(uVar11 - (uVar30 + bVar34)) < 0;
    iVar7 = local_1d4;
    if (bVar34 != bVar35) {
      iVar7 = iVar31;
    }
    FUN_016dd1aa((param_1 + param_2 * 0xf0 + -0xf0) - iVar4,iVar7,0xf0);
    iVar4 = iVar4 + 0xf0;
    iVar7 = 0;
    if (bVar34 != bVar35) {
      iVar7 = -1;
    }
    iVar19 = 0;
    if (bVar34 == bVar35) {
      iVar19 = -1;
    }
    iVar31 = iVar31 + iVar7 * 0xf0;
    local_1d4 = local_1d4 + iVar19 * 0xf0;
    local_1dc = local_1dc - 1;
  } while (local_1dc != 0);
  uVar20 = iVar31 + 0xf0;
  uVar23 = uVar21;
  if ((param_2 & 1) != 0) {
    bVar34 = uVar20 <= param_3;
    uVar23 = uVar21 + (uint)bVar34 * 0xf0;
    if (!bVar34) {
      uVar21 = param_3;
    }
    FUN_016dd1aa(param_1 + iVar4,uVar21,0xf0);
    param_2 = (uint)!bVar34 * 0xf;
    param_3 = param_3 + (uint)!bVar34 * 0xf0;
  }
  if (param_3 == uVar20) {
    param_2 = local_1d4 + 0xf0;
  }
  if (param_3 == uVar20 && uVar23 == param_2) {
    return;
  }
  FUN_00fb7254();
LAB_0075bd64:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x75bd64);
  (*pcVar1)();
LAB_0075ae78:
  FUN_016dd1aa(param_1,param_3,param_2 * 0xf0);
  iVar4 = uVar23 - param_2;
  if (iVar4 != 0) {
    iVar19 = (param_3 - 0xf0) + uVar23 * 0xf0;
    iVar7 = param_1 + param_2 * 0xf0;
    iVar31 = iVar4;
    do {
      FUN_016dd1aa(iVar7,iVar19,0xf0);
      iVar19 = iVar19 + -0xf0;
      iVar7 = iVar7 + 0xf0;
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
  }
  if (param_2 == 0) goto LAB_0075af20;
  if (uVar23 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_0075a528(param_1 + param_2 * 0xf0,iVar4,param_3,param_4);
  uVar23 = param_2;
  if (param_2 < 0x21) goto LAB_0075a558;
  goto LAB_0075a644;
LAB_0075af20:
  if (uVar23 <= param_4) {
    uVar21 = 0;
    uVar11 = param_3 + uVar23 * 0xf0;
    uVar15 = uVar20 * -0x11111111;
    uVar30 = param_1;
    do {
      for (; uVar30 < param_1 + uVar15 * 0xf0; uVar30 = uVar30 + 0xf0) {
        iVar31 = *(int *)(uVar30 + 0xe4);
        iVar4 = *(int *)(param_1 + uVar20 * 0x10 + 0xe4);
        uVar8 = *(undefined4 *)(iVar4 + 0xc);
        DataMemoryBarrier(0xb);
        iVar4 = *(int *)(iVar4 + 8);
        pcVar18 = (char *)(iVar4 + 8);
        if (*pcVar18 == '\0') {
          bVar34 = (bool)hasExclusiveAccess(pcVar18);
          if (!bVar34) goto LAB_0075b3f4;
          *pcVar18 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0075b3f4:
          FUN_01280da8(pcVar18);
        }
        dVar36 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        FUN_0128236c(pcVar18);
        puVar28 = *(undefined1 **)(iVar4 + 0x18);
        if (puVar28 != &DAT_3b9aca00) {
          uVar26 = *(uint *)(iVar4 + 0x14);
          iVar7 = *(int *)(iVar4 + 0x10);
          iVar4 = FUN_016e0392(1,&local_98);
          if (iVar4 == -1) {
            puVar9 = (undefined4 *)FUN_016d2bc8();
            local_cc = (undefined *)*puVar9;
            local_d0 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
          }
          if (999999999 < local_94) {
            local_d0 = 2;
            local_cc = &DAT_018aad2c;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
          }
          local_d8 = local_94;
          local_e0 = local_98;
          local_dc = local_98 >> 0x1f;
          local_98 = iVar7;
          local_94 = uVar26;
          local_90 = puVar28;
          FUN_015f3c24(&local_d0,&local_e0,&local_98);
          dVar38 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
          dVar39 = (double)FUN_01845f30(local_c8,puStack_c4);
          dVar39 = dVar38 / 1000000000.0 + dVar39;
          FUN_016d5578(SUB84(dVar39,0),(int)((ulonglong)dVar39 >> 0x20),0);
          FUN_016d5330(SUB84(dVar39 / -180.0,0));
          in_d0 = dVar39 / -180.0;
          if ((local_d0 & 1) != 0) {
            in_d0 = dVar37;
          }
          dVar36 = in_d0 * dVar36;
        }
        bVar34 = true;
        local_d0 = 0;
        ppuVar6 = ppuVar5;
        if (*(char *)(ppuVar5 + 0xd) != '\x01') {
          ppuVar6 = (undefined **)FUN_01284e64();
          if (ppuVar6 == (undefined **)0x0) {
            FUN_01283788(&local_98);
            FUN_012824e8(&local_d0);
            local_d0 = 1;
            bVar34 = false;
            local_c8 = local_94;
            puStack_c4 = local_90;
            local_c0 = uStack_8c;
            local_bc = local_88;
            local_b8 = iStack_84;
            local_b4 = uStack_80;
            local_b0 = iStack_7c;
            local_ac = local_78;
            local_a8 = uStack_74;
            uStack_a4 = uStack_70;
            uStack_a0 = uStack_6c;
            uStack_9c = uStack_68;
            ppuVar6 = &local_cc;
          }
        }
        puVar13 = ppuVar6[8];
        puVar16 = ppuVar6[9];
        iVar4 = (int)puVar16 * -4;
        puVar10 = puVar16;
        do {
          if (iVar4 == 0) goto LAB_0075b148;
          iVar7 = -4 - iVar4;
          iVar4 = iVar4 + 4;
          puVar10 = puVar10 + -1;
        } while (*(char **)(puVar13 + iVar7) != pcVar18);
        *(undefined4 *)(puVar13 + (int)puVar10 * 4) =
             *(undefined4 *)(puVar13 + (int)(puVar16 + -1) * 4);
        ppuVar6[9] = puVar16 + -1;
LAB_0075b148:
        if (bVar34) {
LAB_0075b1b0:
          cVar2 = *pcVar18;
        }
        else {
          do {
            iVar4 = DAT_018dd954 + -1;
            bVar34 = (bool)hasExclusiveAccess(0x18dd954);
          } while (!bVar34);
          DAT_018dd954 = iVar4;
          if (local_b0 != 0) {
            thunk_FUN_016d3fb4(local_ac);
          }
          if (local_b8 == 3) goto LAB_0075b1b0;
          if (local_b8 == 0) {
            FUN_012848c0(local_b4);
            goto LAB_0075b1b0;
          }
          if (local_b8 == 1) {
            FUN_01283d28();
            cVar2 = *pcVar18;
          }
          else {
            FUN_01284358();
            cVar2 = *pcVar18;
          }
        }
        if (cVar2 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar34 = (bool)hasExclusiveAccess(pcVar18);
            if (bVar34) {
              *pcVar18 = '\0';
              goto LAB_0075b1e4;
            }
          } while (*pcVar18 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar18);
LAB_0075b1e4:
        uVar8 = *(undefined4 *)(iVar31 + 0xc);
        DataMemoryBarrier(0xb);
        iVar4 = *(int *)(iVar31 + 8);
        pcVar18 = (char *)(iVar4 + 8);
        if (*pcVar18 == '\0') {
          bVar34 = (bool)hasExclusiveAccess(pcVar18);
          if (!bVar34) goto LAB_0075b404;
          *pcVar18 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0075b404:
          FUN_01280da8(pcVar18);
        }
        dVar39 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        FUN_0128236c(pcVar18);
        puVar28 = *(undefined1 **)(iVar4 + 0x18);
        if (puVar28 != &DAT_3b9aca00) {
          uVar26 = *(uint *)(iVar4 + 0x14);
          iVar31 = *(int *)(iVar4 + 0x10);
          iVar4 = FUN_016e0392(1,&local_98);
          if (iVar4 == -1) {
            puVar9 = (undefined4 *)FUN_016d2bc8();
            local_cc = (undefined *)*puVar9;
            local_d0 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
          }
          if (999999999 < local_94) {
            local_d0 = 2;
            local_cc = &DAT_018aad2c;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_d0,&DAT_018ab298);
          }
          local_d8 = local_94;
          local_e0 = local_98;
          local_dc = local_98 >> 0x1f;
          local_98 = iVar31;
          local_94 = uVar26;
          local_90 = puVar28;
          FUN_015f3c24(&local_d0,&local_e0,&local_98);
          dVar40 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
          dVar38 = (double)FUN_01845f30(local_c8,puStack_c4);
          dVar38 = dVar40 / 1000000000.0 + dVar38;
          FUN_016d5578(SUB84(dVar38,0),(int)((ulonglong)dVar38 >> 0x20),0);
          FUN_016d5330(SUB84(dVar38 / -180.0,0));
          in_d0 = dVar38 / -180.0;
          if ((local_d0 & 1) != 0) {
            in_d0 = dVar37;
          }
          dVar39 = in_d0 * dVar39;
        }
        bVar34 = true;
        local_d0 = 0;
        ppuVar6 = ppuVar5;
        if (*(char *)(ppuVar5 + 0xd) != '\x01') {
          ppuVar6 = (undefined **)FUN_01284e64();
          if (ppuVar6 == (undefined **)0x0) {
            FUN_01283788(&local_98);
            FUN_012824e8(&local_d0);
            local_d0 = 1;
            bVar34 = false;
            local_c8 = local_94;
            puStack_c4 = local_90;
            local_c0 = uStack_8c;
            local_bc = local_88;
            local_b8 = iStack_84;
            local_b4 = uStack_80;
            local_b0 = iStack_7c;
            local_ac = local_78;
            local_a8 = uStack_74;
            uStack_a4 = uStack_70;
            uStack_a0 = uStack_6c;
            uStack_9c = uStack_68;
            ppuVar6 = &local_cc;
          }
        }
        puVar13 = ppuVar6[8];
        puVar16 = ppuVar6[9];
        iVar4 = (int)puVar16 * -4;
        puVar10 = puVar16;
        do {
          if (iVar4 == 0) goto LAB_0075b330;
          iVar31 = -4 - iVar4;
          iVar4 = iVar4 + 4;
          puVar10 = puVar10 + -1;
        } while (*(char **)(puVar13 + iVar31) != pcVar18);
        *(undefined4 *)(puVar13 + (int)puVar10 * 4) =
             *(undefined4 *)(puVar13 + (int)(puVar16 + -1) * 4);
        ppuVar6[9] = puVar16 + -1;
LAB_0075b330:
        if (bVar34) {
LAB_0075b3b0:
          cVar2 = *pcVar18;
        }
        else {
          do {
            iVar4 = DAT_018dd954 + -1;
            bVar34 = (bool)hasExclusiveAccess(0x18dd954);
          } while (!bVar34);
          DAT_018dd954 = iVar4;
          if (local_b0 != 0) {
            thunk_FUN_016d3fb4(local_ac);
          }
          if (local_b8 == 3) goto LAB_0075b3b0;
          if (local_b8 == 0) {
            FUN_012848c0(local_b4);
            goto LAB_0075b3b0;
          }
          if (local_b8 == 1) {
            FUN_01283d28();
            cVar2 = *pcVar18;
          }
          else {
            FUN_01284358();
            cVar2 = *pcVar18;
          }
        }
        if (cVar2 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar34 = (bool)hasExclusiveAccess(pcVar18);
            if (bVar34) {
              *pcVar18 = '\0';
              goto LAB_0075af78;
            }
          } while (*pcVar18 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar18);
LAB_0075af78:
        uVar17 = (uint)((ulonglong)dVar39 >> 0x20);
        uVar14 = (uint)((ulonglong)dVar36 >> 0x20);
        uVar26 = (int)uVar17 >> 0x1f;
        uVar17 = uVar26 >> 1 ^ uVar17;
        uVar33 = (int)uVar14 >> 0x1f;
        uVar14 = uVar33 >> 1 ^ uVar14;
        bVar34 = (((uint)((byte)((longlong)dVar36 >> 0x3f) & 1) << 0x1f | uVar33 >> 1) ^
                 SUB84(dVar36,0)) <
                 (((uint)((byte)((longlong)dVar39 >> 0x3f) & 1) << 0x1f | uVar26 >> 1) ^
                 SUB84(dVar39,0));
        uVar11 = uVar11 - 0xf0;
        uVar33 = uVar21;
        uVar26 = uVar11;
        if ((int)(uVar14 - (uVar17 + bVar34)) < 0 ==
            (SBORROW4(uVar14,uVar17) != SBORROW4(uVar14 - uVar17,(uint)bVar34))) {
          uVar33 = uVar21 + 1;
          uVar26 = param_3;
        }
        FUN_016dd1aa(uVar26 + uVar21 * 0xf0,uVar30,0xf0);
        uVar21 = uVar33;
      }
      if (uVar15 == uVar23) goto LAB_0075b4f0;
      FUN_016dd1aa(param_3 + uVar21 * 0xf0,uVar30,0xf0);
      uVar30 = uVar30 + 0xf0;
      uVar21 = uVar21 + 1;
      uVar11 = uVar11 - 0xf0;
      uVar15 = uVar23;
    } while( true );
  }
  goto LAB_0075bd64;
LAB_0075b4f0:
  FUN_016dd1aa(param_1,param_3,uVar21 * 0xf0);
  param_2 = uVar23 - uVar21;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar21 * 0xf0;
  iVar4 = (param_3 - 0xf0) + uVar23 * 0xf0;
  uVar20 = param_2;
  uVar15 = param_1;
  do {
    FUN_016dd1aa(uVar15,iVar4,0xf0);
    iVar4 = iVar4 + -0xf0;
    uVar15 = uVar15 + 0xf0;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
  if (uVar23 < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar21,uVar23,uVar23,&DAT_018af348);
  }
  local_20c = 0;
  if (param_2 < 0x21) goto LAB_0075a558;
  goto LAB_0075a640;
}

