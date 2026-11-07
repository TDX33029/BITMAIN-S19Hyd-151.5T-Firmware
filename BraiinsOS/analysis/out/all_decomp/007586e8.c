// FUN_007586e8 @ 007586e8 size=1872 calls_out=19 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0075899c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_007586e8(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined *puVar9;
  int extraout_r2;
  undefined *puVar10;
  int extraout_r3;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  uint in_fpscr;
  double in_d0;
  uint extraout_s1;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined1 auStack_1c8 [232];
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
  
  uVar29 = thunk_FUN_016de0ee(param_1,param_2,0x1c4,param_1);
  ppuVar2 = (undefined **)((int)uVar29 + extraout_r2);
  iVar14 = extraout_r3 + 0xf0;
  do {
    iVar17 = *(int *)(iVar14 + -0xc);
    FUN_0107d010(*(int *)(iVar14 + 0xe4) + 8);
    extraout_s1 = (uint)((ulonglong)in_d0 >> 0x20);
    FUN_0107d010(iVar17 + 8);
    uVar23 = (int)extraout_s1 >> 0x1f;
    bVar1 = (byte)((longlong)in_d0 >> 0x3f);
    uVar8 = uVar23 >> 1 ^ extraout_s1;
    uVar11 = uVar23 >> 1 ^ extraout_s1;
    bVar24 = (((uint)(bVar1 & 1) << 0x1f | uVar23 >> 1) ^ SUB84(in_d0,0)) <
             (((uint)(bVar1 & 1) << 0x1f | uVar23 >> 1) ^ SUB84(in_d0,0));
    if ((int)(uVar8 - (uVar11 + bVar24)) < 0 !=
        (SBORROW4(uVar8,uVar11) != SBORROW4(uVar8 - uVar11,(uint)bVar24))) {
      FUN_016dd1aa(auStack_1c8,iVar14,0xe4);
      iVar3 = *(int *)(iVar14 + 0xe4);
      uVar4 = *(undefined4 *)(iVar14 + 0xe8);
      uVar5 = *(undefined4 *)(iVar14 + 0xec);
      iVar17 = iVar14;
      do {
        iVar22 = iVar17;
        iVar17 = iVar22 + -0xf0;
        FUN_016dd1aa(iVar22,iVar17,0xf0);
        if (iVar17 == extraout_r3) {
          iVar17 = extraout_r3;
          break;
        }
        iVar18 = *(int *)(iVar22 + -0xfc);
        uVar15 = *(undefined4 *)(iVar3 + 0xc);
        DataMemoryBarrier(0xb);
        iVar19 = *(int *)(iVar3 + 8);
        pcVar21 = (char *)(iVar19 + 8);
        if (*pcVar21 == '\0') {
          bVar24 = (bool)hasExclusiveAccess(pcVar21);
          if (!bVar24) goto LAB_007588e4;
          *pcVar21 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_007588e4:
          FUN_01280da8(pcVar21);
        }
        FUN_0128236c(pcVar21);
        puVar16 = *(undefined1 **)(iVar19 + 0x18);
        dVar25 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
        if (puVar16 != &DAT_3b9aca00) {
          uVar23 = *(uint *)(iVar19 + 0x14);
          iVar20 = *(int *)(iVar19 + 0x10);
          iVar19 = FUN_016e0392(1,&local_98);
          if (iVar19 == -1) {
            puVar7 = (undefined4 *)FUN_016d2bc8();
            local_cc = (undefined *)*puVar7;
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
          local_98 = iVar20;
          local_94 = uVar23;
          local_90 = puVar16;
          FUN_015f3c24(&local_d0,&local_e0,&local_98);
          dVar26 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
          dVar27 = (double)FUN_01845f30(local_c8,puStack_c4);
          dVar27 = dVar26 / 1000000000.0 + dVar27;
          FUN_016d5578(SUB84(dVar27,0),(int)((ulonglong)dVar27 >> 0x20),0);
          FUN_016d5330(SUB84(dVar27 / -180.0,0));
          in_d0 = dVar27 / -180.0;
          if ((local_d0 & 1) != 0) {
            in_d0 = 0.9944598480048967;
          }
          dVar25 = in_d0 * dVar25;
        }
        bVar24 = true;
        local_d0 = 0;
        ppuVar6 = ppuVar2;
        if ((*(char *)(ppuVar2 + 0xd) != '\x01') &&
           (ppuVar6 = (undefined **)FUN_01284e64(), ppuVar6 == (undefined **)0x0)) {
          FUN_01283788(&local_98);
          local_d0 = 1;
          bVar24 = false;
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
        puVar10 = ppuVar6[8];
        puVar13 = ppuVar6[9];
        iVar19 = (int)puVar13 * -4;
        puVar9 = puVar13;
        do {
          if (iVar19 == 0) goto LAB_00758a0c;
          iVar20 = -4 - iVar19;
          iVar19 = iVar19 + 4;
          puVar9 = puVar9 + -1;
        } while (*(char **)(puVar10 + iVar20) != pcVar21);
        *(undefined4 *)(puVar10 + (int)puVar9 * 4) =
             *(undefined4 *)(puVar10 + (int)(puVar13 + -1) * 4);
        ppuVar6[9] = puVar13 + -1;
LAB_00758a0c:
        if (!bVar24) {
          do {
            iVar19 = DAT_018dd954 + -1;
            bVar24 = (bool)hasExclusiveAccess(0x18dd954);
          } while (!bVar24);
          DAT_018dd954 = iVar19;
          if (local_b0 != 0) {
            thunk_FUN_016d3fb4(local_ac);
          }
          if (local_b8 != 3) {
            if (local_b8 == 0) {
              FUN_012848c0(local_b4);
            }
            else if (local_b8 == 1) {
              FUN_01283d28();
            }
            else {
              FUN_01284358();
            }
          }
        }
        if (*pcVar21 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar24 = (bool)hasExclusiveAccess(pcVar21);
            if (bVar24) {
              *pcVar21 = '\0';
              goto LAB_00758ab4;
            }
          } while (*pcVar21 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar21);
LAB_00758ab4:
        uVar15 = *(undefined4 *)(iVar18 + 0xc);
        DataMemoryBarrier(0xb);
        iVar18 = *(int *)(iVar18 + 8);
        pcVar21 = (char *)(iVar18 + 8);
        if (*pcVar21 == '\0') {
          bVar24 = (bool)hasExclusiveAccess(pcVar21);
          if (!bVar24) goto LAB_00758b00;
          *pcVar21 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00758b00:
          FUN_01280da8(pcVar21);
        }
        FUN_0128236c(pcVar21);
        puVar16 = *(undefined1 **)(iVar18 + 0x18);
        dVar27 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
        if (puVar16 != &DAT_3b9aca00) {
          iVar19 = *(int *)(iVar18 + 0x10);
          uVar23 = *(uint *)(iVar18 + 0x14);
          iVar18 = FUN_016e0392(1,&local_98);
          if (iVar18 == -1) {
            puVar7 = (undefined4 *)FUN_016d2bc8();
            local_cc = (undefined *)*puVar7;
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
          local_98 = iVar19;
          local_94 = uVar23;
          local_90 = puVar16;
          FUN_015f3c24(&local_d0,&local_e0,&local_98);
          dVar28 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
          dVar26 = (double)FUN_01845f30(local_c8,puStack_c4);
          dVar26 = dVar28 / 1000000000.0 + dVar26;
          FUN_016d5578(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20),0);
          FUN_016d5330(SUB84(dVar26 / -180.0,0));
          in_d0 = dVar26 / -180.0;
          if ((local_d0 & 1) != 0) {
            in_d0 = 0.9944598480048967;
          }
          dVar27 = in_d0 * dVar27;
        }
        bVar24 = true;
        local_d0 = 0;
        ppuVar6 = ppuVar2;
        if ((*(char *)(ppuVar2 + 0xd) != '\x01') &&
           (ppuVar6 = (undefined **)FUN_01284e64(), ppuVar6 == (undefined **)0x0)) {
          FUN_01283788(&local_98);
          local_d0 = 1;
          bVar24 = false;
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
        puVar10 = ppuVar6[8];
        puVar13 = ppuVar6[9];
        iVar18 = (int)puVar13 * -4;
        puVar9 = puVar13;
        do {
          if (iVar18 == 0) goto LAB_00758c20;
          iVar19 = -4 - iVar18;
          iVar18 = iVar18 + 4;
          puVar9 = puVar9 + -1;
        } while (*(char **)(puVar10 + iVar19) != pcVar21);
        *(undefined4 *)(puVar10 + (int)puVar9 * 4) =
             *(undefined4 *)(puVar10 + (int)(puVar13 + -1) * 4);
        ppuVar6[9] = puVar13 + -1;
LAB_00758c20:
        if (!bVar24) {
          do {
            iVar18 = DAT_018dd954 + -1;
            bVar24 = (bool)hasExclusiveAccess(0x18dd954);
          } while (!bVar24);
          DAT_018dd954 = iVar18;
          if (local_b0 != 0) {
            thunk_FUN_016d3fb4(local_ac);
          }
          if (local_b8 != 3) {
            if (local_b8 == 0) {
              FUN_012848c0(local_b4);
            }
            else if (local_b8 == 1) {
              FUN_01283d28();
            }
            else {
              FUN_01284358();
            }
          }
        }
        if (*pcVar21 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar24 = (bool)hasExclusiveAccess(pcVar21);
            if (bVar24) {
              *pcVar21 = '\0';
              goto LAB_00758844;
            }
          } while (*pcVar21 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar21);
LAB_00758844:
        uVar11 = (uint)((ulonglong)dVar27 >> 0x20);
        uVar12 = (uint)((ulonglong)dVar25 >> 0x20);
        uVar23 = (int)uVar11 >> 0x1f;
        uVar11 = uVar23 >> 1 ^ uVar11;
        uVar8 = (int)uVar12 >> 0x1f;
        uVar12 = uVar8 >> 1 ^ uVar12;
        bVar24 = (((uint)((byte)((longlong)dVar25 >> 0x3f) & 1) << 0x1f | uVar8 >> 1) ^
                 SUB84(dVar25,0)) <
                 (((uint)((byte)((longlong)dVar27 >> 0x3f) & 1) << 0x1f | uVar23 >> 1) ^
                 SUB84(dVar27,0));
      } while ((int)(uVar12 - (uVar11 + bVar24)) < 0 !=
               (SBORROW4(uVar12,uVar11) != SBORROW4(uVar12 - uVar11,(uint)bVar24)));
      FUN_016dd1aa(iVar17,auStack_1c8,0xe4);
      *(int *)(iVar22 + -0xc) = iVar3;
      *(undefined4 *)(iVar22 + -8) = uVar4;
      *(undefined4 *)(iVar22 + -4) = uVar5;
    }
    iVar14 = iVar14 + 0xf0;
    if (iVar14 == extraout_r3 + (int)((ulonglong)uVar29 >> 0x20) * 0xf0) {
      return;
    }
  } while( true );
}

