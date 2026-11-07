// FUN_00d68da8 @ 00d68da8 size=4196 calls_out=21 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d68da8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  double *pdVar1;
  ulonglong *******pppppppuVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong *******unaff_r4;
  ulonglong ******ppppppuVar20;
  ulonglong ******ppppppuVar21;
  uint uVar22;
  ulonglong *******pppppppuVar23;
  ulonglong *******pppppppuVar24;
  uint uVar25;
  ulonglong *******pppppppuVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulonglong *******unaff_r8;
  ulonglong *******pppppppuVar32;
  int *piVar33;
  ulonglong *******unaff_r10;
  ulonglong *******pppppppuVar34;
  ulonglong *******pppppppuVar35;
  int iVar36;
  ulonglong *******extraout_r12;
  double dVar37;
  ulonglong *******local_2a4;
  ulonglong *******local_298;
  ulonglong *******local_294;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [72];
  ulonglong *******local_240;
  ulonglong *******pppppppuStack_23c;
  ulonglong *******pppppppuStack_238;
  ulonglong *******pppppppuStack_234;
  ulonglong *******pppppppuStack_230;
  ulonglong *******local_22c;
  ulonglong *******pppppppuStack_228;
  ulonglong *******pppppppuStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong *******local_1f0;
  ulonglong *******local_1ec;
  ulonglong *******local_1e8;
  ulonglong *******local_1e4;
  ulonglong *******local_1e0;
  ulonglong *******local_1dc;
  ulonglong *******local_1d8;
  ulonglong *******local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_170;
  ulonglong *******local_16c;
  ulonglong *******local_168;
  ulonglong *******local_164;
  ulonglong *******local_160;
  ulonglong *******local_15c;
  ulonglong *******local_158;
  ulonglong *******local_154;
  ulonglong *******local_150;
  ulonglong *******local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong *******local_f0;
  ulonglong *******local_ec;
  ulonglong *******local_e8;
  ulonglong *******local_e4;
  ulonglong *******local_e0;
  ulonglong *******local_dc;
  ulonglong *******local_d8;
  ulonglong *******local_d4;
  ulonglong *******local_d0;
  ulonglong *******pppppppuStack_cc;
  ulonglong *******pppppppuStack_c8;
  ulonglong *******local_c4;
  ulonglong *******local_c0;
  ulonglong *******local_bc;
  ulonglong *******local_b8;
  ulonglong *******pppppppuStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int local_8c;
  int local_88;
  ulonglong *******local_80;
  int local_7c;
  int local_74;
  int local_70;
  undefined1 *local_6c;
  ulonglong *****local_68;
  ulonglong *******local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  pppppppuVar24 = (ulonglong *******)*param_2;
  pppppppuVar26 = (ulonglong *******)param_2[1];
  uVar15 = param_2[0x27];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppuVar24 == (ulonglong *******)&DAT_00000003 && pppppppuVar26 == (ulonglong *******)0x0)
  {
    iVar16 = param_2[0x24];
    piVar33 = param_2 + 0x1c;
    if (iVar16 != 0) {
      do {
        unaff_r4 = (ulonglong *******)&local_f0;
        (**(code **)(param_2[0x25] + 0xc))(unaff_r4,iVar16,param_3);
        if (local_f0 == (ulonglong *******)&SUB_00000004 && local_ec == (ulonglong *******)0x0) {
LAB_00d69764:
          if (param_2[0x1d] != 0) goto LAB_00d697a8;
          goto LAB_00d69758;
        }
        FUN_01bed4e2(&local_168,unaff_r4,0x78);
        pppppppuVar23 = local_14c;
        unaff_r8 = local_150;
        pppppppuVar34 = local_154;
        pppppppuVar2 = local_158;
        pppppppuVar26 = local_15c;
        pppppppuVar24 = local_160;
        pppppppuVar35 = local_164;
        pppppppuVar32 = local_168;
        if (local_168 == (ulonglong *******)&DAT_00000003 && local_164 == (ulonglong *******)0x0) {
          if (param_2[0x24] != 0) {
            FUN_01139b38(param_2[0x24],param_2[0x25]);
          }
          param_2[0x24] = 0;
          unaff_r8 = (ulonglong *******)&local_178;
          break;
        }
        local_294 = local_158;
        local_2a4 = local_154;
        local_298 = local_150;
        FUN_01bed4e2(&local_240,&uStack_148,0x50);
        uVar5 = uStack_f4;
        uVar13 = local_f8;
        if (pppppppuVar32 == (ulonglong *******)0x2 && pppppppuVar35 == (ulonglong *******)0x0) {
          iVar16 = param_2[0x1d];
          if (iVar16 == 0) {
            pppppppuVar32 = (ulonglong *******)&local_240;
            goto LAB_00d69740;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar16 = param_2[0x1d];
          }
          param_2[2] = (int)pppppppuVar2;
          param_2[3] = (int)pppppppuVar34;
          param_2[4] = (int)unaff_r8;
          *param_2 = (int)pppppppuVar24;
          param_2[1] = (int)pppppppuVar26;
          param_2[5] = (int)pppppppuVar23;
          FUN_01bed4e2(param_2 + 6,&local_240,0x50);
          FUN_01283fd8(&local_178,piVar33,iVar16);
          if (((uint)local_16c & 1) == 0) goto LAB_00d697c8;
          local_6c = (undefined1 *)((int)local_178._4_4_ + ((uint)local_16c >> 5));
          local_70 = (int)(ulonglong *******)local_178 - ((uint)local_16c >> 5);
          local_74 = local_170 + ((uint)local_16c >> 5);
          FUN_01283524(&local_168,&local_74);
          local_68 = (ulonglong *****)((uint)local_16c >> 5);
          if (local_160 < (ulonglong *******)((uint)local_16c >> 5)) {
            local_e8 = (ulonglong *******)&local_64;
            local_64 = local_160;
            local_e4 = (ulonglong *******)&LAB_01a6a304;
            local_ec = (ulonglong *******)&LAB_01a6a304;
            local_f0 = (ulonglong *******)&local_68;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_f0,&DAT_01d2e534);
          }
LAB_00d699e0:
          unaff_r8 = (ulonglong *******)((int)local_160 - (int)local_68);
          local_294 = local_168;
          pppppppuVar34 = (ulonglong *******)((int)local_164 + (int)local_68);
          local_16c = local_15c;
          goto LAB_00d699f8;
        }
        if (pppppppuVar32 == (ulonglong *******)&SUB_00000004 &&
            pppppppuVar35 == (ulonglong *******)0x0) goto LAB_00d69764;
        local_1d4 = pppppppuVar23;
        local_1f0 = pppppppuVar32;
        local_1ec = pppppppuVar35;
        local_1e8 = pppppppuVar24;
        local_1e4 = pppppppuVar26;
        local_1d8 = unaff_r8;
        local_1dc = pppppppuVar34;
        local_1e0 = pppppppuVar2;
        FUN_01bed4e2(&uStack_1d0,&local_240,0x50);
        unaff_r10 = (ulonglong *******)&DAT_00000001;
        local_180 = uVar13;
        uStack_17c = uVar5;
        local_298 = (ulonglong *******)param_2[0x1d];
        iVar29 = param_2[0x1a];
        iVar16 = param_2[0x1b];
        pppppppuVar24 = local_298;
        if ((uint)(param_2[0x1e] - (int)local_298) < 5) {
          FUN_01283c9c(piVar33,5);
          pppppppuVar24 = (ulonglong *******)param_2[0x1d];
          if ((uint)(param_2[0x1e] - (int)pppppppuVar24) < 5) {
            local_f0 = (ulonglong *******)0x5;
            local_ec = (ulonglong *******)(param_2[0x1e] - (int)pppppppuVar24);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_f0);
          }
        }
        param_2[0x1d] = (int)((int)pppppppuVar24 + 5);
        FUN_01bed4e2(&local_f0,&local_1f0,0x78);
        iVar28 = local_7c;
        pppppppuVar32 = local_80;
        iVar27 = local_88;
        iVar7 = local_8c;
        pppppppuVar23 = pppppppuStack_b4;
        pppppppuVar34 = local_b8;
        pppppppuVar26 = local_d8;
        iVar17 = 0;
        iVar9 = 0;
        if (((uint)local_f0 & 1) != 0) {
          if (local_e8 == (ulonglong *******)0x0 && local_e4 == (ulonglong *******)0x0) {
            iVar11 = 2;
          }
          else {
            uVar10 = LZCOUNT((uint)local_e8 | 1) | 0x20;
            if (local_e4 != (ulonglong *******)0x0) {
              uVar10 = LZCOUNT(local_e4);
            }
            iVar11 = ((uVar10 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_e0 == (ulonglong *******)0x0) {
            iVar9 = 0;
          }
          else {
            uVar10 = LZCOUNT((uint)local_e0 | 1) | 0x20;
            if ((int)local_e0 < 0) {
              uVar10 = LZCOUNT((int)local_e0 >> 0x1f);
            }
            iVar9 = ((uVar10 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          iVar9 = iVar9 + iVar11;
        }
        if (local_88 != 0) {
          puVar12 = (uint *)(local_8c + 8);
          iVar11 = local_88;
          do {
            uVar30 = *puVar12;
            uVar10 = 0;
            pdVar1 = (double *)(puVar12 + -2);
            puVar12 = puVar12 + 4;
            if (uVar30 != 0) {
              uVar10 = uVar30 | 1;
            }
            if (uVar30 != 0) {
              uVar10 = ((LZCOUNT(uVar10) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar19 = iVar17 + uVar10;
            iVar17 = iVar19 + 1;
            if (*pdVar1 != 0.0) {
              iVar17 = iVar19 + 10;
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        iVar19 = 0;
        iVar11 = 0;
        local_294 = local_80;
        if (local_7c != 0) {
          pppppppuVar35 = local_80 + 2;
          iVar18 = local_7c;
          do {
            ppppppuVar20 = *pppppppuVar35;
            uVar10 = 0;
            if (ppppppuVar20 != (ulonglong ******)0x0) {
              uVar10 = (uint)ppppppuVar20 | 1;
            }
            ppppppuVar21 = pppppppuVar35[1];
            if (ppppppuVar20 != (ulonglong ******)0x0) {
              uVar10 = ((LZCOUNT(uVar10) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (ppppppuVar21 == (ulonglong ******)0x0) {
              iVar36 = 0;
            }
            else {
              uVar30 = LZCOUNT((uint)ppppppuVar21 | 1) | 0x20;
              if ((int)ppppppuVar21 < 0) {
                uVar30 = LZCOUNT((int)ppppppuVar21 >> 0x1f);
              }
              iVar36 = ((uVar30 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
            }
            pppppppuVar2 = pppppppuVar35 + -2;
            iVar36 = iVar11 + uVar10 + iVar36;
            pppppppuVar35 = pppppppuVar35 + 4;
            iVar11 = iVar36 + 1;
            if (*(double *)pppppppuVar2 != 0.0) {
              iVar11 = iVar36 + 10;
            }
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        local_2a4 = (ulonglong *******)((uint)local_d8 ^ 2 | (uint)local_d4);
        if (local_2a4 != (ulonglong *******)0x0) {
          if (local_c0 == (ulonglong *******)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (int)local_c0 << 3 | 1;
            uVar10 = uVar10 + ((LZCOUNT(uVar10) ^ 0x1fU) * 9 + 0x49 >> 6);
          }
          if (((uint)local_d8 & 1) != 0) {
            uVar10 = uVar10 + 9;
          }
          iVar19 = uVar10 + ((LZCOUNT(uVar10 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar10 = (uint)local_b8 ^ 2;
        iVar18 = 0;
        if (uVar10 != 0 || pppppppuStack_b4 != (ulonglong *******)0x0) {
          iVar18 = 2;
          if (((uint)local_b8 & 1) != 0) {
            iVar18 = 0xb;
          }
          if ((double)CONCAT44(uStack_a4,local_a8) != 0.0) {
            iVar18 = iVar18 + 9;
          }
          if ((double)CONCAT44(uStack_9c,local_a0) != 0.0) {
            iVar18 = iVar18 + 9;
          }
          if ((double)CONCAT44(uStack_94,local_98) != 0.0) {
            iVar18 = iVar18 + 9;
          }
        }
        uVar31 = 0x7ffffffa - (int)pppppppuVar24;
        uVar30 = local_88 + iVar9 + iVar17 + local_7c + iVar11 + iVar19 + iVar18;
        if (uVar31 < uVar30) {
LAB_00d69de4:
          local_178 = CONCAT44(uVar31,uVar30);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_178,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (((uint)local_f0 & 1) != 0) {
          FUN_00efc900(1,&local_e8,local_e8,local_e4,local_e0,piVar33);
        }
        if (iVar27 != 0) {
          iVar27 = iVar27 << 4;
          puVar12 = (uint *)(iVar7 + 8);
          do {
            local_178._0_1_ = 0x12;
            FUN_01284394(piVar33,&local_178,1);
            uVar22 = *puVar12;
            if (uVar22 == 0) {
              cVar8 = '\0';
            }
            else {
              cVar8 = (char)((LZCOUNT(uVar22 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
            }
            dVar37 = *(double *)(puVar12 + -2);
            if (dVar37 != 0.0) {
              cVar8 = cVar8 + '\t';
            }
            local_178 = CONCAT71(local_178._1_7_,cVar8);
            FUN_01284394(piVar33,&local_178,1);
            if (uVar22 != 0) {
              FUN_00efc9fc(1,*puVar12,piVar33);
            }
            if (dVar37 != 0.0) {
              FUN_01016b28((int)*(undefined8 *)(puVar12 + -2),2,piVar33);
            }
            puVar12 = puVar12 + 4;
            iVar27 = iVar27 + -0x10;
          } while (iVar27 != 0);
        }
        if (iVar28 != 0) {
          iVar28 = iVar28 << 4;
          pppppppuVar32 = pppppppuVar32 + 2;
          do {
            local_178._0_1_ = 0x1a;
            FUN_01284394(piVar33,&local_178,1);
            ppppppuVar20 = *pppppppuVar32;
            cVar8 = '\0';
            ppppppuVar21 = pppppppuVar32[1];
            cVar14 = '\0';
            if (ppppppuVar20 != (ulonglong ******)0x0) {
              cVar8 = (char)((LZCOUNT((uint)ppppppuVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
            }
            if (ppppppuVar21 != (ulonglong ******)0x0) {
              uVar22 = LZCOUNT((uint)ppppppuVar21 | 1) | 0x20;
              if ((int)ppppppuVar21 < 0) {
                uVar22 = LZCOUNT((int)ppppppuVar21 >> 0x1f);
              }
              cVar14 = (char)((uVar22 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
            }
            dVar37 = *(double *)(pppppppuVar32 + -2);
            cVar14 = cVar14 + cVar8;
            if (dVar37 != 0.0) {
              cVar14 = cVar14 + '\t';
            }
            local_178 = CONCAT71(local_178._1_7_,cVar14);
            FUN_01284394(piVar33,&local_178,1);
            if (ppppppuVar20 != (ulonglong ******)0x0) {
              FUN_00efc9fc(1,*pppppppuVar32,piVar33);
            }
            if (ppppppuVar21 != (ulonglong ******)0x0) {
              FUN_00efca88(2,pppppppuVar32[1],piVar33);
            }
            if (dVar37 != 0.0) {
              FUN_01016b28((int)*(undefined8 *)(pppppppuVar32 + -2),3,piVar33);
            }
            pppppppuVar32 = pppppppuVar32 + 4;
            iVar28 = iVar28 + -0x10;
          } while (iVar28 != 0);
        }
        if (local_2a4 != (ulonglong *******)0x0) {
          local_178 = CONCAT71(local_178._1_7_,0x22);
          FUN_01284394(piVar33,&local_178,1);
          pppppppuVar24 = local_c0;
          uVar22 = 0;
          iVar27 = 10;
          if (local_c0 != (ulonglong *******)0x0) {
            uVar22 = (int)local_c0 << 3 | 1;
            uVar22 = uVar22 + ((LZCOUNT(uVar22) ^ 0x1fU) * 9 + 0x49 >> 6);
          }
          if (((uint)pppppppuVar26 & 1) != 0) {
            uVar22 = uVar22 + 9;
          }
          do {
            if (uVar22 < 0x80) {
              local_178 = CONCAT71(local_178._1_7_,(char)uVar22);
              FUN_01284394(piVar33,&local_178,1);
              break;
            }
            local_178 = CONCAT71(local_178._1_7_,(char)uVar22) | 0x80;
            FUN_01284394(piVar33,&local_178,1);
            uVar22 = uVar22 >> 7;
            iVar27 = iVar27 + -1;
          } while (iVar27 != 0);
          if (((uint)pppppppuVar26 & 1) != 0) {
            FUN_01016b28(local_d0,1,piVar33);
          }
          pppppppuVar26 = local_c4;
          if (pppppppuVar24 != (ulonglong *******)0x0) {
            local_178 = CONCAT71(local_178._1_7_,0x12);
            FUN_01284394(piVar33,&local_178,1);
            uVar22 = (int)pppppppuVar24 << 3;
            iVar27 = 10;
            uVar25 = uVar22;
            do {
              if (uVar25 < 0x80) {
                local_178 = CONCAT71(local_178._1_7_,(char)uVar25);
                FUN_01284394(piVar33,&local_178,1);
                break;
              }
              local_178 = CONCAT71(local_178._1_7_,(char)uVar25) | 0x80;
              FUN_01284394(piVar33,&local_178,1);
              uVar25 = uVar25 >> 7;
              iVar27 = iVar27 + -1;
            } while (iVar27 != 0);
            do {
              local_178 = *(ulonglong *)pppppppuVar26;
              FUN_01284394(piVar33,&local_178,8);
              pppppppuVar26 = pppppppuVar26 + 2;
              uVar22 = uVar22 - 8;
            } while (uVar22 != 0);
          }
        }
        if (uVar10 != 0 || pppppppuVar23 != (ulonglong *******)0x0) {
          local_178._0_1_ = 0x2a;
          FUN_01284394(piVar33,&local_178,1);
          uVar6 = local_98;
          uVar5 = local_a0;
          uVar13 = local_a8;
          dVar37 = (double)CONCAT44(uStack_a4,local_a8);
          uVar10 = (uint)pppppppuVar34 & 1;
          cVar8 = (char)uVar10;
          if (uVar10 != 0) {
            cVar8 = '\t';
          }
          dVar3 = (double)CONCAT44(uStack_9c,local_a0);
          dVar4 = (double)CONCAT44(uStack_94,local_98);
          if (dVar37 != 0.0) {
            cVar8 = cVar8 + '\t';
          }
          if (dVar3 != 0.0) {
            cVar8 = cVar8 + '\t';
          }
          if (dVar4 != 0.0) {
            cVar8 = cVar8 + '\t';
          }
          local_178 = CONCAT71(local_178._1_7_,cVar8);
          FUN_01284394(piVar33,&local_178,1);
          if (((uint)pppppppuVar34 & 1) != 0) {
            FUN_01016b28(local_b0,1,piVar33);
          }
          if (dVar37 != 0.0) {
            FUN_01016b28(uVar13,2,piVar33);
          }
          if (dVar3 != 0.0) {
            FUN_01016b28(uVar5,3,piVar33);
          }
          if (dVar4 != 0.0) {
            FUN_01016b28(uVar6,4,piVar33);
          }
        }
        if (uVar31 < uVar30) goto LAB_00d69de4;
        FUN_00d69f9c(&local_1f0);
        pppppppuVar24 = (ulonglong *******)param_2[0x1d];
        if (pppppppuVar24 < local_298) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(local_298,pppppppuVar24,pppppppuVar24,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_168,iVar29,iVar16,(undefined1 *)(*piVar33 + (int)local_298),
                     (int)pppppppuVar24 - (int)local_298);
        pppppppuVar23 = local_154;
        unaff_r8 = local_158;
        pppppppuVar34 = local_15c;
        pppppppuVar26 = local_164;
        pppppppuVar24 = local_168;
        if (local_168 != (ulonglong *******)&DAT_00000003 || local_164 != (ulonglong *******)0x0) {
          local_294 = local_160;
          FUN_01bed4e2(auStack_290,&local_150,0x50);
          goto LAB_00d69a00;
        }
        if (uVar15 <= (uint)param_2[0x1d]) {
          FUN_01283fd8(&local_178,piVar33);
          if (((uint)local_16c & 1) != 0) {
            local_6c = (undefined1 *)((int)local_178._4_4_ + ((uint)local_16c >> 5));
            local_70 = (int)(ulonglong *******)local_178 - ((uint)local_16c >> 5);
            local_74 = local_170 + ((uint)local_16c >> 5);
            FUN_01283524(&local_168,&local_74);
            local_68 = (ulonglong *****)((uint)local_16c >> 5);
            if (local_160 < (ulonglong *******)((uint)local_16c >> 5)) {
              local_e8 = (ulonglong *******)&local_64;
              local_64 = local_160;
              local_e4 = (ulonglong *******)&LAB_01a6a304;
              local_ec = (ulonglong *******)&LAB_01a6a304;
              local_f0 = (ulonglong *******)&local_68;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_f0,&DAT_01d2e534);
            }
            goto LAB_00d699e0;
          }
          goto LAB_00d697c8;
        }
        iVar16 = param_2[0x24];
        unaff_r4 = (ulonglong *******)&local_f0;
        unaff_r8 = (ulonglong *******)&local_178;
      } while (iVar16 != 0);
    }
    if (param_2[0x1d] == 0) {
      pppppppuVar26 = (ulonglong *******)0x0;
      pppppppuVar24 = (ulonglong *******)&SUB_00000004;
      pppppppuVar23 = unaff_r4;
      pppppppuVar34 = unaff_r10;
    }
    else {
LAB_00d697a8:
      FUN_01283fd8(&local_178,piVar33);
      if (((uint)local_16c & 1) == 0) {
LAB_00d697c8:
        local_294 = (ulonglong *******)&DAT_01d2e520;
        unaff_r8 = local_178._4_4_;
        pppppppuVar34 = (ulonglong *******)local_178;
      }
      else {
        local_6c = (undefined1 *)((int)local_178._4_4_ + ((uint)local_16c >> 5));
        local_70 = (int)(ulonglong *******)local_178 - ((uint)local_16c >> 5);
        local_74 = local_170 + ((uint)local_16c >> 5);
        FUN_01283524(&local_168,&local_74);
        local_68 = (ulonglong *****)((uint)local_16c >> 5);
        if (local_160 < (ulonglong *******)((uint)local_16c >> 5)) {
          local_e8 = (ulonglong *******)&local_64;
          local_64 = local_160;
          local_e4 = (ulonglong *******)&LAB_01a6a304;
          local_ec = (ulonglong *******)&LAB_01a6a304;
          local_f0 = (ulonglong *******)&local_68;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_f0,&DAT_01d2e534);
        }
        unaff_r8 = (ulonglong *******)((int)local_160 - (int)local_68);
        local_294 = local_168;
        pppppppuVar34 = (ulonglong *******)((int)local_164 + (int)local_68);
        local_16c = local_15c;
      }
LAB_00d699f8:
      pppppppuVar26 = (ulonglong *******)0x0;
      pppppppuVar24 = (ulonglong *******)&DAT_00000003;
      pppppppuVar23 = local_16c;
    }
LAB_00d69a00:
    if (pppppppuVar24 == (ulonglong *******)&SUB_00000004 && pppppppuVar26 == (ulonglong *******)0x0
       ) {
      FUN_01a737fc(&local_f0,param_2 + 0x28);
      if (local_f0 == (ulonglong *******)&SUB_00000004 && local_ec == (ulonglong *******)0x0) {
        pppppppuVar32 = unaff_r8;
        pppppppuVar35 = extraout_r12;
        pppppppuVar34 = (ulonglong *******)0xd69a3c;
      }
      else {
        if (local_f0 != (ulonglong *******)&DAT_00000003 || local_ec != (ulonglong *******)0x0) {
          local_60 = local_a8;
          uStack_5c = uStack_a4;
          uStack_58 = local_a0;
          uStack_54 = uStack_9c;
          local_50 = local_98;
          uStack_4c = uStack_94;
          uStack_48 = uStack_90;
          iStack_44 = local_8c;
        }
        local_298 = local_e0;
        local_2a4 = local_dc;
        local_294 = local_d4;
        local_168 = local_d0;
        local_164 = pppppppuStack_cc;
        local_160 = pppppppuStack_c8;
        local_15c = local_c4;
        local_158 = local_c0;
        local_154 = local_bc;
        local_150 = local_b8;
        local_14c = pppppppuStack_b4;
        uStack_148 = local_b0;
        uStack_144 = uStack_ac;
        pppppppuVar32 = local_e8;
        pppppppuVar35 = local_e4;
        pppppppuVar34 = local_d8;
      }
      local_1f0 = local_168;
      local_1ec = local_164;
      local_1e8 = local_160;
      local_1e4 = local_15c;
      local_1e0 = local_158;
      local_1dc = local_154;
      local_1d8 = local_150;
      local_1d4 = local_14c;
      uStack_1d0 = uStack_148;
      uStack_1cc = uStack_144;
      local_1c8 = local_60;
      uStack_1c4 = uStack_5c;
      uStack_1c0 = uStack_58;
      uStack_1bc = uStack_54;
      local_1b8 = local_50;
      uStack_1b4 = uStack_4c;
      uStack_1b0 = uStack_48;
      iStack_1ac = iStack_44;
      pppppppuVar26 = local_ec;
      pppppppuVar24 = local_f0;
LAB_00d69c44:
      if (pppppppuVar24 != (ulonglong *******)&DAT_00000003 ||
          pppppppuVar26 != (ulonglong *******)0x0) {
        if (pppppppuVar24 != (ulonglong *******)&SUB_00000004 ||
            pppppppuVar26 != (ulonglong *******)0x0) {
          FUN_01bed4e2(&local_d0,&local_1f0,0x48);
          local_d4 = local_294;
          local_e0 = local_298;
          local_dc = local_2a4;
          local_f0 = pppppppuVar24;
          local_ec = pppppppuVar26;
          local_e8 = pppppppuVar32;
          local_e4 = pppppppuVar35;
          local_d8 = pppppppuVar34;
          uVar13 = FUN_01a65494(&local_f0);
          FUN_01a7467c(param_1,uVar13,&DAT_01d2cc7c);
          return;
        }
        uVar13 = 4;
        goto LAB_00d69c68;
      }
      pppppppuVar23 = local_294;
      local_294 = local_298;
    }
    else {
      if (pppppppuVar24 != (ulonglong *******)&DAT_00000003 ||
          pppppppuVar26 != (ulonglong *******)0x0) {
        local_160 = local_294;
        local_168 = pppppppuVar24;
        local_164 = pppppppuVar26;
        local_15c = pppppppuVar34;
        local_158 = unaff_r8;
        local_154 = pppppppuVar23;
        FUN_01bed4e2(&local_150,auStack_290,0x50);
        pppppppuVar34 = local_150;
        pppppppuVar35 = local_15c;
        pppppppuVar32 = local_160;
        if ((char)param_2[0x42] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_f0,&local_168);
          local_294 = local_d4;
          local_2a4 = local_dc;
          local_298 = local_e0;
          local_240 = local_d0;
          pppppppuStack_23c = pppppppuStack_cc;
          pppppppuStack_238 = pppppppuStack_c8;
          pppppppuStack_234 = local_c4;
          pppppppuStack_230 = local_c0;
          local_22c = local_bc;
          pppppppuStack_228 = local_b8;
          pppppppuStack_224 = pppppppuStack_b4;
          uStack_220 = local_b0;
          uStack_21c = uStack_ac;
          if (local_f0 == (ulonglong *******)&DAT_00000003 && local_ec == (ulonglong *******)0x0) {
            local_1f0 = local_d0;
            local_1ec = pppppppuStack_cc;
            local_1e8 = pppppppuStack_c8;
            local_1e4 = local_c4;
            local_1e0 = local_c0;
            local_1dc = local_bc;
            local_1d8 = local_b8;
            local_1d4 = pppppppuStack_b4;
            uStack_1d0 = local_b0;
            uStack_1cc = uStack_ac;
            FUN_005f6588(&local_168);
            local_ec = (ulonglong *******)0x0;
            local_f0 = (ulonglong *******)&DAT_00000003;
          }
          else {
            local_1c8 = local_a8;
            uStack_1c4 = uStack_a4;
            uStack_1c0 = local_a0;
            uStack_1bc = uStack_9c;
            local_1b8 = local_98;
            uStack_1b4 = uStack_94;
            uStack_1b0 = uStack_90;
            iStack_1ac = local_8c;
            local_1f0 = local_d0;
            local_1ec = pppppppuStack_cc;
            local_1e8 = pppppppuStack_c8;
            local_1e4 = local_c4;
            local_1e0 = local_c0;
            local_1dc = local_bc;
            local_1d8 = local_b8;
            local_1d4 = pppppppuStack_b4;
            uStack_1d0 = local_b0;
            uStack_1cc = uStack_ac;
            FUN_005f6588(&local_168);
          }
          pppppppuVar26 = local_ec;
          pppppppuVar34 = local_d8;
          pppppppuVar32 = local_e8;
          pppppppuVar24 = local_f0;
          pppppppuVar35 = local_e4;
        }
        else {
          local_294 = local_14c;
          FUN_01bed4e2(&local_1f0,auStack_288,0x48);
          local_2a4 = pppppppuVar23;
          local_298 = unaff_r8;
        }
        goto LAB_00d69c44;
      }
      pppppppuVar35 = (ulonglong *******)0x0;
      pppppppuVar32 = (ulonglong *******)&DAT_00000003;
      local_2a4 = pppppppuVar34;
      pppppppuVar34 = unaff_r8;
    }
    param_1[8] = local_1f0;
    param_1[9] = local_1ec;
    param_1[10] = local_1e8;
    param_1[0xb] = local_1e4;
    param_1[0xc] = local_1e0;
    param_1[0xd] = local_1dc;
    param_1[0xe] = local_1d8;
    param_1[0xf] = local_1d4;
    param_1[0x10] = uStack_1d0;
    param_1[0x11] = uStack_1cc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = pppppppuVar32;
    param_1[3] = pppppppuVar35;
    param_1[4] = local_294;
    param_1[5] = local_2a4;
    param_1[6] = pppppppuVar34;
    param_1[7] = pppppppuVar23;
  }
  else {
    pppppppuVar34 = (ulonglong *******)param_2[3];
    pppppppuVar32 = (ulonglong *******)(param_2 + 6);
    unaff_r8 = (ulonglong *******)param_2[4];
    pppppppuVar23 = (ulonglong *******)param_2[5];
    local_294 = (ulonglong *******)param_2[2];
LAB_00d69740:
    FUN_01bed4e2(auStack_290,pppppppuVar32,0x50);
    if (pppppppuVar24 != (ulonglong *******)&DAT_00000005 || pppppppuVar26 != (ulonglong *******)0x0
       ) goto LAB_00d69a00;
LAB_00d69758:
    uVar13 = 5;
LAB_00d69c68:
    *param_1 = uVar13;
    param_1[1] = 0;
  }
  return;
}

