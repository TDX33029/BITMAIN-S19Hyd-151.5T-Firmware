// FUN_00f845fc @ 00f845fc size=5788 calls_out=20 calls_in=2
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f845fc(uint *param_1,int *param_2,int param_3,code *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint ****ppppuVar4;
  uint ***pppuVar5;
  undefined4 *puVar6;
  uint *****pppppuVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint *****pppppuVar11;
  uint ****ppppuVar12;
  int iVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  int *piVar17;
  uint *****pppppuVar18;
  uint *****extraout_r1;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  uint *****extraout_r3;
  uint *****extraout_r3_00;
  uint *****extraout_r3_01;
  uint *****extraout_r3_02;
  uint *****extraout_r3_03;
  uint *****pppppuVar23;
  uint ***pppuVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  int *piVar27;
  uint ****ppppuVar28;
  uint ****ppppuVar29;
  uint uVar30;
  uint *****pppppuVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint uVar34;
  uint *****extraout_r12;
  bool bVar35;
  bool bVar36;
  uint in_fpscr;
  float fVar37;
  float fVar38;
  uint *****local_dc;
  uint *****local_d8;
  uint ****local_d4;
  uint *****local_cc;
  uint *****local_c8;
  uint *****local_c4;
  uint *****local_c0;
  undefined *local_bc;
  undefined *local_b8;
  uint local_a0;
  uint *****local_8c;
  int local_88;
  uint *****local_84;
  uint *****local_80;
  int local_7c;
  uint ****local_78;
  uint ****local_74;
  uint *****local_70;
  uint *****local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint ****local_5c;
  uint ***local_58;
  uint *****local_54;
  uint ***local_50;
  undefined4 local_4c;
  uint *****local_48;
  undefined4 *local_44;
  uint *****local_40;
  code *local_3c;
  
  piVar17 = param_2 + param_3;
  bVar1 = *(byte *)((int)param_1 + 0x15);
  pppppuVar7 = (uint *****)(uint)bVar1;
  local_7c = 0;
  local_84 = (uint *****)0x0;
  local_a0 = 2;
  local_b8 = &DAT_018ac46c;
  local_bc = &DAT_00413115;
  pppppuVar18 = (uint *****)0x0;
  piVar27 = param_2;
LAB_00f84678:
  if (piVar27 != piVar17) {
    if ((bVar1 & 1) == 0) {
      while( true ) {
        piVar8 = piVar27 + 1;
        ppppuVar28 = (uint ****)*piVar27;
        pppppuVar18 = (uint *****)ppppuVar28[0x47];
        if ((((uint)pppppuVar18 & 4) == 0) &&
           (pppppuVar18 = (uint *****)((uint)pppppuVar18 & 0x1008),
           pppppuVar18 != (uint *****)0x1000)) break;
        piVar27 = piVar8;
        if (piVar8 == piVar17) goto LAB_00f85168;
      }
    }
    else {
      while( true ) {
        piVar8 = piVar27 + 1;
        ppppuVar28 = (uint ****)*piVar27;
        pppppuVar18 = (uint *****)ppppuVar28[0x47];
        if ((((uint)pppppuVar18 & 4) == 0) &&
           (pppppuVar18 = (uint *****)((uint)pppppuVar18 & 0x2008),
           pppppuVar18 != (uint *****)0x2000)) break;
        piVar27 = piVar8;
        if (piVar8 == piVar17) goto LAB_00f85168;
      }
    }
    local_4c = 0;
    local_50 = (uint ***)0x1;
    local_54 = (uint *****)0x0;
    local_3c = (code *)0x0;
    piVar27 = piVar27 + 1;
    local_40 = (uint *****)&DAT_60000020;
    local_44 = (undefined4 *)&DAT_01880494;
    local_48 = (uint *****)&local_54;
    iVar9 = FUN_00f9d654(ppppuVar28,&local_48);
    pppuVar24 = local_50;
    pppppuVar18 = local_54;
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                   &DAT_018804ac,&DAT_018af130);
    }
    uVar10 = FUN_00f99560(local_50,local_4c);
    if (pppppuVar18 != (uint *****)0x0) {
      thunk_FUN_016d3fb4(pppuVar24);
    }
    pppuVar24 = ppppuVar28[0x48];
    (*param_4)(&local_78,ppppuVar28);
    pppppuVar25 = local_6c;
    pppppuVar18 = local_70;
    ppppuVar12 = local_74;
    ppppuVar4 = local_78;
    if (pppuVar24 != (uint ***)0x0) {
      uVar10 = uVar10 + 4;
    }
    if (local_a0 < uVar10) {
      local_a0 = uVar10;
    }
    if (local_84 != (uint *****)0x0) {
      local_8c = local_80;
      pppppuVar15 = extraout_r3;
      local_c0 = local_84;
      do {
        pppppuVar11 = (uint *****)(uint)*(ushort *)((int)local_c0 + 0xe2);
        iVar9 = (int)pppppuVar11 << 4;
        pppppuVar26 = (uint *****)0x0;
        do {
          pppppuVar16 = pppppuVar26;
          if (iVar9 == 0) goto LAB_00f84874;
          ppppuVar12 = local_c0[(int)pppppuVar16 * 4];
          bVar36 = ppppuVar12 <= ppppuVar4;
          bVar35 = bVar36 && ppppuVar4 != ppppuVar12;
          if (ppppuVar4 == ppppuVar12) {
            pppppuVar26 = (uint *****)local_c0[(int)pppppuVar16 * 4 + 3];
            pppppuVar15 = pppppuVar26;
            if (pppppuVar25 < pppppuVar26) {
              pppppuVar15 = pppppuVar25;
            }
            iVar13 = FUN_016dd50a(pppppuVar18,local_c0[(int)pppppuVar16 * 4 + 2],pppppuVar15);
            if (iVar13 == 0) {
              iVar13 = (int)pppppuVar25 - (int)pppppuVar26;
            }
            bVar36 = -1 < iVar13;
            bVar35 = 0 < iVar13;
            pppppuVar15 = extraout_r3_00;
          }
          pppppuVar23 = (uint *****)(uint)bVar35;
          iVar9 = iVar9 + -0x10;
          pppppuVar26 = (uint *****)((int)pppppuVar16 + 1);
        } while ((int)pppppuVar23 - (uint)!bVar36 == 1);
        pppppuVar11 = pppppuVar16;
        if (((int)pppppuVar23 - (uint)!bVar36 & 0xff) == 0) {
          if (local_74 != (uint ****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar18);
            pppppuVar23 = extraout_r1;
          }
          goto LAB_00f848d4;
        }
LAB_00f84874:
        pppppuVar16 = local_6c;
        pppppuVar26 = local_70;
        ppppuVar12 = local_74;
        if (local_8c == (uint *****)0x0) goto LAB_00f84958;
        local_8c = (uint *****)((int)local_8c + -1);
        local_c0 = (uint *****)local_c0[(int)((int)pppppuVar11 + 0x39)];
      } while( true );
    }
    if (local_74 != (uint ****)0x80000000) {
      pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0xe4);
      if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xe4);
      }
      pppppuVar15[3] = (uint ****)pppppuVar25;
      *(undefined2 *)((int)pppppuVar15 + 0xe2) = 1;
      pppppuVar15[0x2c] = (uint ****)0x0;
      *pppppuVar15 = ppppuVar4;
      pppppuVar15[0x2d] = ppppuVar28;
      pppppuVar15[1] = ppppuVar12;
      pppppuVar15[2] = (uint ****)pppppuVar18;
      local_80 = (uint *****)0x0;
      local_84 = pppppuVar15;
      goto LAB_00f84948;
    }
    pppppuVar16 = (uint *****)&local_84;
    pppppuVar23 = (uint *****)0x0;
    local_c0 = local_70;
    goto LAB_00f848d4;
  }
