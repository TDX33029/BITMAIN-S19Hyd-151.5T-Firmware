// FUN_00f85f30 @ 00f85f30 size=4488 calls_out=17 calls_in=1
// strings: 

void FUN_00f85f30(uint *param_1,uint ****param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint ****ppppuVar5;
  int iVar6;
  uint ******ppppppuVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint uVar10;
  uint uVar11;
  uint ******ppppppuVar12;
  uint ****ppppuVar13;
  uint ****ppppuVar14;
  uint ****extraout_r1;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint ****extraout_r2;
  uint ****ppppuVar18;
  uint ****extraout_r2_00;
  uint *****extraout_r3;
  uint *****extraout_r3_00;
  uint *****extraout_r3_01;
  uint *****extraout_r3_02;
  uint *****extraout_r3_03;
  uint *****pppppuVar19;
  uint ***pppuVar20;
  uint ****ppppuVar21;
  uint ****ppppuVar22;
  uint *****pppppuVar23;
  uint *****pppppuVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  uint ***pppuVar28;
  uint *****pppppuVar29;
  uint ******unaff_r9;
  uint ***pppuVar30;
  uint ******ppppppuVar31;
  uint ***pppuVar32;
  uint *****pppppuVar33;
  bool bVar34;
  bool bVar35;
  uint in_fpscr;
  float fVar36;
  float fVar37;
  uint ****local_e0;
  uint ****local_dc;
  uint ****local_d8;
  uint ****local_d4;
  uint ****local_d0;
  uint ****local_c0;
  undefined *local_b0;
  undefined *local_ac;
  uint ******local_a0;
  uint local_8c;
  uint ****local_84;
  uint **local_80;
  uint *****local_7c;
  uint ******local_78;
  int local_74;
  uint *****local_70;
  uint ***local_6c;
  uint *****local_68;
  undefined *local_64;
  uint ******local_60;
  uint ******local_5c;
  uint *****local_58;
  undefined4 local_54;
  uint *****local_50;
  uint ******local_4c;
  int local_48;
  int local_44;
  uint ******local_40;
  uint ***local_3c;
  undefined4 local_38;
  uint ****local_34;
  uint *****local_30;
  uint ****local_2c;
  undefined2 local_28;
  
  uVar11 = param_1[3];
  local_84 = (uint ****)&local_80;
  local_80 = (uint **)(uVar11 + 0x2a);
  local_74 = 0;
  local_7c = (uint *****)0x0;
  if (param_3 != 0) {
    iVar6 = param_3 * 0x16c;
    local_8c = 2;
    local_ac = &DAT_018ac46c;
    local_b0 = &DAT_00413115;
    ppppuVar18 = param_2;
LAB_00f85fb0:
    do {
      bVar1 = *(byte *)((int)ppppuVar18 + 0x146);
      ppppuVar21 = ppppuVar18 + 0x5b;
      bVar34 = (bVar1 & 0x80) == 0;
      if (bVar34) {
        bVar1 = *(byte *)((int)ppppuVar18 + 0x14a);
      }
      if (bVar34 && (bVar1 & 0x80) == 0) {
        local_30 = (uint *****)&DAT_00000001;
        local_6c = ppppuVar18[0x48];
        local_2c = (uint ****)0x0;
        local_34 = (uint ****)0x0;
        local_70 = (uint *****)ppppuVar18[0x47];
        local_5c = (uint ******)&DAT_0157d360;
        local_60 = &local_70;
        local_64 = &DAT_00fa02fc;
        local_68 = &local_84;
        FUN_00fa948c(&local_34,&DAT_0188042c,&DAT_0035df67,&local_68);
        if (ppppuVar18[7] != (uint ***)&DAT_00110000) {
          local_5c = (uint ******)FUN_00faaf34;
          local_60 = (uint ******)&local_40;
          local_64 = &DAT_00fa02fc;
          local_68 = &local_84;
          local_40 = (uint ******)ppppuVar18[7];
          FUN_00fa948c(&local_34,&DAT_0188042c,&DAT_0035d7e7,&local_68);
        }
        if ((uint ******)ppppuVar18[0x49] != (uint ******)0x0) {
          local_3c = ppppuVar18[0x4a];
          local_5c = (uint ******)&DAT_0157d360;
          local_60 = (uint ******)&local_40;
          local_64 = &DAT_00fa02fc;
          local_68 = &local_84;
          local_40 = (uint ******)ppppuVar18[0x49];
          FUN_00fa948c(&local_34,&DAT_0188042c,&DAT_00565380,&local_68);
        }
        ppppuVar5 = local_2c;
        pppppuVar8 = local_30;
        pppppuVar33 = (uint *****)0xf86110;
        uVar10 = thunk_FUN_00f99560();
        ppppuVar14 = local_34;
        ppppppuVar31 = (uint ******)0x3e7;
        if (local_8c < uVar10) {
          local_8c = uVar10;
        }
        if (*ppppuVar18 == (uint ***)0x1) {
          ppppppuVar31 = (uint ******)ppppuVar18[1];
        }
        if (local_7c != (uint *****)0x0) {
          local_a0 = local_78;
          pppppuVar9 = extraout_r3;
          pppppuVar23 = local_7c;
          do {
            uVar2 = *(ushort *)((int)pppppuVar23 + 0xe2);
            iVar15 = (int)(uint)uVar2 << 4;
            ppppppuVar7 = (uint ******)0x0;
            do {
              ppppppuVar12 = ppppppuVar7;
              ppppppuVar7 = (uint ******)(uint)uVar2;
              if (iVar15 == 0) goto LAB_00f861f8;
              ppppppuVar7 = (uint ******)pppppuVar23[(int)ppppppuVar12 * 4];
              bVar35 = ppppppuVar7 <= ppppppuVar31;
              bVar34 = bVar35 && ppppppuVar31 != ppppppuVar7;
              if (ppppppuVar31 == ppppppuVar7) {
                ppppuVar22 = pppppuVar23[(int)ppppppuVar12 * 4 + 3];
                ppppuVar13 = ppppuVar22;
                if (ppppuVar5 < ppppuVar22) {
                  ppppuVar13 = ppppuVar5;
                }
                pppppuVar33 = (uint *****)0xf861c0;
                iVar26 = FUN_016dd50a(pppppuVar8,pppppuVar23[(int)ppppppuVar12 * 4 + 2],ppppuVar13);
                if (iVar26 == 0) {
                  iVar26 = (int)ppppuVar5 - (int)ppppuVar22;
                }
                bVar35 = -1 < iVar26;
                bVar34 = 0 < iVar26;
                pppppuVar9 = extraout_r3_00;
                unaff_r9 = ppppppuVar31;
              }
              iVar15 = iVar15 + -0x10;
              ppppppuVar7 = (uint ******)((int)ppppppuVar12 + 1);
            } while ((uint)bVar34 - (uint)!bVar35 == 1);
            ppppppuVar7 = ppppppuVar12;
            if (((uint)bVar34 - (uint)!bVar35 & 0xff) == 0) {
              if (ppppuVar14 != (uint ****)0x0) {
                thunk_FUN_016d3fb4(pppppuVar8);
              }
              goto LAB_00f8624c;
            }
LAB_00f861f8:
            if (local_a0 == (uint ******)0x0) goto LAB_00f862d4;
            local_a0 = (uint ******)((int)local_a0 + -1);
            pppppuVar23 = (uint *****)pppppuVar23[(int)((int)ppppppuVar7 + 0x39)];
          } while( true );
        }
        if (local_34 != (uint ****)0x80000000) {
          pppppuVar33 = (uint *****)thunk_FUN_016d4a50(0xe4);
          if (pppppuVar33 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xe4);
          }
          *(undefined2 *)((int)pppppuVar33 + 0xe2) = 1;
          pppppuVar33[2] = (uint ****)pppppuVar8;
          pppppuVar33[0x2c] = (uint ****)0x0;
          pppppuVar33[0x2d] = ppppuVar18;
          *pppppuVar33 = (uint ****)ppppppuVar31;
          pppppuVar33[1] = ppppuVar14;
          pppppuVar33[3] = ppppuVar5;
          local_78 = (uint ******)0x0;
          local_7c = pppppuVar33;
          goto LAB_00f862b8;
        }
        ppppppuVar12 = &local_7c;
        pppppuVar23 = pppppuVar8;
        goto LAB_00f8624c;
      }
      ppppuVar18 = ppppuVar21;
    } while (ppppuVar21 != param_2 + param_3 * 0x5b);
    goto LAB_00f86a70;
  }
  local_8c = 2;
  iVar6 = 0;
  goto LAB_00f86ab4;
