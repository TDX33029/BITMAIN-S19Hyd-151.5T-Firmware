// FUN_00d90348 @ 00d90348 size=5260 calls_out=26 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d90348(undefined4 *param_1,int *param_2,int *param_3)

{
  int ****ppppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  int ****ppppiVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  int ***pppiVar11;
  int iVar12;
  int ***pppiVar13;
  int ***pppiVar14;
  int ***pppiVar15;
  int ***pppiVar16;
  int ***pppiVar17;
  int ***pppiVar18;
  int ***pppiVar19;
  undefined4 uVar20;
  uint uVar21;
  int ***pppiVar22;
  int ***pppiVar23;
  int ****ppppiVar24;
  int iVar25;
  int iVar26;
  int ***pppiVar27;
  uint uVar28;
  int iVar29;
  int ***pppiVar30;
  int iVar31;
  int ****ppppiVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int ***pppiVar38;
  int ****ppppiVar39;
  int iVar40;
  uint uVar41;
  int ****unaff_r8;
  int ****ppppiVar42;
  int ****ppppiVar43;
  int ****unaff_r9;
  int ****ppppiVar44;
  int ****ppppiVar45;
  int ***pppiVar46;
  int ****ppppiVar47;
  int ****ppppiVar48;
  int iVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  int ****local_21c;
  int ****local_218;
  int ****local_214;
  int ****local_210;
  int ****local_20c;
  int ****local_208;
  int ****local_204;
  int ****ppppiStack_200;
  int ****local_1fc;
  int ****ppppiStack_1f8;
  int ****ppppiStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [72];
  int ****local_178;
  int ****ppppiStack_174;
  int ****local_170;
  int ****ppppiStack_16c;
  int ****local_168;
  int ****local_164;
  int ****local_160;
  int ****local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int ****local_110;
  int ****local_10c;
  int ****local_108;
  int ****local_104;
  int ****ppppiStack_100;
  int ****local_fc;
  int ****ppppiStack_f8;
  int ****ppppiStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int ****local_e8;
  int ****local_e4;
  int ****local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int **local_d0;
  int ****local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int ****local_a8;
  int ****local_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int ****local_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****ppppiStack_84;
  int ****ppppiStack_80;
  int ****ppppiStack_7c;
  int ****ppppiStack_78;
  int ****local_74;
  int ****ppppiStack_70;
  int ****ppppiStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  ppppiVar45 = (int ****)*param_2;
  ppppiVar32 = (int ****)param_2[1];
  uVar21 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (ppppiVar45 == (int ****)&DAT_00000003 && ppppiVar32 == (int ****)0x0) {
    ppppiVar43 = (int ****)(param_2 + 0x1a);
    ppppiVar47 = (int ****)(param_2 + 0x38);
    ppppiVar45 = (int ****)*ppppiVar43;
    ppppiVar32 = (int ****)param_2[0x1b];
    if (ppppiVar45 != (int ****)&DAT_00000005 || ppppiVar32 != (int ****)0x0) {
      ppppiVar42 = unaff_r8;
      ppppiVar44 = unaff_r9;
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar31 = *(int *)*param_3;
          iVar36 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar31 + 8))(iVar36);
LAB_00d91308:
          if (param_2[0x39] == 0) goto LAB_00d91660;
          goto LAB_00d903b8;
        }
        *ppppiVar43 = (int ***)0x4;
        param_2[0x1b] = 0;
        param_2[0x34] = param_2[0x34] + 1;
        local_a8 = ppppiVar45;
        local_a4 = ppppiVar32;
        FUN_01bed4e2(&local_a0,param_2 + 0x1c,0x60);
        ppppiVar48 = local_94;
        ppppiVar39 = local_98;
        unaff_r9 = local_9c;
        unaff_r8 = local_a0;
        if (ppppiVar45 == (int ****)&SUB_00000004 && ppppiVar32 == (int ****)0x0) {
          FUN_00d90220(ppppiVar43);
          *ppppiVar43 = (int ***)0x5;
          param_2[0x1b] = 0;
          unaff_r8 = ppppiVar42;
          unaff_r9 = ppppiVar44;
          break;
        }
        FUN_01bed4e2(&local_178,param_2 + 0x20,0x50);
        if (((uint)ppppiVar45 & 7) != 3) {
          local_214 = ppppiVar48;
          if (ppppiVar45 == (int ****)&DAT_00000005) goto LAB_00d91308;
          iVar31 = param_2[0x39];
          if (iVar31 == 0) {
            FUN_01bed4e2(auStack_1c8,&local_178,0x50);
            goto LAB_00d91410;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar31 = param_2[0x39];
          }
          param_2[5] = (int)ppppiVar48;
          *param_2 = (int)ppppiVar45;
          param_2[1] = (int)ppppiVar32;
          param_2[2] = (int)unaff_r8;
          param_2[3] = (int)unaff_r9;
          param_2[4] = (int)ppppiVar39;
          FUN_01bed4e2(param_2 + 6,&local_178,0x50);
          FUN_01283fd8(&local_110,ppppiVar47,iVar31);
          ppppiVar45 = local_104;
          if (((uint)local_104 & 1) == 0) goto LAB_00d903d8;
          local_d4 = (int)local_10c + ((uint)local_104 >> 5);
          local_d8 = (int)local_110 - ((uint)local_104 >> 5);
          local_dc = (int)local_108 + ((uint)local_104 >> 5);
          FUN_01283524(&local_210,&local_dc);
          local_d0 = (int **)((uint)ppppiVar45 >> 5);
          if (local_208 < (int ****)((uint)ppppiVar45 >> 5)) {
            local_a0 = (int ****)&local_cc;
            local_cc = local_208;
            local_9c = (int ****)&LAB_01a6a304;
            local_a4 = (int ****)&LAB_01a6a304;
            local_a8 = (int ****)&local_d0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_a8,&DAT_01d2e534);
          }
          goto LAB_00d911b8;
        }
        local_e8 = unaff_r8;
        uVar33 = param_2[0x39];
        iVar36 = param_2[0x36];
        iVar31 = param_2[0x37];
        uVar28 = uVar33;
        if (param_2[0x3a] - uVar33 < 5) {
          FUN_01283c9c(ppppiVar47,5);
          uVar28 = param_2[0x39];
          local_20c = (int ****)(param_2[0x3a] - uVar28);
          if (local_20c < 5) {
            local_e0 = ppppiVar39;
            local_e4 = unaff_r9;
            local_210 = (int ****)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_210);
          }
        }
        param_2[0x39] = uVar28 + 5;
        local_208 = ppppiVar39;
        local_20c = unaff_r9;
        local_210 = unaff_r8;
        if (ppppiVar39 != (int ****)0x0) {
          ppppiVar32 = unaff_r9 + 0x36;
          iVar34 = 0;
          ppppiVar45 = ppppiVar39;
          do {
            pppiVar11 = ppppiVar32[0x28];
            iVar37 = 0;
            if (pppiVar11 != (int ***)0x0) {
              iVar37 = (int)pppiVar11 + ((LZCOUNT((uint)pppiVar11 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1
              ;
            }
            iVar40 = 0;
            iVar12 = 0;
            if (ppppiVar32[0x24] == (int ***)0x1) {
              if (ppppiVar32[0x25] == (int ***)0x0) {
                iVar12 = 2;
              }
              else {
                iVar12 = ((LZCOUNT((uint)ppppiVar32[0x25] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
              }
            }
            ppppiVar24 = ppppiVar32 + -0x36;
            ppppiVar48 = ppppiVar32 + -0x32;
            ppppiVar42 = ppppiVar32 + -0x30;
            ppppiVar44 = ppppiVar32 + -0x34;
            if (ppppiVar32[-0x1a] != (int ***)0x2 || ppppiVar32[-0x19] != (int ***)0x0) {
              iVar25 = 2;
              if (ppppiVar32[-0x16] == (int ***)0x1) {
                iVar25 = ((LZCOUNT((uint)ppppiVar32[-0x15] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
              }
              pppiVar11 = ppppiVar32[-0x14];
              if (pppiVar11 == (int ***)0x0) {
                iVar40 = 0;
              }
              else {
                uVar41 = LZCOUNT((uint)pppiVar11 | 1) | 0x20;
                if ((int)pppiVar11 < 0) {
                  uVar41 = LZCOUNT((int)pppiVar11 >> 0x1f);
                }
                iVar40 = ((uVar41 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              iVar40 = iVar40 + iVar25;
              iVar25 = 2;
              if (*(double *)(ppppiVar32 + -0x18) != 0.0) {
                iVar25 = 0xb;
              }
              if (((uint)ppppiVar32[-0x1a] & 1) != 0) {
                iVar40 = iVar40 + iVar25;
              }
            }
            ppppiVar1 = ppppiVar32 + -0x2e;
            iVar25 = 0;
            ppppiVar6 = ppppiVar32 + -0x2c;
            local_214 = (int ****)0x0;
            if (ppppiVar32[-0x12] != (int ***)0x2 || ppppiVar32[-0x11] != (int ***)0x0) {
              iVar49 = 0;
              if (ppppiVar32[-10] != (int ***)0x2 || ppppiVar32[-9] != (int ***)0x0) {
                iVar49 = 4;
                if (*(double *)(ppppiVar32 + -8) != 0.0) {
                  iVar49 = 0xd;
                }
                iVar26 = 2;
                if (((uint)ppppiVar32[-10] & 1) == 0) {
                  iVar49 = 2;
                }
                if (*(double *)(ppppiVar32 + -4) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[-6] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                iVar26 = 2;
                if (*(double *)ppppiVar32 != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[-2] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                iVar26 = 2;
                if (*(double *)(ppppiVar32 + 4) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[2] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                iVar26 = 2;
                iVar35 = 2;
                if (*(double *)(ppppiVar32 + 8) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[6] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                if (*(double *)(ppppiVar32 + 0xc) != 0.0) {
                  iVar35 = 0xb;
                }
                if (((uint)ppppiVar32[10] & 1) != 0) {
                  iVar49 = iVar49 + iVar35;
                }
                iVar26 = 2;
                if (*(double *)(ppppiVar32 + 0x10) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[0xe] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                iVar26 = 2;
                if (*(double *)(ppppiVar32 + 0x14) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[0x12] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                iVar26 = 2;
                if (*(double *)(ppppiVar32 + 0x18) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[0x16] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
                iVar26 = 2;
                if (*(double *)(ppppiVar32 + 0x1c) != 0.0) {
                  iVar26 = 0xb;
                }
                if (((uint)ppppiVar32[0x1a] & 1) != 0) {
                  iVar49 = iVar49 + iVar26;
                }
              }
              if (ppppiVar32[0x23] != (int ***)0x0) {
                iVar25 = ((LZCOUNT((uint)ppppiVar32[0x23] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              pppiVar11 = ppppiVar32[0x1f];
              iVar35 = 0;
              iVar26 = 0;
              if (ppppiVar32[0x1e] != (int ***)0x0 || pppiVar11 != (int ***)0x0) {
                uVar41 = LZCOUNT((uint)ppppiVar32[0x1e] | 1) | 0x20;
                if (pppiVar11 != (int ***)0x0) {
                  uVar41 = LZCOUNT(pppiVar11);
                }
                iVar35 = ((uVar41 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              pppiVar11 = ppppiVar32[0x22];
              if (pppiVar11 != (int ***)0x0) {
                iVar26 = (int)pppiVar11 +
                         ((LZCOUNT((uint)pppiVar11 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
              }
              iVar29 = 2;
              if (*(double *)(ppppiVar32 + -0x10) != 0.0) {
                iVar29 = 0xb;
              }
              if (((uint)ppppiVar32[-0x12] & 1) != 0) {
                iVar49 = iVar49 + iVar29;
              }
              iVar29 = 2;
              if (*(double *)(ppppiVar32 + -0xc) != 0.0) {
                iVar29 = 0xb;
              }
              if (((uint)ppppiVar32[-0xe] & 1) != 0) {
                iVar49 = iVar49 + iVar29;
              }
              uVar41 = iVar49 + iVar25 + iVar35 + iVar26;
              iVar25 = uVar41 + ((LZCOUNT(uVar41 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (ppppiVar32[0x29] != (int ***)0x80000000) {
              local_214 = (int ****)
                          ((int)ppppiVar32[0x2b] +
                          ((LZCOUNT((uint)ppppiVar32[0x2b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
            }
            ppppiVar2 = ppppiVar32 + -0x2a;
            iVar26 = 0;
            iVar49 = 0;
            ppppiVar3 = ppppiVar32 + -0x26;
            ppppiVar7 = ppppiVar32 + -0x24;
            ppppiVar8 = ppppiVar32 + -0x28;
            if (ppppiVar32[0x2c] != (int ***)0x80000000) {
              iVar49 = (int)ppppiVar32[0x2e] +
                       ((LZCOUNT((uint)ppppiVar32[0x2e] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (ppppiVar32[0x2f] != (int ***)0x80000000) {
              iVar26 = (int)ppppiVar32[0x31] +
                       ((LZCOUNT((uint)ppppiVar32[0x31] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar35 = 0;
            if (ppppiVar32[0x32] != (int ***)0x80000000) {
              iVar35 = (int)ppppiVar32[0x34] +
                       ((LZCOUNT((uint)ppppiVar32[0x34] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar29 = 2;
            iVar12 = iVar37 + (uint)*(byte *)(ppppiVar32 + 0x35) * 2 + iVar12;
            ppppiVar4 = ppppiVar32 + -0x22;
            ppppiVar5 = ppppiVar32 + -0x1e;
            ppppiVar9 = ppppiVar32 + -0x20;
            ppppiVar10 = ppppiVar32 + -0x1c;
            ppppiVar32 = ppppiVar32 + 0x6c;
            if (*(double *)ppppiVar44 != 0.0) {
              iVar29 = 0xb;
            }
            if (((uint)*ppppiVar24 & 1) != 0) {
              iVar12 = iVar12 + iVar29;
            }
            iVar37 = 2;
            if (*(double *)ppppiVar42 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)*ppppiVar48 & 1) != 0) {
              iVar12 = iVar12 + iVar37;
            }
            iVar37 = 2;
            iVar12 = iVar12 + iVar40;
            if (*(double *)ppppiVar6 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)*ppppiVar1 & 1) != 0) {
              iVar12 = iVar12 + iVar37;
            }
            iVar37 = 2;
            iVar12 = iVar12 + iVar25 + (int)local_214;
            if (*(double *)ppppiVar8 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)*ppppiVar2 & 1) != 0) {
              iVar12 = iVar12 + iVar37;
            }
            iVar37 = 2;
            if (*(double *)ppppiVar7 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)*ppppiVar3 & 1) != 0) {
              iVar12 = iVar12 + iVar37;
            }
            uVar41 = iVar12 + iVar49 + iVar26 + iVar35;
            iVar37 = 2;
            if (*(double *)ppppiVar9 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)*ppppiVar4 & 1) != 0) {
              uVar41 = uVar41 + iVar37;
            }
            iVar37 = 3;
            if (*(double *)ppppiVar10 != 0.0) {
              iVar37 = 0xc;
            }
            if (((uint)*ppppiVar5 & 1) != 0) {
              uVar41 = uVar41 + iVar37;
            }
            ppppiVar45 = (int ****)((int)ppppiVar45 + -1);
            iVar34 = uVar41 + iVar34 + ((LZCOUNT(uVar41 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          } while (ppppiVar45 != (int ****)0x0);
          if ((int ***)(0x7ffffffa - uVar28) < (int ***)(iVar34 + (int)ppppiVar39)) {
            local_110 = (int ****)(iVar34 + (int)ppppiVar39);
            local_10c = (int ****)(0x7ffffffa - uVar28);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_110,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          ppppiVar32 = unaff_r9 + (int)ppppiVar39 * 0x6c;
          ppppiVar45 = unaff_r9;
          do {
            local_110 = (int ****)CONCAT31(local_110._1_3_,10);
            FUN_01284394(ppppiVar47,&local_110,1);
            pppiVar11 = ppppiVar45[0x5e];
            iVar34 = 0;
            iVar37 = 0;
            if (pppiVar11 != (int ***)0x0) {
              iVar37 = (int)pppiVar11 + ((LZCOUNT((uint)pppiVar11 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1
              ;
            }
            pppiVar13 = ppppiVar45[0x5a];
            local_214 = (int ****)(uint)*(byte *)(ppppiVar45 + 0x6b);
            if (pppiVar13 == (int ***)0x1) {
              if (ppppiVar45[0x5b] == (int ***)0x0) {
                iVar34 = 2;
              }
              else {
                iVar34 = ((LZCOUNT((uint)ppppiVar45[0x5b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
              }
            }
            dVar50 = *(double *)(ppppiVar45 + 6);
            iVar40 = 0;
            dVar51 = *(double *)(ppppiVar45 + 2);
            pppiVar22 = ppppiVar45[0x1c];
            iVar12 = 0;
            local_21c = (int ****)ppppiVar45[4];
            uVar28 = (uint)pppiVar22 ^ 2;
            pppiVar14 = ppppiVar45[0x1d];
            local_218 = (int ****)*ppppiVar45;
            if (uVar28 != 0 || pppiVar14 != (int ***)0x0) {
              iVar25 = 2;
              if (ppppiVar45[0x20] == (int ***)0x1) {
                iVar25 = ((LZCOUNT((uint)ppppiVar45[0x21] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
              }
              pppiVar30 = ppppiVar45[0x22];
              if (pppiVar30 == (int ***)0x0) {
                iVar12 = 0;
              }
              else {
                uVar41 = LZCOUNT((uint)pppiVar30 | 1) | 0x20;
                if ((int)pppiVar30 < 0) {
                  uVar41 = LZCOUNT((int)pppiVar30 >> 0x1f);
                }
                iVar12 = ((uVar41 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              iVar12 = iVar12 + iVar25;
              iVar25 = 2;
              if (*(double *)(ppppiVar45 + 0x1e) != 0.0) {
                iVar25 = 0xb;
              }
              if (((uint)pppiVar22 & 1) != 0) {
                iVar12 = iVar12 + iVar25;
              }
            }
            dVar52 = *(double *)(ppppiVar45 + 10);
            ppppiVar39 = ppppiVar45 + 0x24;
            pppiVar30 = *ppppiVar39;
            pppiVar27 = ppppiVar45[0x25];
            pppiVar22 = ppppiVar45[8];
            if (((uint)pppiVar30 ^ 2) != 0 || pppiVar27 != (int ***)0x0) {
              uVar41 = FUN_00f01ff0(ppppiVar39);
              iVar40 = uVar41 + ((LZCOUNT(uVar41 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppiVar15 = ppppiVar45[0x5f];
            iVar49 = 0;
            iVar25 = 0;
            if (pppiVar15 != (int ***)0x80000000) {
              iVar25 = (int)ppppiVar45[0x61] +
                       ((LZCOUNT((uint)ppppiVar45[0x61] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppiVar16 = ppppiVar45[0xc];
            pppiVar38 = ppppiVar45[0x10];
            pppiVar17 = ppppiVar45[0x62];
            if (pppiVar17 != (int ***)0x80000000) {
              iVar49 = (int)ppppiVar45[100] +
                       ((LZCOUNT((uint)ppppiVar45[100] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppiVar18 = ppppiVar45[0x65];
            iVar26 = 0;
            iVar35 = 0;
            if (pppiVar18 != (int ***)0x80000000) {
              iVar35 = (int)ppppiVar45[0x67] +
                       ((LZCOUNT((uint)ppppiVar45[0x67] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppiVar19 = ppppiVar45[0x68];
            if (pppiVar19 != (int ***)0x80000000) {
              iVar26 = (int)ppppiVar45[0x6a] +
                       ((LZCOUNT((uint)ppppiVar45[0x6a] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            unaff_r9 = ppppiVar45 + 0x6c;
            unaff_r8 = (int ****)&DAT_0000000a;
            iVar34 = iVar37 + (int)local_214 * 2 + iVar34;
            iVar37 = 2;
            if (dVar51 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)local_218 & 1) != 0) {
              iVar34 = iVar34 + iVar37;
            }
            iVar37 = 2;
            if (dVar50 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)local_21c & 1) != 0) {
              iVar34 = iVar34 + iVar37;
            }
            iVar34 = iVar34 + iVar12;
            iVar37 = 2;
            pppiVar46 = ppppiVar45[0x14];
            if (dVar52 != 0.0) {
              iVar37 = 0xb;
            }
            if (((uint)pppiVar22 & 1) != 0) {
              iVar34 = iVar34 + iVar37;
            }
            iVar25 = iVar34 + iVar40 + iVar25;
            iVar34 = 2;
            if (*(double *)(ppppiVar45 + 0xe) != 0.0) {
              iVar34 = 0xb;
            }
            if (((uint)pppiVar16 & 1) != 0) {
              iVar25 = iVar25 + iVar34;
            }
            iVar34 = 2;
            if (*(double *)(ppppiVar45 + 0x12) != 0.0) {
              iVar34 = 0xb;
            }
            if (((uint)pppiVar38 & 1) != 0) {
              iVar25 = iVar25 + iVar34;
            }
            pppiVar23 = ppppiVar45[0x18];
            uVar41 = iVar25 + iVar49 + iVar35 + iVar26;
            iVar34 = 2;
            if (*(double *)(ppppiVar45 + 0x16) != 0.0) {
              iVar34 = 0xb;
            }
            if (((uint)pppiVar46 & 1) != 0) {
              uVar41 = uVar41 + iVar34;
            }
            iVar34 = 3;
            if (*(double *)(ppppiVar45 + 0x1a) != 0.0) {
              iVar34 = 0xc;
            }
            if (((uint)pppiVar23 & 1) != 0) {
              uVar41 = uVar41 + iVar34;
            }
            do {
              if (uVar41 < 0x80) {
                local_110 = (int ****)CONCAT31(local_110._1_3_,(char)uVar41);
                FUN_01284394(ppppiVar47,&local_110,1);
                break;
              }
              local_110 = (int ****)(CONCAT31(local_110._1_3_,(char)uVar41) | 0x80);
              FUN_01284394(ppppiVar47,&local_110,1);
              uVar41 = uVar41 >> 7;
              unaff_r8 = (int ****)((int)unaff_r8 + -1);
            } while (unaff_r8 != (int ****)0x0);
            if (pppiVar11 != (int ***)0x0) {
              FUN_01016f10(1,ppppiVar45[0x5d],ppppiVar45[0x5e],ppppiVar47);
            }
            if (local_214 != (int ****)0x0) {
              FUN_00efe13c(2,*(undefined1 *)(ppppiVar45 + 0x6b),ppppiVar47);
            }
            if (pppiVar13 != (int ***)0x0) {
              FUN_00f014b4(3,ppppiVar45[0x5b],ppppiVar47);
            }
            if (((uint)local_218 & 1) != 0) {
              FUN_00efdfe4((int)*(undefined8 *)(ppppiVar45 + 2),4,ppppiVar47);
            }
            if (((uint)local_21c & 1) != 0) {
              FUN_00efdf5c((int)*(undefined8 *)(ppppiVar45 + 6),5,ppppiVar47);
            }
            if (uVar28 != 0 || pppiVar14 != (int ***)0x0) {
              FUN_00f01384(6,ppppiVar45 + 0x1c,ppppiVar47);
            }
            if (((uint)pppiVar22 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(ppppiVar45 + 10),7,ppppiVar47);
            }
            if (((uint)pppiVar30 ^ 2) != 0 || pppiVar27 != (int ***)0x0) {
              FUN_00f02228(8,ppppiVar39,ppppiVar47);
            }
            if (pppiVar15 != (int ***)0x80000000) {
              FUN_01016f10(9,ppppiVar45[0x60],ppppiVar45[0x61],ppppiVar47);
            }
            if (((uint)pppiVar16 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(ppppiVar45 + 0xe),10,ppppiVar47);
            }
            if (((uint)pppiVar38 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(ppppiVar45 + 0x12),0xb,ppppiVar47);
            }
            if (pppiVar17 != (int ***)0x80000000) {
              FUN_01016f10(0xc,ppppiVar45[99],ppppiVar45[100],ppppiVar47);
            }
            if (pppiVar18 != (int ***)0x80000000) {
              FUN_01016f10(0xd,ppppiVar45[0x66],ppppiVar45[0x67],ppppiVar47);
            }
            if (pppiVar19 != (int ***)0x80000000) {
              FUN_01016f10(0xe,ppppiVar45[0x69],ppppiVar45[0x6a],ppppiVar47);
            }
            if (((uint)pppiVar46 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(ppppiVar45 + 0x16),0xf,ppppiVar47);
            }
            if (((uint)pppiVar23 & 1) != 0) {
              FUN_00efe06c((int)*(undefined8 *)(ppppiVar45 + 0x1a),0x10,ppppiVar47);
            }
            ppppiVar45 = unaff_r9;
          } while (unaff_r9 != ppppiVar32);
        }
        FUN_00d91934(&local_210);
        uVar28 = param_2[0x39];
        if (uVar28 < uVar33) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar33,uVar28,uVar28,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_a8,iVar36,iVar31,(int)*ppppiVar47 + uVar33,uVar28 - uVar33);
        ppppiVar48 = local_94;
        ppppiVar39 = local_98;
        ppppiVar44 = local_9c;
        ppppiVar42 = local_a0;
        ppppiVar32 = local_a4;
        ppppiVar45 = local_a8;
        if (local_a8 != (int ****)&DAT_00000003 || local_a4 != (int ****)0x0) {
          FUN_01bed4e2(auStack_1c8,&local_90,0x50);
          unaff_r8 = ppppiVar42;
          unaff_r9 = ppppiVar44;
          goto LAB_00d91410;
        }
        if (uVar21 <= (uint)param_2[0x39]) {
          FUN_01283fd8(&local_110,ppppiVar47);
          ppppiVar45 = local_104;
          if (((uint)local_104 & 1) == 0) goto LAB_00d903d8;
          local_d4 = (int)local_10c + ((uint)local_104 >> 5);
          local_d8 = (int)local_110 - ((uint)local_104 >> 5);
          local_dc = (int)local_108 + ((uint)local_104 >> 5);
          FUN_01283524(&local_210,&local_dc);
          local_d0 = (int **)((uint)ppppiVar45 >> 5);
          if (local_208 < (int ****)((uint)ppppiVar45 >> 5)) {
            local_a0 = (int ****)&local_cc;
            local_cc = local_208;
            local_9c = (int ****)&LAB_01a6a304;
            local_a4 = (int ****)&LAB_01a6a304;
            local_a8 = (int ****)&local_d0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_a8,&DAT_01d2e534);
          }
          goto LAB_00d911b8;
        }
        ppppiVar45 = (int ****)*ppppiVar43;
        ppppiVar32 = (int ****)param_2[0x1b];
        ppppiVar42 = unaff_r8;
        ppppiVar44 = unaff_r9;
      } while (ppppiVar45 != (int ****)&DAT_00000005 || ppppiVar32 != (int ****)0x0);
    }
    if (param_2[0x39] == 0) {
      ppppiVar32 = (int ****)0x0;
      ppppiVar45 = (int ****)&SUB_00000004;
      ppppiVar39 = ppppiVar43;
      ppppiVar48 = ppppiVar47;
    }
    else {
LAB_00d903b8:
      FUN_01283fd8(&local_110,ppppiVar47);
      ppppiVar45 = local_104;
      if (((uint)local_104 & 1) == 0) {
LAB_00d903d8:
        ppppiVar39 = local_10c;
        unaff_r8 = (int ****)&DAT_01d2e520;
        unaff_r9 = local_110;
        ppppiVar48 = local_104;
      }
      else {
        local_d4 = (int)local_10c + ((uint)local_104 >> 5);
        local_d8 = (int)local_110 - ((uint)local_104 >> 5);
        local_dc = (int)local_108 + ((uint)local_104 >> 5);
        FUN_01283524(&local_210,&local_dc);
        local_d0 = (int **)((uint)ppppiVar45 >> 5);
        if (local_208 < (int ****)((uint)ppppiVar45 >> 5)) {
          local_a0 = (int ****)&local_cc;
          local_cc = local_208;
          local_9c = (int ****)&LAB_01a6a304;
          local_a4 = (int ****)&LAB_01a6a304;
          local_a8 = (int ****)&local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_a8,&DAT_01d2e534);
        }
LAB_00d911b8:
        ppppiVar39 = (int ****)((int)local_208 - (int)local_d0);
        unaff_r9 = (int ****)((int)local_20c + (int)local_d0);
        unaff_r8 = local_210;
        ppppiVar48 = local_204;
      }
      ppppiVar32 = (int ****)0x0;
      ppppiVar45 = (int ****)&DAT_00000003;
    }
LAB_00d91410:
    if (ppppiVar45 == (int ****)&SUB_00000004 && ppppiVar32 == (int ****)0x0) {
      FUN_01a737fc(&local_a8,param_2 + 0x42);
      if (local_a8 != (int ****)&SUB_00000004 || local_a4 != (int ****)0x0) {
        if (local_a8 != (int ****)&DAT_00000003 || local_a4 != (int ****)0x0) {
          local_c8 = local_60;
          uStack_c4 = uStack_5c;
          uStack_c0 = uStack_58;
          uStack_bc = uStack_54;
          local_b8 = local_50;
          uStack_b4 = uStack_4c;
          uStack_b0 = uStack_48;
          uStack_ac = uStack_44;
        }
        local_214 = local_94;
        local_218 = local_a0;
        local_21c = local_9c;
        local_178 = local_88;
        ppppiStack_174 = ppppiStack_84;
        local_170 = ppppiStack_80;
        ppppiStack_16c = ppppiStack_7c;
        local_168 = ppppiStack_78;
        local_164 = local_74;
        local_160 = ppppiStack_70;
        local_15c = ppppiStack_6c;
        uStack_158 = uStack_68;
        uStack_154 = uStack_64;
        unaff_r8 = local_8c;
        unaff_r9 = local_90;
        ppppiVar48 = local_98;
      }
      local_210 = local_178;
      local_20c = ppppiStack_174;
      local_208 = local_170;
      local_204 = ppppiStack_16c;
      ppppiStack_200 = local_168;
      local_1fc = local_164;
      ppppiStack_1f8 = local_160;
      ppppiStack_1f4 = local_15c;
      uStack_1f0 = uStack_158;
      uStack_1ec = uStack_154;
      local_1e8 = local_c8;
      uStack_1e4 = uStack_c4;
      uStack_1e0 = uStack_c0;
      uStack_1dc = uStack_bc;
      local_1d8 = local_b8;
      uStack_1d4 = uStack_b4;
      uStack_1d0 = uStack_b0;
      uStack_1cc = uStack_ac;
      ppppiVar32 = local_a4;
      ppppiVar45 = local_a8;
      ppppiVar43 = ppppiVar48;
LAB_00d9163c:
      if (ppppiVar45 != (int ****)&DAT_00000003 || ppppiVar32 != (int ****)0x0) {
        if (ppppiVar45 != (int ****)&SUB_00000004 || ppppiVar32 != (int ****)0x0) {
          if (ppppiVar45 != (int ****)&DAT_00000005 || ppppiVar32 != (int ****)0x0) {
            FUN_01bed4e2(&local_88,&local_210,0x48);
            local_9c = local_21c;
            local_a0 = local_218;
            local_94 = local_214;
            local_a8 = ppppiVar45;
            local_a4 = ppppiVar32;
            local_98 = ppppiVar43;
            local_90 = unaff_r9;
            local_8c = unaff_r8;
            uVar20 = FUN_01a65494(&local_a8);
            FUN_01a7467c(param_1,uVar20,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d91660;
        }
        uVar20 = 4;
        goto LAB_00d91674;
      }
    }
    else {
      if (ppppiVar45 != (int ****)&DAT_00000003 || ppppiVar32 != (int ****)0x0) {
        local_178 = ppppiVar45;
        ppppiStack_174 = ppppiVar32;
        local_170 = unaff_r8;
        ppppiStack_16c = unaff_r9;
        local_168 = ppppiVar39;
        local_164 = ppppiVar48;
        FUN_01bed4e2(&local_160,auStack_1c8,0x50);
        unaff_r8 = local_15c;
        unaff_r9 = local_160;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_a8,&local_178);
          ppppiVar32 = local_a4;
          ppppiVar45 = local_a8;
          local_218 = local_a0;
          local_21c = local_9c;
          local_214 = local_94;
          local_110 = local_88;
          local_10c = ppppiStack_84;
          local_108 = ppppiStack_80;
          local_104 = ppppiStack_7c;
          ppppiStack_100 = ppppiStack_78;
          local_fc = local_74;
          ppppiStack_f8 = ppppiStack_70;
          ppppiStack_f4 = ppppiStack_6c;
          uStack_f0 = uStack_68;
          uStack_ec = uStack_64;
          if (local_a8 == (int ****)&DAT_00000003 && local_a4 == (int ****)0x0) {
            local_210 = local_88;
            local_20c = ppppiStack_84;
            local_208 = ppppiStack_80;
            local_204 = ppppiStack_7c;
            ppppiStack_200 = ppppiStack_78;
            local_1fc = local_74;
            ppppiStack_1f8 = ppppiStack_70;
            ppppiStack_1f4 = ppppiStack_6c;
            uStack_1f0 = uStack_68;
            uStack_1ec = uStack_64;
            FUN_005f6588(&local_178);
            ppppiVar32 = (int ****)0x0;
            ppppiVar45 = (int ****)&DAT_00000003;
          }
          else {
            local_1e8 = local_60;
            uStack_1e4 = uStack_5c;
            uStack_1e0 = uStack_58;
            uStack_1dc = uStack_54;
            local_1d8 = local_50;
            uStack_1d4 = uStack_4c;
            uStack_1d0 = uStack_48;
            uStack_1cc = uStack_44;
            local_210 = local_88;
            local_20c = ppppiStack_84;
            local_208 = ppppiStack_80;
            local_204 = ppppiStack_7c;
            ppppiStack_200 = ppppiStack_78;
            local_1fc = local_74;
            ppppiStack_1f8 = ppppiStack_70;
            ppppiStack_1f4 = ppppiStack_6c;
            uStack_1f0 = uStack_68;
            uStack_1ec = uStack_64;
            FUN_005f6588(&local_178);
          }
          unaff_r8 = local_8c;
          unaff_r9 = local_90;
          ppppiVar43 = local_98;
        }
        else {
          local_218 = local_170;
          local_21c = ppppiStack_16c;
          FUN_01bed4e2(&local_210,auStack_1c0,0x48);
          ppppiVar43 = ppppiVar39;
          local_214 = ppppiVar48;
        }
        goto LAB_00d9163c;
      }
      local_21c = (int ****)0x0;
      local_218 = (int ****)&DAT_00000003;
      ppppiVar43 = unaff_r8;
      local_214 = unaff_r9;
      unaff_r8 = ppppiVar48;
      unaff_r9 = ppppiVar39;
    }
    param_1[8] = local_210;
    param_1[9] = local_20c;
    param_1[10] = local_208;
    param_1[0xb] = local_204;
    param_1[0xc] = ppppiStack_200;
    param_1[0xd] = local_1fc;
    param_1[0xe] = ppppiStack_1f8;
    param_1[0xf] = ppppiStack_1f4;
    param_1[0x10] = uStack_1f0;
    param_1[0x11] = uStack_1ec;
    param_1[1] = 0;
    param_1[2] = local_218;
    *param_1 = 3;
    param_1[3] = local_21c;
    param_1[4] = ppppiVar43;
    param_1[5] = local_214;
    param_1[6] = unaff_r9;
    param_1[7] = unaff_r8;
  }
  else {
    unaff_r8 = (int ****)param_2[2];
    unaff_r9 = (int ****)param_2[3];
    ppppiVar39 = (int ****)param_2[4];
    ppppiVar48 = (int ****)param_2[5];
    FUN_01bed4e2(auStack_1c8,param_2 + 6,0x50);
    if (ppppiVar45 != (int ****)&DAT_00000005 || ppppiVar32 != (int ****)0x0) goto LAB_00d91410;
LAB_00d91660:
    uVar20 = 5;
LAB_00d91674:
    *param_1 = uVar20;
    param_1[1] = 0;
  }
  return;
}

