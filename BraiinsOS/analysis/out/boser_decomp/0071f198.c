// FUN_0071f198 @ 0071f198 size=4716 calls_out=28 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0071f674) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0071f198(undefined4 *param_1,uint *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  uint **ppuVar11;
  undefined4 *puVar12;
  uint **ppuVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 extraout_r1;
  uint *puVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  uint extraout_r3;
  uint *unaff_r4;
  uint *puVar22;
  int iVar23;
  uint *unaff_r5;
  uint *puVar24;
  uint uVar25;
  undefined4 uVar26;
  int *piVar27;
  char *pcVar28;
  char *pcVar29;
  uint uVar30;
  uint *unaff_r8;
  uint *puVar31;
  uint *puVar32;
  uint uVar33;
  bool bVar34;
  undefined8 uVar35;
  uint *local_140;
  uint *local_13c;
  uint *local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  uint *local_11c;
  uint *local_110;
  uint *local_10c;
  uint *local_fc;
  uint *local_e4;
  uint *local_dc;
  uint *local_d8;
  uint *local_d0;
  uint *local_cc;
  uint *local_c8;
  uint *local_c0;
  uint *local_bc;
  uint *local_b8;
  undefined4 local_b0;
  uint *local_ac;
  undefined4 local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  uint local_90;
  uint local_8c;
  uint *local_88;
  uint local_84;
  int local_80;
  undefined4 local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint uStack_54;
  int iStack_50;
  int local_4c;
  uint *local_48;
  uint *local_44;
  char local_40;
  undefined4 local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  
  cVar8 = *param_3;
  if (cVar8 == 'O') {
    uVar14 = param_2[2];
    puVar20 = *(uint **)(param_3 + 0xc);
    piVar15 = (int *)(uVar14 + 0x130);
    iVar16 = *(int *)(param_3 + 8);
    cVar8 = param_3[4];
    if (*piVar15 == 2) {
      local_90 = puVar20[0x34];
      local_8c = puVar20[0x35];
      puVar24 = (uint *)0x0;
      local_88 = puVar20 + 0x2e;
      local_84 = puVar20[0x40] + 8;
      local_c8 = (uint *)0x0;
      local_cc = (uint *)&DAT_00000008;
      local_d0 = (uint *)0x0;
      local_b8 = (uint *)0x0;
      local_bc = (uint *)&DAT_00000008;
      local_c0 = (uint *)0x0;
      local_80 = 0;
      if (local_8c != 0) {
        ppuVar13 = &local_70;
        local_130 = (uint *)&DAT_00000008;
        local_128 = (uint *)0x0;
        do {
          uVar21 = local_90;
          unaff_r8 = (uint *)local_88[6];
          uVar25 = local_88[7];
          uVar33 = local_88[9];
          cVar1 = *(char *)((int)local_88 + 0x21);
          FUN_00719bb8(&local_78,&local_90);
          puVar31 = local_6c;
          puVar18 = local_70;
          unaff_r4 = (uint *)((uint)local_78 & 0xff);
          puVar32 = (uint *)&SUB_00000004;
          if (cVar1 == '\b') {
            puVar32 = (uint *)&DAT_0000000c;
          }
          if (unaff_r4 != (uint *)0x4f) {
            puVar22 = local_74;
            bVar2 = local_78._1_1_;
            uVar3 = local_78._2_2_;
LAB_0071f9d4:
            uVar33 = (uint)uVar3;
            unaff_r8 = (uint *)(uint)bVar2;
            puVar18 = *ppuVar13;
            puVar31 = ppuVar13[1];
LAB_0071f9d8:
            FUN_0134c054(local_c0,local_bc,8,0x18);
            FUN_0072f21c(&local_d0);
            uVar17 = 1;
            bVar34 = false;
            goto LAB_0071f9fc;
          }
          if (local_70 == (uint *)0x0 && local_6c == (uint *)0x0) {
            local_80 = local_80 + -1;
          }
          else {
            if ((local_6c == (uint *)0x0) && ((int)local_70 - 1U < *(uint *)(local_84 + 8))) {
              iVar9 = ((int)local_70 - 1U) * 0x68 + *(int *)(local_84 + 4);
            }
            else {
              iVar9 = FUN_0134bfa8(*(undefined4 *)(local_84 + 0xc),*(undefined4 *)(local_84 + 0x10),
                                   local_70,local_6c);
              if (iVar9 == 0) {
                puVar22 = (uint *)0x0;
                unaff_r4 = (uint *)&DAT_00000012;
                goto LAB_0071f9d8;
              }
            }
            if (*(char *)(iVar9 + 0x62) == '\x01') {
              local_80 = local_80 + 1;
            }
            if (*(short *)(iVar9 + 0x60) == 0x2e) {
              uVar35 = FUN_0134c25c();
              iVar9 = (int)((ulonglong)uVar35 >> 0x20);
              puVar18 = (uint *)uVar35;
              if (iVar9 != 0) {
                puVar10 = (uint *)((int)puVar32 + uVar21 + (uVar33 - (int)(uVar25 + (int)unaff_r8)))
                ;
                iVar9 = iVar9 << 4;
                puVar31 = (uint *)0x0;
                bVar7 = false;
                bVar6 = false;
                bVar34 = false;
                do {
                  local_b0 = (uint *)*puVar18;
                  local_ac = (uint *)puVar18[1];
                  local_a8 = (uint *)puVar18[2];
                  local_a4 = (uint *)puVar18[3];
                  FUN_00716a3c(&local_78,&local_90,local_88[8]);
                  puVar32 = puVar20;
                  if (local_78 == (uint *)&DAT_0000002e && local_74 == (uint *)0x0) {
                    uVar33 = (uint)local_70 >> 0x10;
                    unaff_r8 = (uint *)((uint)local_70 >> 8);
                    unaff_r4 = (uint *)((uint)local_70 & 0xff);
                    puVar18 = local_68;
                    puVar22 = local_6c;
                    puVar31 = local_64;
                    goto LAB_0071f9d8;
                  }
                  uVar33 = (uint)local_68 & 0xffff;
                  if (uVar33 == 0x55) {
                    FUN_00717f68(&local_b0,&local_78);
                    FUN_0071d324(&local_38,iVar16,puVar20);
                    unaff_r4 = (uint *)((uint)local_38 & 0xff);
                    if (unaff_r4 != (uint *)0x4f) {
                      uVar33 = (uint)local_38 >> 0x10;
                      unaff_r8 = (uint *)((uint)local_38 >> 8 & 0xff);
                      puVar18 = local_30;
                      puVar22 = local_34;
                      puVar31 = local_2c;
                      goto LAB_0071f9d8;
                    }
                    local_fc = local_30;
                    puVar31 = local_34;
                  }
                  else if (uVar33 == 0x12) {
                    FUN_00717f68(&local_38,&local_78);
                    if (((uint)local_38 & 0x3f) == 0) {
                      ppuVar11 = &local_30;
LAB_0071f520:
                      local_11c = *ppuVar11;
                      local_120 = ppuVar11[1];
                      bVar6 = true;
                    }
                    else if (local_38 == (uint *)&DAT_00000007) {
                      local_138 = local_30;
                      local_13c = local_2c;
                      bVar7 = true;
                    }
                    else if (local_38 == (uint *)&DAT_0000000c) {
                      FUN_00719574(&local_b0,*(undefined4 *)(iVar16 + 8),
                                   *(undefined4 *)(iVar16 + 0xc),puVar20[0x36],puVar20[0x42],
                                   local_30);
                      unaff_r4 = (uint *)((uint)local_b0 & 0xff);
                      if (unaff_r4 != (uint *)0x4f) goto LAB_0071f9c4;
                      ppuVar11 = (uint **)&local_a8;
                      goto LAB_0071f520;
                    }
                  }
                  else if (uVar33 == 0x11) {
                    FUN_00717f68(&local_38,&local_78);
                    if (((uint)local_38 & 0x3f) == 0) {
                      ppuVar11 = &local_30;
                    }
                    else {
                      if (local_38 != (uint *)&DAT_0000000c) goto LAB_0071f534;
                      FUN_00719574(&local_b0,*(undefined4 *)(iVar16 + 8),
                                   *(undefined4 *)(iVar16 + 0xc),puVar20[0x36],puVar20[0x42],
                                   local_30);
                      unaff_r4 = (uint *)((uint)local_b0 & 0xff);
                      if (unaff_r4 != (uint *)0x4f) {
LAB_0071f9c4:
                        ppuVar13 = (uint **)&local_a8;
                        puVar22 = local_ac;
                        bVar2 = local_b0._1_1_;
                        uVar3 = local_b0._2_2_;
                        goto LAB_0071f9d4;
                      }
                      ppuVar11 = (uint **)&local_a8;
                    }
                    local_10c = *ppuVar11;
                    local_110 = ppuVar11[1];
                    bVar34 = true;
                  }
LAB_0071f534:
                  puVar18 = puVar18 + 4;
                  iVar9 = iVar9 + -0x10;
                } while (iVar9 != 0);
                if (((uint)puVar31 & 1) == 0) {
                  if (bVar34) {
                    if (bVar6) {
                      if (local_110 <= local_120 &&
                          (uint)(local_11c <= local_10c) <= (uint)((int)local_110 - (int)local_120))
                      {
                        puVar32 = local_11c;
                        puVar18 = local_120;
                        if (puVar24 == local_c0) {
                          FUN_00719314(&local_c0);
                          local_130 = local_bc;
                        }
LAB_0071f6f0:
                        puVar31 = local_130 + (int)puVar24 * 6;
                        *puVar31 = (uint)local_10c;
                        puVar31[1] = (uint)local_110;
                        puVar31[2] = (uint)puVar32;
                        puVar31[3] = (uint)puVar18;
                        puVar24 = (uint *)((int)puVar24 + 1);
                        puVar31[4] = (uint)local_128;
                        local_b8 = puVar24;
                        goto LAB_0071f71c;
                      }
                    }
                    else if (bVar7) {
                      puVar32 = (uint *)((int)local_138 + (int)local_10c);
                      puVar18 = (uint *)((int)local_13c +
                                        (uint)CARRY4((uint)local_138,(uint)local_10c) +
                                        (int)local_110);
                      if (!(puVar18 < local_110 ||
                           (uint)((int)local_110 - (int)puVar18) < (uint)(puVar32 <= local_10c))) {
                        if (puVar24 == local_c0) {
                          FUN_00719314(&local_c0);
                          local_130 = local_bc;
                        }
                        goto LAB_0071f6f0;
                      }
                    }
                  }
                }
                else {
                  iVar9 = 4;
                  uVar33 = puVar20[0x36] >> 0x10;
                  if (4 < uVar33) {
                    iVar9 = 0xc;
                  }
                  puVar18 = *(uint **)(iVar16 + 0x58 + iVar9);
                  puVar12 = (undefined4 *)(iVar16 + 0x58);
                  if (4 < uVar33) {
                    puVar12 = (undefined4 *)(iVar16 + 0x60);
                  }
                  if (puVar18 < local_fc) {
                    unaff_r8 = (uint *)0x0;
                    puVar18 = (uint *)*puVar12;
                    puVar22 = local_140;
                    puVar31 = (uint *)0x0;
                    puVar5 = (uint *)&DAT_00000013;
                  }
                  else {
                    local_140 = (uint *)puVar20[0x3f];
                    local_78 = (uint *)puVar20[0x3e];
                    local_70 = *(uint **)(iVar16 + 8);
                    local_6c = *(uint **)(iVar16 + 0xc);
                    bVar34 = false;
                    local_68 = (uint *)puVar20[0x42];
                    local_60 = (int)*puVar12 + (int)local_fc;
                    local_5c = (int)puVar18 - (int)local_fc;
                    local_58 = (uint *)CONCAT31(local_58._1_3_,4 < uVar33);
                    local_74 = local_140;
                    local_64 = (uint *)puVar20[0x36];
                    while( true ) {
                      FUN_00731b20(&local_b0,&local_78);
                      puVar22 = local_9c;
                      puVar31 = local_a0;
                      puVar18 = local_a4;
                      puVar32 = local_a8;
                      if (!(local_b0 != (uint *)0x2 || local_ac != (uint *)0x0)) break;
                      if (((uint)local_b0 & 1) == 0) {
                        if (bVar34) goto LAB_0071f71c;
                        goto LAB_0071f5d4;
                      }
                      if (local_a4 <= local_9c &&
                          (uint)(local_a0 <= local_a8) <= (uint)((int)local_a4 - (int)local_9c)) {
                        if (puVar24 == local_c0) {
                          FUN_00719314(&local_c0);
                          local_130 = local_bc;
                        }
                        local_b8 = (uint *)((int)puVar24 + 1);
                        bVar34 = true;
                        puVar24 = local_130 + (int)puVar24 * 6;
                        *puVar24 = (uint)puVar32;
                        puVar24[1] = (uint)puVar18;
                        puVar24[2] = (uint)puVar31;
                        puVar24[3] = (uint)puVar22;
                        puVar24[4] = (uint)local_128;
                        puVar24 = local_b8;
                      }
                    }
                    unaff_r8 = (uint *)((uint)local_a8 >> 8 | (int)local_a4 << 0x18);
                    puVar18 = local_a0;
                    puVar22 = local_a4;
                    puVar31 = local_9c;
                    puVar5 = local_a8;
                  }
                  uVar33 = (uint)puVar5 >> 0x10;
                  unaff_r4 = (uint *)((uint)puVar5 & 0xff);
                  if (unaff_r4 != (uint *)0x4f) goto LAB_0071f9d8;
                  if (((uint)unaff_r8 & 1) != 0) {
LAB_0071f71c:
                    local_128 = local_c8;
                    local_78 = (uint *)0x2;
                    local_58 = puVar10;
                    if (local_c8 == local_d0) {
                      FUN_007193b0(&local_d0);
                    }
                    puVar32 = local_cc + (int)local_128 * 10;
                    *puVar32 = (uint)local_78;
                    puVar32[1] = (uint)local_74;
                    puVar32[2] = (uint)local_70;
                    puVar32[3] = (uint)local_6c;
                    puVar32[4] = (uint)local_68;
                    puVar32[5] = (uint)local_64;
                    puVar32[6] = local_60;
                    puVar32[7] = local_5c;
                    puVar32[8] = (uint)local_58;
                    puVar32[9] = uStack_54;
                    local_128 = (uint *)((int)local_128 + 1);
                    local_c8 = local_128;
                  }
                }
              }
            }
            else {
              uVar35 = FUN_0134c25c();
              FUN_00717a10(&local_78,&local_90,local_88[8],(int)uVar35,
                           (int)((ulonglong)uVar35 >> 0x20));
              unaff_r4 = (uint *)((uint)local_78 & 0xff);
              if (unaff_r4 != (uint *)0x4f) {
                uVar33 = (uint)local_78 >> 0x10;
                unaff_r8 = (uint *)((uint)local_78 >> 8 & 0xff);
                puVar18 = local_70;
                puVar22 = local_74;
                puVar31 = local_6c;
                goto LAB_0071f9d8;
              }
            }
          }
LAB_0071f5d4:
        } while (local_8c != 0);
        if (&DAT_00000001 < puVar24) {
          if (&DAT_00000014 < puVar24) {
            FUN_00723860(local_bc,puVar24);
          }
          else {
            FUN_007346f8(local_bc);
          }
        }
      }
      local_78 = local_d0;
      local_74 = local_cc;
      local_70 = local_c8;
      if ((local_c8 < local_d0) &&
         (iVar9 = FUN_01609230(&local_78,local_c8,8,0x28), iVar9 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      puVar24 = local_70;
      puVar32 = local_74;
      local_78 = local_c0;
      local_74 = local_bc;
      local_70 = local_b8;
      if ((local_b8 < local_c0) &&
         (iVar9 = FUN_01609230(&local_78,local_b8,8,0x18), iVar9 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      uVar33 = (uint)puVar24 >> 0x10;
      unaff_r8 = (uint *)((uint)puVar24 >> 8);
      unaff_r4 = (uint *)((uint)puVar24 & 0xff);
      bVar34 = true;
      puVar31 = (uint *)0x0;
      uVar17 = 0;
      puVar18 = local_70;
      puVar22 = local_74;
LAB_0071f9fc:
      uVar21 = ((int)unaff_r8 << 8 & 0xffffU) + uVar33 * 0x10000 | (uint)unaff_r4;
      unaff_r5 = (uint *)*piVar15;
      if (unaff_r5 == (uint *)0x2) {
        *(undefined4 *)(uVar14 + 0x130) = uVar17;
        *(uint **)(uVar14 + 0x134) = puVar32;
        *(uint *)(uVar14 + 0x138) = uVar21;
        *(uint **)(uVar14 + 0x13c) = puVar22;
        *(uint **)(uVar14 + 0x140) = puVar18;
        *(uint **)(uVar14 + 0x144) = puVar31;
      }
      else if (bVar34) {
        if (uVar21 != 0) {
          iVar9 = uVar33 * 0x10000 + ((int)unaff_r8 << 8 & 0xffffU) + (int)unaff_r4;
          unaff_r4 = puVar32;
          do {
            if (*unaff_r4 != 2) {
              FUN_007215b0(unaff_r4);
            }
            unaff_r4 = unaff_r4 + 10;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          thunk_FUN_01be4678(puVar32);
          unaff_r5 = (uint *)0x0;
        }
        if (puVar18 != (uint *)0x0) {
          thunk_FUN_01be4678(puVar22);
        }
      }
    }
    iVar9 = 4;
    if (*piVar15 != 0) {
      iVar9 = 8;
    }
    piVar19 = (int *)((int)piVar15 + iVar9);
    piVar27 = piVar19;
    if (*piVar15 == 1) {
      piVar27 = (int *)piVar19[1];
      if ((char)*piVar19 != 'O') {
        uVar4 = *(undefined2 *)((int)piVar19 + 1);
        cVar8 = *(char *)((int)piVar19 + 3);
        iVar9 = piVar19[3];
        iVar16 = piVar19[2];
        *(char *)(param_1 + 2) = (char)*piVar19;
        param_1[3] = piVar27;
        param_1[4] = iVar16;
        param_1[5] = iVar9;
        *(undefined2 *)((int)param_1 + 9) = uVar4;
        *(char *)((int)param_1 + 0xb) = cVar8;
        goto LAB_00720108;
      }
    }
    pcVar28 = (char *)0x0;
    uVar33 = piVar27[3];
    puVar24 = (uint *)*param_2;
    puVar32 = (uint *)param_2[1];
    pcVar29 = pcVar28;
    if (uVar33 != 0) {
      unaff_r4 = (uint *)piVar27[2];
      if (uVar33 != 1) {
        pcVar28 = (char *)0x0;
        do {
          uVar21 = uVar33 >> 1;
          uVar33 = uVar33 - (uVar33 >> 1);
          puVar18 = (uint *)(unaff_r4 + (int)(pcVar28 + uVar21) * 6)[1];
          pcVar29 = pcVar28 + uVar21;
          if (puVar32 <= puVar18 &&
              (uint)((uint *)unaff_r4[(int)(pcVar28 + uVar21) * 6] <= puVar24) <=
              (uint)((int)puVar32 - (int)puVar18)) {
            pcVar29 = pcVar28;
          }
          pcVar28 = pcVar29;
        } while (1 < uVar33);
      }
      puVar31 = unaff_r4 + (int)pcVar28 * 6;
      puVar18 = (uint *)puVar31[1];
      unaff_r5 = puVar18;
      pcVar29 = (char *)0x0;
      if ((puVar18 < puVar32 ||
           (uint)((int)puVar32 - (int)puVar18) < (uint)((uint *)*puVar31 <= puVar24)) &&
         (unaff_r8 = (uint *)puVar31[2],
         puVar32 <= (uint *)puVar31[3] &&
         (uint)(unaff_r8 <= puVar24) <= (uint)((int)puVar32 - (int)puVar31[3]))) {
        uVar33 = unaff_r4[(int)pcVar28 * 6 + 4];
        if ((uint)piVar27[1] <= uVar33) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar33,piVar27[1],&DAT_01c07850);
        }
        unaff_r8 = (uint *)(*piVar27 + uVar33 * 0x28);
        uVar33 = *unaff_r8;
        if (uVar33 == 2) {
          iVar9 = 4;
          unaff_r4 = (uint *)unaff_r8[8];
          uVar33 = puVar20[0x35];
          if (*(char *)((int)puVar20 + 0xd9) == '\b') {
            iVar9 = 0xc;
          }
          puVar31 = (uint *)((iVar9 + puVar20[0x37]) - uVar33);
          uVar21 = (int)unaff_r4 - (int)puVar31;
          bVar34 = uVar21 == 0;
          if (puVar31 <= unaff_r4) {
            bVar34 = uVar33 == uVar21;
          }
          if ((puVar31 <= unaff_r4 && uVar21 <= uVar33) && !bVar34) {
            local_8c = uVar33 - uVar21;
            unaff_r5 = (uint *)param_2[3];
            local_84 = puVar20[0x40] + 8;
            local_80 = 0;
            local_88 = puVar20 + 0x2e;
            local_90 = puVar20[0x34] + uVar21;
            FUN_00719bb8(&local_78,&local_90);
            puVar31 = local_6c;
            puVar18 = local_70;
            if ((char)local_78 == 'O') {
              if (local_70 == (uint *)0x0 && local_6c == (uint *)0x0) {
                local_80 = local_80 + -1;
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01c078c0);
              }
              if ((local_6c == (uint *)0x0) && ((int)local_70 - 1U < *(uint *)(local_84 + 8))) {
                iVar9 = ((int)local_70 - 1U) * 0x68 + *(int *)(local_84 + 4);
              }
              else {
                iVar9 = FUN_0134bfa8(*(undefined4 *)(local_84 + 0xc),
                                     *(undefined4 *)(local_84 + 0x10),local_70,local_6c);
                if (iVar9 == 0) {
                  local_a4 = (uint *)0x0;
                  cVar8 = '\x12';
                  goto LAB_0071feec;
                }
              }
              if (*(char *)(iVar9 + 0x62) == '\x01') {
                local_80 = local_80 + 1;
              }
              uVar35 = FUN_0134c25c();
              iVar9 = (int)((ulonglong)uVar35 >> 0x20);
              puVar31 = (uint *)uVar35;
              local_e4 = param_2;
              if (iVar9 == 0) {
                local_dc = (uint *)0x0;
              }
              else {
                local_dc = (uint *)0x0;
                iVar9 = iVar9 << 4;
                local_d8 = (uint *)0x0;
                do {
                  local_b0 = (uint *)*puVar31;
                  puVar22 = (uint *)puVar31[1];
                  puVar18 = (uint *)puVar31[2];
                  local_a4 = (uint *)puVar31[3];
                  local_ac = puVar22;
                  local_a8 = puVar18;
                  FUN_00716a3c(&local_78,&local_90,local_88[8]);
                  if (local_78 == (uint *)&DAT_0000002e && local_74 == (uint *)0x0) {
                    local_a8 = local_70;
                    local_a4 = local_6c;
                    local_a0 = local_68;
                    local_9c = local_64;
                    unaff_r4 = puVar22;
                    goto LAB_0071fbbc;
                  }
                  uVar33 = (uint)local_68 & 0xffff;
                  if (uVar33 < 0x47) {
                    if (uVar33 == 3) {
                      if (local_d8 == (uint *)0x0) {
                        FUN_00717f68(&local_b0,&local_78);
                        FUN_0071d020(&local_38,iVar16,*(undefined1 *)((int)puVar20 + 0xd9),
                                     puVar20[0x41],&local_b0);
                        local_dc = local_34;
                        if ((char)local_38 != 'O') {
                          local_dc = (uint *)0x0;
                        }
                        goto LAB_0071feac;
                      }
                    }
                    else if (uVar33 == 0x31) goto LAB_0071fde4;
                  }
                  else if (uVar33 == 0x47) {
LAB_0071fde4:
                    if (local_d8 == (uint *)0x0) {
                      FUN_00717f68(&local_b0,&local_78);
                      FUN_0072e3cc(&local_38,extraout_r1,local_b0,local_ac,local_a8,cVar8,iVar16,
                                   puVar20,unaff_r5,0x10);
                      if ((char)local_38 != 'O') {
                        local_9c = local_2c;
                        local_a0 = local_30;
                        local_a4 = local_34;
                        local_a8 = local_38;
                        unaff_r4 = puVar22;
                        goto LAB_0071fbbc;
                      }
                      local_dc = local_34;
LAB_0071feac:
                      local_e4 = local_30;
                      local_d8 = local_dc;
                    }
                  }
                  else if (uVar33 == 0x2007 || uVar33 == 0x6e) {
                    FUN_00717f68(&local_b0,&local_78);
                    FUN_0071d020(&local_38,iVar16,*(undefined1 *)((int)puVar20 + 0xd9),puVar20[0x41]
                                 ,&local_b0);
                    if ((char)local_38 == 'O') {
                      local_d8 = local_34;
                      local_e4 = local_30;
                      local_dc = local_34;
                    }
                  }
                  puVar31 = puVar31 + 4;
                  iVar9 = iVar9 + -0x10;
                } while (iVar9 != 0);
              }
              puVar18 = local_88;
              local_60 = local_90;
              local_5c = local_8c;
              local_58 = local_88;
              uStack_54 = local_84;
              iStack_50 = local_80;
              local_68 = (uint *)&DAT_00000008;
              local_74 = (uint *)&DAT_00000008;
              local_64 = (uint *)0x0;
              local_6c = (uint *)0x0;
              local_70 = (uint *)0x0;
              local_78 = (uint *)0x0;
              local_4c = iVar16;
              local_48 = puVar20;
              local_44 = unaff_r5;
              local_40 = cVar8;
              FUN_0072e504(&local_38,&local_78,0,0);
              puVar20 = local_68;
              cVar8 = (char)local_38;
              if ((char)local_38 == 'O') {
                if (&DAT_00000001 < local_64) {
                  if (&DAT_00000014 < local_64) {
                    FUN_00723974(local_68);
                  }
                  else {
                    iVar23 = 0x18;
                    iVar9 = (int)local_64 * 0x18;
                    do {
                      FUN_00733ac8(puVar20,(int)puVar20 + iVar23);
                      iVar23 = iVar23 + 0x18;
                    } while (iVar9 != iVar23);
                  }
                }
                local_b0 = local_78;
                local_ac = local_74;
                local_a8 = local_70;
                if ((local_70 < local_78) &&
                   (iVar9 = FUN_01609230(&local_b0,local_70,8,0x28), iVar9 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620();
                }
                puVar31 = local_a8;
                puVar20 = local_ac;
                local_38 = local_6c;
                local_34 = local_68;
                local_30 = local_64;
                if ((local_64 < local_6c) &&
                   (iVar9 = FUN_01609230(&local_38,local_64,8,0x18), iVar9 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620();
                }
                local_94 = local_e4;
                local_98 = local_dc;
                local_a4 = local_34;
                local_b0 = (uint *)0x0;
                local_ac = puVar20;
                local_a8 = puVar31;
                local_a0 = local_30;
                local_9c = unaff_r4;
                goto LAB_0071fbc0;
              }
              FUN_01bed4e2((int)&local_a8 + 1,(uint)&local_38 | 1,0xf);
              local_b0 = (uint *)0x1;
              local_a8 = (uint *)CONCAT31(local_a8._1_3_,cVar8);
              FUN_0134c054(local_78,local_74,8,0x28);
              FUN_0134c054(local_6c,local_68,8,0x18);
              unaff_r4 = &local_90;
              unaff_r5 = puVar18;
            }
            else {
              local_38 = (uint *)CONCAT22(CONCAT11(local_38._3_1_,local_78._3_1_),local_78._1_2_);
              local_a4 = local_74;
              cVar8 = (char)local_78;
LAB_0071feec:
              local_a0 = puVar18;
              local_a8 = (uint *)CONCAT13(local_38._2_1_,CONCAT21((undefined2)local_38,cVar8));
              local_b0 = (uint *)0x1;
              local_9c = puVar31;
            }
          }
          else {
            local_9c = (uint *)0x0;
            local_a8 = (uint *)0x3b;
LAB_0071fbbc:
            local_b0 = (uint *)0x1;
LAB_0071fbc0:
            unaff_r5 = puVar18;
          }
          if (*unaff_r8 == 2) {
            *unaff_r8 = (uint)local_b0;
            unaff_r8[1] = (uint)local_ac;
            unaff_r8[2] = (uint)local_a8;
            unaff_r8[3] = (uint)local_a4;
            unaff_r8[4] = (uint)local_a0;
            unaff_r8[5] = (uint)local_9c;
            unaff_r8[6] = (uint)local_98;
            unaff_r8[7] = (uint)local_94;
          }
          else {
            FUN_007215b0(&local_b0);
          }
          uVar33 = *unaff_r8;
        }
        iVar9 = 4;
        bVar34 = (uVar33 & 1) != 0;
        if (bVar34) {
          iVar9 = 8;
        }
        pcVar28 = (char *)((int)unaff_r8 + iVar9);
        pcVar29 = pcVar28;
        if (bVar34) {
          pcVar29 = *(char **)(pcVar28 + 4);
          if (*pcVar28 != 'O') {
            uVar17 = *(undefined4 *)(pcVar28 + 8);
            uVar26 = *(undefined4 *)(pcVar28 + 0xc);
            uVar4 = *(undefined2 *)(pcVar28 + 1);
            cVar8 = pcVar28[3];
            *(char *)(param_1 + 2) = *pcVar28;
            param_1[3] = pcVar29;
            param_1[4] = uVar17;
            param_1[5] = uVar26;
            *(undefined2 *)((int)param_1 + 9) = uVar4;
            *(char *)((int)param_1 + 0xb) = cVar8;
            goto LAB_00720108;
          }
        }
      }
    }
    FUN_00732a58(&local_78,uVar14,iVar16);
    if ((char)local_78 == 'O') {
      uVar33 = 2;
      uVar17 = 0;
      uVar14 = extraout_r3;
      if (local_74 == (uint *)0x0) {
LAB_00720118:
        uVar21 = 0;
      }
      else {
        uVar25 = local_74[3];
        uVar21 = 0;
        if (uVar25 != 0) {
          iVar16 = 0;
          if (uVar25 != 1) {
            iVar9 = 0;
            do {
              iVar16 = iVar9 + (uVar25 >> 1);
              uVar25 = uVar25 - (uVar25 >> 1);
              iVar23 = local_74[2] + iVar16 * 0x18;
              puVar20 = *(uint **)(iVar23 + 0xc);
              if (puVar32 <= puVar20 &&
                  (uint)(*(uint **)(iVar23 + 8) <= puVar24) <= (uint)((int)puVar32 - (int)puVar20))
              {
                iVar16 = iVar9;
              }
              iVar9 = iVar16;
            } while (1 < uVar25);
          }
          puVar12 = (undefined4 *)(local_74[2] + iVar16 * 0x18);
          uVar21 = 0;
          unaff_r4 = (uint *)puVar12[2];
          unaff_r5 = (uint *)puVar12[3];
          uVar14 = (int)puVar32 - (int)((int)unaff_r5 + (uint)(unaff_r4 > puVar24));
          if (unaff_r5 < puVar32 ||
              (uint)((int)puVar32 - (int)unaff_r5) < (uint)(unaff_r4 <= puVar24)) {
            unaff_r4 = (uint *)puVar12[4];
            unaff_r5 = (uint *)puVar12[5];
            uVar14 = (int)puVar32 - (int)((int)unaff_r5 + (uint)(unaff_r4 > puVar24));
            if (puVar32 <= unaff_r5 &&
                (uint)(unaff_r4 <= puVar24) <= (uint)((int)puVar32 - (int)unaff_r5)) {
              uVar25 = puVar12[1];
              uVar21 = 0;
              if (uVar25 != 0) {
                puVar20 = (uint *)*puVar12;
                uVar21 = 0;
                if (uVar25 != 1) {
                  uVar14 = 0;
                  uVar30 = uVar25;
                  do {
                    uVar21 = uVar14 + (uVar30 >> 1);
                    uVar30 = uVar30 - (uVar30 >> 1);
                    puVar18 = (uint *)(puVar20 + uVar21 * 6)[1];
                    if (puVar32 <= puVar18 &&
                        (uint)((uint *)puVar20[uVar21 * 6] <= puVar24) <=
                        (uint)((int)puVar32 - (int)puVar18)) {
                      uVar21 = uVar14;
                    }
                    uVar14 = uVar21;
                  } while (1 < uVar30);
                }
                puVar18 = (uint *)puVar20[uVar21 * 6];
                puVar31 = (uint *)(puVar20 + uVar21 * 6)[1];
                unaff_r5 = (uint *)((uint)puVar31 ^ (uint)puVar32);
                unaff_r4 = (uint *)((uint)puVar18 ^ (uint)puVar24 | (uint)unaff_r5);
                if (unaff_r4 != (uint *)0x0) {
                  uVar14 = (int)puVar31 - (int)((int)puVar32 + (uint)(puVar24 > puVar18));
                  if (puVar31 <= puVar32 &&
                      (uint)(puVar24 <= puVar18) <= (uint)((int)puVar31 - (int)puVar32)) {
                    uVar21 = uVar21 + 1;
                  }
                  unaff_r8 = puVar20;
                  if (uVar21 == 0) goto LAB_00720118;
                  uVar21 = uVar21 - 1;
                }
                if (uVar25 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar21,uVar25,&DAT_01c03248);
                }
                if (puVar20[uVar21 * 6 + 2] < local_74[1]) {
                  iVar16 = *local_74 + puVar20[uVar21 * 6 + 2] * 0xc;
                  unaff_r4 = *(uint **)(iVar16 + 4);
                  unaff_r5 = *(uint **)(iVar16 + 8);
                }
                else {
                  unaff_r4 = (uint *)0x0;
                }
                unaff_r8 = (uint *)puVar20[uVar21 * 6 + 4];
                uVar14 = puVar20[uVar21 * 6 + 5];
                uVar21 = (uint)(unaff_r8 != (uint *)0x0);
                uVar33 = uVar21;
              }
            }
          }
        }
      }
      param_1[1] = pcVar29;
      param_1[2] = uVar33;
      param_1[3] = unaff_r8;
      param_1[4] = uVar21;
      param_1[5] = uVar14;
      param_1[6] = unaff_r4;
      param_1[7] = unaff_r5;
      goto LAB_0072010c;
    }
    param_1[2] = local_78;
    param_1[3] = local_74;
    param_1[4] = local_70;
    param_1[5] = local_6c;
  }
  else {
    cVar1 = param_3[7];
    uVar26 = *(undefined4 *)(param_3 + 1);
    uVar17 = *(undefined4 *)(param_3 + 0xc);
    uVar4 = *(undefined2 *)(param_3 + 5);
    param_1[4] = *(undefined4 *)(param_3 + 8);
    *(char *)(param_1 + 2) = cVar8;
    *(undefined2 *)((int)param_1 + 0xd) = uVar4;
    *(char *)((int)param_1 + 0xf) = cVar1;
    param_1[5] = uVar17;
    *(undefined4 *)((int)param_1 + 9) = uVar26;
  }
LAB_00720108:
  uVar17 = 1;
LAB_0072010c:
  *param_1 = uVar17;
  return;
}