LAB_00f862d4:
  local_64 = (undefined *)0x0;
  ppppppuVar12 = *(uint *******)((uint)&local_68 | 4);
  local_60 = ppppppuVar7;
  if (ppppuVar14 == (uint ****)0x80000000) {
    ppppppuVar12 = &local_7c;
    pppppuVar23 = pppppuVar8;
LAB_00f8624c:
    pppppuVar23[(int)((int)ppppppuVar12 + 0x2d)] = ppppuVar18;
    unaff_r9 = ppppppuVar12;
  }
  else {
    uVar2 = *(ushort *)((int)pppppuVar23 + 0xe2);
    uVar16 = (uint)uVar2;
    uVar10 = ((undefined4 *)((uint)&local_68 | 4))[1];
    if (uVar16 < 0xb) {
      pppppuVar24 = pppppuVar23 + uVar10 * 4;
      if (uVar16 < uVar10 + 1) {
        pppppuVar24[1] = ppppuVar14;
        pppppuVar24[2] = (uint ****)pppppuVar8;
        *pppppuVar24 = (uint ****)ppppppuVar31;
        pppppuVar24[3] = ppppuVar5;
        ppppuVar13 = ppppuVar14;
      }
      else {
        unaff_r9 = (uint ******)(uVar16 - uVar10);
        FUN_016dd52c(pppppuVar23 + (uVar10 + 1) * 4,pppppuVar24,(int)unaff_r9 * 0x10);
        pppppuVar24[1] = ppppuVar14;
        pppppuVar24[2] = (uint ****)pppppuVar8;
        pppppuVar24[3] = ppppuVar5;
        pppppuVar23[uVar10 * 4] = (uint ****)ppppppuVar31;
        pppppuVar33 = (uint *****)0xf863c0;
        FUN_016dd52c(pppppuVar23 + uVar10 + 0x2e,pppppuVar23 + uVar10 + 0x2d,(int)unaff_r9 * 4);
        ppppuVar13 = extraout_r2;
        pppppuVar9 = extraout_r3_01;
      }
      ppppppuVar7 = &local_68;
      pppppuVar23[uVar10 + 0x2d] = ppppuVar18;
      *(ushort *)((int)pppppuVar23 + 0xe2) = uVar2 + 1;
      pppppuVar8 = (uint *****)0x80000000;
      ppppuVar22 = (uint ****)0x0;
      ppppppuVar12 = ppppppuVar31;
    }
    else {
      uVar16 = 4;
      unaff_r9 = (uint ******)0x0;
      if (4 < uVar10) {
        if (uVar10 == 5) {
          uVar16 = 5;
        }
        else {
          if (uVar10 == 6) {
            uVar16 = 5;
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 - 7;
            uVar16 = 6;
          }
          unaff_r9 = (uint ******)&DAT_00000001;
        }
      }
      pppppuVar33 = (uint *****)thunk_FUN_016d4a50(0xe4);
      if (pppppuVar33 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xe4);
      }
      *(undefined2 *)((int)pppppuVar33 + 0xe2) = 0;
      pppppuVar33[0x2c] = (uint ****)0x0;
      pppppuVar9 = pppppuVar23 + uVar16 * 4;
      local_d0 = *pppppuVar9;
      pppppuVar24 = (uint *****)pppppuVar9[1];
      uVar25 = (uint)*(ushort *)((int)pppppuVar23 + 0xe2) + ~uVar16;
      *(short *)((int)pppppuVar33 + 0xe2) = (short)uVar25;
      ppppuVar13 = pppppuVar9[2];
      if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar25,0xb,&DAT_018ac47c);
      }
      ppppuVar22 = pppppuVar9[3];
      local_c0 = pppppuVar23[uVar16 + 0x2d];
      FUN_016dd1aa(pppppuVar33,pppppuVar23 + (uVar16 + 1) * 4,uVar25 * 0x10);
      FUN_016dd1aa(pppppuVar33 + 0x2d,pppppuVar23 + uVar16 + 0x2e,uVar25 * 4);
      *(short *)((int)pppppuVar23 + 0xe2) = (short)uVar16;
      pppppuVar29 = pppppuVar33;
      if (unaff_r9 == (uint ******)0x0) {
        pppppuVar29 = pppppuVar23;
      }
      pppppuVar9 = pppppuVar29 + uVar10 * 4;
      uVar2 = *(ushort *)((int)pppppuVar29 + 0xe2);
      if (uVar10 < uVar2) {
        unaff_r9 = (uint ******)(uVar10 + 1);
        iVar15 = uVar2 - uVar10;
        FUN_016dd52c(pppppuVar29 + (int)unaff_r9 * 4,pppppuVar9,iVar15 * 0x10);
        pppppuVar9[1] = ppppuVar14;
        pppppuVar9[2] = (uint ****)pppppuVar8;
        pppppuVar9[3] = ppppuVar5;
        pppppuVar29[uVar10 * 4] = (uint ****)ppppppuVar31;
        FUN_016dd52c(pppppuVar29 + uVar10 + 0x2e,pppppuVar29 + uVar10 + 0x2d,iVar15 * 4);
        pppppuVar9 = extraout_r3_03;
      }
      else {
        pppppuVar9[1] = ppppuVar14;
        pppppuVar9[2] = (uint ****)pppppuVar8;
        *pppppuVar9 = (uint ****)ppppppuVar31;
        pppppuVar9[3] = ppppuVar5;
        pppppuVar9 = extraout_r3_02;
      }
      pppppuVar29[uVar10 + 0x2d] = ppppuVar18;
      *(ushort *)((int)pppppuVar29 + 0xe2) = uVar2 + 1;
      pppppuVar8 = (uint *****)0x0;
      ppppppuVar7 = (uint ******)&local_40;
      local_68 = pppppuVar24;
    }
    *ppppppuVar7 = pppppuVar8;
    if (local_68 != (uint *****)&DAT_80000000) {
      if ((uint *****)pppppuVar23[0x2c] == (uint *****)0x0) {
        local_dc = local_d0;
        pppppuVar9 = pppppuVar33;
        local_d8 = ppppuVar13;
        local_d4 = ppppuVar22;
      }
      else {
        local_d4 = (uint ****)0x0;
        ppppuVar18 = local_d0;
        pppppuVar8 = (uint *****)pppppuVar23[0x2c];
        do {
          pppppuVar24 = local_68;
          ppppppuVar31 = &local_68;
          if (local_40 != ppppppuVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
          }
          uVar16 = (uint)*(ushort *)((int)pppppuVar8 + 0xe2);
          uVar10 = (uint)*(ushort *)(pppppuVar23 + 0x38);
          if (uVar16 < 0xb) {
            pppppuVar29 = pppppuVar8 + uVar10 * 4;
            unaff_r9 = (uint ******)(uVar10 + 1);
            if (uVar10 < uVar16) {
              FUN_016dd52c(pppppuVar8 + (int)unaff_r9 * 4,pppppuVar29,(uVar16 - uVar10) * 0x10);
              iVar15 = (uVar16 - uVar10) * 4;
              pppppuVar8[uVar10 * 4] = ppppuVar18;
              pppppuVar29[1] = (uint ****)pppppuVar24;
              pppppuVar29[2] = ppppuVar13;
              pppppuVar29[3] = ppppuVar22;
              FUN_016dd52c(pppppuVar8 + uVar10 + 0x2e,pppppuVar8 + uVar10 + 0x2d,iVar15);
              pppppuVar8[uVar10 + 0x2d] = local_c0;
              FUN_016dd52c(pppppuVar8 + uVar10 + 0x3b,pppppuVar8 + uVar10 + 0x3a,iVar15);
              local_d0 = ppppuVar18;
            }
            else {
              pppppuVar8[uVar10 * 4] = ppppuVar18;
              pppppuVar29[1] = (uint ****)local_68;
              pppppuVar29[2] = ppppuVar13;
              pppppuVar29[3] = ppppuVar22;
              pppppuVar8[uVar10 + 0x2d] = local_c0;
            }
            *(short *)((int)pppppuVar8 + 0xe2) = (short)(uVar16 + 1);
            pppppuVar8[uVar10 + 0x3a] = (uint ****)pppppuVar33;
            ppppppuVar7 = (uint ******)&DAT_80000000;
            if (unaff_r9 < (uint ******)(uVar16 + 2)) {
              do {
                uVar25 = uVar10 + 1;
                ppppuVar18 = pppppuVar8[uVar10 + 0x3a];
                *(short *)(ppppuVar18 + 0x38) = (short)uVar25;
                ppppuVar18[0x2c] = (uint ***)pppppuVar8;
                uVar10 = uVar25;
              } while (uVar16 + 1 != uVar25);
            }
            pppppuVar8 = pppppuVar23;
          }
          else {
            unaff_r9 = (uint ******)&DAT_00000004;
            if (uVar10 < 5) {
LAB_00f86704:
              bVar34 = false;
            }
            else {
              if (uVar10 == 5) {
                unaff_r9 = (uint ******)&DAT_00000005;
                goto LAB_00f86704;
              }
              if (uVar10 == 6) {
                bVar34 = true;
                uVar10 = 0;
                unaff_r9 = (uint ******)&DAT_00000005;
              }
              else {
                uVar10 = uVar10 - 7;
                bVar34 = true;
                unaff_r9 = (uint ******)&DAT_00000006;
              }
            }
            pppppuVar9 = (uint *****)thunk_FUN_016d4a50(0x114);
            if (pppppuVar9 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x114);
            }
            *(undefined2 *)((int)pppppuVar9 + 0xe2) = 0;
            pppppuVar9[0x2c] = (uint ****)0x0;
            pppppuVar29 = pppppuVar8 + (int)unaff_r9 * 4;
            local_dc = *pppppuVar29;
            pppppuVar23 = (uint *****)pppppuVar29[1];
            uVar25 = (uint)*(ushort *)((int)pppppuVar8 + 0xe2) + ~(uint)unaff_r9;
            local_d8 = pppppuVar29[2];
            local_d4 = pppppuVar29[3];
            *(short *)((int)pppppuVar9 + 0xe2) = (short)uVar25;
            if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar25,0xb,&DAT_018ac47c);
            }
            local_e0 = pppppuVar8[(int)((int)unaff_r9 + 0x2d)];
            FUN_016dd1aa(pppppuVar9,pppppuVar8 + (int)((int)unaff_r9 + 1) * 4,uVar25 * 0x10);
            FUN_016dd1aa(pppppuVar9 + 0x2d,pppppuVar8 + (int)((int)unaff_r9 + 0x2e),uVar25 * 4);
            *(short *)((int)pppppuVar8 + 0xe2) = (short)unaff_r9;
            uVar25 = (uint)*(ushort *)((int)pppppuVar9 + 0xe2);
            iVar15 = uVar25 + 1;
            if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar15,0xc,&DAT_018ac48c);
            }
            if (uVar16 - (int)unaff_r9 != iVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            ppppppuVar7 = (uint ******)((int)ppppppuVar12 + 1);
            FUN_016dd1aa(pppppuVar9 + 0x39,pppppuVar8 + (int)((int)unaff_r9 + 0x3a),iVar15 * 4);
            uVar16 = 0;
            do {
              ppppuVar14 = (pppppuVar9 + 0x39)[uVar16];
              *(short *)(ppppuVar14 + 0x38) = (short)uVar16;
              ppppuVar14[0x2c] = (uint ***)pppppuVar9;
              if (uVar25 <= uVar16) break;
              uVar16 = uVar16 + 1;
            } while (uVar16 <= uVar25);
            pppppuVar29 = pppppuVar9;
            if (!bVar34) {
              pppppuVar29 = pppppuVar8;
            }
            pppppuVar19 = pppppuVar29 + uVar10 * 4;
            uVar16 = (uint)*(ushort *)((int)pppppuVar29 + 0xe2);
            if (uVar10 < uVar16) {
              FUN_016dd52c(pppppuVar29 + (uVar10 + 1) * 4,pppppuVar19,(uVar16 - uVar10) * 0x10);
              iVar15 = (uVar16 - uVar10) * 4;
              pppppuVar29[uVar10 * 4] = ppppuVar18;
              pppppuVar19[1] = (uint ****)pppppuVar24;
              pppppuVar19[2] = ppppuVar13;
              pppppuVar19[3] = ppppuVar22;
              FUN_016dd52c(pppppuVar29 + uVar10 + 0x2e,pppppuVar29 + uVar10 + 0x2d,iVar15);
              pppppuVar29[uVar10 + 0x2d] = local_c0;
              FUN_016dd52c(pppppuVar29 + uVar10 + 0x3b,pppppuVar29 + uVar10 + 0x3a,iVar15);
            }
            else {
              pppppuVar29[uVar10 * 4] = ppppuVar18;
              pppppuVar19[1] = (uint ****)pppppuVar24;
              pppppuVar19[2] = ppppuVar13;
              pppppuVar19[3] = ppppuVar22;
              pppppuVar29[uVar10 + 0x2d] = local_c0;
            }
            pppppuVar29[uVar10 + 0x3a] = (uint ****)pppppuVar33;
            *(short *)((int)pppppuVar29 + 0xe2) = (short)(uVar16 + 1);
            if (uVar10 + 1 < uVar16 + 2) {
              do {
                uVar25 = uVar10 + 1;
                ppppuVar14 = pppppuVar29[uVar10 + 0x3a];
                *(short *)(ppppuVar14 + 0x38) = (short)uVar25;
                ppppuVar14[0x2c] = (uint ***)pppppuVar29;
                uVar10 = uVar25;
              } while (uVar16 + 1 != uVar25);
            }
            ppppppuVar31 = (uint ******)&local_40;
            ppppppuVar12 = ppppppuVar7;
            local_d0 = ppppuVar18;
            local_68 = pppppuVar23;
          }
          *ppppppuVar31 = (uint *****)ppppppuVar7;
          if (local_68 == (uint *****)&DAT_80000000) goto LAB_00f862b8;
          pppppuVar24 = pppppuVar8 + 0x2c;
          local_c0 = local_e0;
          ppppuVar18 = local_dc;
          ppppuVar13 = local_d8;
          pppppuVar23 = pppppuVar8;
          pppppuVar8 = (uint *****)*pppppuVar24;
          ppppuVar22 = local_d4;
          pppppuVar33 = pppppuVar9;
        } while ((uint *****)*pppppuVar24 != (uint *****)0x0);
      }
      ppppppuVar7 = local_40;
      pppppuVar33 = local_68;
      ppppppuVar31 = local_78;
      pppppuVar8 = local_7c;
      if (local_7c == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      pppppuVar23 = (uint *****)thunk_FUN_016d4a50(0x114);
      if (pppppuVar23 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x114);
      }
      pppppuVar23[0x39] = (uint ****)pppppuVar8;
      *(undefined2 *)((int)pppppuVar23 + 0xe2) = 0;
      pppppuVar23[0x2c] = (uint ****)0x0;
      if ((uint ******)0xfffffffe < ppppppuVar31) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *(undefined2 *)(pppppuVar8 + 0x38) = 0;
      pppppuVar8[0x2c] = (uint ****)pppppuVar23;
      local_7c = pppppuVar23;
      local_78 = (uint ******)((int)ppppppuVar31 + 1);
      if (ppppppuVar7 != ppppppuVar31) {
        uVar17 = 0x30;
LAB_00f87114:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(local_b0,uVar17,local_ac);
      }
      uVar10 = (uint)*(ushort *)((int)pppppuVar23 + 0xe2);
      if (10 < uVar10) {
        uVar17 = 0x20;
        local_b0 = &DAT_00565dd0;
        local_ac = &DAT_018af428;
        goto LAB_00f87114;
      }
      uVar3 = (undefined2)(uVar10 + 1);
      *(undefined2 *)((int)pppppuVar23 + 0xe2) = uVar3;
      pppppuVar8 = pppppuVar23 + uVar10 * 4;
      *pppppuVar8 = local_dc;
      pppppuVar8[1] = (uint ****)pppppuVar33;
      pppppuVar8[2] = local_d8;
      pppppuVar8[3] = local_d4;
      (pppppuVar23 + 0x39)[uVar10 + 1] = (uint ****)pppppuVar9;
      pppppuVar23[uVar10 + 0x2d] = local_c0;
      *(undefined2 *)(pppppuVar9 + 0x38) = uVar3;
      pppppuVar9[0x2c] = (uint ****)pppppuVar23;
      local_e0 = local_c0;
    }