LAB_00f85168:
  if (param_3 == 0) {
    uVar10 = 0;
    uVar34 = param_1[3];
  }
  else {
    param_3 = param_3 << 2;
    uVar34 = param_1[3];
    if ((param_1[5] & 1) != 0) {
LAB_00f851f0:
      uVar10 = *(uint *)(*param_2 + 0x11c);
      if ((uVar10 & 4) != 0) goto LAB_00f851e8;
      if ((uVar10 & 0x2000) == 0) {
        if (((uVar10 & 0x1000) != 0) && (pppppuVar18 = pppppuVar7, (bVar1 & 1) == 0))
        goto LAB_00f851e0;
      }
      else {
        bVar35 = (uVar10 & 0x1000) == 0;
        if (bVar35) {
          pppppuVar18 = pppppuVar7;
        }
        if (!bVar35 || ((uint)pppppuVar18 & 1) != 0) {
LAB_00f851e0:
          if ((uVar10 & 8) == 0) goto LAB_00f851e8;
        }
      }
      pppppuVar18 = pppppuVar7;
LAB_00f85220:
      FUN_00f8866c(&local_48,uVar34,pppppuVar18);
      if (local_48 != (uint *****)0x0) {
        thunk_FUN_016d3fb4(local_44);
      }
      uVar10 = 1;
      goto LAB_00f85434;
    }
    if ((bVar1 & 1) == 0) {
      uVar10 = *param_1;
      uVar32 = local_a0 + 4;
      if (uVar10 < uVar32) {
        do {
          iVar9 = *param_2;
          if (((*(uint *)(iVar9 + 0x11c) & 4) == 0) &&
             ((*(uint *)(iVar9 + 0x11c) & 0x1008) != 0x1000)) {
            FUN_00f8866c(&local_48,uVar34,0,iVar9);
            pppppuVar18 = local_40;
            puVar6 = local_44;
            uVar10 = *(uint *)(iVar9 + 0x11c);
            if ((uVar10 & 8) == 0) {
              piVar27 = (int *)(iVar9 + 0x108);
              if (*(int *)(iVar9 + 0x108) == -0x80000000) {
                piVar27 = (int *)"";
              }
              if (*(int *)(iVar9 + 0xfc) != -0x80000000) {
                piVar27 = (int *)(iVar9 + 0xfc);
              }
              thunk_FUN_00f99560(piVar27[1],piVar27[2]);
              FUN_00f99560(puVar6,pppppuVar18);
            }
            if (local_48 != (uint *****)0x0) {
              thunk_FUN_016d3fb4(puVar6);
            }
            if ((uVar10 & 8) != 0) goto LAB_00f85af4;
          }
          param_3 = param_3 + -4;
          param_2 = param_2 + 1;
        } while (param_3 != 0);
      }
      else {
        fVar37 = (float)VectorUnsignedToFloat(uVar32,(byte)(in_fpscr >> 0x16) & 3);
        fVar38 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
        do {
          iVar9 = *param_2;
          if (((*(uint *)(iVar9 + 0x11c) & 4) == 0) &&
             ((*(uint *)(iVar9 + 0x11c) & 0x1008) != 0x1000)) {
            FUN_00f8866c(&local_48,uVar34,0,iVar9);
            pppppuVar18 = local_40;
            puVar6 = local_44;
            bVar35 = true;
            if ((*(byte *)(iVar9 + 0x11c) & 8) == 0) {
              piVar27 = (int *)(iVar9 + 0x108);
              if (*(int *)(iVar9 + 0x108) == -0x80000000) {
                piVar27 = (int *)"";
              }
              if (*(int *)(iVar9 + 0xfc) != -0x80000000) {
                piVar27 = (int *)(iVar9 + 0xfc);
              }
              iVar9 = thunk_FUN_00f99560(piVar27[1],piVar27[2]);
              iVar13 = FUN_00f99560(puVar6,pppppuVar18);
              bVar35 = false;
              if ((0.4 < fVar37 / fVar38) && (uVar10 - uVar32 < (uint)(iVar13 + iVar9))) {
                bVar35 = true;
              }
            }
            if (local_48 != (uint *****)0x0) {
              thunk_FUN_016d3fb4(puVar6);
            }
            if (bVar35) goto LAB_00f85af4;
          }
          param_3 = param_3 + -4;
          param_2 = param_2 + 1;
        } while (param_3 != 0);
      }
    }
    else {
      do {
        if (((*(uint *)(*param_2 + 0x11c) & 4) == 0) &&
           ((*(uint *)(*param_2 + 0x11c) & 0x2008) != 0x2000)) {
          pppppuVar18 = (uint *****)&DAT_00000001;
          goto LAB_00f85220;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + -4;
      } while (param_3 != 0);
    }
LAB_00f85428:
    uVar10 = 0;
  }
LAB_00f85434:
  pppppuVar18 = (uint *****)0x0;
  bVar35 = (bVar1 & 1) != 0;
  iVar9 = 0xfc;
  if (bVar35) {
    iVar9 = 0x108;
  }
  piVar27 = (int *)param_1[1];
  pppuVar24 = (uint ***)(uVar34 + 0x2a);
  iVar13 = 0x108;
  if (bVar35) {
    iVar13 = 0xfc;
  }
  iVar21 = local_7c;
  if (local_84 == (uint *****)0x0) {
    iVar21 = 0;
  }
  bVar35 = local_84 != (uint *****)0x0;
  local_88 = 0;
  pppppuVar15 = local_84;
  pppppuVar25 = local_80;
  do {
    if (iVar21 == 0) {
      FUN_00f993bc(&local_84);
      return;
    }
    if (!bVar35) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a9ff4);
    }
    if (pppppuVar18 == (uint *****)0x0) {
      pppppuVar11 = (uint *****)0x0;
      pppppuVar18 = pppppuVar15;
      for (; pppppuVar25 != (uint *****)0x0; pppppuVar25 = (uint *****)((int)pppppuVar25 + -1)) {
        pppppuVar18 = (uint *****)pppppuVar18[0x39];
      }
      pppppuVar15 = (uint *****)0x0;
      if (*(short *)((int)pppppuVar18 + 0xe2) != 0) goto LAB_00f85508;
LAB_00f85538:
      do {
        pppppuVar26 = (uint *****)pppppuVar18[0x2c];
        if (pppppuVar26 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        pppppuVar11 = (uint *****)(uint)*(ushort *)(pppppuVar18 + 0x38);
        pppppuVar15 = (uint *****)((int)pppppuVar15 + 1);
        pppppuVar18 = pppppuVar26;
      } while ((uint *****)(uint)*(ushort *)((int)pppppuVar26 + 0xe2) <= pppppuVar11);
    }
    else {
      pppppuVar11 = pppppuVar25;
      if ((uint *****)(uint)*(ushort *)((int)pppppuVar18 + 0xe2) <= pppppuVar25) goto LAB_00f85538;
LAB_00f85508:
      pppppuVar26 = pppppuVar18;
    }
    if (pppppuVar15 == (uint *****)0x0) {
      pppppuVar25 = (uint *****)((int)pppppuVar11 + 1);
      pppppuVar18 = pppppuVar26;
    }
    else {
      pppppuVar25 = pppppuVar26 + (int)((int)pppppuVar11 + 0x3a);
      do {
        pppppuVar18 = (uint *****)*pppppuVar25;
        pppppuVar15 = (uint *****)((int)pppppuVar15 + -1);
        pppppuVar25 = pppppuVar18 + 0x39;
      } while (pppppuVar15 != (uint *****)0x0);
      pppppuVar25 = (uint *****)0x0;
    }
    if (local_88 != 0) {
      iVar22 = piVar27[2];
      if (*piVar27 == iVar22) {
        FUN_00f991dc(piVar27,iVar22,1,1,1);
        iVar22 = piVar27[2];
      }
      *(undefined1 *)(piVar27[1] + iVar22) = 10;
      iVar22 = iVar22 + 1;
      piVar27[2] = iVar22;
      if ((uVar10 & (uint)pppppuVar7) != 0) {
        if (*piVar27 == iVar22) {
          FUN_00f991dc(piVar27,iVar22,1,1,1);
          iVar22 = piVar27[2];
        }
        *(undefined1 *)(piVar27[1] + iVar22) = 10;
        piVar27[2] = iVar22 + 1;
      }
    }
    ppppuVar28 = pppppuVar26[(int)((int)pppppuVar11 + 0x2d)];
    FUN_00f8866c(&local_68,uVar34,pppppuVar7,ppppuVar28);
    iVar22 = piVar27[2];
    if ((uint)(*piVar27 - iVar22) < 2) {
      FUN_00f991dc(piVar27,iVar22,2,1,1);
      iVar22 = piVar27[2];
    }
    iVar19 = iVar22 + 2;
    piVar27[2] = iVar19;
    *(undefined2 *)(piVar27[1] + iVar22) = 0x2020;
    local_5c = &local_58;
    pppppuVar11 = (uint *****)ppppuVar28[0xd];
    pppppuVar15 = (uint *****)ppppuVar28[0x48];
    local_58 = pppuVar24;
    if (pppppuVar11 == (uint *****)&DAT_00110000) {
      if (pppppuVar15 == (uint *****)0x0) goto LAB_00f857a0;
      if ((uint)(*piVar27 - iVar19) < 4) {
        FUN_00f991dc(piVar27,iVar19,4,1,1);
        iVar19 = piVar27[2];
      }
      *(undefined4 *)(piVar27[1] + iVar19) = 0x20202020;
      piVar27[2] = iVar19 + 4;
      local_5c = &local_58;
      local_50 = ppppuVar28[0x49];
      local_58 = pppuVar24;
      local_54 = pppppuVar15;
LAB_00f85754:
      local_40 = (uint *****)&local_54;
      local_48 = &local_5c;
      local_3c = (code *)&DAT_0157d360;
      local_44 = (undefined4 *)&DAT_00fa02fc;
      FUN_00fa948c(piVar27,&DAT_0188042c,&DAT_0035dbd8,&local_48);
      bVar35 = false;
    }
    else {
      local_3c = FUN_00faaf34;
      local_40 = (uint *****)&local_54;
      local_44 = (undefined4 *)&DAT_00fa02fc;
      local_48 = &local_5c;
      local_54 = pppppuVar11;
      FUN_00fa948c(piVar27,&DAT_0188042c,&DAT_0035dbcc,&local_48);
      local_5c = &local_58;
      if (pppppuVar15 != (uint *****)0x0) {
        local_50 = ppppuVar28[0x49];
        iVar22 = piVar27[2];
        local_58 = pppuVar24;
        local_54 = pppppuVar15;
        if ((uint)(*piVar27 - iVar22) < 2) {
          FUN_00f991dc(piVar27,iVar22,2,1,1);
          iVar22 = piVar27[2];
        }
        piVar27[2] = iVar22 + 2;
        *(undefined2 *)(piVar27[1] + iVar22) = 0x202c;
        goto LAB_00f85754;
      }
LAB_00f857a0:
      local_5c = &local_58;
      bVar35 = true;
      local_58 = pppuVar24;
    }
    FUN_00f9caac(&local_48,ppppuVar28,uVar34,2);
    pppppuVar15 = local_40;
    puVar6 = local_44;
    iVar22 = piVar27[2];
    if ((uint *****)(*piVar27 - iVar22) < local_40) {
      FUN_00f991dc(piVar27,iVar22,local_40,1,1);
      iVar22 = piVar27[2];
    }
    FUN_016dd1aa(piVar27[1] + iVar22,puVar6,pppppuVar15);
    piVar27[2] = (int)(iVar22 + (int)pppppuVar15);
    if (local_48 != (uint *****)0x0) {
      thunk_FUN_016d3fb4(puVar6);
    }
    if (uVar10 == 0 && (bVar1 & 1) == 0) {
      if ((bool)(pppppuVar11 == (uint *****)&DAT_00110000 & bVar35)) {
        local_4c = 0;
        local_54 = (uint *****)0x0;
        local_3c = (code *)0x0;
        local_50 = (uint ***)0x1;
        local_40 = (uint *****)&DAT_60000020;
        local_44 = (undefined4 *)&DAT_01880494;
        local_48 = (uint *****)&local_54;
        iVar22 = FUN_00f9d654(ppppuVar28,&local_48);
        pppuVar5 = local_50;
        pppppuVar15 = local_54;
        if (iVar22 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                       &DAT_018804ac,&DAT_018af130);
        }
        iVar22 = FUN_00f99560(local_50,local_4c);
        if (pppppuVar15 != (uint *****)0x0) {
          thunk_FUN_016d3fb4(pppuVar5);
        }
        iVar19 = local_a0 + 2;
      }
      else {
        local_4c = 0;
        local_54 = (uint *****)0x0;
        local_3c = (code *)0x0;
        local_50 = (uint ***)0x1;
        local_40 = (uint *****)&DAT_60000020;
        local_44 = (undefined4 *)&DAT_01880494;
        local_48 = (uint *****)&local_54;
        iVar22 = FUN_00f9d654(ppppuVar28,&local_48);
        pppuVar5 = local_50;
        pppppuVar15 = local_54;
        if (iVar22 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                       &DAT_018804ac,&DAT_018af130);
        }
        iVar22 = FUN_00f99560(local_50,local_4c);
        if (pppppuVar15 != (uint *****)0x0) {
          thunk_FUN_016d3fb4(pppuVar5);
        }
        iVar19 = 2;
        if (bVar35) {
          iVar19 = 6;
        }
        iVar19 = (local_a0 - 4) + iVar19;
      }
      uVar32 = iVar19 - iVar22;
      if (0xffff < uVar32) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00565850,0x41,&DAT_01880444);
      }
    }
    else {
      uVar32 = 0;
    }
    local_3c = (code *)CONCAT22(local_3c._2_2_,(short)uVar32);
    local_40 = (uint *****)0x0;
    local_44 = &DAT_0157d360;
    local_48 = (uint *****)&DAT_0056a308;
    FUN_00fa948c(piVar27,&DAT_0188042c,&DAT_00569a60,&local_48);
    uVar20 = local_64;
    piVar17 = (int *)((int)ppppuVar28 + iVar13);
    if (*(int *)((int)ppppuVar28 + iVar13) == -0x80000000) {
      piVar17 = (int *)"";
    }
    if (*(int *)((int)ppppuVar28 + iVar9) != -0x80000000) {
      piVar17 = (int *)((int)ppppuVar28 + iVar9);
    }
    FUN_00f87984(param_1,ppppuVar28,piVar17[1],piVar17[2],local_64,local_60,uVar10,local_a0);
    if (local_68 != 0) {
      thunk_FUN_016d3fb4(uVar20);
    }
    bVar35 = true;
    local_88 = local_88 + 1;
    iVar21 = iVar21 + -1;
    pppppuVar15 = (uint *****)0x0;
  } while( true );
