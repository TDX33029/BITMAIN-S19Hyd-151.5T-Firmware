// FUN_00e96f64 @ 00e96f64 size=4484 calls_out=24 calls_in=0
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e96f64(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint *****pppppuVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  uint *****pppppuVar11;
  uint uVar12;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  byte bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int extraout_r2;
  int extraout_r2_00;
  char cVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint *****pppppuVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  code *pcVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int *piVar35;
  uint uVar36;
  uint ****ppppuVar37;
  int iVar38;
  byte *pbVar39;
  uint uVar40;
  uint uVar41;
  uint in_fpscr;
  undefined8 uVar42;
  undefined8 uVar43;
  uint local_2b4;
  int local_298;
  uint *****local_268;
  undefined4 *local_264;
  uint *****local_260;
  uint ****local_25c;
  uint *****pppppuStack_258;
  undefined4 *puStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  uint ***local_240;
  uint *****local_23c;
  uint *****local_238 [2];
  undefined1 *local_230;
  uint *****local_208;
  uint *****local_204;
  undefined4 *local_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  undefined4 uStack_1f0;
  uint *****local_1b0;
  uint local_1ac;
  uint local_1a8;
  int local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint *****local_190;
  undefined4 *local_18c;
  undefined8 local_188;
  uint *****local_180;
  undefined4 *local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint local_c4;
  undefined4 local_c0;
  uint local_b8;
  undefined4 local_b4;
  int local_ac;
  undefined4 local_a8;
  int local_a0;
  int local_9c;
  uint ****local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  int local_84;
  uint *****local_80;
  uint ****local_7c [3];
  uint *****local_70;
  code *local_6c;
  uint local_68;
  undefined4 *local_64;
  uint local_60;
  undefined4 *local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  
  uVar5 = 0xc;
  if (*(int *)(param_2 + 0x164) != -0x80000000) {
    local_190 = (uint *****)&local_208;
    local_200 = (undefined4 *)0x0;
    local_208 = (uint *****)0x0;
    local_188 = 0x60000020;
    local_204 = (uint *****)0x1;
    local_18c = (undefined4 *)&DAT_01867a00;
    iVar6 = FUN_0093efbc(param_3 + 0xdc,&local_190);
    pppppuVar7 = local_204;
    pppppuVar26 = local_208;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_70,
                   &DAT_01867a18,&DAT_018af130);
    }
    puVar30 = *(undefined4 **)(param_2 + 0x16c);
    if ((puVar30 == local_200) &&
       (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(param_2 + 0x168),local_204), iVar6 == 0)) {
      if (pppppuVar26 != (uint *****)0x0) {
        thunk_FUN_016d3fb4(pppppuVar7);
      }
      piVar35 = (int *)(param_3 + 0xe0);
      if (*piVar35 == 5 && *(int *)(param_3 + 0xe4) == 0) {
        pppppuVar7 = (uint *****)FUN_00919544(param_3);
      }
      else {
        uVar14 = *(uint *)(param_2 + 0xd8) ^ 2;
        bVar13 = 1;
        if (uVar14 == 0 && *(int *)(param_2 + 0xdc) == 0) {
          cVar18 = *(char *)(param_3 + 0x150);
        }
        else {
          cVar18 = *(char *)(param_2 + 0xf1);
          if (cVar18 == '\x02') {
            cVar18 = *(char *)(param_3 + 0x150);
          }
          bVar13 = *(byte *)(param_2 + 0xf0) == 2 | *(byte *)(param_2 + 0xf0);
        }
        uVar43 = VectorUnsignedToFloat(*(undefined4 *)(param_2 + 0xec),(byte)(in_fpscr >> 0x16) & 3)
        ;
        puVar30 = *(undefined4 **)(param_3 + 0x84);
        local_180 = *(uint ******)(param_3 + 0x90);
        pppppuVar26 = *(uint ******)(param_3 + 0x80);
        local_17c = *(undefined4 **)(param_3 + 0x94);
        local_170 = CONCAT31(CONCAT21(local_170._2_2_,cVar18),bVar13) & 0xffff0101;
        uVar42 = *(undefined8 *)(param_3 + 0xb0);
        if ((*(uint *)(param_2 + 0xe8) & 1) != 0) {
          uVar42 = uVar43;
        }
        local_178 = *(undefined8 *)(param_3 + 0xb0);
        if (uVar14 != 0 || *(int *)(param_2 + 0xdc) != 0) {
          local_178 = uVar42;
        }
        puVar8 = (undefined8 *)(param_2 + 0xe0);
        if ((*(uint *)(param_2 + 0xd8) & 1) == 0) {
          puVar8 = (undefined8 *)(param_3 + 0x88);
        }
        else {
          puVar30 = (undefined4 *)0x0;
          pppppuVar26 = (uint *****)&DAT_00000004;
        }
        uVar42 = *puVar8;
        local_190 = pppppuVar26;
        local_18c = puVar30;
        local_188 = uVar42;
        pppppuVar7 = (uint *****)FUN_00911fb0(&local_190,piVar35);
        if (pppppuVar7 == (uint *****)0x0) {
          pppppuVar7 = (uint *****)uVar42;
          local_208 = (uint *****)local_188._4_4_;
          local_204 = local_180;
          local_200 = local_17c;
          local_1fc = (undefined4)local_178;
          uStack_1f8 = local_178._4_4_;
          uStack_1f4 = local_170;
          uStack_1f0 = uStack_16c;
          if (pppppuVar26 != (uint *****)&DAT_00000005 || puVar30 != (undefined4 *)0x0) {
            local_25c = local_188._4_4_;
            pppppuStack_258 = local_180;
            puStack_254 = local_17c;
            local_250 = (undefined4)local_178;
            uStack_24c = local_178._4_4_;
            uStack_248 = local_170;
            uStack_244 = uStack_16c;
            local_268 = pppppuVar26;
            local_264 = puVar30;
            local_260 = pppppuVar7;
            FUN_00912148(&local_190,param_2,param_3,piVar35,&local_268);
            if (local_190 == (uint *****)&DAT_00000005 && local_18c == (undefined4 *)0x0) {
              pppppuVar7 = (uint *****)local_188;
            }
            else {
              if (*(int *)(param_2 + 0x88) == 0) {
                pppppuVar7 = *(uint ******)(param_3 + 0x48);
                pppppuVar26 = *(uint ******)(param_3 + 0x4c);
                cVar18 = *(char *)(param_3 + 0x50);
              }
              else {
                iVar15 = *(int *)(param_2 + 0x8c);
                pppppuVar26 = *(uint ******)(param_3 + 0x4c);
                cVar18 = *(char *)(param_3 + 0x50);
                pppppuVar7 = *(uint ******)(param_3 + 0x48);
                iVar6 = *(int *)(param_2 + 0x94);
                if (iVar15 == 0) {
                  iVar6 = 0;
                }
                bVar4 = iVar15 != 0;
                iVar10 = 0;
                uVar14 = *(uint *)(param_2 + 0x90);
                for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                  if (!bVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa444(&DAT_018a9ff4);
                  }
                  if (iVar10 == 0) {
                    iVar9 = 0;
                    iVar10 = iVar15;
                    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                      iVar10 = *(int *)(iVar10 + 0x248);
                    }
                    uVar14 = 0;
                  }
                  else {
                    iVar9 = iVar15;
                  }
                  iVar15 = iVar10;
                  if (*(ushort *)(iVar10 + 0x242) <= uVar14) {
                    do {
                      iVar10 = *(int *)(iVar15 + 0x1b8);
                      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa444(&DAT_018aa004);
                      }
                      uVar14 = (uint)*(ushort *)(iVar15 + 0x240);
                      iVar9 = iVar9 + 1;
                      iVar15 = iVar10;
                    } while (*(ushort *)(iVar10 + 0x242) <= uVar14);
                  }
                  if (iVar9 == 0) {
                    uVar20 = uVar14 + 1;
                    iVar22 = iVar10;
                  }
                  else {
                    piVar35 = (int *)(iVar10 + uVar14 * 4 + 0x24c);
                    do {
                      iVar22 = *piVar35;
                      iVar9 = iVar9 + -1;
                      piVar35 = (int *)(iVar22 + 0x248);
                    } while (iVar9 != 0);
                    uVar20 = 0;
                  }
                  iVar10 = iVar10 + uVar14 * 0xc;
                  local_240 = (uint ***)(iVar10 + 0x1bc);
                  uVar14 = *(uint *)(iVar10 + 0x1c4);
                  pbVar39 = *(byte **)(iVar10 + 0x1c0);
                  if (uVar14 == 1) {
                    bVar13 = *pbVar39;
                    uVar5 = 1;
                    if ((bVar13 != 0x2b) && (bVar13 != 0x2d)) goto LAB_00e973f4;
                    goto LAB_00e975d8;
                  }
                  if (uVar14 == 0) {
                    uVar5 = 0;
                    goto LAB_00e975d8;
                  }
                  bVar13 = *pbVar39;
LAB_00e973f4:
                  pppppuVar11 = (uint *****)0x0;
                  if (bVar13 == 0x2b) {
                    pbVar39 = pbVar39 + 1;
                    uVar14 = uVar14 - 1;
                  }
                  if (uVar14 < 9) {
                    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                      bVar13 = *pbVar39;
                      if (9 < bVar13 - 0x30) goto LAB_00e975d4;
                      pbVar39 = pbVar39 + 1;
                      pppppuVar11 = (uint *****)((bVar13 - 0x30) + (int)pppppuVar11 * 10);
                    }
                  }
                  else {
                    while (uVar14 != 0) {
                      uVar21 = (uint)(ZEXT48(pppppuVar11) * 10);
                      uVar27 = *pbVar39 - 0x30;
                      if ((int)(ZEXT48(pppppuVar11) * 10 >> 0x20) != 0) {
                        uVar5 = 1;
                        if (uVar27 < 10) {
                          uVar5 = 2;
                        }
                        goto LAB_00e975d8;
                      }
                      if (9 < uVar27) goto LAB_00e975d4;
                      pppppuVar11 = (uint *****)(uVar27 + uVar21);
                      uVar14 = uVar14 - 1;
                      pbVar39 = pbVar39 + 1;
                      if (CARRY4(uVar27,uVar21)) {
                        uVar5 = 2;
                        goto LAB_00e975d8;
                      }
                    }
                  }
                  local_1b0 = pppppuVar11;
                  if (pppppuVar11 < pppppuVar7) {
LAB_00e97f90:
                    local_180 = (uint *****)&local_70;
                    local_17c = &DAT_00f5c97c;
                    local_18c = &DAT_00f5c97c;
                    local_190 = (uint *****)&local_1b0;
                    local_188 = CONCAT44(&DAT_00f5c97c,local_238);
                    local_238[0] = pppppuVar7;
                    local_70 = pppppuVar26;
                    FUN_00600d2c(&local_208,&DAT_0058c42e,&local_190);
                    pppppuVar7 = (uint *****)FUN_009337e4(&local_208);
                    goto LAB_00e98038;
                  }
                  if (cVar18 == '\0') {
                    if (pppppuVar26 < pppppuVar11) goto LAB_00e97f90;
                  }
                  else if (pppppuVar26 <= pppppuVar11) goto LAB_00e97f90;
                  iVar15 = 0;
                  bVar4 = true;
                  iVar10 = iVar22;
                  uVar14 = uVar20;
                }
              }
              if ((pppppuVar7 <= pppppuVar26) && (cVar18 == '\0')) {
                do {
                  local_23c = pppppuVar7;
                  FUN_008fcd58(local_238,param_2,param_3,pppppuVar7);
                  if (local_230 == &DAT_3b9aca00) {
                    local_70 = local_238[0];
                    local_190 = (uint *****)&local_23c;
                    local_188 = CONCAT44(FUN_00604528,&local_70);
                    local_18c = &DAT_00f5c97c;
                    FUN_00600d2c(&local_208,&DAT_00565b90,&local_190);
                    pppppuVar7 = (uint *****)FUN_009337e4(&local_208);
                    (*(code *)**local_70)();
                    goto LAB_00e98038;
                  }
                } while ((pppppuVar7 < pppppuVar26) &&
                        (pppppuVar7 = (uint *****)
                                      ((int)pppppuVar7 + (uint)(pppppuVar7 < pppppuVar26)),
                        pppppuVar7 <= pppppuVar26));
              }
              FUN_008fde60(&local_208,param_2,param_3);
              if (*(int *)(param_2 + 0xcc) != -0x80000000) {
                uVar42 = thunk_FUN_016de0ee(*(int *)(param_2 + 0xcc),0x2c0);
                puVar23 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
                uVar14 = *(uint *)(param_2 + 0xd4);
                if ((char)puVar23[4] == '\0') {
                  FUN_015f62e4(&local_190);
                  *puVar23 = (uint)local_190;
                  puVar23[1] = (uint)local_18c;
                  puVar23[2] = (uint)(uint *****)local_188;
                  puVar23[3] = (uint)local_188._4_4_;
                  *(undefined1 *)(puVar23 + 4) = 1;
                }
                uVar33 = *puVar23;
                uVar21 = puVar23[1];
                uVar20 = puVar23[2];
                uVar27 = puVar23[3];
                *puVar23 = uVar33 + 1;
                puVar23[1] = uVar21 + (0xfffffffe < uVar33);
                if (uVar14 == 0) {
                  local_1ac = 0;
                  pppppuVar26 = (uint *****)&DAT_005674cc;
                  local_1a8 = 0;
                }
                else {
                  if (uVar14 < 0xf) {
                    uVar28 = (uVar14 & 8) + 8;
                    if (uVar14 < 4) {
                      uVar28 = 4;
                    }
                  }
                  else {
                    uVar28 = (0xffffffffU >>
                             LZCOUNT((uint)((ulonglong)(uVar14 << 3) * 0x92492493 >> 0x22) - 1)) + 1
                    ;
                  }
                  iVar15 = uVar28 + 4 + uVar28 * 4;
                  iVar6 = thunk_FUN_016d4a50(iVar15);
                  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(4,iVar15);
                  }
                  pppppuVar26 = (uint *****)(iVar6 + uVar28 * 4);
                  FUN_016dd606(pppppuVar26,0xff,uVar28 + 4);
                  local_1ac = uVar28 - 1;
                  local_1a8 = local_1ac;
                  if (7 < local_1ac) {
                    local_1a8 = (uVar28 & 0xfffffff8) - (uVar28 >> 3);
                  }
                }
                local_1a4 = 0;
                local_1a0 = uVar33;
                puVar23 = &local_198;
                local_198 = uVar20;
                local_194 = uVar27;
                local_19c = uVar21;
                local_1b0 = pppppuVar26;
                if (uVar14 != 0) {
                  iVar15 = *(int *)(param_2 + 0xd0);
                  iVar6 = iVar15;
LAB_00e977c0:
                  uVar33 = local_194;
                  uVar27 = local_198;
                  uVar21 = local_19c;
                  uVar20 = local_1a0;
                  local_64 = (undefined4 *)(local_19c ^ 0x6c796765);
                  local_68 = local_1a0 ^ 0x6e657261;
                  local_5c = (undefined4 *)(local_194 ^ 0x646f7261);
                  local_60 = local_198 ^ 0x6e646f6d;
                  uStack_54 = local_194 ^ 0x74656462;
                  local_58 = local_198 ^ 0x79746573;
                  local_50 = local_1a0;
                  uStack_4c = local_19c;
                  local_48 = local_198;
                  local_44 = local_194;
                  local_6c = (code *)(local_19c ^ 0x736f6d65);
                  local_40 = 0;
                  local_70 = (uint *****)(local_1a0 ^ 0x70736575);
                  local_3c = 0;
                  local_38 = 0;
                  local_34 = 0;
                  FUN_010b4a1c(&local_70,*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18)
                              );
                  local_90 = (uint ****)CONCAT31(local_90._1_3_,0xff);
                  FUN_010b4a1c(&local_70,&local_90,1);
                  pcVar31 = (code *)((int)local_5c + (int)local_6c) +
                            CARRY4(local_60,(uint)local_70);
                  uVar24 = ((int)local_5c << 0xd | local_60 >> 0x13) ^ (uint)pcVar31;
                  uVar40 = (local_60 << 0xd | (uint)local_5c >> 0x13) ^ local_60 + (int)local_70;
                  uVar29 = local_3c | local_38 << 0x18;
                  uVar12 = uVar29 ^ uStack_54;
                  uVar28 = local_40 ^ local_58;
                  uVar34 = uVar28 + local_68;
                  uVar19 = (int)local_64 + CARRY4(uVar28,local_68) + uVar12;
                  uVar16 = uVar19 + uVar24 + (uint)CARRY4(uVar34,uVar40);
                  uVar17 = uVar16 ^ (uVar24 << 0x11 | uVar40 >> 0xf);
                  uVar19 = (uVar12 << 0x10 | uVar28 >> 0x10) ^ uVar19;
                  uVar12 = (uVar28 << 0x10 | uVar12 >> 0x10) ^ uVar34;
                  uVar28 = uVar19 + local_60 + (int)local_70 + (uint)CARRY4(uVar12,(uint)pcVar31);
                  uVar25 = uVar34 + uVar40 ^ (uVar40 << 0x11 | uVar24 >> 0xf);
                  uVar24 = (uint)(pcVar31 + uVar12) ^ local_40;
                  uVar36 = uVar24 + uVar25;
                  uVar41 = (uVar28 ^ uVar29) + uVar17 + (uint)CARRY4(uVar24,uVar25);
                  uVar28 = (uVar19 << 0x15 | uVar12 >> 0xb) ^ uVar28;
                  uVar29 = uVar41 ^ (uVar17 << 0xd | uVar25 >> 0x13);
                  uVar16 = uVar16 ^ 0xff;
                  uVar24 = (uVar12 << 0x15 | uVar19 >> 0xb) ^ (uint)(pcVar31 + uVar12);
                  uVar17 = uVar36 ^ (uVar25 << 0xd | uVar17 >> 0x13);
                  uVar12 = uVar24 + uVar16;
                  uVar25 = uVar28 + uVar34 + uVar40 + (uint)CARRY4(uVar24,uVar16);
                  uVar32 = uVar29 + uVar25 + (uint)CARRY4(uVar17,uVar12);
                  uVar34 = uVar32 ^ (uVar29 << 0x11 | uVar17 >> 0xf);
                  uVar19 = uVar17 + uVar12 ^ (uVar17 << 0x11 | uVar29 >> 0xf);
                  uVar25 = (uVar28 << 0x10 | uVar24 >> 0x10) ^ uVar25;
                  uVar16 = (uVar24 << 0x10 | uVar28 >> 0x10) ^ uVar12;
                  uVar40 = uVar16 + uVar41;
                  uVar29 = uVar25 + uVar36 + (uint)CARRY4(uVar16,uVar41);
                  uVar36 = uVar34 + uVar29 + (uint)CARRY4(uVar19,uVar40);
                  uVar28 = (uVar34 << 0xd | uVar19 >> 0x13) ^ uVar36;
                  uVar24 = (uVar19 << 0xd | uVar34 >> 0x13) ^ uVar19 + uVar40;
                  uVar29 = (uVar25 << 0x15 | uVar16 >> 0xb) ^ uVar29;
                  uVar16 = (uVar16 << 0x15 | uVar25 >> 0xb) ^ uVar40;
                  uVar25 = uVar16 + uVar32;
                  uVar17 = uVar29 + uVar17 + uVar12 + (uint)CARRY4(uVar16,uVar32);
                  uVar34 = (uVar29 << 0x10 | uVar16 >> 0x10) ^ uVar17;
                  uVar12 = (uVar16 << 0x10 | uVar29 >> 0x10) ^ uVar25;
                  uVar32 = uVar28 + uVar17 + (uint)CARRY4(uVar24,uVar25);
                  uVar16 = uVar12 + uVar36;
                  uVar17 = uVar34 + uVar19 + uVar40 + (uint)CARRY4(uVar12,uVar36);
                  uVar40 = (uVar34 << 0x15 | uVar12 >> 0xb) ^ uVar17;
                  uVar12 = (uVar12 << 0x15 | uVar34 >> 0xb) ^ uVar16;
                  uVar29 = (uVar28 << 0x11 | uVar24 >> 0xf) ^ uVar32;
                  uVar34 = uVar12 + uVar32;
                  uVar28 = (uVar24 << 0x11 | uVar28 >> 0xf) ^ uVar24 + uVar25;
                  uVar24 = uVar40 + uVar24 + uVar25 + (uint)CARRY4(uVar12,uVar32);
                  uVar19 = (uVar28 << 0xd | uVar29 >> 0x13) ^ uVar28 + uVar16;
                  uVar28 = (uVar29 << 0xd | uVar28 >> 0x13) ^
                           uVar29 + uVar17 + (uint)CARRY4(uVar28,uVar16);
                  if (local_1a8 == 0) {
                    FUN_009ff780(&local_1b0,uVar33,uVar20,uVar21,uVar27,uVar33);
                  }
                  uVar20 = local_1ac;
                  pppppuVar26 = local_1b0;
                  uVar27 = ((uVar40 >> 0x10 ^ uVar34) << 0x15 |
                           ((uVar40 << 0x10 | uVar12 >> 0x10) ^ uVar24) >> 0xb) ^
                           (uVar19 << 0x11 | uVar28 >> 0xf) ^
                           uVar28 + uVar24 + (uint)CARRY4(uVar19,uVar34) ^ uVar19 + uVar34;
                  iVar10 = iVar6 + 0x30;
                  bVar4 = false;
                  local_298 = 0;
                  uVar21 = uVar27;
                  do {
                    uVar21 = uVar20 & uVar21;
                    uVar33 = *(uint *)((int)pppppuVar26 + uVar21);
                    uVar28 = uVar33 ^ (uVar27 >> 0x19) * 0x1010101;
                    uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
                    while (uVar28 != 0) {
                      uVar12 = uVar21 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10
                                                       | (uVar28 >> 0x10 & 0xff) << 8 |
                                                       uVar28 >> 0x18) >> 3) & uVar20;
                      ppppuVar37 = pppppuVar26[-1 - uVar12];
                      uVar28 = uVar28 - 1 & uVar28;
                      if ((*(uint ****)(iVar6 + 0x18) == ppppuVar37[2]) &&
                         (iVar9 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 0x14),ppppuVar37[1]),
                         iVar9 == 0)) {
                        pppppuVar26[-1 - uVar12] = (uint ****)(iVar6 + 0x10U);
                        local_90 = (uint ****)local_7c;
                        local_8c = &LAB_01110b14;
                        local_7c[0] = ppppuVar37;
                        FUN_00600d2c(&local_70,&DAT_0058b33b,&local_90);
                        pppppuVar7 = (uint *****)FUN_009337e4(&local_70);
                        iVar6 = extraout_r2;
                        goto LAB_00e97e90;
                      }
                    }
                    uVar28 = uVar33 & 0x80808080;
                    if (bVar4) {
LAB_00e97c14:
                      if ((uVar28 & uVar33 << 1) != 0) goto LAB_00e97c58;
                      bVar4 = true;
                    }
                    else {
                      if (uVar28 != 0) {
                        local_2b4 = uVar21 + ((uint)LZCOUNT((uVar33 & 0x80) << 0x18 |
                                                            (uVar28 >> 8 & 0xff) << 0x10 |
                                                            (uVar28 >> 0x10 & 0xff) << 8 |
                                                            uVar28 >> 0x18) >> 3) & uVar20;
                        goto LAB_00e97c14;
                      }
                      bVar4 = false;
                    }
                    local_298 = local_298 + 4;
                    uVar21 = local_298 + uVar21;
                  } while( true );
                }
