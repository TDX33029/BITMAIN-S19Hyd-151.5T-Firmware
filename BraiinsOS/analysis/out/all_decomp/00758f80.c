// FUN_00758f80 @ 00758f80 size=4960 calls_out=21 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00759c08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00758f80(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  uint in_fpscr;
  uint extraout_s0;
  double in_d0;
  uint extraout_s1;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  uint local_26c;
  int local_240;
  int local_23c;
  int local_238;
  uint local_230;
  uint local_22c [66];
  byte abStack_123 [67];
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
  
  uVar40 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar40 & 0xffffffff);
  uVar3 = uVar40 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar40 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar3 = uVar40;
  }
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar19 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar19) + (param_2 >> iVar19) >> 1;
  }
  uVar41 = thunk_FUN_016de0ee(uVar6,0x1c4);
  ppuVar7 = (undefined **)((int)uVar41 + (int)((ulonglong)uVar41 >> 0x20));
  uVar31 = 0;
  uVar30 = 0;
  dVar36 = 0.9944598480048967;
  uVar27 = 1;
  do {
    uVar13 = 0;
    local_26c = 1;
    if (uVar31 < param_2) {
      local_26c = param_2 - uVar31;
      iVar19 = param_1 + uVar31 * 0xf0;
      if (local_26c < uVar6) {
LAB_007590f4:
        if (param_5 == 0) {
          if (uVar6 <= local_26c) {
            local_26c = uVar6;
          }
          local_26c = local_26c << 1;
        }
        else {
          if (0x1f < local_26c) {
            local_26c = 0x20;
          }
          FUN_0075a528(iVar19,local_26c,param_3);
          local_26c = local_26c << 1 | 1;
        }
      }
      else {
        if (local_26c < 2) {
          local_230 = local_26c;
        }
        else {
          iVar22 = *(int *)(iVar19 + 0x1d4);
          iVar29 = *(int *)(iVar19 + 0xe4);
          FUN_0107d010(iVar22 + 8);
          extraout_s1 = (uint)((ulonglong)in_d0 >> 0x20);
          extraout_s0 = SUB84(in_d0,0);
          FUN_0107d010(iVar29 + 8);
          uVar13 = (int)extraout_s1 >> 0x1f;
          bVar2 = (byte)((longlong)in_d0 >> 0x3f);
          uVar23 = uVar13 >> 1 ^ extraout_s1;
          uVar14 = ((uint)(bVar2 & 1) << 0x1f | uVar13 >> 1) ^ extraout_s0;
          uVar15 = ((uint)(bVar2 & 1) << 0x1f | uVar13 >> 1) ^ extraout_s0;
          uVar11 = uVar13 >> 1 ^ extraout_s1;
          if ((int)(uVar23 - (uVar11 + (uVar14 < uVar15))) < 0 ==
              (SBORROW4(uVar23,uVar11) != SBORROW4(uVar23 - uVar11,(uint)(uVar14 < uVar15)))) {
            local_230 = 2;
            if (local_26c != 2) {
              local_230 = 2;
              piVar10 = (int *)(param_1 + 0x2c4 + uVar31 * 0xf0);
              do {
                iVar29 = *piVar10;
                FUN_0107d010(iVar29 + 8);
                FUN_0107d010(iVar22 + 8);
                uVar32 = uVar13 >> 1 ^ extraout_s1;
                uVar18 = uVar13 >> 1 ^ extraout_s1;
                bVar33 = (((uint)(bVar2 & 1) << 0x1f | uVar13 >> 1) ^ extraout_s0) <
                         (((uint)(bVar2 & 1) << 0x1f | uVar13 >> 1) ^ extraout_s0);
                if ((int)(uVar32 - (uVar18 + bVar33)) < 0 !=
                    (SBORROW4(uVar32,uVar18) != SBORROW4(uVar32 - uVar18,(uint)bVar33)))
                goto LAB_00759330;
                local_230 = local_230 + 1;
                piVar10 = piVar10 + 0x3c;
                iVar22 = iVar29;
              } while (local_26c != local_230);
              goto LAB_00759320;
            }
          }
          else if (local_26c == 2) {
            local_230 = 2;
            uVar13 = 1;
LAB_0075936c:
            uVar14 = 0;
            iVar22 = param_1 + -0xf0 + uVar31 * 0xf0 + local_230 * 0xf0;
            do {
              iVar29 = 0;
              do {
                uVar20 = *(undefined4 *)(iVar19 + iVar29 * -4);
                *(undefined4 *)(iVar19 + iVar29 * -4) = *(undefined4 *)(iVar22 + iVar29 * -4);
                *(undefined4 *)(iVar22 + iVar29 * -4) = uVar20;
                bVar33 = iVar29 != -0x3b;
                iVar29 = iVar29 + -1;
              } while (bVar33);
              uVar14 = uVar14 + 1;
              iVar19 = iVar19 + 0xf0;
              iVar22 = iVar22 + -0xf0;
            } while (uVar14 != uVar13);
          }
          else {
            local_230 = 2;
            piVar10 = (int *)(param_1 + 0x2c4 + uVar31 * 0xf0);
            do {
              iVar29 = *piVar10;
              FUN_0107d010(iVar29 + 8);
              FUN_0107d010(iVar22 + 8);
              uVar32 = uVar13 >> 1 ^ extraout_s1;
              uVar18 = uVar13 >> 1 ^ extraout_s1;
              bVar33 = (((uint)(bVar2 & 1) << 0x1f | uVar13 >> 1) ^ extraout_s0) <
                       (((uint)(bVar2 & 1) << 0x1f | uVar13 >> 1) ^ extraout_s0);
              if ((int)(uVar32 - (uVar18 + bVar33)) < 0 ==
                  (SBORROW4(uVar32,uVar18) != SBORROW4(uVar32 - uVar18,(uint)bVar33)))
              goto LAB_00759330;
              local_230 = local_230 + 1;
              piVar10 = piVar10 + 0x3c;
              iVar22 = iVar29;
            } while (local_26c != local_230);
LAB_00759320:
            local_230 = local_26c;
LAB_00759330:
            if (local_230 < uVar6) goto LAB_007590f4;
            if ((int)(uVar23 - (uVar11 + (uVar14 < uVar15))) < 0 !=
                (SBORROW4(uVar23,uVar11) != SBORROW4(uVar23 - uVar11,(uint)(uVar14 < uVar15)))) {
              uVar13 = local_230 >> 1;
              if (uVar13 != 0) goto LAB_0075936c;
              local_230 = 1;
            }
          }
        }
        local_26c = local_230 << 1 | 1;
      }
      uVar13 = uVar31 - (uVar27 >> 1);
      uVar14 = uVar31 + (local_26c >> 1);
      uVar15 = uVar14 + uVar31;
      lVar1 = (uVar3 & 0xffffffff) * (ulonglong)uVar15;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar13,uVar31),uVar13 + uVar31);
      uVar14 = (uint)CARRY4(uVar14,uVar31) * (int)uVar3 +
               uVar15 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar13 = LZCOUNT((uint)lVar1 ^ (uint)lVar4) + 0x20;
      if (uVar14 != 0) {
        uVar13 = LZCOUNT(uVar14);
      }
    }
    if (1 < uVar30) {
      iVar19 = param_1 + uVar31 * 0xf0;
      do {
        while( true ) {
          uVar14 = uVar30 - 1;
          if (abStack_123[uVar30] < uVar13) goto LAB_0075a0b0;
          uVar23 = local_22c[uVar14];
          uVar15 = uVar23 >> 1;
          uVar11 = uVar15 + (uVar27 >> 1);
          uVar30 = uVar14;
          if ((uVar11 <= param_4) && (((uVar23 | uVar27) & 1) == 0)) break;
          iVar22 = param_1 + (uVar31 - uVar11) * 0xf0;
          if ((uVar23 & 1) == 0) {
            FUN_0075a528(iVar22,uVar15,param_3);
          }
          if ((uVar27 & 1) == 0) {
            FUN_0075a528(iVar22 + uVar15 * 0xf0,uVar27 >> 1,param_3);
          }
          uVar18 = uVar27 >> 1;
          if (1 < uVar23 && 1 < uVar27) {
            uVar27 = uVar15;
            if (uVar18 < uVar15) {
              uVar27 = uVar18;
            }
            if (uVar27 <= param_4) {
              local_230 = iVar22 + uVar15 * 0xf0;
              iVar29 = iVar22;
              if (uVar18 < uVar15) {
                iVar29 = local_230;
              }
              FUN_016dd1aa(param_3,iVar29,uVar27 * 0xf0);
              local_23c = param_3 + uVar27 * 0xf0;
              iVar29 = param_3;
              if (uVar18 < uVar15) {
                local_240 = iVar19;
                do {
                  iVar28 = *(int *)(local_230 + -0xc);
                  uVar20 = *(undefined4 *)(*(int *)(local_23c + -0xc) + 0xc);
                  DataMemoryBarrier(0xb);
                  iVar24 = *(int *)(*(int *)(local_23c + -0xc) + 8);
                  pcVar26 = (char *)(iVar24 + 8);
                  if (*pcVar26 == '\0') {
                    bVar33 = (bool)hasExclusiveAccess(pcVar26);
                    if (!bVar33) goto LAB_00759608;
                    *pcVar26 = '\x01';
                    DataMemoryBarrier(0xb);
                  }
                  else {
                    ClearExclusiveLocal();
LAB_00759608:
                    FUN_01280da8(pcVar26);
                  }
                  FUN_0128236c(pcVar26);
                  puVar21 = *(undefined1 **)(iVar24 + 0x18);
                  dVar35 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
                  if (puVar21 != &DAT_3b9aca00) {
                    uVar27 = *(uint *)(iVar24 + 0x14);
                    iVar25 = *(int *)(iVar24 + 0x10);
                    iVar24 = FUN_016e0392(1,&local_98);
                    if (iVar24 == -1) {
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
                    local_98 = iVar25;
                    local_94 = uVar27;
                    local_90 = puVar21;
                    FUN_015f3c24(&local_d0,&local_e0,&local_98);
                    dVar37 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
                    dVar38 = (double)FUN_01845f30(local_c8,puStack_c4);
                    dVar38 = dVar37 / 1000000000.0 + dVar38;
                    FUN_016d5578(SUB84(dVar38,0),(int)((ulonglong)dVar38 >> 0x20),0);
                    FUN_016d5330(SUB84(dVar38 / -180.0,0));
                    in_d0 = dVar38 / -180.0;
                    if ((local_d0 & 1) != 0) {
                      in_d0 = dVar36;
                    }
                    dVar35 = in_d0 * dVar35;
                  }
                  bVar33 = true;
                  local_d0 = 0;
                  ppuVar8 = ppuVar7;
                  if (*(char *)(ppuVar7 + 0xd) != '\x01') {
                    ppuVar8 = (undefined **)FUN_01284e64();
                    if (ppuVar8 == (undefined **)0x0) {
                      FUN_01283788(&local_98);
                      local_d0 = 1;
                      bVar33 = false;
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
                      ppuVar8 = &local_cc;
                    }
                  }
                  puVar16 = ppuVar8[8];
                  puVar17 = ppuVar8[9];
                  local_240 = local_240 + -0xf0;
                  iVar24 = (int)puVar17 * -4;
                  iVar25 = local_23c + -0xf0;
                  puVar12 = puVar17;
                  do {
                    if (iVar24 == 0) goto LAB_0075974c;
                    iVar5 = -4 - iVar24;
                    iVar24 = iVar24 + 4;
                    puVar12 = puVar12 + -1;
                  } while (*(char **)(puVar16 + iVar5) != pcVar26);
                  *(undefined4 *)(puVar16 + (int)puVar12 * 4) =
                       *(undefined4 *)(puVar16 + (int)(puVar17 + -1) * 4);
                  ppuVar8[9] = puVar17 + -1;
LAB_0075974c:
                  if (!bVar33) {
                    do {
                      iVar24 = DAT_018dd954 + -1;
                      bVar33 = (bool)hasExclusiveAccess(0x18dd954);
                    } while (!bVar33);
                    DAT_018dd954 = iVar24;
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
                  if (*pcVar26 == '\x01') {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar33 = (bool)hasExclusiveAccess(pcVar26);
                      if (bVar33) {
                        *pcVar26 = '\0';
                        goto LAB_007597ec;
                      }
                    } while (*pcVar26 == '\x01');
                  }
                  ClearExclusiveLocal();
                  FUN_01280a5c(pcVar26);
LAB_007597ec:
                  uVar20 = *(undefined4 *)(iVar28 + 0xc);
                  DataMemoryBarrier(0xb);
                  iVar24 = *(int *)(iVar28 + 8);
                  pcVar26 = (char *)(iVar24 + 8);
                  if (*pcVar26 == '\0') {
                    bVar33 = (bool)hasExclusiveAccess(pcVar26);
                    if (!bVar33) goto LAB_00759820;
                    *pcVar26 = '\x01';
                    DataMemoryBarrier(0xb);
                  }
                  else {
                    ClearExclusiveLocal();
LAB_00759820:
                    FUN_01280da8(pcVar26);
                  }
                  FUN_0128236c(pcVar26);
                  puVar21 = *(undefined1 **)(iVar24 + 0x18);
                  dVar38 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
                  if (puVar21 != &DAT_3b9aca00) {
                    uVar27 = *(uint *)(iVar24 + 0x14);
                    iVar28 = *(int *)(iVar24 + 0x10);
                    iVar24 = FUN_016e0392(1,&local_98);
                    if (iVar24 == -1) {
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
                    local_98 = iVar28;
                    local_94 = uVar27;
                    local_90 = puVar21;
                    FUN_015f3c24(&local_d0,&local_e0,&local_98);
                    dVar39 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
                    dVar37 = (double)FUN_01845f30(local_c8,puStack_c4);
                    dVar37 = dVar39 / 1000000000.0 + dVar37;
                    FUN_016d5578(SUB84(dVar37,0),(int)((ulonglong)dVar37 >> 0x20),0);
                    FUN_016d5330(SUB84(dVar37 / -180.0,0));
                    in_d0 = dVar37 / -180.0;
                    if ((local_d0 & 1) != 0) {
                      in_d0 = dVar36;
                    }
                    dVar38 = in_d0 * dVar38;
                  }
                  bVar33 = true;
                  local_d0 = 0;
                  ppuVar8 = ppuVar7;
                  if (*(char *)(ppuVar7 + 0xd) != '\x01') {
                    ppuVar8 = (undefined **)FUN_01284e64();
                    if (ppuVar8 == (undefined **)0x0) {
                      FUN_01283788(&local_98);
                      local_d0 = 1;
                      bVar33 = false;
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
                      ppuVar8 = &local_cc;
                    }
                  }
                  puVar16 = ppuVar8[8];
                  puVar17 = ppuVar8[9];
                  iVar24 = (int)puVar17 * -4;
                  puVar12 = puVar17;
                  do {
                    if (iVar24 == 0) goto LAB_00759940;
                    iVar28 = -4 - iVar24;
                    iVar24 = iVar24 + 4;
                    puVar12 = puVar12 + -1;
                  } while (*(char **)(puVar16 + iVar28) != pcVar26);
                  *(undefined4 *)(puVar16 + (int)puVar12 * 4) =
                       *(undefined4 *)(puVar16 + (int)(puVar17 + -1) * 4);
                  ppuVar8[9] = puVar17 + -1;
LAB_00759940:
                  if (!bVar33) {
                    do {
                      iVar24 = DAT_018dd954 + -1;
                      bVar33 = (bool)hasExclusiveAccess(0x18dd954);
                    } while (!bVar33);
                    DAT_018dd954 = iVar24;
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
                  if (*pcVar26 == '\x01') {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar33 = (bool)hasExclusiveAccess(pcVar26);
                      if (bVar33) {
                        *pcVar26 = '\0';
                        goto LAB_007599e0;
                      }
                    } while (*pcVar26 == '\x01');
                  }
                  ClearExclusiveLocal();
                  FUN_01280a5c(pcVar26);
LAB_007599e0:
                  uVar23 = (uint)((ulonglong)dVar38 >> 0x20);
                  uVar18 = (uint)((ulonglong)dVar35 >> 0x20);
                  uVar27 = (int)uVar23 >> 0x1f;
                  uVar23 = uVar27 >> 1 ^ uVar23;
                  uVar15 = (int)uVar18 >> 0x1f;
                  uVar18 = uVar15 >> 1 ^ uVar18;
                  bVar33 = (((uint)((byte)((longlong)dVar35 >> 0x3f) & 1) << 0x1f | uVar15 >> 1) ^
                           SUB84(dVar35,0)) <
                           (((uint)((byte)((longlong)dVar38 >> 0x3f) & 1) << 0x1f | uVar27 >> 1) ^
                           SUB84(dVar38,0));
                  bVar34 = SBORROW4(uVar18,uVar23) != SBORROW4(uVar18 - uVar23,(uint)bVar33);
                  bVar33 = (int)(uVar18 - (uVar23 + bVar33)) < 0;
                  uVar27 = (uint)(bVar33 != bVar34);
                  local_23c = iVar25 + uVar27 * 0xf0;
                  if (uVar27 != 0) {
                    iVar25 = local_230 + -0xf0;
                  }
                  FUN_016dd1aa(local_240,iVar25,0xf0);
                  local_238 = local_230 + -0xf0 + (uint)(bVar33 == bVar34) * 0xf0;
                } while ((local_238 != iVar22) && (local_230 = local_238, local_23c != param_3));
              }
              else {
                local_238 = iVar22;
                do {
                  iVar24 = *(int *)(iVar29 + 0xe4);
                  uVar20 = *(undefined4 *)(*(int *)(local_230 + 0xe4) + 0xc);
                  DataMemoryBarrier(0xb);
                  iVar22 = *(int *)(*(int *)(local_230 + 0xe4) + 8);
                  pcVar26 = (char *)(iVar22 + 8);
                  if (*pcVar26 == '\0') {
                    bVar33 = (bool)hasExclusiveAccess(pcVar26);
                    if (!bVar33) goto LAB_00759b54;
                    *pcVar26 = '\x01';
                    DataMemoryBarrier(0xb);
                  }
                  else {
                    ClearExclusiveLocal();
LAB_00759b54:
                    FUN_01280da8(pcVar26);
                  }
                  FUN_0128236c(pcVar26);
                  puVar21 = *(undefined1 **)(iVar22 + 0x18);
                  dVar35 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
                  if (puVar21 != &DAT_3b9aca00) {
                    uVar27 = *(uint *)(iVar22 + 0x14);
                    iVar28 = *(int *)(iVar22 + 0x10);
                    iVar22 = FUN_016e0392(1,&local_98);
                    if (iVar22 == -1) {
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
                    local_98 = iVar28;
                    local_94 = uVar27;
                    local_90 = puVar21;
                    FUN_015f3c24(&local_d0,&local_e0,&local_98);
                    dVar37 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
                    dVar38 = (double)FUN_01845f30(local_c8,puStack_c4);
                    dVar38 = dVar37 / 1000000000.0 + dVar38;
                    FUN_016d5578(SUB84(dVar38,0),(int)((ulonglong)dVar38 >> 0x20),0);
                    FUN_016d5330(SUB84(dVar38 / -180.0,0));
                    in_d0 = dVar38 / -180.0;
                    if ((local_d0 & 1) != 0) {
                      in_d0 = dVar36;
                    }
                    dVar35 = in_d0 * dVar35;
                  }
                  bVar33 = true;
                  local_d0 = 0;
                  ppuVar8 = ppuVar7;
                  if (*(char *)(ppuVar7 + 0xd) != '\x01') {
                    ppuVar8 = (undefined **)FUN_01284e64();
                    if (ppuVar8 == (undefined **)0x0) {
                      FUN_01283788(&local_98);
                      local_d0 = 1;
                      bVar33 = false;
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
                      ppuVar8 = &local_cc;
                    }
                  }
                  puVar16 = ppuVar8[8];
                  puVar17 = ppuVar8[9];
                  iVar22 = (int)puVar17 * -4;
                  puVar12 = puVar17;
                  do {
                    if (iVar22 == 0) goto LAB_00759c78;
                    iVar28 = -4 - iVar22;
                    iVar22 = iVar22 + 4;
                    puVar12 = puVar12 + -1;
                  } while (*(char **)(puVar16 + iVar28) != pcVar26);
                  *(undefined4 *)(puVar16 + (int)puVar12 * 4) =
                       *(undefined4 *)(puVar16 + (int)(puVar17 + -1) * 4);
                  ppuVar8[9] = puVar17 + -1;
LAB_00759c78:
                  if (!bVar33) {
                    do {
                      iVar22 = DAT_018dd954 + -1;
                      bVar33 = (bool)hasExclusiveAccess(0x18dd954);
                    } while (!bVar33);
                    DAT_018dd954 = iVar22;
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
                  if (*pcVar26 == '\x01') {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar33 = (bool)hasExclusiveAccess(pcVar26);
                      if (bVar33) {
                        *pcVar26 = '\0';
                        goto LAB_00759d1c;
                      }
                    } while (*pcVar26 == '\x01');
                  }
                  ClearExclusiveLocal();
                  FUN_01280a5c(pcVar26);
LAB_00759d1c:
                  uVar20 = *(undefined4 *)(iVar24 + 0xc);
                  DataMemoryBarrier(0xb);
                  iVar22 = *(int *)(iVar24 + 8);
                  pcVar26 = (char *)(iVar22 + 8);
                  if (*pcVar26 == '\0') {
                    bVar33 = (bool)hasExclusiveAccess(pcVar26);
                    if (!bVar33) goto LAB_00759d50;
                    *pcVar26 = '\x01';
                    DataMemoryBarrier(0xb);
                  }
                  else {
                    ClearExclusiveLocal();
LAB_00759d50:
                    FUN_01280da8(pcVar26);
                  }
                  FUN_0128236c(pcVar26);
                  puVar21 = *(undefined1 **)(iVar22 + 0x18);
                  dVar38 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
                  if (puVar21 != &DAT_3b9aca00) {
                    uVar27 = *(uint *)(iVar22 + 0x14);
                    iVar24 = *(int *)(iVar22 + 0x10);
                    iVar22 = FUN_016e0392(1,&local_98);
                    if (iVar22 == -1) {
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
                    local_98 = iVar24;
                    local_94 = uVar27;
                    local_90 = puVar21;
                    FUN_015f3c24(&local_d0,&local_e0,&local_98);
                    dVar39 = (double)VectorUnsignedToFloat(local_c0,(byte)(in_fpscr >> 0x16) & 3);
                    dVar37 = (double)FUN_01845f30(local_c8,puStack_c4);
                    dVar37 = dVar39 / 1000000000.0 + dVar37;
                    FUN_016d5578(SUB84(dVar37,0),(int)((ulonglong)dVar37 >> 0x20),0);
                    FUN_016d5330(SUB84(dVar37 / -180.0,0));
                    in_d0 = dVar37 / -180.0;
                    if ((local_d0 & 1) != 0) {
                      in_d0 = dVar36;
                    }
                    dVar38 = in_d0 * dVar38;
                  }
                  bVar33 = true;
                  local_d0 = 0;
                  ppuVar8 = ppuVar7;
                  if (*(char *)(ppuVar7 + 0xd) != '\x01') {
                    ppuVar8 = (undefined **)FUN_01284e64();
                    if (ppuVar8 == (undefined **)0x0) {
                      FUN_01283788(&local_98);
                      local_d0 = 1;
                      bVar33 = false;
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
                      ppuVar8 = &local_cc;
                    }
                  }
                  puVar16 = ppuVar8[8];
                  puVar17 = ppuVar8[9];
                  iVar22 = (int)puVar17 * -4;
                  puVar12 = puVar17;
                  do {
                    if (iVar22 == 0) goto LAB_00759e70;
                    iVar24 = -4 - iVar22;
                    iVar22 = iVar22 + 4;
                    puVar12 = puVar12 + -1;
                  } while (*(char **)(puVar16 + iVar24) != pcVar26);
                  *(undefined4 *)(puVar16 + (int)puVar12 * 4) =
                       *(undefined4 *)(puVar16 + (int)(puVar17 + -1) * 4);
                  ppuVar8[9] = puVar17 + -1;
LAB_00759e70:
                  if (!bVar33) {
                    do {
                      iVar22 = DAT_018dd954 + -1;
                      bVar33 = (bool)hasExclusiveAccess(0x18dd954);
                    } while (!bVar33);
                    DAT_018dd954 = iVar22;
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
                  if (*pcVar26 == '\x01') {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar33 = (bool)hasExclusiveAccess(pcVar26);
                      if (bVar33) {
                        *pcVar26 = '\0';
                        goto LAB_00759f14;
                      }
                    } while (*pcVar26 == '\x01');
                  }
                  ClearExclusiveLocal();
                  FUN_01280a5c(pcVar26);
LAB_00759f14:
                  uVar23 = (uint)((ulonglong)dVar38 >> 0x20);
                  uVar18 = (uint)((ulonglong)dVar35 >> 0x20);
                  uVar27 = (int)uVar23 >> 0x1f;
                  uVar23 = uVar27 >> 1 ^ uVar23;
                  uVar15 = (int)uVar18 >> 0x1f;
                  uVar18 = uVar15 >> 1 ^ uVar18;
                  bVar33 = (((uint)((byte)((longlong)dVar35 >> 0x3f) & 1) << 0x1f | uVar15 >> 1) ^
                           SUB84(dVar35,0)) <
                           (((uint)((byte)((longlong)dVar38 >> 0x3f) & 1) << 0x1f | uVar27 >> 1) ^
                           SUB84(dVar38,0));
                  bVar34 = SBORROW4(uVar18,uVar23) != SBORROW4(uVar18 - uVar23,(uint)bVar33);
                  bVar33 = (int)(uVar18 - (uVar23 + bVar33)) < 0;
                  uVar27 = (uint)(bVar33 != bVar34);
                  iVar22 = iVar29;
                  if (uVar27 != 0) {
                    iVar22 = local_230;
                  }
                  FUN_016dd1aa(local_238,iVar22,0xf0);
                  local_238 = local_238 + 0xf0;
                  iVar29 = iVar29 + (uint)(bVar33 == bVar34) * 0xf0;
                } while ((iVar29 != local_23c) &&
                        (local_230 = local_230 + uVar27 * 0xf0, local_230 != iVar19));
              }
              FUN_016dd1aa(local_238,iVar29,local_23c - iVar29);
            }
          }
          uVar27 = uVar11 * 2 | 1;
          if (uVar14 < 2) goto LAB_0075a0a8;
        }
        uVar27 = uVar11 * 2;
      } while (1 < uVar14);
LAB_0075a0a8:
      uVar30 = 1;
    }
LAB_0075a0b0:
    abStack_123[uVar30 + 1] = (byte)uVar13;
    local_22c[uVar30] = uVar27;
    if (param_2 <= uVar31) {
      if ((uVar27 & 1) == 0) {
        FUN_0075a528(param_1,param_2,param_3);
      }
      return;
    }
    uVar30 = uVar30 + 1;
    uVar31 = uVar31 + (local_26c >> 1);
    uVar27 = local_26c;
  } while( true );
}

