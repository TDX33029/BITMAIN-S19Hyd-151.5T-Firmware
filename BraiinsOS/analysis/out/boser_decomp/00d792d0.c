// FUN_00d792d0 @ 00d792d0 size=3580 calls_out=23 calls_in=0
// strings: 

void FUN_00d792d0(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint ******ppppppuVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint ******ppppppuVar12;
  int *piVar13;
  int iVar14;
  uint *******unaff_r5;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  uint *******pppppppuVar17;
  uint ******ppppppuVar18;
  int iVar19;
  uint *******unaff_r8;
  uint *******pppppppuVar20;
  uint *******pppppppuVar21;
  int iVar22;
  uint *******unaff_r10;
  uint *******pppppppuVar23;
  int *piVar24;
  uint *******pppppppuVar25;
  int iVar26;
  int iVar27;
  uint *******local_218;
  uint *******local_1f8;
  uint *******local_1f4;
  uint *******local_1f0;
  uint *******local_1ec;
  uint *******local_1e8;
  uint *******local_1e4;
  uint *******pppppppuStack_1e0;
  uint *******local_1dc;
  uint *******pppppppuStack_1d8;
  uint *******pppppppuStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [72];
  uint *******local_158;
  uint *******local_154;
  uint *******local_150;
  uint *******local_14c;
  uint *******local_148;
  uint *******local_144;
  uint *******local_140;
  uint *******local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint *******local_f0;
  uint *******local_ec;
  uint *******local_e8;
  uint *******local_e4;
  uint *******pppppppuStack_e0;
  uint *******local_dc;
  uint *******pppppppuStack_d8;
  uint *******pppppppuStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c4;
  int local_c0;
  undefined1 *local_bc;
  uint *****local_b8;
  uint *******local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *******local_90;
  uint *******local_8c;
  uint *******local_88;
  uint *******local_84;
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  uint *******local_74;
  uint *******local_70;
  uint *******pppppppuStack_6c;
  uint *******pppppppuStack_68;
  uint *******pppppppuStack_64;
  uint *******pppppppuStack_60;
  uint *******local_5c;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pppppppuVar17 = (uint *******)*param_2;
  pppppppuVar21 = (uint *******)param_2[1];
  uVar4 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppuVar17 == (uint *******)&DAT_00000003 && pppppppuVar21 == (uint *******)0x0) {
    piVar13 = param_2 + 0x1a;
    piVar24 = param_2 + 0x38;
    pppppppuVar17 = (uint *******)*piVar13;
    pppppppuVar21 = (uint *******)param_2[0x1b];
    if (pppppppuVar17 != (uint *******)&DAT_00000005 || pppppppuVar21 != (uint *******)0x0) {
      pppppppuVar8 = unaff_r10;
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar1 = *(int *)*param_3;
          iVar5 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar1 + 8))(iVar5);
