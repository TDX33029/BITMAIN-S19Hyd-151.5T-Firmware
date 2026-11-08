// FUN_00d83ba8 @ 00d83ba8 size=4484 calls_out=23 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d83ba8(undefined4 *param_1,int *param_2,int *param_3)

{
  uint *******pppppppuVar1;
  uint *******pppppppuVar2;
  char cVar3;
  int iVar4;
  uint ******ppppppuVar5;
  int iVar6;
  uint ******ppppppuVar7;
  uint ******ppppppuVar8;
  uint ******ppppppuVar9;
  uint ******ppppppuVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *******pppppppuVar18;
  int iVar19;
  uint *******unaff_r5;
  uint ******ppppppuVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  uint *******unaff_r7;
  int iVar24;
  uint *******pppppppuVar25;
  uint *******unaff_r8;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  uint *******unaff_r10;
  int iVar28;
  int iVar29;
  uint *******pppppppuVar30;
  bool bVar31;
  double dVar32;
  uint *******local_220;
  uint *******local_208;
  uint *******local_204;
  uint *******local_200;
  uint *******local_1fc;
  uint *******local_1f8;
  uint *******local_1f4;
  uint *******pppppppuStack_1f0;
  uint *******local_1ec;
  uint *******pppppppuStack_1e8;
  uint *******pppppppuStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [72];
  uint *******local_168;
  uint *******local_164;
  uint *******local_160;
  uint *******local_15c;
  uint *******local_158;
  uint *******local_154;
  uint *******local_150;
  uint *******local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint *******local_100;
  uint *******local_fc;
  uint *******local_f8;
  uint *******local_f4;
  uint *******pppppppuStack_f0;
  uint *******local_ec;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint *******local_d8;
  uint *******local_d4;
  uint *******local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint *****local_c0;
  uint *******local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *******local_98;
  uint *******local_94;
  uint *******local_90;
  uint *******local_8c;
  uint *******local_88;
  uint *******local_84;
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  uint *******pppppppuStack_74;
  uint *******pppppppuStack_70;
  uint *******pppppppuStack_6c;
  uint *******pppppppuStack_68;
  uint *******local_64;
  uint *******pppppppuStack_60;
  uint *******pppppppuStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pppppppuVar18 = (uint *******)*param_2;
  pppppppuVar26 = (uint *******)param_2[1];
  uVar13 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppuVar18 == (uint *******)&DAT_00000003 && pppppppuVar26 == (uint *******)0x0) {
    piVar21 = param_2 + 0x1a;
    unaff_r10 = (uint *******)(param_2 + 0x38);
    pppppppuVar18 = (uint *******)*piVar21;
    pppppppuVar26 = (uint *******)param_2[0x1b];
    pppppppuVar30 = unaff_r5;
    pppppppuVar25 = unaff_r7;
    if (pppppppuVar18 != (uint *******)&DAT_00000005 || pppppppuVar26 != (uint *******)0x0) {
      unaff_r8 = (uint *******)&local_100;
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar22 = *(int *)*param_3;
          iVar17 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar22 + 8))(iVar17);