LAB_00f862b8:
    local_74 = local_74 + 1;
  }
  ppppuVar18 = ppppuVar21;
  if (ppppuVar21 == param_2 + param_3 * 0x5b) goto LAB_00f86a70;
  goto LAB_00f85fb0;
LAB_00f86a70:
  if ((param_1[5] & 1) == 0) {
    uVar16 = *param_1;
    uVar10 = local_8c + 4;
    if (uVar16 < uVar10) {
      iVar15 = 0;
      do {
        iVar26 = (int)param_2 + iVar15;
        bVar1 = *(byte *)(iVar26 + 0x146);
        bVar34 = (bVar1 & 0x80) == 0;
        if (bVar34) {
          bVar1 = *(byte *)(iVar26 + 0x14a);
        }
        if (bVar34 && (bVar1 & 0x80) == 0) {
          FUN_00f872d8(&local_68,uVar11,iVar26);
          unaff_r9 = local_60;
          puVar4 = local_64;
          piVar27 = (int *)(iVar26 + 0xb0);
          if (*(int *)(iVar26 + 0xb0) == -0x80000000) {
            piVar27 = (int *)"";
          }
          if (*(int *)(iVar26 + 0xa4) != -0x80000000) {
            piVar27 = (int *)(iVar26 + 0xa4);
          }
          thunk_FUN_00f99560(piVar27[1],piVar27[2]);
          FUN_00f99560(puVar4,unaff_r9);
          if (local_68 != (uint *****)0x0) {
            thunk_FUN_016d3fb4(puVar4);
          }
        }
        iVar15 = iVar15 + 0x16c;
      } while (iVar6 != iVar15);
    }
    else {
      iVar15 = 0;
      fVar36 = (float)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
      fVar37 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
      if (0.4 < fVar37 / fVar36) {
        do {
          iVar26 = (int)param_2 + iVar15;
          bVar1 = *(byte *)(iVar26 + 0x146);
          bVar34 = (bVar1 & 0x80) == 0;
          if (bVar34) {
            bVar1 = *(byte *)(iVar26 + 0x14a);
          }
          if (bVar34 && (bVar1 & 0x80) == 0) {
            FUN_00f872d8(&local_68,uVar11,iVar26);
            ppppppuVar31 = local_60;
            puVar4 = local_64;
            piVar27 = (int *)(iVar26 + 0xb0);
            if (*(int *)(iVar26 + 0xb0) == -0x80000000) {
              piVar27 = (int *)"";
            }
            if (*(int *)(iVar26 + 0xa4) != -0x80000000) {
              piVar27 = (int *)(iVar26 + 0xa4);
            }
            unaff_r9 = (uint ******)thunk_FUN_00f99560(piVar27[1],piVar27[2]);
            iVar26 = FUN_00f99560(puVar4,ppppppuVar31);
            if (local_68 != (uint *****)0x0) {
              thunk_FUN_016d3fb4(puVar4);
            }
            if ((undefined1 *)(uVar16 - uVar10) < (undefined1 *)(iVar26 + (int)unaff_r9))
            goto LAB_00f86fa0;
          }
          iVar15 = iVar15 + 0x16c;
        } while (iVar6 != iVar15);
      }
      else {
        do {
          iVar26 = (int)param_2 + iVar15;
          bVar1 = *(byte *)(iVar26 + 0x146);
          bVar34 = (bVar1 & 0x80) == 0;
          if (bVar34) {
            bVar1 = *(byte *)(iVar26 + 0x14a);
          }
          if (bVar34 && (bVar1 & 0x80) == 0) {
            FUN_00f872d8(&local_68,uVar11,iVar26);
            unaff_r9 = local_60;
            puVar4 = local_64;
            piVar27 = (int *)(iVar26 + 0xb0);
            if (*(int *)(iVar26 + 0xb0) == -0x80000000) {
              piVar27 = (int *)"";
            }
            if (*(int *)(iVar26 + 0xa4) != -0x80000000) {
              piVar27 = (int *)(iVar26 + 0xa4);
            }
            thunk_FUN_00f99560(piVar27[1],piVar27[2]);
            FUN_00f99560(puVar4,unaff_r9);
            if (local_68 != (uint *****)0x0) {
              thunk_FUN_016d3fb4(puVar4);
            }
          }
          iVar15 = iVar15 + 0x16c;
        } while (iVar6 != iVar15);
      }
    }
  }
  else {
    do {
      bVar1 = *(byte *)((int)param_2 + 0x146);
      bVar34 = (bVar1 & 0x80) == 0;
      if (bVar34) {
        bVar1 = *(byte *)((int)param_2 + 0x14a);
      }
      if (bVar34 && (bVar1 & 0x80) == 0) {
        FUN_00f872d8(&local_68,uVar11,param_2);
        if (local_68 != (uint *****)0x0) {
          thunk_FUN_016d3fb4(local_64);
        }
LAB_00f86fa0:
        iVar6 = 1;
        goto LAB_00f86ab4;
      }
      param_2 = param_2 + 0x5b;
      iVar6 = iVar6 + -0x16c;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
LAB_00f86ab4:
  local_44 = 0;
  local_4c = local_78;
  local_5c = local_78;
  local_48 = local_74;
  if (local_7c == (uint *****)0x0) {
    local_48 = 0;
  }
  local_50 = local_7c;
  local_60 = (uint ******)local_7c;
  local_68 = (uint *****)(uint)(local_7c != (uint *****)0x0);
  piVar27 = (int *)param_1[1];
  local_54 = 0;
  local_64 = (undefined *)0x0;
  local_58 = local_68;
  while( true ) {
    FUN_00f94874(&local_34,&local_68);
    ppppuVar18 = extraout_r2_00;
    ppppuVar21 = extraout_r1;
    if (local_34 != (uint ****)0x0) {
      ppppuVar18 = local_34 + (int)local_2c * 4;
      unaff_r9 = (uint ******)ppppuVar18[1];
      ppppuVar21 = local_2c;
    }
    if (local_34 == (uint ****)0x0 || unaff_r9 == (uint ******)&DAT_80000000) break;
    pppuVar20 = ppppuVar18[2];
    pppuVar28 = ppppuVar18[3];
    pppuVar30 = local_34[(int)ppppuVar21 + 0x2d];
    iVar15 = local_44 + 1;
    bVar34 = local_44 != 0;
    local_44 = iVar15;
    if (bVar34) {
      iVar15 = piVar27[2];
      if (*piVar27 == iVar15) {
        FUN_00f991dc(piVar27,iVar15,1,1,1);
        iVar15 = piVar27[2];
      }
      *(undefined1 *)(piVar27[1] + iVar15) = 10;
      piVar27[2] = iVar15 + 1;
    }
    FUN_00f872d8(&local_40,uVar11,pppuVar30);
    iVar15 = piVar27[2];
    pppuVar32 = pppuVar30 + 0x2c;
    if (pppuVar30[0x2c] == (uint **)0x80000000) {
      pppuVar32 = (uint ***)"";
    }
    if (pppuVar30[0x29] != (uint **)0x80000000) {
      pppuVar32 = pppuVar30 + 0x29;
    }
    if ((uint)(*piVar27 - iVar15) < 2) {
      FUN_00f991dc(piVar27,iVar15,2,1,1);
      iVar15 = piVar27[2];
    }
    iVar26 = iVar15 + 2;
    *(undefined2 *)(piVar27[1] + iVar15) = 0x2020;
    piVar27[2] = iVar26;
    if ((uint ***)(*piVar27 - iVar26) < pppuVar28) {
      FUN_00f991dc(piVar27,iVar26,pppuVar28,1,1);
      iVar26 = piVar27[2];
    }
    FUN_016dd1aa(piVar27[1] + iVar26,pppuVar20,pppuVar28);
    piVar27[2] = iVar26 + (int)pppuVar28;
    if (iVar6 == 0) {
      iVar15 = thunk_FUN_00f99560(pppuVar20,pppuVar28);
      uVar10 = (local_8c + 2) - iVar15;
      if (uVar10 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00565850,0x41,&DAT_01880444);
      }
      local_28 = (undefined2)uVar10;
      local_2c = (uint ****)0x0;
      local_30 = (uint *****)&DAT_0157d360;
      local_34 = (uint ****)&DAT_0056a308;
      FUN_00fa948c(piVar27,&DAT_0188042c,&DAT_00569a60,&local_34);
    }
    if (unaff_r9 != (uint ******)0x0) {
      thunk_FUN_016d3fb4(pppuVar20);
    }
    pppuVar20 = local_3c;
    FUN_00f87984(param_1,0,pppuVar32[1],pppuVar32[2],local_3c,local_38,iVar6,local_8c);
    if (local_40 != (uint ******)0x0) {
      thunk_FUN_016d3fb4(pppuVar20);
    }
  }
  while (FUN_00f94874(&local_34,&local_68), local_34 != (uint ****)0x0) {
    if (local_34[(int)local_2c * 4 + 1] != (uint ***)0x0) {
      thunk_FUN_016d3fb4(local_34[(int)local_2c * 4 + 2]);
    }
  }
  return;
}