LAB_00f85af4:
  uVar10 = 1;
  goto LAB_00f85434;
LAB_00f851e8:
  param_3 = param_3 + -4;
  param_2 = param_2 + 1;
  if (param_3 == 0) goto LAB_00f85428;
  goto LAB_00f851f0;
LAB_00f84958:
  local_44 = (undefined4 *)0x0;
  pppppuVar25 = *(uint ******)((uint)&local_48 | 4);
  local_40 = pppppuVar11;
  if (local_74 == (uint ****)0x80000000) {
    pppppuVar16 = (uint *****)&local_84;
    pppppuVar23 = (uint *****)0x0;
    local_c0 = local_70;
LAB_00f848d4:
    local_c0[(int)((int)pppppuVar16 + 0x2d)] = ppppuVar28;
    pppppuVar18 = pppppuVar23;
    goto LAB_00f84678;
  }
  uVar2 = *(ushort *)((int)local_c0 + 0xe2);
  puVar33 = (undefined1 *)(uint)uVar2;
  pppppuVar11 = (uint *****)((undefined4 *)((uint)&local_48 | 4))[1];
  if (puVar33 < (undefined1 *)0xb) {
    pppppuVar18 = local_c0 + (int)pppppuVar11 * 4;
    if (puVar33 < (undefined1 *)((int)pppppuVar11 + 1)) {
      *pppppuVar18 = ppppuVar4;
      pppppuVar18[1] = local_74;
      pppppuVar18[2] = (uint ****)local_70;
      pppppuVar18[3] = (uint ****)local_6c;
      pppppuVar25 = local_6c;
    }
    else {
      FUN_016dd52c(local_c0 + ((int)pppppuVar11 + 1) * 4,pppppuVar18,
                   ((int)puVar33 - (int)pppppuVar11) * 0x10);
      local_c0[(int)pppppuVar11 * 4] = ppppuVar4;
      pppppuVar18[1] = ppppuVar12;
      pppppuVar18[2] = (uint ****)pppppuVar26;
      pppppuVar18[3] = (uint ****)pppppuVar16;
      FUN_016dd52c(local_c0 + (int)((int)pppppuVar11 + 0x2e),
                   local_c0 + (int)((int)pppppuVar11 + 0x2d),((int)puVar33 - (int)pppppuVar11) * 4);
      pppppuVar15 = extraout_r3_01;
      pppppuVar25 = extraout_r12;
    }
    pppppuVar18 = (uint *****)&local_48;
    local_c0[(int)((int)pppppuVar11 + 0x2d)] = ppppuVar28;
    ppppuVar29 = (uint ****)0x0;
    *(ushort *)((int)local_c0 + 0xe2) = uVar2 + 1;
    ppppuVar28 = (uint ****)0x80000000;
  }
  else {
    uVar10 = 4;
    bVar35 = false;
    local_8c = pppppuVar11;
    if (&DAT_00000004 < pppppuVar11) {
      if (pppppuVar11 == (uint *****)&DAT_00000005) {
        uVar10 = 5;
      }
      else {
        if (pppppuVar11 == (uint *****)&DAT_00000006) {
          uVar10 = 5;
          local_8c = (uint *****)0x0;
        }
        else {
          local_8c = (uint *****)((int)pppppuVar11 + -7);
          uVar10 = 6;
        }
        bVar35 = true;
      }
    }
    pppppuVar11 = (uint *****)thunk_FUN_016d4a50(0xe4);
    if (pppppuVar11 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xe4);
    }
    *(undefined2 *)((int)pppppuVar11 + 0xe2) = 0;
    pppppuVar11[0x2c] = (uint ****)0x0;
    pppppuVar18 = local_c0 + uVar10 * 4;
    local_c4 = (uint *****)*pppppuVar18;
    local_dc = (uint *****)pppppuVar18[1];
    uVar34 = (uint)*(ushort *)((int)local_c0 + 0xe2) + ~uVar10;
    *(short *)((int)pppppuVar11 + 0xe2) = (short)uVar34;
    local_cc = (uint *****)pppppuVar18[2];
    if (0xb < uVar34) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar34,0xb,&DAT_018ac47c);
    }
    ppppuVar29 = pppppuVar18[3];
    local_c8 = (uint *****)local_c0[uVar10 + 0x2d];
    FUN_016dd1aa(pppppuVar11,local_c0 + (uVar10 + 1) * 4,uVar34 * 0x10);
    FUN_016dd1aa(pppppuVar11 + 0x2d,local_c0 + uVar10 + 0x2e,uVar34 * 4);
    *(short *)((int)local_c0 + 0xe2) = (short)uVar10;
    pppppuVar23 = pppppuVar11;
    if (!bVar35) {
      pppppuVar23 = local_c0;
    }
    uVar2 = *(ushort *)((int)pppppuVar23 + 0xe2);
    pppppuVar18 = pppppuVar23 + (int)local_8c * 4;
    if (local_8c < (uint *****)(uint)uVar2) {
      iVar9 = (int)(uint)uVar2 - (int)local_8c;
      FUN_016dd52c(pppppuVar23 + (int)((int)local_8c + 1) * 4,pppppuVar18,iVar9 * 0x10);
      pppppuVar23[(int)local_8c * 4] = ppppuVar4;
      pppppuVar18[1] = ppppuVar12;
      pppppuVar18[2] = (uint ****)pppppuVar26;
      pppppuVar18[3] = (uint ****)pppppuVar16;
      FUN_016dd52c(pppppuVar23 + (int)((int)local_8c + 0x2e),
                   pppppuVar23 + (int)((int)local_8c + 0x2d),iVar9 * 4);
      pppppuVar15 = extraout_r3_03;
    }
    else {
      *pppppuVar18 = ppppuVar4;
      pppppuVar18[1] = ppppuVar12;
      pppppuVar18[2] = (uint ****)pppppuVar26;
      pppppuVar18[3] = (uint ****)pppppuVar16;
      pppppuVar15 = extraout_r3_02;
    }
    pppppuVar18 = (uint *****)&local_54;
    pppppuVar23[(int)((int)local_8c + 0x2d)] = ppppuVar28;
    *(ushort *)((int)pppppuVar23 + 0xe2) = uVar2 + 1;
    ppppuVar28 = (uint ****)0x0;
    local_d8 = pppppuVar26;
    local_48 = local_dc;
  }
  *pppppuVar18 = ppppuVar28;
  if (local_48 == (uint *****)&DAT_80000000) {
LAB_00f84948:
    local_7c = local_7c + 1;
    goto LAB_00f84678;
  }
  pppppuVar26 = (uint *****)local_c0[0x2c];
  if (pppppuVar26 == (uint *****)0x0) {
    local_8c = local_cc;
    local_d4 = ppppuVar29;
  }
  else {
    local_d4 = (uint ****)0x0;
    pppppuVar16 = local_cc;
    do {
      pppppuVar18 = local_48;
      if (local_54 != pppppuVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
      }
      uVar34 = (uint)*(ushort *)((int)pppppuVar26 + 0xe2);
      uVar10 = (uint)*(ushort *)(local_c0 + 0x38);
      if (uVar34 < 0xb) {
        pppppuVar23 = pppppuVar26 + uVar10 * 4;
        if (uVar10 < uVar34) {
          FUN_016dd52c(pppppuVar26 + (uVar10 + 1) * 4,pppppuVar23,(uVar34 - uVar10) * 0x10);
          pppppuVar26[uVar10 * 4] = (uint ****)local_c4;
          pppppuVar23[1] = (uint ****)pppppuVar18;
          pppppuVar23[3] = ppppuVar29;
          pppppuVar23[2] = (uint ****)pppppuVar16;
          iVar9 = (uVar34 - uVar10) * 4;
          FUN_016dd52c(pppppuVar26 + uVar10 + 0x2e,pppppuVar26 + uVar10 + 0x2d,iVar9);
          pppppuVar26[uVar10 + 0x2d] = (uint ****)local_c8;
          FUN_016dd52c(pppppuVar26 + uVar10 + 0x3b,pppppuVar26 + uVar10 + 0x3a,iVar9);
          local_cc = pppppuVar16;
        }
        else {
          pppppuVar26[uVar10 * 4] = (uint ****)local_c4;
          pppppuVar23[2] = (uint ****)pppppuVar16;
          pppppuVar23[1] = (uint ****)local_48;
          pppppuVar23[3] = ppppuVar29;
          pppppuVar26[uVar10 + 0x2d] = (uint ****)local_c8;
        }
        *(short *)((int)pppppuVar26 + 0xe2) = (short)(uVar34 + 1);
        pppppuVar26[uVar10 + 0x3a] = (uint ****)pppppuVar11;
        pppppuVar14 = (uint *****)&DAT_80000000;
        if (uVar10 + 1 < uVar34 + 2) {
          do {
            uVar32 = uVar10 + 1;
            ppppuVar28 = pppppuVar26[uVar10 + 0x3a];
            *(short *)(ppppuVar28 + 0x38) = (short)uVar32;
            ppppuVar28[0x2c] = (uint ***)pppppuVar26;
            uVar10 = uVar32;
          } while (uVar34 + 1 != uVar32);
        }
        pppppuVar18 = (uint *****)&local_48;
        pppppuVar11 = pppppuVar15;
      }
      else {
        bVar35 = false;
        uVar32 = 4;
        if (4 < uVar10) {
          if (uVar10 == 5) {
            uVar32 = 5;
          }
          else if (uVar10 == 6) {
            bVar35 = true;
            uVar10 = 0;
            uVar32 = 5;
          }
          else {
            uVar10 = uVar10 - 7;
            bVar35 = true;
            uVar32 = 6;
          }
        }
        pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0x114);
        if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x114);
        }
        *(undefined2 *)((int)pppppuVar15 + 0xe2) = 0;
        pppppuVar15[0x2c] = (uint ****)0x0;
        pppppuVar14 = pppppuVar26 + uVar32 * 4;
        local_d8 = (uint *****)*pppppuVar14;
        pppppuVar23 = (uint *****)pppppuVar14[1];
        local_8c = (uint *****)pppppuVar14[2];
        local_d4 = pppppuVar14[3];
        uVar30 = (uint)*(ushort *)((int)pppppuVar26 + 0xe2) + ~uVar32;
        *(short *)((int)pppppuVar15 + 0xe2) = (short)uVar30;
        if (0xb < uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar30,0xb,&DAT_018ac47c);
        }
        local_dc = (uint *****)pppppuVar26[uVar32 + 0x2d];
        FUN_016dd1aa(pppppuVar15,pppppuVar26 + (uVar32 + 1) * 4,uVar30 * 0x10);
        FUN_016dd1aa(pppppuVar15 + 0x2d,pppppuVar26 + uVar32 + 0x2e,uVar30 * 4);
        *(short *)((int)pppppuVar26 + 0xe2) = (short)uVar32;
        uVar30 = (uint)*(ushort *)((int)pppppuVar15 + 0xe2);
        iVar9 = uVar30 + 1;
        if (0xb < uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar9,0xc,&DAT_018ac48c);
        }
        if (uVar34 - uVar32 != iVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        pppppuVar14 = (uint *****)((int)pppppuVar25 + 1);
        FUN_016dd1aa(pppppuVar15 + 0x39,pppppuVar26 + uVar32 + 0x3a,iVar9 * 4);
        uVar34 = 0;
        do {
          ppppuVar28 = (pppppuVar15 + 0x39)[uVar34];
          *(short *)(ppppuVar28 + 0x38) = (short)uVar34;
          ppppuVar28[0x2c] = (uint ***)pppppuVar15;
          if (uVar30 <= uVar34) break;
          uVar34 = uVar34 + 1;
        } while (uVar34 <= uVar30);
        pppppuVar25 = pppppuVar15;
        if (!bVar35) {
          pppppuVar25 = pppppuVar26;
        }
        pppppuVar31 = pppppuVar25 + uVar10 * 4;
        uVar34 = (uint)*(ushort *)((int)pppppuVar25 + 0xe2);
        if (uVar10 < uVar34) {
          FUN_016dd52c(pppppuVar25 + (uVar10 + 1) * 4,pppppuVar31,(uVar34 - uVar10) * 0x10);
          pppppuVar25[uVar10 * 4] = (uint ****)local_c4;
          pppppuVar31[1] = (uint ****)pppppuVar18;
          pppppuVar31[2] = (uint ****)pppppuVar16;
          pppppuVar31[3] = ppppuVar29;
          iVar9 = (uVar34 - uVar10) * 4;
          FUN_016dd52c(pppppuVar25 + uVar10 + 0x2e,pppppuVar25 + uVar10 + 0x2d,iVar9);
          pppppuVar25[uVar10 + 0x2d] = (uint ****)local_c8;
          FUN_016dd52c(pppppuVar25 + uVar10 + 0x3b,pppppuVar25 + uVar10 + 0x3a,iVar9);
        }
        else {
          pppppuVar25[uVar10 * 4] = (uint ****)local_c4;
          pppppuVar31[1] = (uint ****)pppppuVar18;
          pppppuVar31[2] = (uint ****)pppppuVar16;
          pppppuVar31[3] = ppppuVar29;
          pppppuVar25[uVar10 + 0x2d] = (uint ****)local_c8;
        }
        pppppuVar25[uVar10 + 0x3a] = (uint ****)pppppuVar11;
        *(short *)((int)pppppuVar25 + 0xe2) = (short)(uVar34 + 1);
        if (uVar10 + 1 < uVar34 + 2) {
          do {
            uVar32 = uVar10 + 1;
            ppppuVar28 = pppppuVar25[uVar10 + 0x3a];
            *(short *)(ppppuVar28 + 0x38) = (short)uVar32;
            ppppuVar28[0x2c] = (uint ***)pppppuVar25;
            uVar10 = uVar32;
          } while (uVar34 + 1 != uVar32);
        }
        pppppuVar18 = (uint *****)&local_54;
        pppppuVar11 = pppppuVar15;
        pppppuVar25 = pppppuVar14;
        local_cc = pppppuVar16;
        local_c0 = pppppuVar26;
        local_48 = pppppuVar23;
      }
      *pppppuVar18 = (uint ****)pppppuVar14;
      if (local_48 == (uint *****)&DAT_80000000) {
        goto LAB_00f84948;
      }
      pppppuVar26 = (uint *****)local_c0[0x2c];
      local_c8 = local_dc;
      local_c4 = local_d8;
      pppppuVar16 = local_8c;
      pppppuVar15 = pppppuVar11;
      ppppuVar29 = local_d4;
    } while (pppppuVar26 != (uint *****)0x0);
  }
  pppppuVar26 = local_48;
  pppppuVar15 = local_54;
  pppppuVar25 = local_80;
  pppppuVar18 = local_84;
  if (local_84 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac44c);
  }
  pppppuVar16 = (uint *****)thunk_FUN_016d4a50(0x114);
  if (pppppuVar16 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x114);
  }
  pppppuVar16[0x39] = (uint ****)pppppuVar18;
  *(undefined2 *)((int)pppppuVar16 + 0xe2) = 0;
  pppppuVar16[0x2c] = (uint ****)0x0;
  if ((uint *****)0xfffffffe < pppppuVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(pppppuVar18 + 0x38) = 0;
  pppppuVar18[0x2c] = (uint ****)pppppuVar16;
  local_84 = pppppuVar16;
  local_80 = (uint *****)((int)pppppuVar25 + 1);
  if (pppppuVar15 == pppppuVar25) {
    uVar10 = (uint)*(ushort *)((int)pppppuVar16 + 0xe2);
    if (uVar10 < 0xb) {
      uVar3 = (undefined2)(uVar10 + 1);
      *(undefined2 *)((int)pppppuVar16 + 0xe2) = uVar3;
      pppppuVar18 = pppppuVar16 + uVar10 * 4;
      *pppppuVar18 = (uint ****)local_c4;
      pppppuVar18[1] = (uint ****)pppppuVar26;
      pppppuVar18[2] = (uint ****)local_8c;
      pppppuVar18[3] = local_d4;
      (pppppuVar16 + 0x39)[uVar10 + 1] = (uint ****)pppppuVar11;
      pppppuVar18 = pppppuVar16 + uVar10;
      pppppuVar18[0x2d] = (uint ****)local_c8;
      *(undefined2 *)(pppppuVar11 + 0x38) = uVar3;
      pppppuVar11[0x2c] = (uint ****)pppppuVar16;
      local_dc = local_c8;
      local_d8 = local_c4;
      goto LAB_00f84948;
    }
    uVar20 = 0x20;
    local_bc = &DAT_00565dd0;
    local_b8 = &DAT_018af428;
  }
  else {
    uVar20 = 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(local_bc,uVar20,local_b8);
}