LAB_00d84858:
          if (param_2[0x39] != 0) goto LAB_00d83c0c;
          goto LAB_00d84bc8;
        }
        *piVar21 = 4;
        param_2[0x1b] = 0;
        param_2[0x34] = param_2[0x34] + 1;
        local_98 = pppppppuVar18;
        local_94 = pppppppuVar26;
        FUN_01bed4e2(&local_90,param_2 + 0x1c,0x60);
        pppppppuVar30 = local_84;
        pppppppuVar2 = local_88;
        pppppppuVar1 = local_8c;
        pppppppuVar25 = local_90;
        if (pppppppuVar18 == (uint *******)&SUB_00000004 && pppppppuVar26 == (uint *******)0x0) {
          FUN_00d83a80(piVar21);
          *piVar21 = 5;
          param_2[0x1b] = 0;
          pppppppuVar30 = unaff_r5;
          pppppppuVar25 = unaff_r7;
          break;
        }
        local_204 = local_8c;
        local_220 = local_88;
        FUN_01bed4e2(&local_168,param_2 + 0x20,0x50);
        if (((uint)pppppppuVar18 & 7) != 3) {
          if (pppppppuVar18 == (uint *******)&DAT_00000005) goto LAB_00d84858;
          iVar22 = param_2[0x39];
          if (iVar22 == 0) {
            FUN_01bed4e2(auStack_1b8,&local_168,0x50);
            goto LAB_00d84964;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar22 = param_2[0x39];
          }
          param_2[3] = (int)pppppppuVar1;
          param_2[4] = (int)pppppppuVar2;
          *param_2 = (int)pppppppuVar18;
          param_2[1] = (int)pppppppuVar26;
          param_2[2] = (int)pppppppuVar25;
          param_2[5] = (int)pppppppuVar30;
          FUN_01bed4e2(param_2 + 6,&local_168,0x50);
          FUN_01283fd8(&local_100,unaff_r10,iVar22);
          pppppppuVar18 = local_f4;
          if (((uint)local_f4 & 1) == 0) goto LAB_00d83c2c;
          local_c4 = (int)local_fc + ((uint)local_f4 >> 5);
          local_c8 = (int)local_100 - ((uint)local_f4 >> 5);
          local_cc = (int)local_f8 + ((uint)local_f4 >> 5);
          FUN_01283524(&local_200,&local_cc);
          local_c0 = (uint *****)((uint)pppppppuVar18 >> 5);
          if (local_1f8 < (uint *******)((uint)pppppppuVar18 >> 5)) {
            local_90 = (uint *******)&local_bc;
            local_bc = local_1f8;
            local_8c = (uint *******)&LAB_01a6a304;
            local_94 = (uint *******)&LAB_01a6a304;
            local_98 = (uint *******)&local_c0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
          }
          goto LAB_00d84704;
        }
        pppppppuVar30 = (uint *******)param_2[0x39];
        local_208 = pppppppuVar25;
        pppppppuVar26 = (uint *******)param_2[0x36];
        iVar22 = param_2[0x37];
        pppppppuVar18 = pppppppuVar30;
        if ((uint)(param_2[0x3a] - (int)pppppppuVar30) < 5) {
          FUN_01283c9c(unaff_r10,5);
          pppppppuVar18 = (uint *******)param_2[0x39];
          local_1fc = (uint *******)(param_2[0x3a] - (int)pppppppuVar18);
          if (local_1fc < 5) {
            local_d0 = pppppppuVar2;
            local_d4 = pppppppuVar1;
            local_d8 = pppppppuVar25;
            local_200 = (uint *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_200);
          }
        }
        param_2[0x39] = (int)pppppppuVar18 + 5;
        local_1f8 = pppppppuVar2;
        local_1fc = pppppppuVar1;
        local_200 = pppppppuVar25;
        unaff_r5 = pppppppuVar26;
        unaff_r7 = pppppppuVar30;
        if (pppppppuVar2 != (uint *******)0x0) {
          iVar17 = 0;
          pppppppuVar25 = pppppppuVar1;
          pppppppuVar27 = pppppppuVar2;
          do {
            iVar19 = 0;
            if (pppppppuVar25[0x13] != (uint ******)0x0) {
              iVar19 = ((LZCOUNT((uint)pppppppuVar25[0x13] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar24 = 0;
            dVar32 = *(double *)(pppppppuVar25 + 8);
            iVar23 = 0;
            if (pppppppuVar25[10] != (uint ******)0x80000000) {
              iVar23 = (int)pppppppuVar25[0xc] +
                       ((LZCOUNT((uint)pppppppuVar25[0xc] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (pppppppuVar25[0xd] != (uint ******)0x80000000) {
              iVar24 = (int)pppppppuVar25[0xf] +
                       ((LZCOUNT((uint)pppppppuVar25[0xf] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar4 = 0;
            iVar16 = 0;
            if (pppppppuVar25[0x10] != (uint ******)0x80000000) {
              iVar16 = (int)pppppppuVar25[0x12] +
                       ((LZCOUNT((uint)pppppppuVar25[0x12] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (*pppppppuVar25 != (uint ******)0x80000000) {
              iVar29 = 0;
              iVar4 = 0;
              if (pppppppuVar25[3] != (uint ******)0x0) {
                iVar4 = ((LZCOUNT((uint)pppppppuVar25[3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              if (pppppppuVar25[4] != (uint ******)0x0) {
                iVar29 = ((LZCOUNT((uint)pppppppuVar25[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar5 = pppppppuVar25[5];
              iVar28 = 0;
              iVar14 = 0;
              if (ppppppuVar5 != (uint ******)0x0) {
                uVar15 = LZCOUNT((uint)ppppppuVar5 | 1) | 0x20;
                if ((int)ppppppuVar5 < 0) {
                  uVar15 = LZCOUNT((int)ppppppuVar5 >> 0x1f);
                }
                iVar14 = ((uVar15 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar5 = pppppppuVar25[6];
              if (ppppppuVar5 != (uint ******)0x0) {
                uVar15 = LZCOUNT((uint)ppppppuVar5 | 1) | 0x20;
                if ((int)ppppppuVar5 < 0) {
                  uVar15 = LZCOUNT((int)ppppppuVar5 >> 0x1f);
                }
                iVar28 = ((uVar15 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar5 = pppppppuVar25[2];
              iVar6 = FUN_011df264(pppppppuVar25[1],pppppppuVar25[1] + (int)ppppppuVar5 * 2);
              uVar15 = (int)ppppppuVar5 +
                       (uint)*(byte *)(pppppppuVar25 + 7) * 2 +
                       iVar6 + iVar29 + iVar4 + iVar14 + iVar28;
              iVar4 = uVar15 + ((LZCOUNT(uVar15 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppppppuVar25 = pppppppuVar25 + 0x14;
            if (dVar32 != 0.0) {
              iVar19 = iVar19 + 9;
            }
            pppppppuVar27 = (uint *******)((int)pppppppuVar27 + -1);
            uVar15 = iVar19 + iVar23 + iVar24 + iVar16 + iVar4;
            iVar17 = uVar15 + iVar17 + ((LZCOUNT(uVar15 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          } while (pppppppuVar27 != (uint *******)0x0);
          if ((uint ******)(0x7ffffffaU - (int)pppppppuVar18) <
              (uint ******)(iVar17 + (int)pppppppuVar2)) {
            local_100 = (uint *******)(iVar17 + (int)pppppppuVar2);
            local_fc = (uint *******)(0x7ffffffaU - (int)pppppppuVar18);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_100,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          pppppppuVar18 = pppppppuVar1;
          do {
            local_100 = (uint *******)CONCAT31(local_100._1_3_,10);
            uVar15 = FUN_01284394(unaff_r10,unaff_r8,1);
            local_208 = (uint *******)pppppppuVar18[0x13];
            iVar17 = 0;
            pppppppuVar25 = (uint *******)pppppppuVar18[10];
            dVar32 = *(double *)(pppppppuVar18 + 8);
            if (local_208 != (uint *******)0x0) {
              uVar15 = (uint)local_208 | 1;
            }
            iVar19 = 0;
            if (local_208 != (uint *******)0x0) {
              iVar17 = ((LZCOUNT(uVar15) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (pppppppuVar25 != (uint *******)&DAT_80000000) {
              iVar19 = (int)pppppppuVar18[0xc] +
                       ((LZCOUNT((uint)pppppppuVar18[0xc] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppuVar5 = pppppppuVar18[0xd];
            pppppppuVar27 = (uint *******)0x0;
            iVar23 = 0;
            if (ppppppuVar5 != (uint ******)0x80000000) {
              iVar23 = (int)pppppppuVar18[0xf] +
                       ((LZCOUNT((uint)pppppppuVar18[0xf] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppuVar7 = pppppppuVar18[0x10];
            if (ppppppuVar7 != (uint ******)0x80000000) {
              pppppppuVar27 =
                   (uint *******)
                   ((int)pppppppuVar18[0x12] +
                   ((LZCOUNT((uint)pppppppuVar18[0x12] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
            }
            ppppppuVar8 = *pppppppuVar18;
            iVar24 = 0;
            unaff_r7 = pppppppuVar25;
            if (ppppppuVar8 != (uint ******)0x80000000) {
              iVar4 = 0;
              iVar24 = 0;
              if (pppppppuVar18[3] != (uint ******)0x0) {
                iVar24 = ((LZCOUNT((uint)pppppppuVar18[3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              if (pppppppuVar18[4] != (uint ******)0x0) {
                iVar4 = ((LZCOUNT((uint)pppppppuVar18[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar9 = pppppppuVar18[5];
              unaff_r7 = (uint *******)0x0;
              iVar16 = 0;
              if (ppppppuVar9 != (uint ******)0x0) {
                uVar15 = LZCOUNT((uint)ppppppuVar9 | 1) | 0x20;
                if ((int)ppppppuVar9 < 0) {
                  uVar15 = LZCOUNT((int)ppppppuVar9 >> 0x1f);
                }
                iVar16 = ((uVar15 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar9 = pppppppuVar18[6];
              if (ppppppuVar9 != (uint ******)0x0) {
                uVar15 = LZCOUNT((uint)ppppppuVar9 | 1) | 0x20;
                if ((int)ppppppuVar9 < 0) {
                  uVar15 = LZCOUNT((int)ppppppuVar9 >> 0x1f);
                }
                unaff_r7 = (uint *******)(((uVar15 ^ 0x3f) * 9 + 0x49 >> 6) + 1);
              }
              ppppppuVar9 = pppppppuVar18[2];
              iVar29 = FUN_011df264(pppppppuVar18[1],pppppppuVar18[1] + (int)ppppppuVar9 * 2);
              uVar15 = (int)unaff_r7 +
                       (int)ppppppuVar9 +
                       (uint)*(byte *)(pppppppuVar18 + 7) * 2 + iVar29 + iVar4 + iVar24 + iVar16;
              iVar24 = uVar15 + ((LZCOUNT(uVar15 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              local_220 = pppppppuVar27;
            }
            local_204 = pppppppuVar18 + 0x14;
            if (dVar32 != 0.0) {
              iVar17 = iVar17 + 9;
            }
            unaff_r5 = (uint *******)&DAT_0000000a;
            uVar15 = (int)pppppppuVar27 + iVar24 + iVar17 + iVar19 + iVar23;
            do {
              if (uVar15 < 0x80) {
                local_100 = (uint *******)CONCAT31(local_100._1_3_,(char)uVar15);
                FUN_01284394(unaff_r10,unaff_r8,1);
                break;
              }
              local_100 = (uint *******)(CONCAT31(local_100._1_3_,(char)uVar15) | 0x80);
              FUN_01284394(unaff_r10,unaff_r8,1);
              uVar15 = uVar15 >> 7;
              unaff_r5 = (uint *******)((int)unaff_r5 + -1);
            } while (unaff_r5 != (uint *******)0x0);
            if (local_208 != (uint *******)0x0) {
              FUN_00efc9fc(1,pppppppuVar18[0x13],unaff_r10);
            }
            if (dVar32 != 0.0) {
              FUN_01016b28((int)*(undefined8 *)(pppppppuVar18 + 8),2,unaff_r10);
            }
            if (pppppppuVar25 != (uint *******)&DAT_80000000) {
              FUN_01016f10(3,pppppppuVar18[0xb],pppppppuVar18[0xc],unaff_r10);
            }
            if (ppppppuVar5 != (uint ******)0x80000000) {
              FUN_01016f10(4,pppppppuVar18[0xe],pppppppuVar18[0xf],unaff_r10);
            }
            if (ppppppuVar7 != (uint ******)0x80000000) {
              FUN_01016f10(5,pppppppuVar18[0x11],pppppppuVar18[0x12],unaff_r10);
            }
            if (ppppppuVar8 != (uint ******)0x80000000) {
              local_100 = (uint *******)CONCAT31(local_100._1_3_,0x32);
              uVar15 = FUN_01284394(unaff_r10,unaff_r8,1);
              ppppppuVar5 = pppppppuVar18[3];
              iVar19 = 0;
              bVar31 = ppppppuVar5 != (uint ******)0x0;
              iVar17 = 0;
              if (bVar31) {
                uVar15 = (uint)ppppppuVar5 | 1;
              }
              ppppppuVar7 = pppppppuVar18[4];
              if (bVar31) {
                uVar15 = LZCOUNT(uVar15);
              }
              iVar23 = 0;
              if (bVar31) {
                uVar15 = uVar15 ^ 0x1f;
              }
              iVar24 = 0;
              if (bVar31) {
                iVar19 = (uVar15 * 9 + 0x49 >> 6) + 1;
              }
              if (ppppppuVar7 != (uint ******)0x0) {
                iVar17 = ((LZCOUNT((uint)ppppppuVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar8 = pppppppuVar18[5];
              if (ppppppuVar8 != (uint ******)0x0) {
                uVar15 = LZCOUNT((uint)ppppppuVar8 | 1) | 0x20;
                if ((int)ppppppuVar8 < 0) {
                  uVar15 = LZCOUNT((int)ppppppuVar8 >> 0x1f);
                }
                iVar24 = ((uVar15 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar9 = pppppppuVar18[6];
              if (ppppppuVar9 != (uint ******)0x0) {
                uVar15 = LZCOUNT((uint)ppppppuVar9 | 1) | 0x20;
                if ((int)ppppppuVar9 < 0) {
                  uVar15 = LZCOUNT((int)ppppppuVar9 >> 0x1f);
                }
                iVar23 = ((uVar15 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              ppppppuVar20 = pppppppuVar18[2];
              ppppppuVar10 = pppppppuVar18[1];
              iVar4 = FUN_011df264(ppppppuVar10,ppppppuVar10 + (int)ppppppuVar20 * 2);
              local_208 = (uint *******)(uint)*(byte *)(pppppppuVar18 + 7);
              unaff_r7 = (uint *******)&DAT_0000000a;
              uVar15 = (int)ppppppuVar20 +
                       (int)local_208 * 2 + iVar4 + iVar17 + iVar19 + iVar24 + iVar23;
              do {
                if (uVar15 < 0x80) {
                  local_100 = (uint *******)CONCAT31(local_100._1_3_,(char)uVar15);
                  FUN_01284394(unaff_r10,unaff_r8,1);
                  break;
                }
                local_100 = (uint *******)(CONCAT31(local_100._1_3_,(char)uVar15) | 0x80);
                FUN_01284394(unaff_r10,unaff_r8,1);
                uVar15 = uVar15 >> 7;
                unaff_r7 = (uint *******)((int)unaff_r7 + -1);
              } while (unaff_r7 != (uint *******)0x0);
              if (ppppppuVar5 != (uint ******)0x0) {
                FUN_00efc9fc(1,pppppppuVar18[3],unaff_r10);
              }
              if (ppppppuVar7 != (uint ******)0x0) {
                FUN_00efc9fc(2,pppppppuVar18[4],unaff_r10);
              }
              if (ppppppuVar8 != (uint ******)0x0) {
                FUN_00efca88(3,pppppppuVar18[5],unaff_r10);
              }
              if (ppppppuVar9 != (uint ******)0x0) {
                FUN_00efca88(4,pppppppuVar18[6],unaff_r10);
              }
              unaff_r5 = (uint *******)0x0;
              if (ppppppuVar20 != (uint ******)0x0) {
                iVar17 = (int)ppppppuVar20 << 3;
                unaff_r5 = (uint *******)(ppppppuVar10 + 1);
                do {
                  local_100._0_1_ = 0x2a;
                  FUN_01284394(unaff_r10,unaff_r8,1);
                  unaff_r7 = (uint *******)unaff_r5[-1];
                  cVar12 = '\0';
                  ppppppuVar5 = *unaff_r5;
                  cVar3 = '\0';
                  if (unaff_r7 != (uint *******)0x0) {
                    cVar12 = (char)((LZCOUNT((uint)unaff_r7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
                  }
                  if (ppppppuVar5 != (uint ******)0x0) {
                    cVar3 = (char)((LZCOUNT((uint)ppppppuVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) +
                            '\x01';
                  }
                  local_100 = (uint *******)CONCAT31(local_100._1_3_,cVar3 + cVar12);
                  FUN_01284394(unaff_r10,unaff_r8,1);
                  if (unaff_r7 != (uint *******)0x0) {
                    FUN_00efc9fc(1,unaff_r5[-1],unaff_r10);
                  }
                  if (ppppppuVar5 != (uint ******)0x0) {
                    FUN_00efc9fc(2,*unaff_r5,unaff_r10);
                  }
                  unaff_r5 = unaff_r5 + 2;
                  iVar17 = iVar17 + -8;
                } while (iVar17 != 0);
              }
              if (local_208 != (uint *******)0x0) {
                FUN_00efe13c(6,*(undefined1 *)(pppppppuVar18 + 7),unaff_r10);
              }
            }
            pppppppuVar18 = local_204;
          } while (local_204 != pppppppuVar1 + (int)pppppppuVar2 * 0x14);
        }
        FUN_00d84ea4(&local_200);
        pppppppuVar18 = (uint *******)param_2[0x39];
        if (pppppppuVar18 < pppppppuVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppppppuVar30,pppppppuVar18,pppppppuVar18,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_98,pppppppuVar26,iVar22,(int)*unaff_r10 + (int)pppppppuVar30,
                     (int)pppppppuVar18 - (int)pppppppuVar30);
        pppppppuVar30 = local_84;
        pppppppuVar25 = local_90;
        pppppppuVar26 = local_94;
        pppppppuVar18 = local_98;
        if (local_98 != (uint *******)&DAT_00000003 || local_94 != (uint *******)0x0) {
          local_204 = local_8c;
          local_220 = local_88;
          FUN_01bed4e2(auStack_1b8,&local_80,0x50);
          goto LAB_00d84964;
        }
        if (uVar13 <= (uint)param_2[0x39]) {
          FUN_01283fd8(&local_100,unaff_r10);
          pppppppuVar18 = local_f4;
          if (((uint)local_f4 & 1) == 0) goto LAB_00d83c2c;
          local_c4 = (int)local_fc + ((uint)local_f4 >> 5);
          local_c8 = (int)local_100 - ((uint)local_f4 >> 5);
          local_cc = (int)local_f8 + ((uint)local_f4 >> 5);
          FUN_01283524(&local_200,&local_cc);
          local_c0 = (uint *****)((uint)pppppppuVar18 >> 5);
          if (local_1f8 < (uint *******)((uint)pppppppuVar18 >> 5)) {
            local_90 = (uint *******)&local_bc;
            local_bc = local_1f8;
            local_8c = (uint *******)&LAB_01a6a304;
            local_94 = (uint *******)&LAB_01a6a304;
            local_98 = (uint *******)&local_c0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
          }
          goto LAB_00d84704;
        }
        pppppppuVar18 = (uint *******)*piVar21;
        pppppppuVar26 = (uint *******)param_2[0x1b];
        pppppppuVar30 = unaff_r5;
        pppppppuVar25 = unaff_r7;
      } while (pppppppuVar18 != (uint *******)&DAT_00000005 || pppppppuVar26 != (uint *******)0x0);
    }
    if (param_2[0x39] == 0) {
      pppppppuVar26 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)&SUB_00000004;
    }
    else {
LAB_00d83c0c:
      FUN_01283fd8(&local_100,unaff_r10);
      pppppppuVar18 = local_f4;
      if (((uint)local_f4 & 1) == 0) {
LAB_00d83c2c:
        pppppppuVar30 = local_f4;
        pppppppuVar25 = (uint *******)&DAT_01d2e520;
        local_220 = local_fc;
        local_204 = local_100;
      }
      else {
        local_c4 = (int)local_fc + ((uint)local_f4 >> 5);
        local_c8 = (int)local_100 - ((uint)local_f4 >> 5);
        local_cc = (int)local_f8 + ((uint)local_f4 >> 5);
        FUN_01283524(&local_200,&local_cc);
        local_c0 = (uint *****)((uint)pppppppuVar18 >> 5);
        if (local_1f8 < (uint *******)((uint)pppppppuVar18 >> 5)) {
          local_90 = (uint *******)&local_bc;
          local_bc = local_1f8;
          local_8c = (uint *******)&LAB_01a6a304;
          local_94 = (uint *******)&LAB_01a6a304;
          local_98 = (uint *******)&local_c0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
        }
LAB_00d84704:
        local_220 = (uint *******)((int)local_1f8 - (int)local_c0);
        local_204 = (uint *******)((int)local_1fc + (int)local_c0);
        pppppppuVar30 = local_1f4;
        pppppppuVar25 = local_200;
      }
      pppppppuVar26 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)&DAT_00000003;
    }
LAB_00d84964:
    if (pppppppuVar18 == (uint *******)&SUB_00000004 && pppppppuVar26 == (uint *******)0x0) {
      pppppppuVar30 = (uint *******)0xd849a8;
      FUN_01a737fc(&local_98,param_2 + 0x42);
      if (local_98 != (uint *******)&SUB_00000004 || local_94 != (uint *******)0x0) {
        if (local_98 != (uint *******)&DAT_00000003 || local_94 != (uint *******)0x0) {
          local_b8 = local_50;
          uStack_b4 = uStack_4c;
          uStack_b0 = uStack_48;
          uStack_ac = uStack_44;
          local_a8 = local_40;
          uStack_a4 = uStack_3c;
          uStack_a0 = uStack_38;
          uStack_9c = uStack_34;
        }
        local_220 = local_88;
        local_204 = local_7c;
        local_208 = local_90;
        local_168 = local_78;
        local_164 = pppppppuStack_74;
        local_160 = pppppppuStack_70;
        local_15c = pppppppuStack_6c;
        local_158 = pppppppuStack_68;
        local_154 = local_64;
        local_150 = pppppppuStack_60;
        local_14c = pppppppuStack_5c;
        uStack_148 = uStack_58;
        uStack_144 = uStack_54;
        unaff_r8 = local_80;
        unaff_r10 = local_8c;
        pppppppuVar30 = local_84;
      }
      local_200 = local_168;
      local_1fc = local_164;
      local_1f8 = local_160;
      local_1f4 = local_15c;
      pppppppuStack_1f0 = local_158;
      local_1ec = local_154;
      pppppppuStack_1e8 = local_150;
      pppppppuStack_1e4 = local_14c;
      uStack_1e0 = uStack_148;
      uStack_1dc = uStack_144;
      local_1d8 = local_b8;
      uStack_1d4 = uStack_b4;
      uStack_1d0 = uStack_b0;
      uStack_1cc = uStack_ac;
      local_1c8 = local_a8;
      uStack_1c4 = uStack_a4;
      uStack_1c0 = uStack_a0;
      uStack_1bc = uStack_9c;
      pppppppuVar18 = local_98;
      pppppppuVar26 = local_94;
LAB_00d84ba4:
      if (pppppppuVar18 != (uint *******)&DAT_00000003 || pppppppuVar26 != (uint *******)0x0) {
        if (pppppppuVar18 != (uint *******)&SUB_00000004 || pppppppuVar26 != (uint *******)0x0) {
          if (pppppppuVar18 != (uint *******)&DAT_00000005 || pppppppuVar26 != (uint *******)0x0) {
            FUN_01bed4e2(&local_78,&local_200,0x48);
            local_7c = local_204;
            local_88 = local_220;
            local_98 = pppppppuVar18;
            local_94 = pppppppuVar26;
            local_90 = local_208;
            local_8c = unaff_r10;
            local_84 = pppppppuVar30;
            local_80 = unaff_r8;
            uVar11 = FUN_01a65494(&local_98);
            FUN_01a7467c(param_1,uVar11,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d84bc8;
        }
        uVar11 = 4;
        goto LAB_00d84bdc;
      }
      pppppppuVar18 = local_204;
      pppppppuVar25 = local_220;
      local_220 = unaff_r8;
    }
    else {
      if (pppppppuVar18 != (uint *******)&DAT_00000003 || pppppppuVar26 != (uint *******)0x0) {
        local_158 = local_220;
        local_15c = local_204;
        local_168 = pppppppuVar18;
        local_164 = pppppppuVar26;
        local_160 = pppppppuVar25;
        local_154 = pppppppuVar30;
        FUN_01bed4e2(&local_150,auStack_1b8,0x50);
        unaff_r8 = local_150;
        unaff_r10 = local_15c;
        local_208 = local_160;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_98,&local_168);
          pppppppuVar26 = local_94;
          pppppppuVar18 = local_98;
          local_204 = local_7c;
          local_220 = local_88;
          local_100 = local_78;
          local_fc = pppppppuStack_74;
          local_f8 = pppppppuStack_70;
          local_f4 = pppppppuStack_6c;
          pppppppuStack_f0 = pppppppuStack_68;
          local_ec = local_64;
          pppppppuStack_e8 = pppppppuStack_60;
          pppppppuStack_e4 = pppppppuStack_5c;
          uStack_e0 = uStack_58;
          uStack_dc = uStack_54;
          if (local_98 == (uint *******)&DAT_00000003 && local_94 == (uint *******)0x0) {
            local_200 = local_78;
            local_1fc = pppppppuStack_74;
            local_1f8 = pppppppuStack_70;
            local_1f4 = pppppppuStack_6c;
            pppppppuStack_1f0 = pppppppuStack_68;
            local_1ec = local_64;
            pppppppuStack_1e8 = pppppppuStack_60;
            pppppppuStack_1e4 = pppppppuStack_5c;
            uStack_1e0 = uStack_58;
            uStack_1dc = uStack_54;
            FUN_005f6588(&local_168);
            pppppppuVar26 = (uint *******)0x0;
            pppppppuVar18 = (uint *******)&DAT_00000003;
          }
          else {
            local_1d8 = local_50;
            uStack_1d4 = uStack_4c;
            uStack_1d0 = uStack_48;
            uStack_1cc = uStack_44;
            local_1c8 = local_40;
            uStack_1c4 = uStack_3c;
            uStack_1c0 = uStack_38;
            uStack_1bc = uStack_34;
            local_200 = local_78;
            local_1fc = pppppppuStack_74;
            local_1f8 = pppppppuStack_70;
            local_1f4 = pppppppuStack_6c;
            pppppppuStack_1f0 = pppppppuStack_68;
            local_1ec = local_64;
            pppppppuStack_1e8 = pppppppuStack_60;
            pppppppuStack_1e4 = pppppppuStack_5c;
            uStack_1e0 = uStack_58;
            uStack_1dc = uStack_54;
            FUN_005f6588(&local_168);
          }
          pppppppuVar30 = local_84;
          unaff_r8 = local_80;
          local_208 = local_90;
          unaff_r10 = local_8c;
        }
        else {
          local_204 = local_14c;
          FUN_01bed4e2(&local_200,auStack_1b0,0x48);
        }
        goto LAB_00d84ba4;
      }
      unaff_r10 = (uint *******)0x0;
      local_208 = (uint *******)&DAT_00000003;
      pppppppuVar18 = pppppppuVar30;
      pppppppuVar30 = local_204;
    }
    param_1[8] = local_200;
    param_1[9] = local_1fc;
    param_1[10] = local_1f8;
    param_1[0xb] = local_1f4;
    param_1[0xc] = pppppppuStack_1f0;
    param_1[0xd] = local_1ec;
    param_1[0xe] = pppppppuStack_1e8;
    param_1[0xf] = pppppppuStack_1e4;
    param_1[0x10] = uStack_1e0;
    param_1[0x11] = uStack_1dc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_208;
    param_1[3] = unaff_r10;
    param_1[4] = pppppppuVar25;
    param_1[5] = pppppppuVar30;
    param_1[6] = local_220;
    param_1[7] = pppppppuVar18;
  }
  else {
    local_204 = (uint *******)param_2[3];
    local_220 = (uint *******)param_2[4];
    pppppppuVar25 = (uint *******)param_2[2];
    pppppppuVar30 = (uint *******)param_2[5];
    FUN_01bed4e2(auStack_1b8,param_2 + 6,0x50);
    if (pppppppuVar18 != (uint *******)&DAT_00000005 || pppppppuVar26 != (uint *******)0x0)
    goto LAB_00d84964;
LAB_00d84bc8:
    uVar11 = 5;
LAB_00d84bdc:
    *param_1 = uVar11;
    param_1[1] = 0;
  }
  return;
}