LAB_00e98010:
                if (local_1ac != 0) {
                  puVar23 = (uint *)(local_1ac * 5);
                }
                if (local_1ac != 0 && puVar23 != (uint *)0xfffffff7) {
                  thunk_FUN_016d3fb4(local_1b0 + (-1 - local_1ac));
                }
              }
              pppppuVar7 = (uint *****)0x0;
            }
            goto LAB_00e98038;
          }
        }
      }
      goto LAB_00e98040;
    }
    if (pppppuVar26 != (uint *****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar7);
    }
    uVar5 = *(undefined4 *)(param_2 + 0x168);
    if (puVar30 == (undefined4 *)0x0) {
      iVar6 = 1;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(puVar30);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar30);
      }
    }
    FUN_016dd1aa(iVar6,uVar5,puVar30);
    param_1[3] = puVar30;
    uVar5 = 8;
    param_1[4] = iVar6;
    param_1[5] = puVar30;
  }
  goto LAB_00e97060;
LAB_00e97c58:
  uVar21 = (uint)*(char *)((int)pppppuVar26 + local_2b4);
  if (-1 < (int)uVar21) {
    uVar21 = (uint)*pppppuVar26 & 0x80808080;
    uVar33 = LZCOUNT(((uint)*pppppuVar26 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                     (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18);
    uVar21 = (uint)*(byte *)((int)pppppuVar26 + (uVar33 >> 3));
    local_2b4 = uVar33 >> 3;
  }
  bVar13 = (byte)(uVar27 >> 0x19);
  *(byte *)((int)pppppuVar26 + local_2b4) = bVar13;
  local_1a8 = local_1a8 - (uVar21 & 1);
  *(byte *)((int)pppppuVar26 + (uVar20 & local_2b4 - 4) + 4) = bVar13;
  pppppuVar26[-1 - local_2b4] = (uint ****)(iVar6 + 0x10U);
  iVar22 = *(int *)(iVar6 + 0x20);
  local_1a4 = local_1a4 + 1;
  iVar9 = local_1a4;
  if (iVar22 != -0x80000000) {
    iVar9 = *(int *)(iVar6 + 0x28);
  }
  if (iVar22 != -0x80000000 && iVar9 != 0) {
    iVar38 = *(int *)(iVar6 + 0x24);
    iVar6 = 0;
LAB_00e97d28:
    uVar20 = iVar38 + iVar6;
    local_90 = *(uint *****)(uVar20 + 0x10);
    local_8c = *(undefined1 **)(uVar20 + 0x14);
    local_88 = 0;
    if (*(int *)(uVar20 + 0x18) != -0x80000000) {
      local_88 = *(undefined4 *)(uVar20 + 0x1c);
      iVar22 = *(int *)(uVar20 + 0x20);
    }
    local_84 = iVar22;
    FUN_00953fa8(&local_190,*(undefined4 *)(uVar20 + 4),*(undefined4 *)(uVar20 + 8),&local_90,
                 *(byte *)(uVar20 + 0x24) == 2 | *(byte *)(uVar20 + 0x24) & 1);
    iVar3 = local_9c;
    iVar2 = local_a0;
    uVar1 = local_b4;
    uVar27 = local_b8;
    uVar5 = local_c0;
    uVar21 = local_c4;
    if (local_a0 != -0x80000000) goto code_r0x00e97d94;
    local_80 = local_190;
    local_60 = uVar20 + 0xc;
    local_70 = (uint *****)&local_80;
    local_5c = &DAT_006043a8;
    local_64 = &DAT_006043a8;
    local_6c = FUN_00604528;
    local_68 = uVar20;
    FUN_00600d2c(local_7c,&DAT_0058fd81,&local_70);
    pppppuVar7 = (uint *****)FUN_009337e4(local_7c);
    (*(code *)**local_80)();
    iVar6 = extraout_r2_00;
LAB_00e97e90:
    if (local_1ac != 0) {
      iVar6 = local_1ac * 5;
    }
    if (local_1ac != 0 && iVar6 != -9) {
      thunk_FUN_016d3fb4(local_1b0 + (-1 - local_1ac));
    }
    goto LAB_00e98038;
  }
LAB_00e97cc8:
  iVar6 = iVar10;
  if (iVar10 == iVar15 + uVar14 * 0x30) goto LAB_00e98010;
  goto LAB_00e977c0;
code_r0x00e97d94:
  iVar22 = local_9c;
  if (local_ac != 0) {
    thunk_FUN_016d3fb4(local_a8);
    iVar22 = extraout_r1;
  }
  if ((uVar21 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(uVar5);
    iVar22 = extraout_r1_00;
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(iVar3);
    iVar22 = extraout_r1_01;
  }
  if ((uVar27 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(uVar1);
    iVar22 = extraout_r1_02;
  }
  iVar6 = iVar6 + 0x28;
  if (iVar9 * 0x28 == iVar6) goto LAB_00e97cc8;
  goto LAB_00e97d28;
LAB_00e975d4:
  uVar5 = 1;
LAB_00e975d8:
  puVar30 = (undefined4 *)FUN_00f5cb28(uVar5);
  local_204 = (uint *****)&LAB_01110b14;
  local_208 = (uint *****)&local_240;
  FUN_00600d2c(&local_190,&DAT_005842e4,&local_208);
  pppppuVar7 = (uint *****)FUN_009337e4(&local_190);
  (**(code **)*puVar30)(puVar30);
LAB_00e98038:
  if (pppppuVar7 == (uint *****)0x0) {
    FUN_016dd1aa(param_1,param_2,0x180);
    return;
  }
LAB_00e98040:
  local_208 = (uint *****)&local_70;
  local_204 = (uint *****)FUN_00604528;
  local_70 = pppppuVar7;
  FUN_00600d2c(&local_190,&DAT_00414b9a,&local_208);
  local_208 = local_190;
  local_204 = (uint *****)local_18c;
  local_200 = (uint *****)local_188;
  (*(code *)**local_70)();
  param_1[3] = local_208;
  param_1[4] = local_204;
  param_1[5] = local_200;
  uVar5 = 9;
LAB_00e97060:
  iVar6 = *(int *)(param_2 + 0x158);
  param_1[1] = 0;
  *param_1 = 3;
  param_1[2] = uVar5;
  if (iVar6 == -0x80000000 || iVar6 == 0) {
    if (!(*(int *)(param_2 + 0x164) != -0x80000000 && *(int *)(param_2 + 0x164) != 0))
    goto LAB_00e97094;
LAB_00e970d4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x168));
    if (*(int *)(param_2 + 0x170) == -0x80000000 || *(int *)(param_2 + 0x170) == 0)
    goto LAB_00e970a4;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x15c));
    if (!(*(int *)(param_2 + 0x164) == -0x80000000 || *(int *)(param_2 + 0x164) == 0))
    goto LAB_00e970d4;
LAB_00e97094:
    if (*(int *)(param_2 + 0x170) == -0x80000000 || *(int *)(param_2 + 0x170) == 0)
    goto LAB_00e970a4;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x174));
LAB_00e970a4:
  FUN_00e982cc(param_2);
  return;
}