LAB_00d79bd8:
          if (param_2[0x39] == 0) goto LAB_00d79f38;
          goto LAB_00d79330;
        }
        *piVar13 = 4;
        param_2[0x1b] = 0;
        param_2[0x34] = param_2[0x34] + 1;
        local_90 = pppppppuVar17;
        local_8c = pppppppuVar21;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        pppppppuVar15 = local_7c;
        unaff_r10 = local_80;
        pppppppuVar25 = local_84;
        pppppppuVar20 = local_88;
        if (pppppppuVar17 == (uint *******)&SUB_00000004 && pppppppuVar21 == (uint *******)0x0) {
          FUN_00d791a0(piVar13);
          *piVar13 = 5;
          param_2[0x1b] = 0;
          unaff_r10 = pppppppuVar8;
          break;
        }
        local_218 = local_84;
        FUN_01bed4e2(&local_158,param_2 + 0x20,0x50);
        if (((uint)pppppppuVar17 & 7) != 3) {
          if (pppppppuVar17 == (uint *******)&DAT_00000005) goto LAB_00d79bd8;
          iVar1 = param_2[0x39];
          if (iVar1 == 0) {
            pppppppuVar8 = (uint *******)&local_158;
LAB_00d79cb0:
            FUN_01bed4e2(auStack_1a8,pppppppuVar8,0x50);
            goto LAB_00d79cbc;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar1 = param_2[0x39];
          }
          param_2[3] = (int)pppppppuVar25;
          *param_2 = (int)pppppppuVar17;
          param_2[1] = (int)pppppppuVar21;
          param_2[2] = (int)pppppppuVar20;
          param_2[4] = (int)unaff_r10;
          param_2[5] = (int)pppppppuVar15;
          FUN_01bed4e2(param_2 + 6,&local_158,0x50);
          FUN_01283fd8(&local_f0,piVar24,iVar1);
          pppppppuVar17 = local_e4;
          if (((uint)local_e4 & 1) != 0) {
            local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
            local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
            local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
            FUN_01283524(&local_1f0,&local_c4);
            local_b8 = (uint *****)((uint)pppppppuVar17 >> 5);
            if (local_1e8 < (uint *******)((uint)pppppppuVar17 >> 5)) {
              local_88 = (uint *******)&local_b4;
              local_b4 = local_1e8;
              local_84 = (uint *******)&LAB_01a6a304;
              local_8c = (uint *******)&LAB_01a6a304;
              local_90 = (uint *******)&local_b8;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
            }
            goto LAB_00d79c8c;
          }
          goto LAB_00d79350;
        }
        iVar5 = param_2[0x36];
        pppppppuVar17 = (uint *******)param_2[0x39];
        iVar1 = param_2[0x37];
        unaff_r8 = pppppppuVar17;
        if ((uint)(param_2[0x3a] - (int)pppppppuVar17) < 5) {
          FUN_01283c9c(piVar24,5);
          unaff_r8 = (uint *******)param_2[0x39];
          if ((uint)(param_2[0x3a] - (int)unaff_r8) < 5) {
            local_1f0 = (uint *******)0x5;
            local_1ec = (uint *******)(param_2[0x3a] - (int)unaff_r8);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f0);
          }
        }
        param_2[0x39] = (int)unaff_r8 + 5;
        unaff_r5 = pppppppuVar20;
        if (unaff_r10 != (uint *******)0x0) {
          iVar6 = 0;
          pppppppuVar15 = pppppppuVar25 + 0x10;
          pppppppuVar21 = unaff_r10;
          do {
            iVar26 = 0;
            if (pppppppuVar15[0xc] != (uint ******)0x0) {
              iVar26 = ((LZCOUNT((uint)pppppppuVar15[0xc] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar27 = 0;
            iVar22 = 0;
            if (((uint)pppppppuVar15[-0x10] & 1) != 0) {
              ppppppuVar16 = pppppppuVar15[-0xd];
              if (pppppppuVar15[-0xe] == (uint ******)0x0 && ppppppuVar16 == (uint ******)0x0) {
                iVar22 = 2;
              }
              else {
                uVar2 = LZCOUNT((uint)pppppppuVar15[-0xe] | 1) | 0x20;
                if (ppppppuVar16 != (uint ******)0x0) {
                  uVar2 = LZCOUNT(ppppppuVar16);
                }
                iVar22 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            if (((uint)pppppppuVar15[-0xc] & 1) != 0) {
              ppppppuVar16 = pppppppuVar15[-9];
              if (pppppppuVar15[-10] == (uint ******)0x0 && ppppppuVar16 == (uint ******)0x0) {
                iVar27 = 2;
              }
              else {
                uVar2 = LZCOUNT((uint)pppppppuVar15[-10] | 1) | 0x20;
                if (ppppppuVar16 != (uint ******)0x0) {
                  uVar2 = LZCOUNT(ppppppuVar16);
                }
                iVar27 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            if (pppppppuVar15[0xd] == (uint ******)0x0) {
              iVar19 = 0;
            }
            else {
              iVar19 = ((LZCOUNT((uint)pppppppuVar15[0xd] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar14 = 2;
            iVar6 = iVar6 + iVar26 + iVar22 + iVar27 + iVar19 + 1;
            iVar26 = 2;
            if (*(double *)(pppppppuVar15 + -6) != 0.0) {
              iVar14 = 0xb;
            }
            if (((uint)pppppppuVar15[-8] & 1) != 0) {
              iVar6 = iVar6 + iVar14;
            }
            if (*(double *)(pppppppuVar15 + -2) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)pppppppuVar15[-4] & 1) != 0) {
              iVar6 = iVar6 + iVar26;
            }
            iVar26 = 2;
            if (*(double *)(pppppppuVar15 + 2) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)*pppppppuVar15 & 1) != 0) {
              iVar6 = iVar6 + iVar26;
            }
            iVar26 = 2;
            if (*(double *)(pppppppuVar15 + 6) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)pppppppuVar15[4] & 1) != 0) {
              iVar6 = iVar6 + iVar26;
            }
            iVar26 = 2;
            if (*(double *)(pppppppuVar15 + 10) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)pppppppuVar15[8] & 1) != 0) {
              iVar6 = iVar6 + iVar26;
            }
            pppppppuVar15 = pppppppuVar15 + 0x1e;
            pppppppuVar21 = (uint *******)((int)pppppppuVar21 + -1);
          } while (pppppppuVar21 != (uint *******)0x0);
          if ((uint ******)(0x7ffffffa - (int)unaff_r8) < (uint ******)(iVar6 + (int)unaff_r10)) {
            local_1f0 = (uint *******)(iVar6 + (int)unaff_r10);
            local_1ec = (uint *******)(0x7ffffffa - (int)unaff_r8);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_1f0,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          iVar6 = (int)unaff_r10 * 0x1e;
          pppppppuVar21 = pppppppuVar25;
          do {
            local_1f0 = (uint *******)CONCAT31(local_1f0._1_3_,10);
            FUN_01284394(piVar24,&local_1f0,1);
            ppppppuVar16 = pppppppuVar21[0x1c];
            iVar22 = 0;
            iVar26 = 0;
            if (ppppppuVar16 != (uint ******)0x0) {
              iVar26 = ((LZCOUNT((uint)ppppppuVar16 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            local_1f4 = (uint *******)*pppppppuVar21;
            if (((uint)local_1f4 & 1) != 0) {
              ppppppuVar9 = pppppppuVar21[2];
              ppppppuVar7 = pppppppuVar21[3];
              if (ppppppuVar9 == (uint ******)0x0 && ppppppuVar7 == (uint ******)0x0) {
                iVar22 = 2;
              }
              else {
                uVar2 = LZCOUNT((uint)ppppppuVar9 | 1) | 0x20;
                if (ppppppuVar7 != (uint ******)0x0) {
                  uVar2 = LZCOUNT(ppppppuVar7);
                }
                iVar22 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            local_1f8 = (uint *******)pppppppuVar21[4];
            iVar27 = 0;
            iVar19 = 0;
            if (((uint)local_1f8 & 1) != 0) {
              ppppppuVar7 = pppppppuVar21[7];
              if (pppppppuVar21[6] == (uint ******)0x0 && ppppppuVar7 == (uint ******)0x0) {
                iVar19 = 2;
              }
              else {
                uVar2 = LZCOUNT((uint)pppppppuVar21[6] | 1) | 0x20;
                if (ppppppuVar7 != (uint ******)0x0) {
                  uVar2 = LZCOUNT(ppppppuVar7);
                }
                iVar19 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            ppppppuVar7 = pppppppuVar21[0x1d];
            if (ppppppuVar7 != (uint ******)0x0) {
              iVar27 = ((LZCOUNT((uint)ppppppuVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            unaff_r5 = pppppppuVar21 + 0x1e;
            unaff_r8 = (uint *******)(iVar22 + iVar26 + iVar19 + iVar27);
            ppppppuVar18 = pppppppuVar21[8];
            iVar26 = 2;
            ppppppuVar12 = pppppppuVar21[0xc];
            unaff_r10 = (uint *******)&DAT_0000000a;
            ppppppuVar10 = pppppppuVar21[0x10];
            ppppppuVar9 = pppppppuVar21[0x14];
            if (*(double *)(pppppppuVar21 + 10) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)ppppppuVar18 & 1) != 0) {
              unaff_r8 = (uint *******)((int)unaff_r8 + iVar26);
            }
            iVar26 = 2;
            if (*(double *)(pppppppuVar21 + 0xe) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)ppppppuVar12 & 1) != 0) {
              unaff_r8 = (uint *******)((int)unaff_r8 + iVar26);
            }
            iVar26 = 2;
            if (*(double *)(pppppppuVar21 + 0x12) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)ppppppuVar10 & 1) != 0) {
              unaff_r8 = (uint *******)((int)unaff_r8 + iVar26);
            }
            iVar26 = 2;
            ppppppuVar11 = pppppppuVar21[0x18];
            if (*(double *)(pppppppuVar21 + 0x16) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)ppppppuVar9 & 1) != 0) {
              unaff_r8 = (uint *******)((int)unaff_r8 + iVar26);
            }
            iVar26 = 2;
            if (*(double *)(pppppppuVar21 + 0x1a) != 0.0) {
              iVar26 = 0xb;
            }
            if (((uint)ppppppuVar11 & 1) != 0) {
              unaff_r8 = (uint *******)((int)unaff_r8 + iVar26);
            }
            do {
              if (unaff_r8 < &DAT_00000080) {
                local_1f0 = (uint *******)CONCAT31(local_1f0._1_3_,(char)unaff_r8);
                FUN_01284394(piVar24,&local_1f0,1);
                uVar3 = extraout_r1_00;
                break;
              }
              local_1f0 = (uint *******)(CONCAT31(local_1f0._1_3_,(char)unaff_r8) | 0x80);
              FUN_01284394(piVar24,&local_1f0,1);
              unaff_r8 = (uint *******)((uint)unaff_r8 >> 7);
              unaff_r10 = (uint *******)((int)unaff_r10 + -1);
              uVar3 = extraout_r1;
            } while (unaff_r10 != (uint *******)0x0);
            if (ppppppuVar16 != (uint ******)0x0) {
              FUN_00efc9fc(1,pppppppuVar21[0x1c],piVar24);
              uVar3 = extraout_r1_01;
            }
            if (((uint)local_1f4 & 1) != 0) {
              FUN_00efe248(2,uVar3,pppppppuVar21[2],pppppppuVar21[3],piVar24);
              uVar3 = extraout_r1_02;
            }
            if (((uint)local_1f8 & 1) != 0) {
              FUN_00efe248(3,uVar3,pppppppuVar21[6],pppppppuVar21[7],piVar24);
            }
            if (ppppppuVar7 != (uint ******)0x0) {
              FUN_00efc9fc(4,pppppppuVar21[0x1d],piVar24);
            }
            if (((uint)ppppppuVar18 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(pppppppuVar21 + 10),5,piVar24);
            }
            if (((uint)ppppppuVar12 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(pppppppuVar21 + 0xe),6,piVar24);
            }
            if (((uint)ppppppuVar10 & 1) != 0) {
              FUN_00efe1c0((int)*(undefined8 *)(pppppppuVar21 + 0x12),7,piVar24);
            }
            if (((uint)ppppppuVar9 & 1) != 0) {
              FUN_00efdf5c((int)*(undefined8 *)(pppppppuVar21 + 0x16),8,piVar24);
            }
            if (((uint)ppppppuVar11 & 1) != 0) {
              FUN_00efdfe4((int)*(undefined8 *)(pppppppuVar21 + 0x1a),9,piVar24);
            }
            pppppppuVar21 = unaff_r5;
          } while (unaff_r5 != pppppppuVar25 + iVar6);
        }
        FUN_0132b958(pppppppuVar20,pppppppuVar25,8,0x78);
        pppppppuVar21 = (uint *******)param_2[0x39];
        if (pppppppuVar21 < pppppppuVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppppppuVar17,pppppppuVar21,pppppppuVar21,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,iVar5,iVar1,*piVar24 + (int)pppppppuVar17,
                     (int)pppppppuVar21 - (int)pppppppuVar17);
        if (local_90 != (uint *******)&DAT_00000003 || local_8c != (uint *******)0x0) {
          local_218 = local_84;
          pppppppuVar8 = (uint *******)&local_78;
          pppppppuVar15 = local_7c;
          pppppppuVar17 = local_90;
          pppppppuVar20 = local_88;
          pppppppuVar21 = local_8c;
          unaff_r10 = local_80;
          goto LAB_00d79cb0;
        }
        if (uVar4 <= (uint)param_2[0x39]) {
          FUN_01283fd8(&local_f0,piVar24);
          pppppppuVar17 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d79350;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (uint *****)((uint)pppppppuVar17 >> 5);
          if (local_1e8 < (uint *******)((uint)pppppppuVar17 >> 5)) {
            local_88 = (uint *******)&local_b4;
            local_b4 = local_1e8;
            local_84 = (uint *******)&LAB_01a6a304;
            local_8c = (uint *******)&LAB_01a6a304;
            local_90 = (uint *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
LAB_00d79c8c:
          unaff_r10 = (uint *******)((int)local_1e8 - (int)local_b8);
          local_218 = (uint *******)((int)local_1ec + (int)local_b8);
          pppppppuVar15 = local_1e4;
          pppppppuVar20 = local_1f0;
          goto LAB_00d79aa0;
        }
        pppppppuVar17 = (uint *******)*piVar13;
        pppppppuVar21 = (uint *******)param_2[0x1b];
        pppppppuVar8 = unaff_r10;
      } while (pppppppuVar17 != (uint *******)&DAT_00000005 || pppppppuVar21 != (uint *******)0x0);
    }
    if (param_2[0x39] == 0) {
      pppppppuVar21 = (uint *******)0x0;
      pppppppuVar17 = (uint *******)&SUB_00000004;
      pppppppuVar15 = unaff_r5;
      pppppppuVar20 = unaff_r8;
    }
    else {
LAB_00d79330:
      FUN_01283fd8(&local_f0,piVar24);
      pppppppuVar17 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d79350:
        pppppppuVar15 = local_e4;
        pppppppuVar20 = (uint *******)&DAT_01d2e520;
        unaff_r10 = local_ec;
        local_218 = local_f0;
      }
      else {
        local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
        local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
        local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
        FUN_01283524(&local_1f0,&local_c4);
        local_b8 = (uint *****)((uint)pppppppuVar17 >> 5);
        if (local_1e8 < (uint *******)((uint)pppppppuVar17 >> 5)) {
          local_88 = (uint *******)&local_b4;
          local_b4 = local_1e8;
          local_84 = (uint *******)&LAB_01a6a304;
          local_8c = (uint *******)&LAB_01a6a304;
          local_90 = (uint *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
        unaff_r10 = (uint *******)((int)local_1e8 - (int)local_b8);
        local_218 = (uint *******)((int)local_1ec + (int)local_b8);
        pppppppuVar15 = local_1e4;
        pppppppuVar20 = local_1f0;
      }
LAB_00d79aa0:
      pppppppuVar21 = (uint *******)0x0;
      pppppppuVar17 = (uint *******)&DAT_00000003;
    }
LAB_00d79cbc:
    pppppppuVar8 = unaff_r10;
    if (pppppppuVar17 == (uint *******)&SUB_00000004 && pppppppuVar21 == (uint *******)0x0) {
      pppppppuVar25 = (uint *******)&local_90;
      pppppppuVar23 = (uint *******)0xd79d04;
      FUN_01a737fc(pppppppuVar25,param_2 + 0x42);
      pppppppuVar15 = pppppppuVar20;
      if (local_90 != (uint *******)&SUB_00000004 || local_8c != (uint *******)0x0) {
        if (local_90 != (uint *******)&DAT_00000003 || local_8c != (uint *******)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_1f4 = local_80;
        local_1f8 = local_74;
        local_158 = local_70;
        local_154 = pppppppuStack_6c;
        local_150 = pppppppuStack_68;
        local_14c = pppppppuStack_64;
        local_148 = pppppppuStack_60;
        local_144 = local_5c;
        local_140 = pppppppuStack_58;
        local_13c = pppppppuStack_54;
        uStack_138 = uStack_50;
        uStack_134 = uStack_4c;
        pppppppuVar15 = local_7c;
        pppppppuVar8 = local_78;
        pppppppuVar25 = local_88;
        pppppppuVar23 = local_84;
      }
      local_1f0 = local_158;
      local_1ec = local_154;
      local_1e8 = local_150;
      local_1e4 = local_14c;
      pppppppuStack_1e0 = local_148;
      local_1dc = local_144;
      pppppppuStack_1d8 = local_140;
      pppppppuStack_1d4 = local_13c;
      uStack_1d0 = uStack_138;
      uStack_1cc = uStack_134;
      local_1c8 = local_b0;
      uStack_1c4 = uStack_ac;
      uStack_1c0 = uStack_a8;
      uStack_1bc = uStack_a4;
      local_1b8 = local_a0;
      uStack_1b4 = uStack_9c;
      uStack_1b0 = uStack_98;
      uStack_1ac = uStack_94;
      pppppppuVar17 = local_90;
      pppppppuVar21 = local_8c;
LAB_00d79f14:
      if (pppppppuVar17 != (uint *******)&DAT_00000003 || pppppppuVar21 != (uint *******)0x0) {
        if (pppppppuVar17 != (uint *******)&SUB_00000004 || pppppppuVar21 != (uint *******)0x0) {
          if (pppppppuVar17 != (uint *******)&DAT_00000005 || pppppppuVar21 != (uint *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f0,0x48);
            local_74 = local_1f8;
            local_80 = local_1f4;
            local_90 = pppppppuVar17;
            local_8c = pppppppuVar21;
            local_88 = pppppppuVar25;
            local_84 = pppppppuVar23;
            local_7c = pppppppuVar15;
            local_78 = pppppppuVar8;
            uVar3 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d79f38;
        }
        uVar3 = 4;
        goto LAB_00d79f4c;
      }
    }
    else {
      if (pppppppuVar17 != (uint *******)&DAT_00000003 || pppppppuVar21 != (uint *******)0x0) {
        local_14c = local_218;
        local_158 = pppppppuVar17;
        local_154 = pppppppuVar21;
        local_150 = pppppppuVar20;
        local_148 = unaff_r10;
        local_144 = pppppppuVar15;
        FUN_01bed4e2(&local_140,auStack_1a8,0x50);
        pppppppuVar8 = local_140;
        pppppppuVar23 = local_14c;
        pppppppuVar25 = local_150;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          pppppppuVar21 = local_8c;
          pppppppuVar17 = local_90;
          local_1f8 = local_74;
          local_1f4 = local_80;
          local_f0 = local_70;
          local_ec = pppppppuStack_6c;
          local_e8 = pppppppuStack_68;
          local_e4 = pppppppuStack_64;
          pppppppuStack_e0 = pppppppuStack_60;
          local_dc = local_5c;
          pppppppuStack_d8 = pppppppuStack_58;
          pppppppuStack_d4 = pppppppuStack_54;
          uStack_d0 = uStack_50;
          uStack_cc = uStack_4c;
          if (local_90 == (uint *******)&DAT_00000003 && local_8c == (uint *******)0x0) {
            local_1f0 = local_70;
            local_1ec = pppppppuStack_6c;
            local_1e8 = pppppppuStack_68;
            local_1e4 = pppppppuStack_64;
            pppppppuStack_1e0 = pppppppuStack_60;
            local_1dc = local_5c;
            pppppppuStack_1d8 = pppppppuStack_58;
            pppppppuStack_1d4 = pppppppuStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            FUN_005f6588(&local_158);
            pppppppuVar21 = (uint *******)0x0;
            pppppppuVar17 = (uint *******)&DAT_00000003;
          }
          else {
            local_1c8 = local_48;
            uStack_1c4 = uStack_44;
            uStack_1c0 = uStack_40;
            uStack_1bc = uStack_3c;
            local_1b8 = local_38;
            uStack_1b4 = uStack_34;
            uStack_1b0 = uStack_30;
            uStack_1ac = uStack_2c;
            local_1f0 = local_70;
            local_1ec = pppppppuStack_6c;
            local_1e8 = pppppppuStack_68;
            local_1e4 = pppppppuStack_64;
            pppppppuStack_1e0 = pppppppuStack_60;
            local_1dc = local_5c;
            pppppppuStack_1d8 = pppppppuStack_58;
            pppppppuStack_1d4 = pppppppuStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            FUN_005f6588(&local_158);
          }
          pppppppuVar8 = local_78;
          pppppppuVar15 = local_7c;
          pppppppuVar23 = local_84;
          pppppppuVar25 = local_88;
        }
        else {
          local_1f8 = local_13c;
          FUN_01bed4e2(&local_1f0,auStack_1a0,0x48);
          local_1f4 = unaff_r10;
        }
        goto LAB_00d79f14;
      }
      pppppppuVar23 = (uint *******)0x0;
      pppppppuVar25 = (uint *******)&DAT_00000003;
      local_1f8 = pppppppuVar15;
      pppppppuVar15 = local_218;
      local_1f4 = pppppppuVar20;
    }
    param_1[8] = local_1f0;
    param_1[9] = local_1ec;
    param_1[10] = local_1e8;
    param_1[0xb] = local_1e4;
    param_1[0xc] = pppppppuStack_1e0;
    param_1[0xd] = local_1dc;
    param_1[0xe] = pppppppuStack_1d8;
    param_1[0xf] = pppppppuStack_1d4;
    param_1[0x10] = uStack_1d0;
    param_1[0x11] = uStack_1cc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = pppppppuVar25;
    param_1[3] = pppppppuVar23;
    param_1[4] = local_1f4;
    param_1[5] = pppppppuVar15;
    param_1[6] = pppppppuVar8;
    param_1[7] = local_1f8;
  }
  else {
    local_218 = (uint *******)param_2[3];
    pppppppuVar20 = (uint *******)param_2[2];
    unaff_r10 = (uint *******)param_2[4];
    pppppppuVar15 = (uint *******)param_2[5];
    FUN_01bed4e2(auStack_1a8,param_2 + 6,0x50);
    if (pppppppuVar17 != (uint *******)&DAT_00000005 || pppppppuVar21 != (uint *******)0x0)
    goto LAB_00d79cbc;
LAB_00d79f38:
    uVar3 = 5;
LAB_00d79f4c:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

