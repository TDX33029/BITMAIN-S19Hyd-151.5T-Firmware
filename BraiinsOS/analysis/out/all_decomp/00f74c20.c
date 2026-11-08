// FUN_00f74c20 @ 00f74c20 size=15096 calls_out=55 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

/* WARNING: Removing unreachable block (ram,0x00f7988c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint ******* FUN_00f74c20(int *param_1,uint *******param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint *******pppppppuVar7;
  int *piVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *******pppppppuVar11;
  byte bVar12;
  int iVar13;
  uint *******pppppppuVar14;
  undefined4 *puVar15;
  uint ******ppppppuVar16;
  undefined4 *puVar17;
  uint *******extraout_r2;
  uint *******extraout_r2_00;
  uint *******extraout_r2_01;
  uint *******extraout_r2_02;
  uint *******extraout_r2_03;
  uint *******extraout_r2_04;
  uint *******extraout_r2_05;
  uint *******extraout_r2_06;
  uint *******extraout_r2_07;
  uint *******extraout_r2_08;
  uint *******extraout_r2_09;
  uint *******extraout_r2_10;
  uint *******extraout_r2_11;
  uint *******extraout_r2_12;
  uint *******extraout_r2_13;
  uint ******ppppppuVar18;
  undefined *puVar19;
  uint *******extraout_r3;
  uint *******extraout_r3_00;
  undefined4 *puVar20;
  uint *****pppppuVar21;
  undefined4 *puVar22;
  uint *****pppppuVar23;
  uint *******pppppppuVar24;
  uint *******pppppppuVar25;
  uint uVar26;
  int iVar27;
  uint ******ppppppuVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int *piVar34;
  undefined4 uVar35;
  uint ******ppppppuVar36;
  uint uVar37;
  uint uVar38;
  int *piVar39;
  uint *******pppppppuVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  int iVar43;
  bool bVar44;
  uint ******ppppppuVar45;
  longlong lVar46;
  undefined8 uVar47;
  uint *******local_208;
  uint *******local_204;
  uint *******local_200;
  int local_1fc;
  uint *******local_1f4;
  uint *******local_1f0;
  uint ******local_1ec;
  uint *******local_1e8;
  uint ******local_1e4;
  uint *******local_1e0;
  uint ******local_1c0;
  uint ******local_1bc;
  uint *******local_1b0;
  uint *******local_1ac;
  undefined4 *local_184;
  uint *******local_180;
  uint *******local_17c;
  uint local_174;
  uint *******local_170;
  uint *******local_168;
  uint *******local_164;
  uint *******local_160;
  uint *******local_15c;
  uint *******local_158;
  uint *******local_154;
  uint *******local_150;
  uint *******local_14c;
  uint *******local_148;
  uint *******pppppppuStack_144;
  uint *******local_140;
  uint *******local_13c;
  uint *******local_138;
  uint *******local_134;
  uint *******local_130;
  uint *******local_12c;
  uint *******local_128;
  uint *******local_120;
  uint *******local_11c;
  uint *******local_118;
  uint *******local_114;
  uint *******local_110;
  uint *******pppppppuStack_10c;
  uint *******local_108;
  uint *******pppppppuStack_104;
  uint *******pppppppuStack_100;
  int iStack_fc;
  uint *******local_f8;
  uint *******local_f4;
  uint *******local_f0;
  uint *******local_ec;
  uint *******local_e8;
  uint *******local_e4;
  uint *******local_e0;
  uint *******local_dc;
  uint *******local_d8;
  uint *******local_d4;
  uint *******local_d0;
  uint *******local_cc;
  uint *******local_c8;
  uint *******local_c4;
  uint *******local_c0;
  int local_b8;
  uint *******local_b4;
  int local_b0;
  uint ******local_ac;
  uint *******local_a8;
  uint *******local_a4;
  uint *******local_a0;
  uint *******local_9c;
  uint *******local_98;
  byte *local_94;
  int local_90;
  uint *******local_88;
  undefined1 *local_84;
  uint ******local_68;
  int local_64;
  int local_60;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  
  iVar2 = param_1[2];
  iVar13 = *(int *)(iVar2 + 0x58);
  if (iVar13 == 0) {
    puVar41 = (undefined4 *)0x0;
  }
  else {
    puVar41 = (undefined4 *)0x0;
    piVar4 = *(int **)(iVar2 + 0x54);
    do {
      if (*piVar4 == 2) {
        puVar41 = (undefined4 *)((int)puVar41 + 1);
      }
      iVar13 = iVar13 + -1;
      piVar4 = piVar4 + 4;
    } while (iVar13 != 0);
  }
  iVar13 = *(int *)(iVar2 + 0x48);
  iVar2 = *(int *)(iVar2 + 0x4c) * 0x134;
  do {
    iVar30 = iVar2;
    if (iVar30 == 0) break;
    pbVar9 = (byte *)(iVar13 + 0x11d);
    iVar13 = iVar13 + 0x134;
    iVar2 = iVar30 + -0x134;
  } while ((*pbVar9 & 1) == 0);
  uVar3 = *(uint *)(param_3 + 8);
  if (param_4 < uVar3) {
    local_184 = (undefined4 *)&DAT_00000001;
    uVar37 = 0;
    iVar2 = *(int *)(param_3 + 4);
    piVar4 = (int *)((uint)&local_160 | 4);
    local_174 = 0;
    local_1ac = (uint *******)0x0;
    do {
      local_164 = (uint *******)local_1bc;
      puVar22 = local_184;
      uVar26 = param_4;
      uVar38 = uVar37;
      ppppppuVar36 = local_1c0;
      while( true ) {
        iVar31 = param_1[2];
        iVar13 = iVar2 + uVar26 * 0xc;
        param_4 = uVar26 + 1;
        pppppppuVar14 = *(uint ********)(iVar13 + 4);
        local_168 = *(uint ********)(iVar13 + 8);
        if (uVar38 != 0) break;
        uVar32 = *(uint *)(iVar31 + 0x144);
        uVar37 = *(uint *)(iVar31 + 0x148);
        if (((uVar32 & 0x4000) != 0 || (uVar37 & 0x4000) != 0) || (1 < local_174 - 1)) {
          FUN_00fab1e0(&local_f8,pppppppuVar14,local_168);
          local_160 = local_f8;
          local_15c = local_f4;
          local_158 = local_f0;
          if (local_f8 != (uint *******)0x0) {
            local_15c = pppppppuVar14;
            local_158 = local_168;
          }
          lVar46 = FUN_00f7b1e4(iVar31,&local_160,local_1ac);
          pppppppuVar11 = (uint *******)((ulonglong)lVar46 >> 0x20);
          puVar5 = (uint *)lVar46;
          if (puVar5 != (uint *)0x0) {
            if (pppppppuVar11 == (uint *******)&DAT_00000004) {
              uVar3 = *puVar5;
              bVar44 = uVar3 == 0x706c6568;
              if (bVar44) {
                uVar3 = uVar32 | uVar37;
              }
              if (bVar44 && (uVar3 & 0x100000) == 0) {
                uVar3 = *(uint *)(param_3 + 8);
                if (uVar3 <= uVar26) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(param_4,uVar3,uVar3,&DAT_01880aa4);
                }
                pppppppuVar11 =
                     (uint *******)
                     FUN_00f7b4bc(iVar31,*(int *)(param_3 + 4) + param_4 * 0xc,
                                  *(int *)(param_3 + 4) + uVar3 * 0xc);
                goto LAB_00f78a58;
              }
LAB_00f775bc:
              local_164 = (uint *******)thunk_FUN_016d4a50(pppppppuVar11);
              if (local_164 == (uint *******)0x0) goto LAB_00f7a3fc;
              local_1b0 = pppppppuVar11;
            }
            else {
              if (lVar46 < 0) {
                local_1e0 = (uint *******)&DAT_80000000;
                goto LAB_00f7830c;
              }
              if (pppppppuVar11 != (uint *******)0x0) goto LAB_00f775bc;
              local_1b0 = (uint *******)0x0;
              local_164 = (uint *******)&DAT_00000001;
            }
            FUN_016dd1aa(local_164,puVar5);
            iVar2 = param_1[2];
            pppppppuVar14 = (uint *******)(*(uint *)(iVar2 + 0x144) | *(uint *)(iVar2 + 0x148));
            bVar44 = ((uint)pppppppuVar14 & 0x2000) != 0;
            if (bVar44) {
              pppppppuVar14 = local_1ac;
            }
            if (!bVar44 || ((uint)pppppppuVar14 & 1) == 0) {
              if (*(int *)(iVar2 + 100) == 0) goto LAB_00f7a598;
              iVar13 = *(int *)(iVar2 + 0x60);
              iVar2 = *(int *)(iVar2 + 100) * 0x16c + iVar13;
              goto LAB_00f78274;
            }
            if (pppppppuVar11 == (uint *******)0x0) {
              pppppppuVar14 = (uint *******)&DAT_00000001;
            }
            else {
              pppppppuVar14 = (uint *******)thunk_FUN_016d4a50(pppppppuVar11);
              if (pppppppuVar14 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,pppppppuVar11);
              }
            }
            FUN_016dd1aa(pppppppuVar14,local_164);
            ppppppuVar36 = param_2[9];
            iVar30 = param_1[2];
            iVar13 = (int)param_2[10] << 3;
            ppppppuVar18 = ppppppuVar36 + (int)param_2[10] * 2;
            local_a8 = pppppppuVar11;
            local_a4 = pppppppuVar14;
            local_a0 = pppppppuVar11;
            goto LAB_00f78498;
          }
        }
        local_17c = (uint *******)puVar22;
        if (local_168 == (uint *******)&SUB_00000002) {
          if (*(short *)pppppppuVar14 != 0x2d2d) goto LAB_00f74f0c;
          if (local_174 != 0) {
            if (local_174 == 1) {
              iVar27 = 0;
              iVar13 = *(int *)(iVar31 + 0x4c);
              iVar33 = *(int *)(iVar31 + 0x48);
              while( true ) {
                if (iVar13 * 0x134 == iVar27) {
                  puVar19 = &DAT_018803d4;
                  goto LAB_00f7a524;
                }
                iVar43 = iVar33 + iVar27;
                if ((*(uint *******)(iVar43 + 0x118) == ppppppuVar36) &&
                   (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar43 + 0x114),local_164,
                                               ppppppuVar36), iVar6 == 0)) break;
                iVar27 = iVar27 + 0x134;
              }
              if ((*(byte *)(iVar43 + 0x11c) & 0x20) == 0) goto LAB_00f7578c;
              goto LAB_00f75034;
            }
            iVar33 = *(int *)(iVar31 + 0x48);
            iVar13 = *(int *)(iVar31 + 0x4c) * 0x134;
            while( true ) {
              if (iVar13 == 0) {
                puVar19 = &DAT_018803d4;
                goto LAB_00f7a524;
              }
              if ((*(uint *******)(iVar33 + 0x118) == ppppppuVar36) &&
                 (iVar27 = thunk_FUN_016dd50a(*(undefined4 *)(iVar33 + 0x114),local_164,ppppppuVar36
                                             ), iVar27 == 0)) break;
              iVar33 = iVar33 + 0x134;
              iVar13 = iVar13 + -0x134;
            }
            if ((*(byte *)(iVar33 + 0x11c) & 0x20) == 0) goto LAB_00f7578c;
            local_168 = (uint *******)&SUB_00000002;
            break;
          }
LAB_00f7578c:
          iVar13 = *(int *)(iVar31 + 0x58) << 4;
          puVar42 = (undefined4 *)(*(int *)(iVar31 + 0x54) + 4);
          do {
            puVar20 = puVar42;
            if (iVar13 == 0) goto LAB_00f75820;
            iVar13 = iVar13 + -0x10;
            puVar15 = puVar20;
            if (puVar20[-1] == 2) {
              puVar15 = (undefined4 *)*puVar20;
            }
            puVar42 = puVar20 + 4;
          } while (puVar20[-1] != 2 || puVar15 != puVar22);
          ppppppuVar16 = *(uint *******)(iVar31 + 0x4c);
          ppppppuVar18 = (uint ******)puVar20[2];
          if (ppppppuVar16 <= ppppppuVar18) goto LAB_00f7a58c;
          iVar13 = (int)ppppppuVar18 * 0x134 + *(int *)(iVar31 + 0x48);
          iVar31 = *(int *)(iVar13 + 0x128);
          if ((iVar31 != 0) && (*(int *)(iVar13 + 300) == 2)) {
            iVar13 = thunk_FUN_016dd50a(pppppppuVar14,iVar31,2);
            if (iVar13 == 0) {
              puVar22 = (undefined4 *)((int)local_184 + 1);
              local_184 = (undefined4 *)((int)local_184 + 1);
            }
          }
LAB_00f75820:
          uVar38 = 1;
          if ((*param_2 != (uint ******)0x2) && (((uint)*param_2 & 1) == 0)) {
            *param_2 = (uint ******)0x1;
            param_2[1] = param_2[4];
          }
        }
        else {
          if (&DAT_00000001 < local_168) {
LAB_00f74f0c:
            if ((*(short *)pppppppuVar14 == 0x2d2d) &&
               (pppppppuVar11 = (uint *******)((int)local_168 + -2),
               pppppppuVar11 != (uint *******)0x0)) {
              pppppppuVar14 = (uint *******)((int)pppppppuVar14 + 2);
              FUN_00fa7adc(&local_f8,pppppppuVar14,pppppppuVar11,"=",1);
              if (local_f8 == (uint *******)0x0) {
                local_1e8 = (uint *******)0x0;
              }
              else {
                local_1e8 = local_f0;
                local_1f4 = local_ec;
                pppppppuVar14 = local_f8;
                pppppppuVar11 = local_f4;
              }
              FUN_00fab1e0(&local_f8,pppppppuVar14,pppppppuVar11);
              pppppppuVar25 = local_f8;
              pppppppuVar40 = local_f4;
              pppppppuVar7 = local_f0;
              if (local_f8 != (uint *******)0x0) {
                pppppppuVar40 = pppppppuVar14;
                pppppppuVar7 = pppppppuVar11;
              }
              local_1e0 = extraout_r2;
              if (local_174 == 0) goto LAB_00f7523c;
              if (local_174 == 2) {
                iVar2 = *(int *)(param_1[2] + 0x48);
                iVar13 = *(int *)(param_1[2] + 0x4c) * 0x134;
                goto LAB_00f7518c;
              }
              iVar2 = *(int *)(param_1[2] + 0x48);
              iVar13 = *(int *)(param_1[2] + 0x4c) * 0x134;
              goto LAB_00f75204;
            }
LAB_00f74f7c:
            pppppppuVar11 = (uint *******)((int)pppppppuVar14 + 1);
            if (*(byte *)pppppppuVar14 == 0x2d) {
              pppppppuVar7 = (uint *******)((int)local_168 + -1);
              bVar12 = 0x2d;
              if (pppppppuVar7 != (uint *******)0x0) {
                bVar12 = *(byte *)pppppppuVar11;
              }
              if (pppppppuVar7 != (uint *******)0x0 && bVar12 != 0x2d) {
                FUN_00fab1e0(&local_160,pppppppuVar11);
                pppppppuVar14 = local_15c;
                if (local_160 == (uint *******)&DAT_00000001) {
                  if (pppppppuVar7 < local_15c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_01880a94);
                  }
                  FUN_00fab1e0(&local_f8,pppppppuVar11,local_15c);
                  if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_120,&DAT_01880a34,&DAT_01880a84);
                  }
                  local_180 = local_f4;
                  local_1e8 = local_f0;
                  local_1f0 = (uint *******)((int)pppppppuVar11 + (int)pppppppuVar14);
                  local_1fc = (int)pppppppuVar7 - (int)pppppppuVar14;
                }
                else {
                  local_180 = local_15c;
                  local_1e8 = local_158;
                  local_1f0 = (uint *******)0x0;
                }
                local_1b0 = (uint *******)param_1[2];
                if (local_174 == 0) goto LAB_00f7629c;
                if (local_174 == 2) {
                  iVar30 = *(int *)((int)local_1b0 + 0x48);
                  iVar31 = *(int *)((int)local_1b0 + 0x4c) * 0x134;
                  iVar2 = iVar31;
                  iVar13 = iVar30;
                  goto LAB_00f75a70;
                }
                iVar30 = *(int *)((int)local_1b0 + 0x48);
                iVar31 = *(int *)((int)local_1b0 + 0x4c) * 0x134;
                iVar2 = iVar30;
                iVar13 = iVar31;
                goto LAB_00f75b60;
              }
            }
            iVar31 = param_1[2];
            if (local_174 != 1) break;
          }
          else {
            if (local_168 != (uint *******)0x0) goto LAB_00f74f7c;
            iVar31 = param_1[2];
            if (local_174 != 1) break;
          }
          iVar13 = *(int *)(iVar31 + 0x4c);
          iVar33 = *(int *)(iVar31 + 0x48);
LAB_00f75034:
          iVar13 = iVar13 * 0x134;
          while( true ) {
            if (iVar13 == 0) {
              puVar19 = &DAT_018803e4;
              goto LAB_00f7a524;
            }
            if ((*(uint *******)(iVar33 + 0x118) == ppppppuVar36) &&
               (iVar31 = thunk_FUN_016dd50a(*(undefined4 *)(iVar33 + 0x114),local_164,ppppppuVar36),
               iVar31 == 0)) break;
            iVar33 = iVar33 + 0x134;
            iVar13 = iVar13 + -0x134;
          }
          if ((*(int *)(iVar33 + 0x128) == 0) ||
             ((local_168 != *(uint ********)(iVar33 + 300) ||
              (iVar13 = thunk_FUN_016dd50a(pppppppuVar14,*(int *)(iVar33 + 0x128),local_168),
              iVar13 != 0)))) {
            if (*param_2 == (uint ******)0x2) {
              *(byte *)(param_2 + 7) = 3;
              param_2[3] = (uint ******)0x4;
              param_2[2] = (uint ******)0x0;
              param_2[4] = (uint ******)0x0;
              param_2[5] = (uint ******)local_164;
              param_2[6] = ppppppuVar36;
              *param_2 = (uint ******)0x0;
            }
            if ((int)local_168 < 0) {
              local_11c = (uint *******)0x0;
              goto LAB_00f77374;
            }
            if (local_168 == (uint *******)0x0) {
              pppppppuVar11 = (uint *******)0x0;
              pppppppuVar7 = (uint *******)&DAT_00000001;
            }
            else {
              pppppppuVar7 = (uint *******)thunk_FUN_016d4a50(local_168);
              local_1e0 = local_168;
              if (pppppppuVar7 == (uint *******)0x0) goto LAB_00f7a2c0;
              pppppppuVar11 = local_168;
            }
            FUN_016dd1aa(pppppppuVar7,pppppppuVar14,local_168);
            ppppppuVar36 = param_2[4];
            if (ppppppuVar36 == param_2[2]) {
              FUN_015f37b0(param_2 + 2);
            }
            ppppppuVar18 = param_2[3] + (int)ppppppuVar36 * 3;
            *ppppppuVar18 = (uint *****)pppppppuVar11;
            ppppppuVar18[1] = (uint *****)pppppppuVar7;
            ppppppuVar18[2] = (uint *****)local_168;
            ppppppuVar18 = (uint ******)0x0;
            param_2[4] = (uint ******)((int)ppppppuVar36 + 1U);
            if ((*param_2 != (uint ******)0x2) && (param_2[6] == *(uint *******)(iVar33 + 0x118))) {
              iVar13 = thunk_FUN_016dd50a(param_2[5],*(undefined4 *)(iVar33 + 0x114));
              ppppppuVar18 = (uint ******)((int)ppppppuVar36 + 1U);
              if (iVar13 != 0) {
                ppppppuVar18 = (uint ******)0x0;
              }
            }
            if ((*(uint *)(iVar33 + 8) & 1) == 0) {
              puVar19 = &DAT_01880874;
              goto LAB_00f7a524;
            }
            uVar38 = 0;
            bVar44 = *(uint *******)(iVar33 + 0x10) <= ppppppuVar18;
            if (bVar44) {
              local_164 = (uint *******)local_1ec;
            }
            else {
              local_1e4 = *(uint *******)(iVar33 + 0x118);
              local_164 = *(uint ********)(iVar33 + 0x114);
            }
            local_174 = (uint)!bVar44;
            ppppppuVar36 = local_1e4;
            local_1ec = (uint ******)local_164;
            local_1e0 = pppppppuVar7;
          }
          else {
            local_174 = 0;
            uVar38 = 0;
            local_164 = (uint *******)local_1ec;
            ppppppuVar36 = local_1e4;
          }
        }
        uVar26 = param_4;
        if (uVar3 <= param_4) goto LAB_00f78728;
      }
      uVar47 = CONCAT44(local_17c,puVar41);
      uVar37 = 1;
      puVar42 = (undefined4 *)((int)local_184 + 1);
      if ((puVar42 == puVar41) && (iVar13 = *(int *)(iVar31 + 0x4c), iVar13 != 0)) {
        iVar33 = *(int *)(iVar31 + 0x48);
        iVar27 = 0;
LAB_00f76db0:
        iVar43 = iVar33 + iVar27;
        puVar29 = *(undefined1 **)(iVar43 + 0x120);
        bVar44 = puVar29 != (undefined1 *)0x0;
        if (!bVar44) {
          puVar29 = *(undefined1 **)(iVar43 + 0x34);
        }
        if ((bVar44 || puVar29 != &DAT_00110000) ||
           (((*(uint *)(iVar43 + 8) &
             (uint)(*(uint *)(iVar43 + 0xc) != *(uint *)(iVar43 + 0x10) ||
                   1 < *(uint *)(iVar43 + 0xc))) == 0 && (*(char *)(iVar43 + 0x130) != '\x01'))))
        goto LAB_00f76da4;
        puVar20 = *(undefined4 **)(iVar43 + 0x18);
        if (*(int *)(iVar43 + 0x14) == 0) {
          puVar20 = (undefined4 *)0x0;
        }
        if (puVar41 == puVar20) goto LAB_00f76da4;
        iVar27 = 0;
        do {
          if (*(int *)(iVar33 + 0x120) == 0 && *(undefined1 **)(iVar33 + 0x34) == &DAT_00110000) {
            iVar27 = iVar33;
          }
          iVar33 = iVar33 + 0x134;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        if (iVar27 != 0) {
          uVar37 = *(byte *)(iVar27 + 0x11d) & 1;
        }
      }
LAB_00f76e14:
      iVar13 = *(int *)(iVar31 + 0x58) << 4;
      puVar20 = (undefined4 *)(*(int *)(iVar31 + 0x54) + 4);
      do {
        puVar15 = puVar20;
        if (iVar13 == 0) {
          uVar32 = 0;
          goto LAB_00f76e78;
        }
        iVar13 = iVar13 + -0x10;
        puVar17 = puVar15;
        if (puVar15[-1] == 2) {
          puVar17 = (undefined4 *)*puVar15;
        }
        puVar20 = puVar15 + 4;
      } while (puVar15[-1] != 2 || puVar17 != puVar22);
      ppppppuVar16 = *(uint *******)(iVar31 + 0x4c);
      ppppppuVar18 = (uint ******)puVar15[2];
      if (ppppppuVar16 <= ppppppuVar18) goto LAB_00f7a58c;
      uVar32 = (uint)(*(int *)((int)ppppppuVar18 * 0x134 + *(int *)(iVar31 + 0x48) + 0x128) != 0);
LAB_00f76e78:
      iVar13 = (*(uint *)(iVar31 + 0x144) | *(uint *)(iVar31 + 0x148)) << 0x1b;
      if ((puVar42 == puVar41) && (iVar13 < 0)) {
        if ((uVar37 & uVar38 | uVar32) != 1) goto LAB_00f76ea8;
LAB_00f77058:
        if (uVar38 != 0) {
          if (iVar13 < 0) {
            local_184 = puVar41;
          }
          if (iVar30 != 0) {
            local_184 = puVar41;
          }
        }
      }
      else {
        if (!(uVar37 == 0 && uVar32 == 0)) goto LAB_00f77058;
LAB_00f76ea8:
        if ((param_4 < uVar3) && (iVar13 = *(int *)(iVar31 + 0x4c), iVar13 != 0)) {
          iVar33 = iVar2 + param_4 * 0xc;
          pppppppuVar11 = *(uint ********)(iVar33 + 4);
          pppppppuVar7 = *(uint ********)(iVar33 + 8);
          iVar33 = 0;
          do {
            iVar27 = *(int *)(iVar31 + 0x48) + iVar33;
            if (*(int *)(iVar27 + 0x120) == 0) {
              puVar29 = *(undefined1 **)(iVar27 + 0x34);
              bVar44 = puVar29 == &DAT_00110000;
              if (bVar44) {
                puVar29 = *(undefined1 **)(iVar27 + 0x14);
              }
              if ((bVar44 && puVar29 == (undefined1 *)0x1) &&
                 (*(undefined4 **)(iVar27 + 0x18) == local_184)) {
                iVar13 = FUN_00f8a7d0(*(int *)(iVar31 + 0x48),iVar13,*(undefined4 *)(iVar27 + 0x114)
                                      ,*(undefined4 *)(iVar27 + 0x118),&DAT_01880314);
                if ((((*(byte *)(iVar13 + 0x11c) & 0x20) != 0) ||
                    ((iVar13 = FUN_00f8a7d0(*(undefined4 *)(param_1[2] + 0x48),
                                            *(undefined4 *)(param_1[2] + 0x4c),
                                            *(undefined4 *)(iVar27 + 0x114),
                                            *(undefined4 *)(iVar27 + 0x118),&DAT_01880324),
                     (*(byte *)(iVar13 + 0x11c) & 0x40) != 0 &&
                     (iVar13 = FUN_00fa7c88(pppppppuVar11,pppppppuVar7), iVar13 != 0)))) ||
                   ((iVar13 = FUN_00fa7da4(pppppppuVar11,pppppppuVar7), iVar13 == 0 &&
                    (iVar13 = FUN_00fa7de4(pppppppuVar11,pppppppuVar7), iVar13 == 0)))) {
                  FUN_00fab1e0(&local_f8);
                  iVar31 = param_1[2];
                  local_160 = local_f8;
                  local_15c = local_f4;
                  local_158 = local_f0;
                  if (local_f8 != (uint *******)0x0) {
                    local_15c = pppppppuVar11;
                    local_158 = pppppppuVar7;
                  }
                  iVar13 = FUN_00f7b1e4(iVar31,&local_160,local_1ac);
                  if (iVar13 == 0) goto LAB_00f77078;
                }
                break;
              }
            }
            iVar33 = iVar33 + 0x134;
          } while (iVar13 * 0x134 != iVar33);
        }
        iVar31 = param_1[2];
        local_184 = puVar42;
      }
LAB_00f77078:
      iVar13 = *(int *)(iVar31 + 0x58) << 4;
      puVar22 = (undefined4 *)(*(int *)(iVar31 + 0x54) + 4);
      do {
        puVar42 = puVar22;
        if (iVar13 == 0) {
          bVar12 = *(byte *)(iVar31 + 0x145);
          bVar44 = (bVar12 & 4) == 0;
          if (bVar44) {
            bVar12 = *(byte *)(iVar31 + 0x149);
          }
          if (bVar44 && (bVar12 & 4) == 0) {
            iVar2 = FUN_00f7e5b4(param_1,param_2);
            if (iVar2 != 0) {
              FUN_00f7e784();
            }
            pppppppuVar11 = (uint *******)param_2[9];
            ppppppuVar36 = param_2[10];
            if (uVar38 == 0) {
              iVar30 = param_1[2];
              iVar2 = *(int *)(iVar30 + 0x48);
              iVar13 = *(int *)(iVar30 + 0x4c) * 0x134;
              puVar41 = (undefined4 *)(iVar2 + 0x34);
              goto joined_r0x00f788d8;
            }
            FUN_00fab1e0(&local_f8,pppppppuVar14,local_168);
            iVar30 = param_1[2];
            local_160 = local_f8;
            local_15c = local_f4;
            local_158 = local_f0;
            if (local_f8 != (uint *******)0x0) {
              local_15c = pppppppuVar14;
              local_158 = local_168;
            }
            iVar2 = FUN_00f7b1e4(iVar30,&local_160,local_1ac);
            if (iVar2 == 0) goto LAB_00f78904;
            FUN_006008c8(&local_120,pppppppuVar14,local_168);
            pppppppuVar11 = local_118;
            pppppppuVar14 = local_11c;
            FUN_00f990ec(&local_f8,local_118,1,1);
            pppppppuVar25 = local_f0;
            pppppppuVar7 = local_f4;
            if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(local_f4,local_f0);
            }
            FUN_016dd1aa(local_f0,pppppppuVar14,pppppppuVar11);
            local_a0 = pppppppuVar11;
            local_a4 = pppppppuVar25;
            local_a8 = pppppppuVar7;
            FUN_00fa1634(&local_f8,param_1[2]);
            FUN_00fa04ec(&local_160,&local_f8,4,0);
            pppppppuVar11 = (uint *******)FUN_00f97d64(iVar30,&local_a8,&local_160);
            pppppppuVar25 = local_120;
            local_b4 = pppppppuVar14;
            goto LAB_00f7a2a0;
          }
          piVar4 = &DAT_0035db48;
          if (*(int *)(iVar31 + 0x10) != 5) {
            piVar4 = (int *)(iVar31 + 0x10);
          }
          pppppppuVar7 = (uint *******)*piVar4;
          if ((uint *******)0x3 < pppppppuVar7) {
            uVar47 = (**(code **)(piVar4[2] + 0x1c))(piVar4[1]);
          }
          local_17c = (uint *******)((ulonglong)uVar47 >> 0x20);
          local_164 = (uint *******)uVar47;
          local_40 = local_17c;
          local_48 = pppppppuVar7;
          local_44 = local_164;
          FUN_00fab1e0(&local_f8,pppppppuVar14,local_168);
          pppppppuVar25 = local_f4;
          pppppppuVar11 = local_f0;
          if (local_f8 != (uint *******)0x0) {
            pppppppuVar25 = pppppppuVar14;
            pppppppuVar11 = local_168;
          }
          if (local_f8 == (uint *******)&DAT_00000001) {
            iVar2 = FUN_00f7e5b4(param_1,param_2);
            if (iVar2 != 0) {
              FUN_00f7e784();
            }
            iVar2 = param_1[2];
            FUN_00fa1634(&local_f8,iVar2);
            FUN_00fa04ec(&local_160,&local_f8,4,0);
            pppppppuVar11 = (uint *******)FUN_00f95ba8(iVar2,&local_160);
          }
          else {
            FUN_00f990ec(&local_f8,pppppppuVar11,1,1);
            pppppppuVar40 = local_f0;
            pppppppuVar14 = local_f4;
            if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(local_f4,local_f0);
            }
            FUN_016dd1aa(local_f0,pppppppuVar25,pppppppuVar11);
            local_130 = (uint *******)&DAT_00000004;
            local_13c = (uint *******)&DAT_00000004;
            local_128 = (uint *******)0x0;
            local_12c = (uint *******)0x0;
            local_134 = (uint *******)0x0;
            local_138 = (uint *******)0x0;
            local_140 = (uint *******)0x0;
            local_160 = (uint *******)&SUB_00000002;
            FUN_00f9c298(&local_160,param_1[2]);
            uVar3 = *(uint *)(param_3 + 8);
            if (uVar3 <= uVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(param_4,uVar3,uVar3,&DAT_01880aa4);
            }
            if (param_4 != uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00f77d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pppppppuVar14 =
                   (uint *******)
                   (*(code *)(&DAT_00f77d4c + *(int *)(&DAT_00f77d4c + (int)pppppppuVar7 * 4)))
                             (&UNK_018805c4,1,param_1[2]);
              return pppppppuVar14;
            }
            local_f8 = local_160;
            local_f4 = local_15c;
            local_f0 = local_158;
            local_ec = local_154;
            local_e8 = local_150;
            local_e4 = local_14c;
            local_e0 = local_148;
            local_dc = pppppppuStack_144;
            local_d8 = local_140;
            local_d4 = local_13c;
            local_d0 = local_138;
            local_cc = local_134;
            local_c8 = local_130;
            local_c4 = local_12c;
            local_c0 = local_128;
            FUN_00f9af6c(&local_a8,&local_f8);
            local_11c = pppppppuVar40;
            local_120 = pppppppuVar14;
            local_114 = local_a8;
            local_110 = local_a4;
            pppppppuStack_10c = local_a0;
            local_108 = local_9c;
            pppppppuStack_104 = local_98;
            pppppppuStack_100 = (uint *******)local_94;
            iStack_fc = local_90;
            local_118 = pppppppuVar11;
            FUN_00f9afe4(param_2);
            pppppppuVar11 = (uint *******)0x0;
          }
          if (pppppppuVar7 < &DAT_00000004) goto LAB_00f78720;
          if (*local_17c != (uint ******)0x0) {
            (*(code *)*local_17c)(local_164);
          }
          if (local_17c[1] != (uint ******)0x0) goto LAB_00f7871c;
          goto LAB_00f78720;
        }
        iVar13 = iVar13 + -0x10;
        puVar22 = puVar42 + 4;
      } while ((puVar42[-1] != 2) || ((undefined4 *)*puVar42 != local_184));
      ppppppuVar16 = *(uint *******)(iVar31 + 0x4c);
      ppppppuVar18 = (uint ******)puVar42[2];
      if (ppppppuVar16 <= ppppppuVar18) goto LAB_00f7a58c;
      iVar13 = (int)ppppppuVar18 * 0x134 + *(int *)(iVar31 + 0x48);
      uVar37 = *(uint *)(iVar13 + 0x11c);
      if ((uVar37 & 0x100) == 0x100 && uVar38 == 0) {
        iVar2 = FUN_00f7e5b4(param_1,param_2);
        if (iVar2 != 0) {
          FUN_00f7e784();
        }
        iVar2 = param_1[2];
        FUN_006008c8(&local_a8,pppppppuVar14,local_168);
        pppppppuVar25 = local_a0;
        pppppppuVar7 = local_a4;
        FUN_00f990ec(&local_f8,local_a0,1,1);
        pppppppuVar11 = local_f0;
        pppppppuVar14 = local_f4;
        if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_f4,local_f0);
        }
        FUN_016dd1aa(local_f0,pppppppuVar7,pppppppuVar25);
        local_40 = pppppppuVar25;
        local_44 = pppppppuVar11;
        local_48 = pppppppuVar14;
        local_f8 = (uint *******)&DAT_80000000;
        FUN_00fa1634(&local_160,param_1[2]);
        FUN_00fa04ec(&local_120,&local_160,4,0);
        pppppppuVar11 = (uint *******)FUN_00f9635c(iVar2,&local_48,&local_f8,0,&local_120);
        goto LAB_00f7a298;
      }
      if (((((*param_2 == (uint ******)0x2) || (param_2[6] != *(uint *******)(iVar13 + 0x118))) ||
           (iVar31 = thunk_FUN_016dd50a(param_2[5],*(undefined4 *)(iVar13 + 0x114)), iVar31 != 0))
          || ((*(uint *)(iVar13 + 8) & 1) == 0 ||
              *(uint *)(iVar13 + 0xc) == *(uint *)(iVar13 + 0x10) && *(uint *)(iVar13 + 0xc) < 2))
         && (pppppppuVar11 = (uint *******)FUN_00f7e5b4(param_1,param_2),
            pppppppuVar11 != (uint *******)0x0)) {
LAB_00f78a58:
        goto LAB_00f79598;
      }
      uVar26 = (uVar37 & 0x200) >> 9;
      uVar37 = uVar38 | uVar26;
      if (((*(int *)(iVar13 + 0x128) == 0) || (local_168 != *(uint ********)(iVar13 + 300))) ||
         (iVar31 = thunk_FUN_016dd50a(pppppppuVar14,*(int *)(iVar13 + 0x128),local_168), iVar31 != 0
         )) {
        ppppppuVar36 = *param_2;
        if (ppppppuVar36 == (uint ******)0x2) {
          ppppppuVar18 = *(uint *******)(iVar13 + 0x114);
          ppppppuVar16 = *(uint *******)(iVar13 + 0x118);
          *(byte *)(param_2 + 7) = 2;
          ppppppuVar36 = (uint ******)0x0;
          param_2[2] = (uint ******)0x0;
          param_2[3] = (uint ******)0x4;
          param_2[4] = (uint ******)0x0;
          param_2[5] = ppppppuVar18;
          param_2[6] = ppppppuVar16;
          *param_2 = (uint ******)0x0;
        }
        if ((uVar38 != 0 || uVar26 != 0) && (((uint)ppppppuVar36 & 1) == 0)) {
          *param_2 = (uint ******)0x1;
          param_2[1] = param_2[4];
        }
        if ((int)local_168 < 0) {
          local_11c = (uint *******)0x0;
          local_1e0 = local_208;
          goto LAB_00f77374;
        }
        if (local_168 == (uint *******)0x0) {
          pppppppuVar11 = (uint *******)0x0;
          local_208 = (uint *******)&DAT_00000001;
        }
        else {
          local_208 = (uint *******)thunk_FUN_016d4a50(local_168);
          pppppppuVar11 = local_168;
          if (local_208 == (uint *******)0x0) goto LAB_00f7a3fc;
          pppppppuVar11 = local_168;
        }
        FUN_016dd1aa(local_208,pppppppuVar14,local_168);
        ppppppuVar36 = param_2[4];
        if (ppppppuVar36 == param_2[2]) {
          FUN_015f37b0(param_2 + 2);
        }
        ppppppuVar18 = param_2[3] + (int)ppppppuVar36 * 3;
        *ppppppuVar18 = (uint *****)pppppppuVar11;
        ppppppuVar18[1] = (uint *****)local_208;
        ppppppuVar18[2] = (uint *****)local_168;
        param_2[4] = (uint ******)((int)ppppppuVar36 + 1);
        if (((*(uint *)(iVar13 + 8) & 1) == 0 ||
             *(uint *)(iVar13 + 0xc) == *(uint *)(iVar13 + 0x10) && *(uint *)(iVar13 + 0xc) < 2) &&
           (*(char *)(iVar13 + 0x130) != '\x01')) goto LAB_00f77304;
        local_1bc = *(uint *******)(iVar13 + 0x114);
        local_1c0 = *(uint *******)(iVar13 + 0x118);
        local_174 = 2;
      }
      else {
        local_f8 = (uint *******)0x80000002;
        FUN_00f7ee20(&local_f8);
LAB_00f77304:
        local_184 = (undefined4 *)((int)local_184 + 1);
        local_174 = 0;
      }
      local_1ac = (uint *******)0x1;
    } while (param_4 < uVar3);
  }
LAB_00f78728:
  pppppppuVar14 = (uint *******)FUN_00f7e5b4(param_1,param_2);
  if ((pppppppuVar14 != (uint *******)0x0) ||
     (pppppppuVar14 = (uint *******)FUN_00f7f0f4(param_1,param_2),
     pppppppuVar14 != (uint *******)0x0)) {
    return pppppppuVar14;
  }
  iVar2 = param_1[2];
  FUN_00f8f0c0(&local_f8,iVar2);
  local_ec = (uint *******)iVar2;
  pppppppuVar11 = (uint *******)FUN_00fa4b70(&local_f8,param_2);
  pppppppuVar7 = local_f4 + 1;
  for (pppppppuVar14 = local_f0; pppppppuVar14 != (uint *******)0x0;
      pppppppuVar14 = (uint *******)((int)pppppppuVar14 + -1)) {
    if (pppppppuVar7[-1] != (uint ******)0x0) {
      thunk_FUN_016d3fb4(*pppppppuVar7);
    }
    pppppppuVar7 = pppppppuVar7 + 5;
  }
  if (local_f8 == (uint *******)0x0) {
    return pppppppuVar11;
  }
  thunk_FUN_016d3fb4(local_f4);
  return pppppppuVar11;
LAB_00f78274:
  pppppppuVar14 = *(uint ********)(iVar13 + 0x120);
  if (pppppppuVar11 != pppppppuVar14) goto LAB_00f782a0;
  uVar35 = *(undefined4 *)(iVar13 + 0x11c);
  uVar47 = thunk_FUN_016dd50a(local_164,uVar35,pppppppuVar11);
  pppppppuVar7 = (uint *******)((ulonglong)uVar47 >> 0x20);
  local_1e0 = pppppppuVar11;
  if ((int)uVar47 != 0) goto LAB_00f782a0;
joined_r0x00f78304:
  if ((int)local_1e0 < 0) {
    local_1e0 = pppppppuVar7;
LAB_00f7830c:
    local_11c = (uint *******)0x0;
    goto LAB_00f77374;
  }
  if (local_1e0 == (uint *******)0x0) {
    iVar2 = 1;
    local_168 = (uint *******)0x0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(local_1e0);
    if (iVar2 == 0) {
      local_11c = (uint *******)&DAT_00000001;
      goto LAB_00f77374;
    }
    local_168 = local_1e0;
  }
  FUN_016dd1aa(iVar2,uVar35,local_1e0);
  iVar13 = param_1[2];
  uVar3 = *(uint *)(iVar13 + 0x144);
  uVar37 = *(uint *)(iVar13 + 0x148);
  pppppppuVar14 = (uint *******)FUN_00f9090c(iVar13,iVar2,local_1e0);
  if (pppppppuVar14 != (uint *******)0x0) {
    local_c0 = (uint *******)0x0;
    local_c4 = (uint *******)0x0;
    local_cc = (uint *******)0x0;
    local_d0 = (uint *******)0x0;
    local_d8 = (uint *******)0x0;
    local_c8 = (uint *******)&DAT_00000004;
    local_d4 = (uint *******)&DAT_00000004;
    local_f8 = (uint *******)&SUB_00000002;
    local_150 = (uint *******)0x0;
    local_154 = (uint *******)0x0;
    local_160 = (uint *******)0x0;
    local_158 = pppppppuVar14;
    pppppppuVar11 = (uint *******)FUN_00f74c20(&local_160,&local_f8,param_3,param_4);
    if (pppppppuVar11 != (uint *******)0x0) {
      if (((uVar3 | uVar37) & 1) != 0) {
        FUN_00f7e784(pppppppuVar11);
        goto LAB_00f798dc;
      }
      FUN_00f7ef98(&local_d8);
      if (local_f8 != (uint *******)&SUB_00000002) {
        pppppppuVar7 = local_ec + 1;
        for (pppppppuVar14 = local_e8; pppppppuVar14 != (uint *******)0x0;
            pppppppuVar14 = (uint *******)((int)pppppppuVar14 + -1)) {
          if (pppppppuVar7[-1] != (uint ******)0x0) {
            thunk_FUN_016d3fb4(*pppppppuVar7);
          }
          pppppppuVar7 = pppppppuVar7 + 3;
        }
        if (local_f0 != (uint *******)0x0) {
          thunk_FUN_016d3fb4(local_ec);
        }
      }
      if (local_168 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(iVar2);
      }
      goto LAB_00f7870c;
    }
LAB_00f798dc:
    pppppppuVar11 = (uint *******)pppppppuVar14[0x48];
    if ((int)pppppppuVar11 < 0) {
      uVar35 = 0;
LAB_00f798ec:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar35,pppppppuVar11);
    }
    ppppppuVar36 = pppppppuVar14[0x47];
    if (pppppppuVar11 == (uint *******)0x0) {
      pppppppuVar14 = (uint *******)&DAT_00000001;
      local_170 = (uint *******)0x0;
    }
    else {
      pppppppuVar14 = (uint *******)thunk_FUN_016d4a50(pppppppuVar11);
      if (pppppppuVar14 == (uint *******)0x0) {
        uVar35 = 1;
        goto LAB_00f798ec;
      }
      local_170 = pppppppuVar11;
    }
    FUN_016dd1aa(pppppppuVar14,ppppppuVar36,pppppppuVar11);
    pppppppuVar25 = local_ec;
    pppppppuVar7 = local_f0;
    local_120 = local_d8;
    local_11c = local_d4;
    local_118 = local_d0;
    local_114 = local_cc;
    local_110 = local_c8;
    pppppppuStack_10c = local_c4;
    local_108 = local_c0;
    if (local_f8 != (uint *******)&SUB_00000002) {
      pppppppuVar24 = local_ec + 1;
      for (pppppppuVar40 = local_e8; pppppppuVar40 != (uint *******)0x0;
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 + -1)) {
        if (pppppppuVar24[-1] != (uint ******)0x0) {
          thunk_FUN_016d3fb4(*pppppppuVar24);
        }
        pppppppuVar24 = pppppppuVar24 + 3;
      }
      if (pppppppuVar7 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar25);
      }
    }
    local_160 = local_170;
    local_154 = local_120;
    local_150 = local_11c;
    local_14c = local_118;
    local_148 = local_114;
    pppppppuStack_144 = local_110;
    local_140 = pppppppuStack_10c;
    local_13c = local_108;
    local_15c = pppppppuVar14;
    local_158 = pppppppuVar11;
    FUN_00f9afe4(param_2,&local_160);
  }
  if (local_168 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  if (local_1b0 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(local_164);
  }
  goto LAB_00f78728;
LAB_00f782a0:
  if (*(int *)(iVar13 + 0x28) != 0) {
    puVar41 = (undefined4 *)(*(int *)(iVar13 + 0x24) + 4);
    iVar30 = *(int *)(iVar13 + 0x28) * 0xc;
    do {
      if (pppppppuVar11 == (uint *******)*puVar41) {
        uVar47 = thunk_FUN_016dd50a(local_164,puVar41[-1],pppppppuVar11);
        pppppppuVar7 = (uint *******)((ulonglong)uVar47 >> 0x20);
        if ((int)uVar47 == 0) {
          uVar35 = *(undefined4 *)(iVar13 + 0x11c);
          local_1e0 = pppppppuVar14;
          goto joined_r0x00f78304;
        }
      }
      puVar41 = puVar41 + 3;
      iVar30 = iVar30 + -0xc;
    } while (iVar30 != 0);
  }
  iVar13 = iVar13 + 0x16c;
  if (iVar13 == iVar2) {
LAB_00f7a598:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018803f4);
  }
  goto LAB_00f78274;
  while( true ) {
    FUN_00f804e8(&local_f8,iVar30,*ppppppuVar36,ppppppuVar36[1]);
    iVar13 = iVar13 + -8;
    ppppppuVar36 = ppppppuVar36 + 2;
    if (local_f8 != (uint *******)&DAT_80000000) break;
LAB_00f78498:
    if (iVar13 == 0) {
      local_118 = (uint *******)0x0;
      local_11c = (uint *******)&DAT_00000004;
      local_120 = (uint *******)0x0;
      goto LAB_00f785b8;
    }
  }
  local_170 = (uint *******)thunk_FUN_016d4a50(0x30);
  if (local_170 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  pppppppuVar14 = (uint *******)&DAT_00000001;
  *local_170 = (uint ******)local_f8;
  local_170[1] = (uint ******)local_f4;
  local_170[2] = (uint ******)local_f0;
  local_158 = (uint *******)&DAT_00000001;
  local_160 = (uint *******)&DAT_00000004;
  local_15c = local_170;
  while (ppppppuVar36 != ppppppuVar18) {
    FUN_00f804e8(&local_f8,iVar30,*ppppppuVar36,ppppppuVar36[1]);
    ppppppuVar36 = ppppppuVar36 + 2;
    if (local_f8 != (uint *******)&DAT_80000000) {
      if (pppppppuVar14 == local_160) {
        FUN_00f991dc(&local_160,pppppppuVar14,1,4,0xc);
        local_170 = local_15c;
      }
      pppppppuVar11 = local_170 + (int)pppppppuVar14 * 3;
      *pppppppuVar11 = (uint ******)local_f8;
      pppppppuVar11[1] = (uint ******)local_f4;
      pppppppuVar11[2] = (uint ******)local_f0;
      pppppppuVar14 = (uint *******)((int)pppppppuVar14 + 1);
      local_158 = pppppppuVar14;
    }
  }
  local_120 = local_160;
  local_11c = local_15c;
  local_118 = local_158;
LAB_00f785b8:
  pppppppuVar14 = (uint *******)param_1[2];
  ppppppuVar18 = pppppppuVar14[0x1e];
  iVar13 = (int)pppppppuVar14[0x1f] << 4;
  ppppppuVar36 = (uint ******)0xffffffff;
  do {
    if (iVar13 == 0) {
      pppppppuVar11 = (uint *******)0x0;
      goto LAB_00f786c0;
    }
    pppppuVar21 = *ppppppuVar18;
    ppppppuVar45 = ppppppuVar18 + 1;
    ppppppuVar28 = ppppppuVar18 + 2;
    iVar13 = iVar13 + -0x10;
    ppppppuVar16 = ppppppuVar18 + 3;
    ppppppuVar36 = (uint ******)((int)ppppppuVar36 + 1);
    ppppppuVar18 = ppppppuVar18 + 4;
  } while ((pppppuVar21 != (uint *****)0x81d215be || *ppppppuVar28 != (uint *****)0xd07db95e) ||
           (*ppppppuVar45 != (uint *****)0x4c65521b || *ppppppuVar16 != (uint *****)0x76f4a2ad));
  if (pppppppuVar14[0x22] <= ppppppuVar36) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(ppppppuVar36,pppppppuVar14[0x22],&DAT_01880824);
  }
  pppppuVar21 = (pppppppuVar14[0x21] + (int)ppppppuVar36 * 6)[1];
  pppppppuVar11 =
       (uint *******)
       ((int)pppppppuVar14[0x21][(int)ppppppuVar36 * 6] +
       ((int)pppppuVar21[2] - 1U & 0xfffffff8) + 8);
  (*(code *)pppppuVar21[3])(&local_f8,pppppppuVar11);
  if ((local_f8 != (uint *******)0x81d215be || local_f0 != (uint *******)0xd07db95e) ||
      (local_f4 != (uint *******)0x4c65521b || local_ec != (uint *******)0x76f4a2ad)) {
    pppppppuVar11 = (uint *******)0x0;
  }
  if (pppppppuVar11 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f786c0:
  local_f0 = (uint *******)0x0;
  local_f4 = (uint *******)&DAT_0035dc52;
  if (pppppppuVar11 != (uint *******)0x0) {
    local_f4 = pppppppuVar11;
  }
  local_f8 = pppppppuVar14;
  FUN_00fa04ec(&local_160,&local_f8,4,0);
  pppppppuVar11 = (uint *******)FUN_00f977fc(iVar2,&local_a8,&local_120,&local_160);
LAB_00f7870c:
  if (local_1b0 != (uint *******)0x0) {
LAB_00f7871c:
    thunk_FUN_016d3fb4(local_164);
  }
LAB_00f78720:
  if (pppppppuVar11 == (uint *******)0x0) goto LAB_00f78728;
  goto LAB_00f79598;
LAB_00f75204:
  if (iVar13 == 0) goto LAB_00f7a3a8;
  if (*(uint *******)(iVar2 + 0x118) == ppppppuVar36) {
    iVar30 = thunk_FUN_016dd50a(*(undefined4 *)(iVar2 + 0x114),local_164,ppppppuVar36);
    local_1e0 = extraout_r2_01;
    if (iVar30 == 0) goto LAB_00f75230;
  }
  iVar2 = iVar2 + 0x134;
  iVar13 = iVar13 + -0x134;
  goto LAB_00f75204;
LAB_00f7518c:
  if (iVar13 == 0) goto LAB_00f7a3a8;
  if (*(uint *******)(iVar2 + 0x118) == ppppppuVar36) {
    iVar30 = thunk_FUN_016dd50a(*(undefined4 *)(iVar2 + 0x114),local_164,ppppppuVar36);
    local_1e0 = extraout_r2_00;
    if (iVar30 == 0) goto LAB_00f75230;
  }
  iVar2 = iVar2 + 0x134;
  iVar13 = iVar13 + -0x134;
  goto LAB_00f7518c;
LAB_00f7a3a8:
  puVar19 = &DAT_01880334;
  goto LAB_00f7a524;
LAB_00f75230:
  if ((*(byte *)(iVar2 + 0x11c) & 0x20) == 0) {
LAB_00f7523c:
    if (pppppppuVar25 != (uint *******)0x0) {
      FUN_006008c8(&local_120,pppppppuVar40,pppppppuVar7);
      pppppppuVar11 = local_118;
      pppppppuVar14 = local_11c;
      local_ec = pppppppuVar11;
      if (local_120 != (uint *******)&DAT_80000000) {
        local_f8 = (uint *******)0x80000007;
        local_f4 = local_120;
        local_f0 = local_11c;
        goto LAB_00f75fb4;
      }
      if (-1 < (int)local_118) {
        if (local_118 == (uint *******)0x0) {
          local_f0 = (uint *******)&DAT_00000001;
          pppppppuVar11 = (uint *******)0x0;
        }
        else {
          local_f0 = (uint *******)thunk_FUN_016d4a50(local_118);
          if (local_f0 == (uint *******)0x0) {
LAB_00f7a3fc:
            local_1e0 = pppppppuVar11;
            local_11c = (uint *******)&DAT_00000001;
            goto LAB_00f77374;
          }
        }
        FUN_016dd1aa(local_f0,pppppppuVar14);
        local_f8 = (uint *******)0x80000007;
        local_f4 = pppppppuVar11;
        goto LAB_00f75fb4;
      }
      local_11c = (uint *******)0x0;
      local_1e0 = local_200;
      goto LAB_00f77374;
    }
    pppppppuVar14 = (uint *******)param_1[2];
    if (pppppppuVar14[0x16] != (uint ******)0x0) {
      iVar2 = (int)pppppppuVar14[0x16] << 4;
      ppppppuVar36 = pppppppuVar14[0x15];
      do {
        pppppppuVar11 = (uint *******)*ppppppuVar36;
        bVar44 = pppppppuVar11 == (uint *******)&DAT_00000001;
        if (bVar44) {
          pppppppuVar11 = (uint *******)ppppppuVar36[2];
        }
        if (bVar44 && pppppppuVar11 == pppppppuVar7) {
          iVar13 = thunk_FUN_016dd50a(ppppppuVar36[1],pppppppuVar40,pppppppuVar7);
          local_1e0 = extraout_r2_02;
          if (iVar13 == 0) {
            ppppppuVar18 = (uint ******)ppppppuVar36[3];
            ppppppuVar16 = pppppppuVar14[0x13];
            if (ppppppuVar16 <= ppppppuVar18) goto LAB_00f7a58c;
            pppppppuVar11 = (uint *******)(pppppppuVar14[0x12] + (int)ppppppuVar18 * 0x4d);
            goto LAB_00f75ca4;
          }
        }
        ppppppuVar36 = ppppppuVar36 + 4;
        iVar2 = iVar2 + -0x10;
      } while (iVar2 != 0);
    }
    ppppppuVar36 = pppppppuVar14[0x51];
    ppppppuVar18 = pppppppuVar14[0x52];
    if (((((uint)ppppppuVar36 | (uint)ppppppuVar18) & 0x80) != 0) &&
       (pppppppuVar14[0x13] != (uint ******)0x0)) {
      local_1e0 = (uint *******)pppppppuVar14[0x12];
      pppppppuVar25 = local_1e0 + (int)pppppppuVar14[0x13] * 0x4d;
      pppppppuVar11 = local_1e0;
      do {
        pppppppuVar24 = pppppppuVar11 + 0x4d;
        if ((pppppppuVar11[0x48] != (uint ******)0x0) && (pppppppuVar7 <= pppppppuVar11[0x49])) {
          iVar2 = thunk_FUN_016dd50a(pppppppuVar40,pppppppuVar11[0x48],pppppppuVar7);
          local_1e0 = extraout_r2_03;
          if (iVar2 != 0) goto LAB_00f754bc;
LAB_00f75544:
          if (pppppppuVar24 != pppppppuVar25) goto LAB_00f75568;
          goto LAB_00f75ca4;
        }
LAB_00f754bc:
        ppppppuVar16 = pppppppuVar11[0x29];
        if (ppppppuVar16 != (uint ******)0x0) {
          ppppppuVar28 = pppppppuVar11[0x28];
          if (pppppppuVar7 <= ppppppuVar28[1]) {
            iVar2 = thunk_FUN_016dd50a(pppppppuVar40,*ppppppuVar28,pppppppuVar7);
            local_1e0 = extraout_r2_04;
            if (iVar2 == 0) goto LAB_00f75544;
          }
          if (ppppppuVar16 != (uint ******)0x1) {
            iVar2 = (int)ppppppuVar16 * 0xc + -0xc;
            ppppppuVar16 = ppppppuVar28 + 4;
            do {
              if (pppppppuVar7 <= *ppppppuVar16) {
                iVar13 = thunk_FUN_016dd50a(pppppppuVar40,ppppppuVar16[-1],pppppppuVar7);
                local_1e0 = extraout_r2_05;
                if (iVar13 == 0) goto LAB_00f75544;
              }
              iVar2 = iVar2 + -0xc;
              ppppppuVar16 = ppppppuVar16 + 3;
            } while (iVar2 != 0);
          }
        }
        pppppppuVar11 = pppppppuVar24;
      } while (pppppppuVar24 != pppppppuVar25);
    }
LAB_00f75618:
    ppppppuVar16 = pppppppuVar14[0x18];
    pppppppuVar11 = (uint *******)pppppppuVar14[0x19];
    if ((((uint)ppppppuVar36 | (uint)ppppppuVar18) & 0x100) != 0) {
      ppppppuVar18 = ppppppuVar16 + (int)pppppppuVar11 * 0x5b;
      local_1e0 = pppppppuVar11;
      ppppppuVar36 = ppppppuVar16;
      if (pppppppuVar11 != (uint *******)0x0) {
        do {
          ppppppuVar28 = ppppppuVar36 + 0x5b;
          if (ppppppuVar36[0x49] != (uint *****)0x0) {
            if (pppppppuVar7 <= ppppppuVar36[0x4a]) {
              iVar2 = thunk_FUN_016dd50a(pppppppuVar40,ppppppuVar36[0x49],pppppppuVar7);
              local_1e0 = extraout_r2_09;
              if (iVar2 == 0) {
LAB_00f75700:
                pppppuVar21 = ppppppuVar36[0x47];
                local_1e0 = (uint *******)ppppppuVar36[0x48];
                if (pppppuVar21 != (uint *****)0x0) {
                  if (ppppppuVar28 != ppppppuVar18) goto LAB_00f75878;
                  goto LAB_00f75eac;
                }
                break;
              }
            }
            pppppuVar21 = ppppppuVar36[0xf] + 1;
            for (iVar2 = (int)ppppppuVar36[0x10] * 0xc; iVar2 != 0; iVar2 = iVar2 + -0xc) {
              if (pppppppuVar7 <= *pppppuVar21) {
                iVar13 = thunk_FUN_016dd50a(pppppppuVar40,pppppuVar21[-1],pppppppuVar7);
                local_1e0 = extraout_r2_10;
                if (iVar13 == 0) goto LAB_00f75700;
              }
              pppppuVar21 = pppppuVar21 + 3;
            }
          }
          ppppppuVar36 = ppppppuVar28;
        } while (ppppppuVar28 != ppppppuVar18);
      }
    }
LAB_00f75900:
    pppppuVar21 = (uint *****)0x0;
    if (pppppppuVar11 != (uint *******)0x0) {
      ppppppuVar36 = ppppppuVar16 + (int)pppppppuVar11 * 0x5b;
      do {
        if (ppppppuVar16[0x49] == (uint *****)0x0) {
          if (ppppppuVar16[0x10] != (uint *****)0x0) {
            pppppuVar21 = ppppppuVar16[0xf] + 1;
            iVar2 = (int)ppppppuVar16[0x10] * 0xc;
            do {
              if ((uint *******)*pppppuVar21 == pppppppuVar7) {
                iVar13 = thunk_FUN_016dd50a(pppppuVar21[-1],pppppppuVar40,pppppppuVar7);
                local_1e0 = extraout_r2_13;
                if (iVar13 == 0) goto LAB_00f75a08;
              }
              pppppuVar21 = pppppuVar21 + 3;
              iVar2 = iVar2 + -0xc;
            } while (iVar2 != 0);
          }
        }
        else {
          if ((uint *******)ppppppuVar16[0x4a] == pppppppuVar7) {
            iVar2 = thunk_FUN_016dd50a(ppppppuVar16[0x49],pppppppuVar40,pppppppuVar7);
            local_1e0 = extraout_r2_11;
            if (iVar2 == 0) {
LAB_00f75a08:
              pppppuVar21 = ppppppuVar16[0x47];
              local_1e0 = (uint *******)ppppppuVar16[0x48];
              goto LAB_00f75eac;
            }
          }
          if (ppppppuVar16[0x10] != (uint *****)0x0) {
            pppppuVar21 = ppppppuVar16[0xf] + 1;
            iVar2 = (int)ppppppuVar16[0x10] * 0xc;
            do {
              if ((uint *******)*pppppuVar21 == pppppppuVar7) {
                iVar13 = thunk_FUN_016dd50a(pppppuVar21[-1],pppppppuVar40,pppppppuVar7);
                local_1e0 = extraout_r2_12;
                if (iVar13 == 0) goto LAB_00f75a08;
              }
              pppppuVar21 = pppppuVar21 + 3;
              iVar2 = iVar2 + -0xc;
            } while (iVar2 != 0);
          }
        }
        ppppppuVar16 = ppppppuVar16 + 0x5b;
      } while (ppppppuVar16 != ppppppuVar36);
      pppppuVar21 = (uint *****)0x0;
    }
    goto LAB_00f75eac;
  }
  goto LAB_00f75f1c;
LAB_00f75568:
  do {
    if ((pppppppuVar24[0x48] != (uint ******)0x0) && (pppppppuVar7 <= pppppppuVar24[0x49])) {
      iVar2 = thunk_FUN_016dd50a(pppppppuVar40,pppppppuVar24[0x48],pppppppuVar7);
      local_1e0 = extraout_r2_06;
      if (iVar2 == 0) goto LAB_00f75618;
    }
    ppppppuVar16 = pppppppuVar24[0x29];
    if (ppppppuVar16 != (uint ******)0x0) {
      ppppppuVar28 = pppppppuVar24[0x28];
      if (pppppppuVar7 <= ppppppuVar28[1]) {
        iVar2 = thunk_FUN_016dd50a(pppppppuVar40,*ppppppuVar28,pppppppuVar7);
        local_1e0 = extraout_r2_07;
        if (iVar2 == 0) goto LAB_00f75618;
      }
      if (ppppppuVar16 != (uint ******)0x1) {
        iVar2 = (int)ppppppuVar16 * 0xc + -0xc;
        ppppppuVar16 = ppppppuVar28 + 4;
        do {
          if (pppppppuVar7 <= *ppppppuVar16) {
            iVar13 = thunk_FUN_016dd50a(pppppppuVar40,ppppppuVar16[-1],pppppppuVar7);
            local_1e0 = extraout_r2_08;
            if (iVar13 == 0) goto LAB_00f75618;
          }
          iVar2 = iVar2 + -0xc;
          ppppppuVar16 = ppppppuVar16 + 3;
        } while (iVar2 != 0);
      }
    }
    pppppppuVar24 = pppppppuVar24 + 0x4d;
  } while (pppppppuVar24 != pppppppuVar25);
LAB_00f75ca4:
  if ((((uint)pppppppuVar11[2] & 1) == 0) || (pppppppuVar11[4] != (uint ******)0x0)) {
    FUN_00f7c6c0(&local_f8,param_1,1,local_1e8,local_1f4,pppppppuVar11,param_2,
                 local_1e8 != (uint *******)0x0);
  }
  else if (local_1e8 == (uint *******)0x0) {
    local_11c = (uint *******)&DAT_00000004;
    local_118 = (uint *******)0x0;
    local_120 = (uint *******)0x0;
    FUN_00f7cacc(&local_f8,param_1,1,2,pppppppuVar11,&local_120,0);
  }
  else {
    FUN_00f8f0c0(&local_68,pppppppuVar14);
    local_a8 = (uint *******)param_2[9];
    local_a4 = local_a8 + (int)param_2[10] * 2;
    local_a0 = param_2;
    local_9c = pppppppuVar14;
    local_98 = &local_68;
    uVar47 = FUN_00fa416c(&local_a8);
    if ((int)uVar47 == 0) {
      local_54 = (uint *******)&DAT_00000004;
      local_50 = (uint *******)0x0;
      local_58 = (uint *******)0x0;
      ppppppuVar18 = pppppppuVar11[0x45];
      ppppppuVar36 = pppppppuVar11[0x46];
LAB_00f76080:
      pppppppuVar14 = local_50;
      FUN_00f98f0c(&local_58);
    }
    else {
      local_1ac = (uint *******)thunk_FUN_016d4a50(0x20);
      if (local_1ac == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x20);
      }
      *(undefined8 *)local_1ac = uVar47;
      local_40 = (uint *******)&DAT_00000001;
      local_48 = (uint *******)&DAT_00000004;
      local_120 = local_a8;
      local_11c = local_a4;
      local_118 = local_a0;
      local_114 = local_9c;
      local_110 = local_98;
      pppppppuVar14 = (uint *******)0x0;
      local_44 = local_1ac;
      while (uVar47 = FUN_00fa416c(&local_120), (int)uVar47 != 0) {
        pppppppuVar7 = (uint *******)((int)pppppppuVar14 + 1);
        if (pppppppuVar7 == local_48) {
          FUN_00f991dc(&local_48,pppppppuVar7,1,4,8);
          local_1ac = local_44;
        }
        *(undefined8 *)(local_1ac + (int)pppppppuVar14 * 2 + 2) = uVar47;
        local_40 = (uint *******)((int)pppppppuVar14 + 2);
        pppppppuVar14 = pppppppuVar7;
      }
      local_58 = local_48;
      local_54 = local_44;
      local_50 = local_40;
      ppppppuVar18 = pppppppuVar11[0x45];
      ppppppuVar36 = pppppppuVar11[0x46];
      pppppppuVar14 = local_40;
      if (local_40 == local_48) goto LAB_00f76080;
    }
    pppppppuVar7 = local_54;
    local_54[(int)pppppppuVar14 * 2] = ppppppuVar18;
    (local_54 + (int)pppppppuVar14 * 2)[1] = ppppppuVar36;
    local_50 = (uint *******)((int)pppppppuVar14 + 1);
    FUN_006008c8(&local_48,local_1e8,local_1f4);
    pppppppuVar40 = local_40;
    pppppppuVar25 = local_44;
    if (local_48 == (uint *******)&DAT_80000000) {
      FUN_00f990ec(&local_120,local_40,1,1);
      pppppppuVar24 = local_11c;
      if (local_120 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_11c,local_118);
      }
      local_1f0 = local_118;
      FUN_016dd1aa(local_118,pppppppuVar25,pppppppuVar40);
    }
    else {
      local_1f0 = local_44;
      pppppppuVar24 = local_48;
    }
    pppppppuVar25 = local_58;
    local_40 = (uint *******)0x0;
    local_48 = (uint *******)0x0;
    local_114 = (uint *******)0x0;
    local_44 = (uint *******)&DAT_00000001;
    local_118 = (uint *******)&DAT_60000020;
    local_11c = (uint *******)&DAT_01880404;
    local_120 = (uint *******)&local_48;
    iVar2 = FUN_00f9d654(pppppppuVar11,&local_120);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_88,
                   &DAT_0188041c,&DAT_018af130);
    }
    local_e0 = local_48;
    local_dc = local_44;
    local_d8 = local_40;
    local_e8 = pppppppuVar7;
    puVar41 = (undefined4 *)(local_64 + 4);
    local_ec = pppppppuVar25;
    local_f4 = local_1f0;
    local_f0 = pppppppuVar40;
    local_f8 = pppppppuVar24;
    local_e4 = (uint *******)((int)pppppppuVar14 + 1);
    for (iVar2 = local_60; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar41[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar41);
      }
      puVar41 = puVar41 + 5;
    }
    if (local_68 != (uint ******)0x0) {
      thunk_FUN_016d3fb4(local_64);
    }
  }
  if (local_f8 != (uint *******)0x80000009) goto LAB_00f75fb4;
  pppppppuVar11 = local_f4;
  goto LAB_00f79598;
LAB_00f75b60:
  if (iVar13 == 0) goto LAB_00f7a4b8;
  if ((*(uint *******)(iVar2 + 0x118) == ppppppuVar36) &&
     (iVar33 = thunk_FUN_016dd50a(*(undefined4 *)(iVar2 + 0x114),local_164,ppppppuVar36),
     iVar33 == 0)) {
    if ((*(byte *)(iVar2 + 0x11c) & 0x20) == 0) goto LAB_00f75ba4;
    goto LAB_00f76358;
  }
  iVar2 = iVar2 + 0x134;
  iVar13 = iVar13 + -0x134;
  goto LAB_00f75b60;
LAB_00f7a4b8:
  puVar19 = &DAT_01880344;
  goto LAB_00f7a524;
LAB_00f75ba4:
  if (iVar31 == 0) goto LAB_00f7a510;
  if ((*(uint *******)(iVar30 + 0x118) == ppppppuVar36) &&
     (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar30 + 0x114),local_164,ppppppuVar36), iVar2 == 0
     )) {
    if (((*(byte *)(iVar30 + 0x11c) & 0x40) == 0) || (local_1f0 != (uint *******)0x0))
    goto LAB_00f7629c;
    if (local_1e8 == (uint *******)0x0) goto LAB_00f76358;
    if (9 < *(byte *)local_180 - 0x30) goto LAB_00f7629c;
    if (local_1e8 == (uint *******)&DAT_00000001) goto LAB_00f76358;
    pppppppuVar25 = (uint *******)&DAT_00000001;
    bVar12 = 0;
    pppppppuVar14 = extraout_r3_00;
    bVar1 = false;
    goto LAB_00f75c34;
  }
  iVar30 = iVar30 + 0x134;
  iVar31 = iVar31 + -0x134;
  goto LAB_00f75ba4;
LAB_00f7a510:
  puVar19 = &DAT_01880354;
  goto LAB_00f7a524;
LAB_00f75c34:
  do {
    uVar3 = (uint)*(byte *)((int)local_180 + (int)pppppppuVar25);
    bVar44 = bVar1;
    if (9 < uVar3 - 0x30) {
      if (uVar3 == 0x2e) {
        if ((bool)(bVar12 | bVar1)) goto LAB_00f7629c;
        bVar12 = 1;
        bVar44 = false;
      }
      else {
        if (uVar3 != 0x45 && uVar3 != 0x65) goto LAB_00f7629c;
        bVar44 = true;
        pppppppuVar14 = pppppppuVar25;
        if (bVar1) goto LAB_00f7629c;
      }
    }
    pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1);
    bVar1 = bVar44;
  } while (local_1e8 != pppppppuVar25);
  goto LAB_00f76284;
LAB_00f75a70:
  if (iVar2 == 0) goto LAB_00f7a4c4;
  if ((*(uint *******)(iVar13 + 0x118) == ppppppuVar36) &&
     (iVar33 = thunk_FUN_016dd50a(*(undefined4 *)(iVar13 + 0x114),local_164,ppppppuVar36),
     iVar33 == 0)) {
    if ((*(byte *)(iVar13 + 0x11c) & 0x20) == 0) goto LAB_00f75ab4;
    goto LAB_00f76358;
  }
  iVar13 = iVar13 + 0x134;
  iVar2 = iVar2 + -0x134;
  goto LAB_00f75a70;
LAB_00f7a4c4:
  puVar19 = &DAT_01880344;
  goto LAB_00f7a524;
LAB_00f75ab4:
  if (iVar31 == 0) goto LAB_00f7a51c;
  if ((*(uint *******)(iVar30 + 0x118) == ppppppuVar36) &&
     (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar30 + 0x114),local_164,ppppppuVar36), iVar2 == 0
     )) {
    if (((*(byte *)(iVar30 + 0x11c) & 0x40) == 0) || (local_1f0 != (uint *******)0x0))
    goto LAB_00f7629c;
    if (local_1e8 == (uint *******)0x0) goto LAB_00f76358;
    if (9 < *(byte *)local_180 - 0x30) goto LAB_00f7629c;
    if (local_1e8 == (uint *******)&DAT_00000001) goto LAB_00f76358;
    pppppppuVar25 = (uint *******)&DAT_00000001;
    bVar12 = 0;
    bVar44 = false;
    pppppppuVar14 = extraout_r3;
    goto LAB_00f76248;
  }
  iVar30 = iVar30 + 0x134;
  iVar31 = iVar31 + -0x134;
  goto LAB_00f75ab4;
LAB_00f769c4:
  uVar47 = FUN_00f91204(*(undefined4 *)((int)local_1b0 + 0x60),*(undefined4 *)((int)local_1b0 + 100)
                       );
  pppppppuVar11 = (uint *******)((ulonglong)uVar47 >> 0x20);
  if ((int)uVar47 == 0) {
    local_a8 = &local_ac;
    local_a4 = (uint *******)FUN_00faaf34;
    FUN_00600d2c(&local_48,&DAT_0057dbf4,&local_a8);
    pppppppuVar24 = (uint *******)0x80000007;
    local_160 = (uint *******)0x80000007;
    *piVar4 = (int)local_48;
    piVar4[1] = (int)local_44;
    piVar4[2] = (int)local_40;
  }
  else {
    pppppppuVar7 = (uint *******)FUN_00f7e5b4(param_1,param_2);
    if (pppppppuVar7 == (uint *******)0x0) {
      iVar2 = param_1[3];
      param_1[3] = iVar2 + 1;
      FUN_00f990ec(&local_a8,pppppppuVar11,1,1);
      pppppppuVar40 = local_a0;
      pppppppuVar7 = local_a4;
      if (local_a8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_a4,local_a0);
      }
      FUN_016dd1aa(local_a0,(int)uVar47,pppppppuVar11);
      pppppppuVar24 = (uint *******)&DAT_80000000;
      local_160 = (uint *******)&DAT_80000000;
      if (*param_1 == 0) {
        *param_1 = 1;
        param_1[1] = iVar2 + 1;
      }
      if (local_1f0 == (uint *******)0x0 && pppppppuVar14 == pppppppuVar25) {
        *param_1 = 0;
      }
      local_158 = pppppppuVar40;
      local_15c = pppppppuVar7;
      local_154 = pppppppuVar11;
    }
    else {
      pppppppuVar24 = (uint *******)0x80000009;
      local_160 = (uint *******)0x80000009;
      local_15c = pppppppuVar7;
    }
  }
  goto LAB_00f76ae8;
LAB_00f76da4:
  iVar27 = iVar27 + 0x134;
  if (iVar13 * 0x134 == iVar27) goto LAB_00f76e14;
  goto LAB_00f76db0;
joined_r0x00f788d8:
  if (iVar13 == 0) goto LAB_00f78904;
  puVar29 = *(undefined1 **)(iVar2 + 0x120);
  bVar44 = puVar29 == (undefined1 *)0x0;
  if (bVar44) {
    puVar29 = (undefined1 *)*puVar41;
  }
  if (bVar44 && puVar29 == &DAT_00110000) {
    iVar2 = FUN_00fa7da4(pppppppuVar14,local_168);
    local_174 = 1;
    if (iVar2 == 0) {
      local_174 = FUN_00fa7de4(pppppppuVar14,local_168);
    }
    goto LAB_00f7890c;
  }
  iVar13 = iVar13 + -0x134;
  puVar41 = puVar41 + 0x4d;
  iVar2 = iVar2 + 0x134;
  goto joined_r0x00f788d8;
LAB_00f78904:
  local_174 = 0;
LAB_00f7890c:
  if (*(int *)(iVar30 + 100) == 0) {
LAB_00f7a1f8:
    FUN_006008c8(&local_a8,pppppppuVar14,local_168);
    pppppppuVar25 = local_a0;
    pppppppuVar7 = local_a4;
    FUN_00f990ec(&local_f8,local_a0,1,1);
    pppppppuVar11 = local_f0;
    pppppppuVar14 = local_f4;
    if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_f4,local_f0);
    }
    FUN_016dd1aa(local_f0,pppppppuVar7,pppppppuVar25);
    local_40 = pppppppuVar25;
    local_44 = pppppppuVar11;
    local_48 = pppppppuVar14;
    local_f8 = (uint *******)&DAT_80000000;
    FUN_00fa1634(&local_160,param_1[2]);
    FUN_00fa04ec(&local_120,&local_160,4,0);
    pppppppuVar11 = (uint *******)FUN_00f9635c(iVar30,&local_48,&local_f8,local_174,&local_120);
LAB_00f7a298:
    pppppppuVar25 = local_a8;
    local_b4 = pppppppuVar7;
LAB_00f7a2a0:
    if (((uint)pppppppuVar25 & 0x7fffffff) == 0) goto LAB_00f79598;
  }
  else {
    if (((uint)local_1ac & ((*(uint *)(iVar30 + 0x144) | *(uint *)(iVar30 + 0x148)) & 0x2000) >> 0xd
        ) == 0) {
      FUN_006008c8(&local_160,pppppppuVar14,local_168);
      pppppppuVar7 = local_158;
      pppppppuVar11 = local_15c;
      FUN_00f990ec(&local_f8,local_158,1,1);
      pppppppuVar40 = local_f0;
      pppppppuVar25 = local_f4;
      if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_f4,local_f0);
      }
      FUN_016dd1aa(local_f0,pppppppuVar11,pppppppuVar7);
      local_d0 = *(uint ********)(param_1[2] + 0x60);
      local_cc = local_d0 + *(int *)(param_1[2] + 100) * 0x5b;
      local_e4 = (uint *******)&SUB_00000002;
      local_f8 = (uint *******)&SUB_00000002;
      FUN_00f93be8(&local_b8,pppppppuVar40,pppppppuVar7,&local_f8);
      if (pppppppuVar25 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar40);
      }
      if (((uint)local_160 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(pppppppuVar11);
      }
      iVar2 = param_1[2];
      if (local_b0 == 0) {
        iVar13 = *(int *)(iVar2 + 0x48);
        puVar41 = (undefined4 *)(iVar13 + 0x34);
        for (iVar30 = *(int *)(iVar2 + 0x4c) * 0x134; iVar30 != 0; iVar30 = iVar30 + -0x134) {
          puVar29 = *(undefined1 **)(iVar13 + 0x120);
          bVar44 = puVar29 == (undefined1 *)0x0;
          if (bVar44) {
            puVar29 = (undefined1 *)*puVar41;
          }
          if (bVar44 && puVar29 == &DAT_00110000) {
            if (((*(uint *)(iVar2 + 0x144) | *(uint *)(iVar2 + 0x148)) & 0x100) == 0) {
              FUN_0096c680(&local_b8);
              iVar30 = param_1[2];
              goto LAB_00f7a1f8;
            }
            break;
          }
          puVar41 = puVar41 + 0x4d;
          iVar13 = iVar13 + 0x134;
        }
        FUN_006008c8(&local_120,pppppppuVar14,local_168);
        pppppppuVar11 = local_118;
        pppppppuVar14 = local_11c;
        FUN_00f990ec(&local_f8,local_118,1,1);
        pppppppuVar25 = local_f0;
        pppppppuVar7 = local_f4;
        if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_f4,local_f0);
        }
        FUN_016dd1aa(local_f0,pppppppuVar14,pppppppuVar11);
        local_a0 = pppppppuVar11;
        local_a4 = pppppppuVar25;
        local_a8 = pppppppuVar7;
        FUN_00fa1634(&local_f8,param_1[2]);
        FUN_00fa04ec(&local_160,&local_f8,4,0);
        pppppppuVar11 = (uint *******)FUN_00f9821c(iVar2,&local_a8,&local_160);
        if (((uint)local_120 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(pppppppuVar14);
        }
        if (local_b8 == 0) goto LAB_00f79598;
        goto LAB_00f79594;
      }
      FUN_006008c8(&local_a8,pppppppuVar14,local_168);
      pppppppuVar25 = local_a0;
      pppppppuVar7 = local_a4;
      FUN_00f990ec(&local_f8,local_a0,1,1);
      pppppppuVar11 = local_f0;
      pppppppuVar14 = local_f4;
      if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_f4,local_f0);
      }
      FUN_016dd1aa(local_f0,pppppppuVar7,pppppppuVar25);
      iVar31 = 0x9c;
      local_40 = pppppppuVar25;
      local_44 = pppppppuVar11;
      iVar30 = param_1[2];
      local_48 = pppppppuVar14;
      iVar13 = 0xa0;
      if (*(int *)(iVar30 + 0x98) == -0x80000000) {
        iVar13 = 0x120;
        iVar31 = 0x11c;
      }
      pppppppuVar25 = *(uint ********)(iVar30 + iVar13);
      uVar35 = *(undefined4 *)(iVar30 + iVar31);
      FUN_00f990ec(&local_f8,pppppppuVar25,1,1);
      pppppppuVar11 = local_f0;
      pppppppuVar14 = local_f4;
      if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_f4,local_f0);
      }
      FUN_016dd1aa(local_f0,uVar35,pppppppuVar25);
      local_11c = pppppppuVar11;
      local_120 = pppppppuVar14;
      local_118 = pppppppuVar25;
      FUN_00fa1634(&local_f8,param_1[2]);
      FUN_00fa04ec(&local_160,&local_f8,4,0);
      pppppppuVar11 =
           (uint *******)FUN_00f97268(iVar2,&local_48,&local_b8,&local_120,local_174,&local_160);
      pppppppuVar14 = local_a8;
      local_b4 = pppppppuVar7;
    }
    else {
      FUN_006008c8(&local_48,pppppppuVar14,local_168);
      pppppppuVar40 = local_40;
      pppppppuVar25 = local_44;
      FUN_00f990ec(&local_f8,local_40,1,1);
      pppppppuVar7 = local_f0;
      pppppppuVar14 = local_f4;
      if (local_f8 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_f4,local_f0);
      }
      FUN_016dd1aa(local_f0,pppppppuVar25,pppppppuVar40);
      local_50 = pppppppuVar40;
      local_11c = pppppppuVar11 + (int)ppppppuVar36 * 2;
      local_54 = pppppppuVar7;
      local_58 = pppppppuVar14;
      local_118 = (uint *******)param_1[2];
      local_120 = pppppppuVar11;
      FUN_00f6ff9c(&local_a8,&local_120);
      FUN_00fa1634(&local_f8,param_1[2]);
      FUN_00fa04ec(&local_160,&local_f8,4,0);
      pppppppuVar11 = (uint *******)FUN_00f977fc(iVar30,&local_58,&local_a8,&local_160);
      pppppppuVar14 = local_48;
      local_b4 = pppppppuVar25;
    }
    if (((uint)pppppppuVar14 & 0x7fffffff) == 0) goto LAB_00f79598;
  }
LAB_00f79594:
  thunk_FUN_016d3fb4(local_b4);
  goto LAB_00f79598;
LAB_00f75878:
  do {
    if (ppppppuVar28[0x49] != (uint *****)0x0) {
      if (pppppppuVar7 <= ppppppuVar28[0x4a]) {
        iVar2 = thunk_FUN_016dd50a(pppppppuVar40,ppppppuVar28[0x49],pppppppuVar7);
        if (iVar2 == 0) goto LAB_00f75900;
      }
      pppppuVar23 = ppppppuVar28[0xf] + 1;
      for (iVar2 = (int)ppppppuVar28[0x10] * 0xc; iVar2 != 0; iVar2 = iVar2 + -0xc) {
        if (pppppppuVar7 <= *pppppuVar23) {
          iVar13 = thunk_FUN_016dd50a(pppppppuVar40,pppppuVar23[-1],pppppppuVar7);
          if (iVar13 == 0) goto LAB_00f75900;
        }
        pppppuVar23 = pppppuVar23 + 3;
      }
    }
    ppppppuVar28 = ppppppuVar28 + 0x5b;
  } while (ppppppuVar28 != ppppppuVar18);
LAB_00f75eac:
  if (pppppuVar21 != (uint *****)0x0) {
    if ((int)local_1e0 < 0) {
      local_11c = (uint *******)0x0;
      local_1e0 = local_204;
LAB_00f77374:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_11c,local_1e0);
    }
    if (local_1e0 == (uint *******)0x0) {
      local_f0 = (uint *******)&DAT_00000001;
      pppppppuVar14 = (uint *******)0x0;
    }
    else {
      local_f0 = (uint *******)thunk_FUN_016d4a50(local_1e0);
      if (local_f0 == (uint *******)0x0) {
LAB_00f7a2c0:
        local_11c = (uint *******)&DAT_00000001;
        goto LAB_00f77374;
      }
      pppppppuVar14 = local_1e0;
    }
    FUN_016dd1aa(local_f0,pppppuVar21);
    local_f8 = (uint *******)&DAT_80000000;
    local_f4 = pppppppuVar14;
    local_ec = local_1e0;
    goto LAB_00f75fb4;
  }
  iVar2 = FUN_00f9d5e4(pppppppuVar14 + 0x11,local_184);
  if ((iVar2 == 0) || ((*(uint *)(iVar2 + 0x11c) & 0x120) != 0x20)) {
    FUN_00f990ec(&local_120,pppppppuVar7,1,1);
    local_f0 = local_118;
    local_f4 = local_11c;
    if (local_120 == (uint *******)&DAT_00000001) {
      local_1e0 = local_118;
      goto LAB_00f77374;
    }
    FUN_016dd1aa(local_118,pppppppuVar40,pppppppuVar7);
    local_f8 = (uint *******)0x80000007;
    local_ec = pppppppuVar7;
    goto LAB_00f75fb4;
  }
LAB_00f75f1c:
  local_f8 = (uint *******)0x80000005;
LAB_00f75fb4:
  local_160 = local_f8;
  local_15c = local_f4;
  local_158 = local_f0;
  local_154 = local_ec;
  local_150 = local_e8;
  local_14c = local_e4;
  local_148 = local_e0;
  pppppppuStack_144 = local_dc;
  local_140 = local_d8;
  pppppppuVar14 = (uint *******)&DAT_00000004;
  if ((int)local_f8 < 0) {
    pppppppuVar14 = local_f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00f75ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pppppppuVar14 =
       (uint *******)
       (*(code *)(&DAT_00f75ff8 + *(int *)(&DAT_00f75ff8 + (int)pppppppuVar14 * 4)))(0);
  return pppppppuVar14;
LAB_00f76248:
  do {
    uVar3 = (uint)*(byte *)((int)local_180 + (int)pppppppuVar25);
    bVar1 = bVar44;
    if (9 < uVar3 - 0x30) {
      if (uVar3 == 0x2e) {
        if ((bool)(bVar12 | bVar44)) goto LAB_00f7629c;
        bVar12 = 1;
        bVar1 = false;
      }
      else {
        if (uVar3 != 0x45 && uVar3 != 0x65) goto LAB_00f7629c;
        pppppppuVar14 = pppppppuVar25;
        bVar1 = true;
        if (bVar44) goto LAB_00f7629c;
      }
    }
    bVar44 = bVar1;
    pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1);
  } while (local_1e8 != pppppppuVar25);
LAB_00f76284:
  if ((!bVar44) || (pppppppuVar14 != (uint *******)((int)local_1e8 + -1))) goto LAB_00f76358;
LAB_00f7629c:
  pppppppuVar14 = (uint *******)((int)local_180 + (int)local_1e8);
  piVar39 = *(int **)((int)local_1b0 + 0x54) + 1;
  iVar2 = *(int *)((int)local_1b0 + 0x58) << 4;
  iVar13 = iVar2;
  piVar8 = piVar39;
  do {
    piVar34 = piVar8;
    if (iVar13 == 0) goto LAB_00f763fc;
    iVar13 = iVar13 + -0x10;
    piVar8 = piVar34 + 4;
  } while ((piVar34[-1] != 2) || ((undefined4 *)*piVar34 != local_184));
  ppppppuVar18 = (uint ******)piVar34[2];
  ppppppuVar16 = *(uint *******)((int)local_1b0 + 0x4c);
  if (ppppppuVar16 <= ppppppuVar18) goto LAB_00f7a58c;
  pppppppuVar25 = (uint *******)&DAT_00000134;
  if (((*(byte *)((int)ppppppuVar18 * 0x134 + *(int *)((int)local_1b0 + 0x48) + 0x11c) & 0x40) != 0)
     && (local_1f0 == (uint *******)0x0)) {
    if (local_1e8 != (uint *******)0x0) {
      if (9 < *(byte *)local_180 - 0x30) goto LAB_00f763fc;
      if (local_1e8 != (uint *******)&DAT_00000001) {
        pppppppuVar40 = (uint *******)&DAT_00000001;
        bVar12 = 0;
        bVar44 = false;
        do {
          uVar3 = (uint)*(byte *)((int)local_180 + (int)pppppppuVar40);
          bVar1 = bVar44;
          if (9 < uVar3 - 0x30) {
            if (uVar3 == 0x2e) {
              if ((bool)(bVar12 | bVar44)) goto LAB_00f763fc;
              bVar12 = 1;
              bVar1 = false;
            }
            else {
              if (uVar3 != 0x45 && uVar3 != 0x65) goto LAB_00f763fc;
              pppppppuVar25 = pppppppuVar40;
              bVar1 = true;
              if (bVar44) goto LAB_00f763fc;
            }
          }
          bVar44 = bVar1;
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
        } while (local_1e8 != pppppppuVar40);
        if ((bVar44) && (pppppppuVar25 == (uint *******)((int)local_1e8 + -1))) goto LAB_00f763fc;
      }
    }
LAB_00f76358:
    local_160 = (uint *******)0x80000005;
    goto LAB_00f76c40;
  }
LAB_00f763fc:
  iVar13 = iVar2;
  do {
    piVar8 = piVar39;
    if (iVar13 == 0) goto LAB_00f7651c;
    iVar13 = iVar13 + -0x10;
    piVar39 = piVar8 + 4;
  } while ((piVar8[-1] != 2) || ((undefined4 *)*piVar8 != local_184));
  ppppppuVar18 = (uint ******)piVar8[2];
  ppppppuVar16 = *(uint *******)((int)local_1b0 + 0x4c);
  if (ppppppuVar16 <= ppppppuVar18) {
LAB_00f7a58c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(ppppppuVar18,ppppppuVar16,&DAT_018808ec);
  }
  pppppppuVar25 = local_180;
  if ((*(uint *)((int)ppppppuVar18 * 0x134 + *(int *)((int)local_1b0 + 0x48) + 0x11c) & 0x120) ==
      0x20) {
    while (pppppppuVar25 != pppppppuVar14) {
      pppppppuVar40 = (uint *******)((int)pppppppuVar25 + 1);
      piVar8 = (int *)(uint)*(byte *)pppppppuVar25;
      if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppuVar25) {
        uVar3 = *(byte *)((int)pppppppuVar25 + 1) & 0x3f;
        if (piVar8 < &DAT_000000e0) {
          piVar8 = (int *)(uVar3 | ((uint)piVar8 & 0x1f) << 6);
          pppppppuVar40 = (uint *******)((int)pppppppuVar25 + 2);
        }
        else {
          uVar3 = *(byte *)((int)pppppppuVar25 + 2) & 0x3f | uVar3 << 6;
          if (piVar8 < &DAT_000000f0) {
            piVar8 = (int *)(uVar3 | ((uint)piVar8 & 0x1f) << 0xc);
            pppppppuVar40 = (uint *******)((int)pppppppuVar25 + 3);
          }
          else {
            piVar8 = (int *)(*(byte *)((int)pppppppuVar25 + 3) & 0x3f | uVar3 << 6 |
                            ((uint)piVar8 & 7) << 0x12);
            pppppppuVar40 = pppppppuVar25 + 1;
          }
        }
      }
      iVar13 = iVar2;
      piVar39 = *(int **)((int)local_1b0 + 0x54);
      do {
        if (iVar13 == 0) goto LAB_00f76358;
        piVar34 = piVar39 + 4;
        iVar30 = *piVar39;
        iVar13 = iVar13 + -0x10;
        if (iVar30 == 0) {
          piVar39 = (int *)piVar39[1];
        }
        bVar44 = piVar39 != piVar8;
        piVar39 = piVar34;
        pppppppuVar25 = pppppppuVar40;
      } while (iVar30 != 0 || bVar44);
    }
    if (local_1f0 != (uint *******)0x0) goto LAB_00f76358;
  }
LAB_00f7651c:
  pbVar9 = (byte *)0x0;
  iVar2 = param_1[4];
  param_1[4] = 0;
  local_f8 = (uint *******)&DAT_80000008;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (local_180 == pppppppuVar14) goto LAB_00f76c1c;
    pppppppuVar25 = (uint *******)((int)local_180 + 1);
    bVar12 = *(byte *)local_180;
    if (0x7fffffff < (uint)(int)(char)bVar12) {
      if (bVar12 < 0xe0) {
        pppppppuVar25 = (uint *******)((int)local_180 + 2);
      }
      else if (bVar12 < 0xf0) {
        pppppppuVar25 = (uint *******)((int)local_180 + 3);
      }
      else {
        pppppppuVar25 = local_180 + 1;
      }
    }
    pbVar9 = (byte *)((int)pppppppuVar25 + ((int)pbVar9 - (int)local_180));
    local_180 = pppppppuVar25;
  }
  if (local_180 == pppppppuVar14) {
joined_r0x00f765fc:
    if (local_1f0 != (uint *******)0x0) {
      FUN_006008c8(&local_a8,local_1f0,local_1fc);
      local_88 = (uint *******)&local_a8;
      local_84 = &LAB_016cf57c;
      FUN_00600d2c(&local_68,&DAT_0057dbf4,&local_88);
      if (((uint)local_a8 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_a4);
      }
      *piVar4 = (int)local_68;
      piVar4[1] = local_64;
      piVar4[2] = local_60;
      pppppppuVar24 = (uint *******)0x80000007;
      local_160 = (uint *******)0x80000007;
      goto LAB_00f76ae8;
    }
LAB_00f76c1c:
    local_160 = local_f8;
    local_15c = local_f4;
    local_158 = local_f0;
    local_154 = local_ec;
    local_150 = local_e8;
    local_14c = local_e4;
    local_148 = local_e0;
    pppppppuStack_144 = local_dc;
    local_140 = local_d8;
    pppppppuVar24 = local_f8;
  }
  else {
    pppppppuVar25 = (uint *******)((int)local_180 + 1);
    local_ac = (uint ******)(uint)*(byte *)local_180;
    if (0x7fffffff < (uint)(int)(char)*(byte *)local_180) {
      uVar3 = *(byte *)((int)local_180 + 1) & 0x3f;
      if (local_ac < (uint ******)0xe0) {
        local_ac = (uint ******)(uVar3 | ((uint)local_ac & 0x1f) << 6);
        pppppppuVar25 = (uint *******)((int)local_180 + 2);
      }
      else {
        uVar3 = *(byte *)((int)local_180 + 2) & 0x3f | uVar3 << 6;
        if (local_ac < (uint ******)0xf0) {
          local_ac = (uint ******)(uVar3 | ((uint)local_ac & 0x1f) << 0xc);
          pppppppuVar25 = (uint *******)((int)local_180 + 3);
        }
        else {
          pppppppuVar25 = local_180 + 1;
          local_ac = (uint ******)
                     (*(byte *)((int)local_180 + 3) & 0x3f | uVar3 << 6 |
                     ((uint)local_ac & 7) << 0x12);
        }
      }
    }
    local_180 = (uint *******)((int)pppppppuVar25 + ((int)pbVar9 - (int)local_180));
    iVar2 = *(int *)((int)local_1b0 + 0x58) << 4;
    ppppppuVar36 = (uint ******)(*(int *)((int)local_1b0 + 0x54) + 4);
    do {
      ppppppuVar18 = ppppppuVar36;
      if (iVar2 == 0) goto LAB_00f769c4;
      iVar2 = iVar2 + -0x10;
      ppppppuVar16 = ppppppuVar18;
      if (ppppppuVar18[-1] == (uint *****)0x0) {
        ppppppuVar16 = (uint ******)*ppppppuVar18;
      }
      ppppppuVar36 = ppppppuVar18 + 4;
    } while (ppppppuVar18[-1] != (uint *****)0x0 || ppppppuVar16 != local_ac);
    pppppuVar21 = ppppppuVar18[2];
    if (*(uint ******)((int)local_1b0 + 0x4c) <= pppppuVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppuVar21,*(uint ******)((int)local_1b0 + 0x4c),&DAT_018808ec);
    }
    iVar2 = (int)pppppuVar21 * 0x134 + *(int *)((int)local_1b0 + 0x48);
    pppppppuVar40 = pppppppuVar25;
    if (((*(uint *)(iVar2 + 8) & 1) == 0) || (*(int *)(iVar2 + 0x10) != 0)) {
      local_94 = (byte *)local_1f0;
      local_90 = local_1fc;
      local_a8 = pppppppuVar11;
      local_a4 = pppppppuVar7;
      local_a0 = pppppppuVar25;
      local_9c = pppppppuVar14;
      local_98 = local_180;
      uVar47 = FUN_00fa7bec(&local_a8);
      iVar13 = (int)((ulonglong)uVar47 >> 0x20);
      pcVar10 = (char *)uVar47;
      bVar44 = false;
      if (pcVar10 == (char *)0x0) {
        uVar47 = 0;
      }
      else if (iVar13 == 0) {
        uVar47 = 0;
      }
      else {
        bVar44 = *pcVar10 == '=';
        if (bVar44) {
          uVar47 = CONCAT44(iVar13 + -1,pcVar10 + 1);
        }
      }
      FUN_00f7c6c0(&local_160,param_1,0,(int)uVar47,(int)((ulonglong)uVar47 >> 0x20),iVar2,param_2,
                   bVar44);
      goto LAB_00f76814;
    }
    local_50 = (uint *******)0x0;
    local_54 = (uint *******)&DAT_00000004;
    local_58 = (uint *******)0x0;
    FUN_00f7cacc(&local_160,param_1,0,2,iVar2,&local_58,0);
    if (local_160 != (uint *******)0x80000009) {
      FUN_00f7ee20(&local_f8);
      local_f8 = local_160;
      local_f4 = local_15c;
      local_f0 = local_158;
      local_ec = local_154;
      local_e8 = local_150;
      local_e4 = local_14c;
      local_e0 = local_148;
      local_dc = pppppppuStack_144;
      local_d8 = local_140;
      while (pppppppuVar40 != pppppppuVar14) {
        pppppppuVar25 = (uint *******)((int)pppppppuVar40 + 1);
        local_ac = (uint ******)(uint)*(byte *)pppppppuVar40;
        if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppuVar40) {
          uVar3 = *(byte *)((int)pppppppuVar40 + 1) & 0x3f;
          if (local_ac < (uint ******)0xe0) {
            local_ac = (uint ******)(uVar3 | ((uint)local_ac & 0x1f) << 6);
            pppppppuVar25 = (uint *******)((int)pppppppuVar40 + 2);
          }
          else {
            uVar3 = *(byte *)((int)pppppppuVar40 + 2) & 0x3f | uVar3 << 6;
            if (local_ac < (uint ******)0xf0) {
              local_ac = (uint ******)(uVar3 | ((uint)local_ac & 0x1f) << 0xc);
              pppppppuVar25 = (uint *******)((int)pppppppuVar40 + 3);
            }
            else {
              pppppppuVar25 = pppppppuVar40 + 1;
              local_ac = (uint ******)
                         (*(byte *)((int)pppppppuVar40 + 3) & 0x3f | uVar3 << 6 |
                         ((uint)local_ac & 7) << 0x12);
            }
          }
        }
        local_1b0 = (uint *******)param_1[2];
        local_180 = (uint *******)(((int)pppppppuVar25 - (int)pppppppuVar40) + (int)local_180);
        iVar2 = *(int *)((int)local_1b0 + 0x58) << 4;
        ppppppuVar36 = (uint ******)(*(int *)((int)local_1b0 + 0x54) + 4);
        do {
          ppppppuVar18 = ppppppuVar36;
          if (iVar2 == 0) goto LAB_00f769c4;
          iVar2 = iVar2 + -0x10;
          ppppppuVar16 = ppppppuVar18;
          if (ppppppuVar18[-1] == (uint *****)0x0) {
            ppppppuVar16 = (uint ******)*ppppppuVar18;
          }
          ppppppuVar36 = ppppppuVar18 + 4;
        } while (ppppppuVar18[-1] != (uint *****)0x0 || ppppppuVar16 != local_ac);
        pppppuVar21 = ppppppuVar18[2];
        if (*(uint ******)((int)local_1b0 + 0x4c) <= pppppuVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppppuVar21,*(uint ******)((int)local_1b0 + 0x4c),&DAT_018808ec);
        }
        iVar2 = (int)pppppuVar21 * 0x134 + *(int *)((int)local_1b0 + 0x48);
        pppppppuVar40 = pppppppuVar25;
        if (((*(uint *)(iVar2 + 8) & 1) == 0) || (*(int *)(iVar2 + 0x10) != 0)) {
          local_94 = (byte *)local_1f0;
          local_90 = local_1fc;
          local_a8 = pppppppuVar11;
          local_a4 = pppppppuVar7;
          local_a0 = pppppppuVar25;
          local_9c = pppppppuVar14;
          local_98 = local_180;
          uVar47 = FUN_00fa7bec(&local_a8);
          iVar13 = (int)((ulonglong)uVar47 >> 0x20);
          pcVar10 = (char *)uVar47;
          bVar44 = false;
          if (pcVar10 == (char *)0x0) {
            uVar47 = 0;
          }
          else if (iVar13 == 0) {
            uVar47 = 0;
          }
          else {
            bVar44 = *pcVar10 == '=';
            if (bVar44) {
              uVar47 = CONCAT44(iVar13 + -1,pcVar10 + 1);
            }
          }
          FUN_00f7c6c0(&local_160,param_1,0,(int)uVar47,(int)((ulonglong)uVar47 >> 0x20),iVar2,
                       param_2,bVar44);
LAB_00f76814:
          if (local_160 == (uint *******)0x80000009) goto LAB_00f769b4;
          pppppppuVar24 = local_160;
          if (local_160 != (uint *******)0x80000003) goto LAB_00f76ae8;
          FUN_00f7ee20(&local_160);
        }
        else {
          local_50 = (uint *******)0x0;
          local_54 = (uint *******)&DAT_00000004;
          local_58 = (uint *******)0x0;
          FUN_00f7cacc(&local_160,param_1,0,2,iVar2,&local_58,0);
          if (local_160 == (uint *******)0x80000009) goto LAB_00f769b4;
          FUN_00f7ee20(&local_f8);
          local_f8 = local_160;
          local_f4 = local_15c;
          local_f0 = local_158;
          local_ec = local_154;
          local_e8 = local_150;
          local_e4 = local_14c;
          local_e0 = local_148;
          local_dc = pppppppuStack_144;
          local_d8 = local_140;
        }
      }
      goto joined_r0x00f765fc;
    }
LAB_00f769b4:
    pppppppuVar24 = (uint *******)0x80000009;
LAB_00f76ae8:
    uVar3 = 4;
    if ((int)local_f8 < 0) {
      uVar3 = (uint)local_f8 ^ 0x80000000;
    }
    pppppppuVar14 = (uint *******)((uint)&local_f8 | 4);
    if (1 < uVar3 - 6) {
      if (uVar3 == 4) {
        if (local_f8 != (uint *******)0x0) {
          thunk_FUN_016d3fb4(local_f4);
        }
        pppppppuVar14 = (uint *******)&local_e0;
        if (local_ec != (uint *******)0x0) {
          thunk_FUN_016d3fb4(local_e8);
        }
      }
      else if (uVar3 != 0) goto LAB_00f76c38;
    }
    if (*pppppppuVar14 != (uint ******)0x0) {
      thunk_FUN_016d3fb4(pppppppuVar14[1]);
    }
  }
LAB_00f76c38:
  if (pppppppuVar24 == (uint *******)0x80000009) {
    pppppppuVar11 = local_15c;
LAB_00f79598:
    uVar3 = param_1[2];
    bVar44 = (*(byte *)(uVar3 + 0x144) & 1) == 0;
    if (bVar44) {
      uVar3 = *(uint *)(uVar3 + 0x148);
    }
    if ((!bVar44 || (uVar3 & 1) != 0) && (iVar2 = FUN_00f7f0f4(param_1,param_2), iVar2 != 0)) {
      FUN_00f7e784();
    }
    return pppppppuVar11;
  }
LAB_00f76c40:
  local_120 = local_160;
  local_11c = local_15c;
  local_118 = local_158;
  local_114 = local_154;
  local_110 = local_150;
  pppppppuStack_10c = local_14c;
  local_108 = local_148;
  pppppppuStack_104 = pppppppuStack_144;
  pppppppuStack_100 = local_140;
  pppppppuVar14 = (uint *******)&DAT_00000004;
  if ((int)local_160 < 0) {
    pppppppuVar14 = local_160;
  }
                    /* WARNING: Could not recover jumptable at 0x00f76c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pppppppuVar14 =
       (uint *******)(*(code *)(&DAT_00f76c84 + *(int *)(&DAT_00f76c84 + (int)pppppppuVar14 * 4)))()
  ;
  return pppppppuVar14;
LAB_00f7a51c:
  puVar19 = &DAT_01880354;
LAB_00f7a524:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_0035e2fc,99,puVar19);
}

