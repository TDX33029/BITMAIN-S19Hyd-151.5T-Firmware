// FUN_00f9eb7c @ 00f9eb7c size=5304 calls_out=18 calls_in=1
// strings: 

void FUN_00f9eb7c(int *param_1,int *param_2,int **param_3,int param_4,int param_5)

{
  byte bVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int **ppiVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int **extraout_r1;
  int **ppiVar15;
  int iVar16;
  int **extraout_r2;
  int **extraout_r2_00;
  int **extraout_r2_01;
  int **extraout_r2_02;
  int **extraout_r2_03;
  int **extraout_r2_04;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int **ppiVar20;
  uint *puVar21;
  int *piVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  int *piVar28;
  int iVar29;
  undefined4 *puVar30;
  uint uVar31;
  int iVar32;
  int **ppiVar33;
  int **ppiVar34;
  int **ppiVar35;
  int *piVar36;
  int iVar37;
  int **ppiVar38;
  int iVar39;
  bool bVar40;
  undefined8 uVar41;
  int **local_ec;
  int **local_e4;
  int **local_e0;
  int *local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  int *local_cc;
  int local_c8;
  int *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int **local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int **local_98;
  int **local_94;
  int **local_90;
  undefined1 auStack_8c [12];
  int *local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  int **local_70;
  int local_6c;
  int **local_68;
  int **local_64;
  int **local_60;
  int **local_5c;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int local_3c;
  int *local_38;
  uint local_34;
  int **local_30;
  int **local_2c;
  int **local_28;
  
  iVar39 = *param_1;
  iVar12 = param_1[1];
  local_dc = &local_d8;
  iVar16 = iVar12 + 0x2a;
  local_d0 = iVar12 + 0x38;
  local_d4 = &local_d0;
  if (*(int *)(iVar39 + 0xf8) == -0x80000000) {
    if (*(int *)(iVar39 + 0x98) == -0x80000000) {
      local_cc = *(int **)(iVar39 + 0x11c);
      local_c8 = *(int *)(iVar39 + 0x120);
    }
    else {
      local_cc = *(int **)(iVar39 + 0x9c);
      local_c8 = *(int *)(iVar39 + 0xa0);
    }
  }
  else {
    local_cc = *(int **)(iVar39 + 0xfc);
    local_c8 = *(int *)(iVar39 + 0x100);
  }
  local_d8 = iVar16;
  if (local_c8 != 0) {
    local_60 = &local_cc;
    local_68 = &local_dc;
    local_5c = (int **)&DAT_0157d360;
    local_64 = (int **)&DAT_00fa02fc;
    FUN_00fa948c(param_2,&DAT_01880954,&DAT_0035dc14,&local_68);
  }
  if (param_4 != 0) {
LAB_00f9ee54:
    local_c4 = &local_c0;
    piVar18 = (int *)param_1[2];
    piVar4 = piVar18;
    local_c0 = iVar16;
    if (piVar18 == (int *)0x0) {
      piVar4 = &local_bc;
      FUN_00f8f0c0(piVar4,iVar39);
    }
    iVar16 = piVar4[2];
    iVar26 = piVar4[1];
    local_a8 = 0;
    local_ac = (int **)&DAT_00000004;
    local_b0 = 0;
    if (iVar16 != 0) {
      iVar13 = iVar26;
      do {
        local_34 = 0;
        local_3c = 0;
        iVar37 = *(int *)(iVar39 + 0x48);
        iVar25 = *(int *)(iVar39 + 0x4c);
        local_38 = (int *)0x4;
        local_e0 = (int **)thunk_FUN_016d4a50(4);
        if (local_e0 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,4);
        }
        iVar14 = iVar13 + 0x14;
        iVar25 = iVar25 * 0x134;
        iVar17 = 0;
        *local_e0 = (int *)(iVar13 + 0xc);
        local_28 = (int **)&DAT_00000001;
        piVar4 = (int *)0x4;
        local_30 = (int **)&DAT_00000001;
        local_60 = (int **)0x0;
        local_64 = (int **)&DAT_00000004;
        local_68 = (int **)0x0;
        local_2c = local_e0;
        do {
          local_28 = (int **)((int)local_28 + -1);
          piVar19 = local_e0[(int)local_28];
          for (iVar32 = 0; iVar17 * 4 != iVar32; iVar32 = iVar32 + 4) {
            if (((*(undefined4 **)((int)piVar4 + iVar32))[1] == piVar19[1]) &&
               (iVar7 = thunk_FUN_016dd50a(**(undefined4 **)((int)piVar4 + iVar32),*piVar19),
               iVar7 == 0)) goto LAB_00f9ef64;
          }
          if (iVar17 == local_3c) {
            FUN_00f98d28(&local_3c);
            piVar4 = local_38;
          }
          *(int **)((int)piVar4 + iVar17 * 4) = piVar19;
          iVar17 = iVar17 + 1;
          iVar32 = iVar37;
          iVar7 = iVar25;
          local_34 = iVar17;
LAB_00f9eff8:
          if (iVar7 != 0) {
            if ((*(int *)(iVar32 + 0x118) != piVar19[1]) ||
               (iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar32 + 0x114),*piVar19), iVar8 != 0))
            goto LAB_00f9eff0;
            piVar36 = *(int **)(iVar32 + 100) + *(int *)(iVar32 + 0x68) * 4;
            piVar19 = *(int **)(iVar32 + 100);
            while (piVar19 != piVar36) {
              while (piVar22 = piVar19 + 4, *piVar19 != 0) {
                piVar19 = piVar22;
                if (piVar22 == piVar36) goto LAB_00f9ef64;
              }
              piVar28 = (int *)piVar19[2];
              piVar19 = (int *)piVar19[3];
              iVar32 = iVar37;
              for (iVar7 = iVar25; iVar7 != 0; iVar7 = iVar7 + -0x134) {
                if (*(int **)(iVar32 + 0x118) == piVar19) {
                  iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar32 + 0x114),piVar28,piVar19);
                  ppiVar15 = local_28;
                  if (iVar8 == 0) {
                    if (*(int *)(iVar32 + 0x68) != 0) {
                      if (local_28 == local_30) {
                        FUN_00f98d28(&local_30);
                      }
                      local_e0 = local_2c;
                      local_2c[(int)ppiVar15] = (int *)(iVar32 + 0x114);
                      local_28 = (int **)((int)ppiVar15 + 1);
                    }
                    break;
                  }
                }
                iVar32 = iVar32 + 0x134;
              }
              ppiVar15 = local_60;
              if (local_60 == local_68) {
                FUN_00f98f0c(&local_68);
              }
              local_64[(int)ppiVar15 * 2] = piVar28;
              (local_64 + (int)ppiVar15 * 2)[1] = piVar19;
              local_60 = (int **)((int)ppiVar15 + 1);
              piVar19 = piVar22;
            }
          }
LAB_00f9ef64:
          ppiVar38 = local_60;
          ppiVar35 = local_64;
          ppiVar15 = local_68;
        } while (local_28 != (int **)0x0);
        if (local_30 != (int **)0x0) {
          thunk_FUN_016d3fb4(local_2c);
        }
        if (local_3c != 0) {
          thunk_FUN_016d3fb4(local_38);
        }
        if (ppiVar38 != (int **)0x0) {
          ppiVar20 = ppiVar35;
          do {
            iVar25 = local_a8;
            piVar19 = *ppiVar20;
            piVar4 = ppiVar20[1];
            if (local_a8 == local_b0) {
              FUN_00f98f0c(&local_b0);
            }
            ppiVar20 = ppiVar20 + 2;
            local_ac[iVar25 * 2] = piVar19;
            local_a8 = iVar25 + 1;
            (local_ac + iVar25 * 2)[1] = piVar4;
          } while (ppiVar20 != ppiVar35 + (int)ppiVar38 * 2);
        }
        if (ppiVar15 != (int **)0x0) {
          thunk_FUN_016d3fb4(ppiVar35);
        }
        iVar25 = local_a8;
        piVar19 = *(int **)(iVar13 + 0xc);
        piVar4 = *(int **)(iVar13 + 0x10);
        if (local_a8 == local_b0) {
          FUN_00f98f0c(&local_b0);
        }
        local_ac[iVar25 * 2] = piVar19;
        (local_ac + iVar25 * 2)[1] = piVar4;
        local_a8 = iVar25 + 1;
        iVar13 = iVar14;
        if (iVar14 == iVar26 + iVar16 * 0x14) break;
      } while( true );
    }
    ppiVar35 = (int **)&DAT_00000004;
    ppiVar20 = local_ac + local_a8 * 2;
    local_a0 = 4;
    local_94 = (int **)&DAT_00000004;
    local_e4 = (int **)0x0;
    local_9c = 0;
    local_a4 = 0;
    ppiVar34 = param_3 + param_4 * 2;
    local_90 = (int **)0x0;
    local_98 = (int **)0x0;
    ppiVar15 = ppiVar34;
    local_e0 = param_3;
    ppiVar38 = local_ac;
LAB_00f9f288:
    do {
      iVar16 = local_9c;
      if (ppiVar38 != (int **)0x0) {
        ppiVar15 = ppiVar20;
      }
      if (ppiVar38 != (int **)0x0 && ppiVar38 != ppiVar15) {
        ppiVar33 = ppiVar38;
        ppiVar38 = ppiVar38 + 2;
      }
      else {
        if (local_e0 == ppiVar34) goto LAB_00f9f3cc;
        ppiVar33 = local_e0;
        ppiVar38 = (int **)0x0;
        local_e0 = local_e0 + 2;
      }
      ppiVar15 = *(int ***)(iVar39 + 0x70);
      iVar26 = *(int *)(iVar39 + 0x6c);
      piVar19 = *ppiVar33;
      piVar4 = ppiVar33[1];
      puVar30 = (undefined4 *)(iVar26 + 0x24);
      for (iVar16 = (int)ppiVar15 * 0x30; iVar16 != 0; iVar16 = iVar16 + -0x30) {
        if (*(int **)(iVar26 + 0x28) == piVar4) {
          uVar41 = thunk_FUN_016dd50a(*puVar30,piVar19,piVar4);
          ppiVar15 = (int **)((ulonglong)uVar41 >> 0x20);
          if ((int)uVar41 == 0) {
            FUN_00f8edf8(auStack_8c,iVar39,ppiVar33);
            FUN_00f8e960(&local_80,iVar39,ppiVar33);
            piVar19 = local_78;
            piVar4 = local_7c;
            if (local_e4 == (int **)0x0) goto LAB_00f9f3ac;
            iVar16 = 0;
            goto LAB_00f9f36c;
          }
        }
        iVar26 = iVar26 + 0x30;
        puVar30 = puVar30 + 0xc;
      }
    } while( true );
  }
  iVar13 = *(int *)(iVar39 + 0x4c);
  iVar25 = *(int *)(iVar39 + 0x48);
  iVar26 = iVar25;
LAB_00f9ec78:
  iVar37 = iVar26;
  if (iVar37 == iVar13 * 0x134 + iVar25) goto LAB_00f9ee54;
  piVar4 = *(int **)(iVar37 + 0x120);
  iVar26 = iVar37 + 0x134;
  if (piVar4 == (int *)0x0) goto LAB_00f9ecc0;
  if (*(int *)(iVar37 + 0x124) != 7) {
    if ((*(int *)(iVar37 + 0x124) != 4) || (*piVar4 != 0x706c6568)) goto LAB_00f9ece8;
    goto LAB_00f9ec78;
  }
  iVar14 = thunk_FUN_016dd50a(piVar4,&DAT_00410ff9,7);
  if (iVar14 == 0) goto LAB_00f9ec78;
LAB_00f9ece8:
  if (((*(byte *)(iVar37 + 0x130) < 5) || (*(byte *)(iVar37 + 0x130) == 9)) &&
     ((*(byte *)(iVar37 + 0x11c) & 5) == 0)) {
    iVar14 = *(int *)(iVar39 + 0x70);
    iVar32 = *(int *)(iVar39 + 0x6c);
    uVar23 = *(undefined4 *)(iVar37 + 0x114);
    iVar17 = *(int *)(iVar37 + 0x118);
    iVar37 = iVar32;
joined_r0x00f9ed38:
    while (iVar7 = iVar37, iVar7 != iVar32 + iVar14 * 0x30) {
      piVar4 = (int *)(*(int *)(iVar7 + 4) + 4);
      for (iVar8 = *(int *)(iVar7 + 8) << 3; iVar37 = iVar7 + 0x30, iVar8 != 0; iVar8 = iVar8 + -8)
      {
        if ((*piVar4 == iVar17) &&
           (iVar5 = thunk_FUN_016dd50a(piVar4[-1],uVar23,iVar17), iVar5 == 0)) {
          uVar27 = *(undefined4 *)(iVar7 + 0x24);
          iVar29 = *(int *)(iVar7 + 0x28);
          iVar5 = iVar32;
          iVar8 = iVar14 * 0x30;
          puVar30 = (undefined4 *)(iVar32 + 0x24);
          goto LAB_00f9edc4;
        }
        piVar4 = piVar4 + 2;
      }
    }
    local_68 = &local_d4;
    local_64 = (int **)&DAT_00fa02fc;
    FUN_00fa948c(param_2,&DAT_01880954,&DAT_0035dc20,&local_68);
    goto LAB_00f9ee54;
  }
  goto LAB_00f9ec78;
LAB_00f9ecc0:
  if (*(undefined1 **)(iVar37 + 0x34) == &DAT_00110000) goto LAB_00f9ec78;
  goto LAB_00f9ece8;
LAB_00f9edc4:
  if (iVar8 == 0) goto joined_r0x00f9ed38;
  bVar40 = false;
  if (*(int *)(iVar5 + 0x28) == iVar29) {
    iVar6 = thunk_FUN_016dd50a(*puVar30,uVar27,iVar29);
    bVar40 = iVar6 == 0;
  }
  bVar1 = 0;
  if (bVar40) {
    bVar1 = *(byte *)(iVar5 + 0x2c);
  }
  iVar8 = iVar8 + -0x30;
  puVar30 = puVar30 + 0xc;
  iVar5 = iVar5 + 0x30;
  if (bVar40 && (bVar1 & 1) != 0) {
    goto LAB_00f9ec78;
  }
  goto LAB_00f9edc4;
LAB_00f9eff0:
  iVar7 = iVar7 + -0x134;
  iVar32 = iVar32 + 0x134;
  goto LAB_00f9eff8;
LAB_00f9f3cc:
  ppiVar38 = (int **)&DAT_00000004;
  piVar4 = (int *)(local_a0 + 4);
  iVar26 = local_9c << 3;
  local_6c = 0;
  ppiVar20 = local_ac + local_a8 * 2;
  local_70 = (int **)&DAT_00000004;
  local_74 = 0;
  local_34 = 0;
  local_38 = (int *)&DAT_00000004;
  local_e4 = (int **)0x0;
  local_3c = 0;
  ppiVar15 = (int **)0x0;
  ppiVar35 = local_ac;
  local_ec = param_3;
LAB_00f9f44c:
  do {
    iVar25 = local_9c;
    iVar13 = local_a0;
    if (ppiVar35 != (int **)0x0) {
      ppiVar15 = ppiVar20;
    }
    if (ppiVar35 != (int **)0x0 && ppiVar35 != ppiVar15) {
      ppiVar33 = ppiVar35 + 2;
    }
    else {
      if (local_ec == ppiVar34) {
        iVar26 = *(int *)(iVar39 + 0x48);
        iVar37 = *(int *)(iVar39 + 0x4c);
        piVar4 = (int *)(local_a0 + 4);
        iVar16 = local_9c << 3;
        iVar39 = iVar26;
        break;
      }
      ppiVar33 = (int **)0x0;
      ppiVar35 = local_ec;
      local_ec = local_ec + 2;
    }
    ppiVar15 = (int **)&DAT_00000134;
    iVar25 = *(int *)(iVar39 + 0x48);
    piVar19 = *ppiVar35;
    piVar36 = ppiVar35[1];
    iVar13 = *(int *)(iVar39 + 0x4c) * 0x134;
    while( true ) {
      ppiVar35 = ppiVar33;
      if (iVar13 == 0) break;
      if (*(int **)(iVar25 + 0x118) == piVar36) {
        uVar23 = *(undefined4 *)(iVar25 + 0x114);
        iVar37 = thunk_FUN_016dd50a(uVar23,piVar19,piVar36);
        ppiVar15 = extraout_r2;
        if (iVar37 == 0) {
          if (iVar16 == 0) goto LAB_00f9f528;
          iVar13 = iVar26;
          piVar19 = piVar4;
          goto LAB_00f9f500;
        }
      }
      iVar25 = iVar25 + 0x134;
      iVar13 = iVar13 + -0x134;
    }
  } while( true );
LAB_00f9f670:
  iVar14 = iVar39;
  ppiVar15 = local_70;
  iVar39 = local_74;
  if (iVar14 != iVar37 * 0x134 + iVar26) {
    iVar39 = iVar14 + 0x134;
    if (*(int *)(iVar14 + 0x120) == 0) {
      puVar10 = *(undefined1 **)(iVar14 + 0x34);
      bVar40 = puVar10 == &DAT_00110000;
      if (bVar40) {
        puVar10 = (undefined1 *)(uint)*(byte *)(iVar14 + 0x11c);
      }
      if (bVar40 && ((uint)puVar10 & 4) == 0) {
        if (iVar25 != 0) {
          uVar23 = *(undefined4 *)(iVar14 + 0x114);
          iVar32 = *(int *)(iVar14 + 0x118);
          piVar19 = piVar4;
          iVar17 = iVar16;
          do {
            if (*piVar19 == iVar32) {
              iVar7 = thunk_FUN_016dd50a(piVar19[-1],uVar23,iVar32);
              if (iVar7 == 0) goto LAB_00f9f670;
            }
            piVar19 = piVar19 + 2;
            iVar17 = iVar17 + -8;
          } while (iVar17 != 0);
        }
        if (*(int *)(iVar14 + 0x14) != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01880934);
        }
        uVar24 = *(uint *)(iVar14 + 0x18);
        if (local_34 < uVar24 + 1) {
          local_68 = (int **)&DAT_80000000;
          FUN_00f7055c(&local_3c,uVar24 + 1,&local_68);
        }
        if (local_34 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar24,local_34,&DAT_01880944);
        }
        puVar21 = (uint *)(local_38 + uVar24 * 3);
        uVar24 = *puVar21;
        if (uVar24 == 0x80000000) {
          if ((*(byte *)(iVar14 + 0x11d) & 1) == 0) {
            FUN_00f9d408(&local_68,iVar14,iVar12,0);
            local_30 = local_68;
            local_2c = local_64;
            local_28 = local_60;
          }
          else {
            local_28 = (int **)0x0;
            local_2c = (int **)&DAT_00000001;
            local_30 = (int **)0x0;
            local_64 = (int **)&DAT_00fa02fc;
            local_68 = &local_c4;
            FUN_00fa948c(&local_30,&DAT_01880954,&DAT_0035dbfa,&local_68);
            FUN_00f9d408(&local_68,iVar14,iVar12,1);
            ppiVar35 = local_60;
            ppiVar15 = local_64;
            if ((int **)((int)local_30 - (int)local_28) < local_60) {
              FUN_00f991dc(&local_30,local_28,local_60,1,1);
            }
            ppiVar38 = local_28;
            FUN_016dd1aa((undefined1 *)((int)local_2c + (int)local_28),ppiVar15,ppiVar35);
            local_28 = (int **)((int)ppiVar38 + (int)ppiVar35);
            if (local_68 != (int **)0x0) {
              thunk_FUN_016d3fb4(ppiVar15);
            }
            local_64 = (int **)&DAT_00fa02fc;
            local_68 = &local_c4;
            FUN_00fa948c(&local_30,&DAT_01880954,&DAT_0035dc09,&local_68);
          }
          ppiVar38 = local_28;
          ppiVar35 = local_2c;
          ppiVar15 = local_30;
          if ((*puVar21 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar21[1]);
          }
          *puVar21 = (uint)ppiVar15;
          puVar21[1] = (uint)ppiVar35;
          puVar21[2] = (uint)ppiVar38;
        }
        else if ((*(byte *)(iVar14 + 0x11d) & 1) != 0) {
          uVar11 = puVar21[1];
          *puVar21 = 0x80000000;
          uVar31 = puVar21[2];
          local_60 = (int **)0x0;
          local_64 = (int **)&DAT_00000001;
          local_68 = (int **)0x0;
          local_2c = (int **)&DAT_00fa02fc;
          local_30 = &local_c4;
          FUN_00fa948c(&local_68,&DAT_01880954,&DAT_0035dbec,&local_30);
          if ((uint)((int)local_68 - (int)local_60) < uVar31) {
            FUN_00f991dc(&local_68,local_60,uVar31,1,1);
          }
          ppiVar38 = local_60;
          FUN_016dd1aa((undefined1 *)((int)local_64 + (int)local_60),uVar11,uVar31);
          ppiVar35 = local_64;
          ppiVar15 = local_68;
          ppiVar38 = (int **)((int)ppiVar38 + uVar31);
          local_60 = ppiVar38;
          if ((*puVar21 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar21[1]);
          }
          *puVar21 = (uint)ppiVar15;
          puVar21[1] = (uint)ppiVar35;
          puVar21[2] = (uint)ppiVar38;
          if (uVar24 != 0) {
            thunk_FUN_016d3fb4(uVar11);
          }
        }
        if ((param_5 == 0) && ((*(uint *)(iVar14 + 0x11c) & 0x100) != 0)) {
          if ((*puVar21 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar21[1]);
          }
          *puVar21 = 0x80000000;
        }
      }
    }
    goto LAB_00f9f670;
  }
  if (param_5 != 0) {
    ppiVar38 = local_70 + (int)local_e4 * 3;
    local_60 = (int **)local_74;
    local_64 = local_70;
    local_68 = local_70;
    ppiVar35 = local_70;
    local_5c = ppiVar38;
    if (local_e4 != (int **)0x0) {
      do {
        ppiVar20 = ppiVar35 + 3;
        piVar4 = *ppiVar35;
        if (piVar4 == (int *)0x80000000) goto LAB_00f9fb14;
        piVar19 = ppiVar35[1];
        piVar36 = ppiVar35[2];
        iVar12 = param_2[2];
        if ((int *)(*param_2 - iVar12) < piVar36) {
          FUN_00f991dc(param_2,iVar12,piVar36,1,1);
          iVar12 = param_2[2];
        }
        FUN_016dd1aa(param_2[1] + iVar12,piVar19,piVar36);
        iVar12 = iVar12 + (int)piVar36;
        param_2[2] = iVar12;
        if (*param_2 == iVar12) {
          FUN_00f991dc(param_2,iVar12,1,1,1);
          iVar12 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + iVar12) = 0x20;
        param_2[2] = iVar12 + 1;
        if (piVar4 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar19);
        }
        ppiVar35 = ppiVar20;
      } while (ppiVar20 != ppiVar38);
      ppiVar20 = ppiVar38;
LAB_00f9fb14:
      local_64 = ppiVar20;
    }
    ppiVar35 = local_64 + 1;
    for (iVar12 = ((uint)((int)ppiVar38 - (int)local_64) >> 2) * -0x55555555; iVar12 != 0;
        iVar12 = iVar12 + -1) {
      if (ppiVar35[-1] != (int *)0x0) {
        thunk_FUN_016d3fb4(*ppiVar35);
      }
      ppiVar35 = ppiVar35 + 3;
    }
    if (iVar39 != 0) {
      thunk_FUN_016d3fb4(ppiVar15);
    }
    ppiVar38 = local_94;
    ppiVar35 = local_98;
    local_60 = local_98;
    local_64 = local_94;
    ppiVar20 = local_94 + (int)local_90 * 3;
    local_68 = local_94;
    ppiVar15 = local_94;
    local_5c = ppiVar20;
    if (local_90 != (int **)0x0) {
      do {
        ppiVar34 = ppiVar15 + 3;
        piVar4 = *ppiVar15;
        if (piVar4 == (int *)0x80000000) goto LAB_00f9fcbc;
        piVar19 = ppiVar15[1];
        piVar36 = ppiVar15[2];
        iVar12 = param_2[2];
        if ((int *)(*param_2 - iVar12) < piVar36) {
          FUN_00f991dc(param_2,iVar12,piVar36,1,1);
          iVar12 = param_2[2];
        }
        FUN_016dd1aa(param_2[1] + iVar12,piVar19,piVar36);
        iVar12 = iVar12 + (int)piVar36;
        param_2[2] = iVar12;
        if (*param_2 == iVar12) {
          FUN_00f991dc(param_2,iVar12,1,1,1);
          iVar12 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + iVar12) = 0x20;
        param_2[2] = iVar12 + 1;
        if (piVar4 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar19);
        }
        ppiVar15 = ppiVar34;
      } while (ppiVar34 != ppiVar20);
      ppiVar34 = ppiVar20;
LAB_00f9fcbc:
      local_64 = ppiVar34;
    }
    ppiVar15 = local_64 + 1;
    for (iVar12 = ((uint)((int)ppiVar20 - (int)local_64) >> 2) * -0x55555555; iVar12 != 0;
        iVar12 = iVar12 + -1) {
      if (ppiVar15[-1] != (int *)0x0) {
        thunk_FUN_016d3fb4(*ppiVar15);
      }
      ppiVar15 = ppiVar15 + 3;
    }
    if (ppiVar35 != (int **)0x0) {
      thunk_FUN_016d3fb4(ppiVar38);
    }
  }
  piVar4 = local_38;
  iVar12 = local_3c;
  local_48 = local_3c;
  local_4c = local_38;
  piVar36 = local_38 + local_34 * 3;
  local_50 = local_38;
  local_5c = (int **)0x80000001;
  local_68 = (int **)0x80000001;
  piVar19 = local_38;
  local_44 = piVar36;
  do {
    if (piVar19 == piVar36) {
LAB_00f9fed4:
      if (iVar12 != 0) {
        thunk_FUN_016d3fb4(piVar4);
      }
      ppiVar15 = local_70;
      if (param_5 == 0) {
        ppiVar35 = local_70 + 1;
        for (; local_e4 != (int **)0x0; local_e4 = (int **)((int)local_e4 + -1)) {
          if (ppiVar35[-1] != (int *)0x0) {
            thunk_FUN_016d3fb4(*ppiVar35);
          }
          ppiVar35 = ppiVar35 + 3;
        }
        if (local_74 != 0) {
          thunk_FUN_016d3fb4(ppiVar15);
        }
        ppiVar15 = local_94;
        ppiVar38 = local_94 + 1;
        for (ppiVar35 = local_90; ppiVar35 != (int **)0x0; ppiVar35 = (int **)((int)ppiVar35 + -1))
        {
          if (ppiVar38[-1] != (int *)0x0) {
            thunk_FUN_016d3fb4(*ppiVar38);
          }
          ppiVar38 = ppiVar38 + 3;
        }
        if (local_98 != (int **)0x0) {
          thunk_FUN_016d3fb4(ppiVar15);
        }
      }
      if (local_a4 != 0) {
        thunk_FUN_016d3fb4(iVar13);
      }
      if (local_b0 != 0) {
        thunk_FUN_016d3fb4(local_ac);
      }
      if (piVar18 == (int *)0x0) {
        puVar30 = (undefined4 *)(local_b8 + 4);
        for (iVar12 = local_b4; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar30[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar30);
          }
          puVar30 = puVar30 + 5;
        }
        if (local_bc != 0) {
          thunk_FUN_016d3fb4(local_b8);
          return;
        }
      }
      return;
    }
    puVar10 = (undefined1 *)((int)piVar36 + (-0xc - (int)piVar19));
    piVar22 = piVar19;
    while( true ) {
      piVar19 = piVar22 + 3;
      iVar16 = *piVar22;
      if (iVar16 != -0x80000000) break;
      puVar10 = puVar10 + -0xc;
      piVar22 = piVar19;
      if (piVar19 == piVar36) {
        local_4c = piVar36;
        goto LAB_00f9fed4;
      }
    }
    local_4c = piVar19;
    if (iVar16 == -0x7fffffff) {
      if (piVar36 != piVar19) {
        piVar22 = piVar22 + 4;
        uVar24 = (uint)puVar10 / 0xc;
        do {
          if ((piVar22[-1] & 0x7fffffffU) != 0) {
            thunk_FUN_016d3fb4(*piVar22);
          }
          piVar22 = piVar22 + 3;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      goto LAB_00f9fed4;
    }
    iVar39 = piVar22[1];
    uVar24 = piVar22[2];
    iVar26 = param_2[2];
    if ((uint)(*param_2 - iVar26) < uVar24) {
      FUN_00f991dc(param_2,iVar26,uVar24,1,1);
      iVar26 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar26,iVar39,uVar24);
    iVar26 = iVar26 + uVar24;
    param_2[2] = iVar26;
    if (*param_2 == iVar26) {
      FUN_00f991dc(param_2,iVar26,1,1,1);
      iVar26 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar26) = 0x20;
    param_2[2] = iVar26 + 1;
    if (iVar16 != 0) {
      thunk_FUN_016d3fb4(iVar39);
    }
  } while( true );
LAB_00f9f500:
  do {
    if ((int *)*piVar19 == piVar36) {
      iVar37 = thunk_FUN_016dd50a(piVar19[-1],uVar23,piVar36);
      ppiVar15 = extraout_r2_00;
      if (iVar37 == 0) goto LAB_00f9f44c;
    }
    piVar19 = piVar19 + 2;
    iVar13 = iVar13 + -8;
  } while (iVar13 != 0);
LAB_00f9f528:
  FUN_00f9d408(&local_30,iVar25,iVar12,param_5);
  ppiVar3 = local_28;
  ppiVar2 = local_2c;
  ppiVar33 = local_30;
  if (*(int *)(iVar25 + 0x14) == 1) {
    uVar24 = *(uint *)(iVar25 + 0x18);
    if (local_34 < uVar24 + 1) {
      local_68 = (int **)&DAT_80000000;
      FUN_00f7055c(&local_3c,uVar24 + 1,&local_68);
    }
    if (local_34 <= uVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar24,local_34,&DAT_0188096c);
    }
    puVar21 = (uint *)(local_38 + uVar24 * 3);
    if ((*puVar21 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(puVar21[1]);
    }
    *puVar21 = (uint)local_30;
    puVar21[1] = (uint)local_2c;
    puVar21[2] = (uint)local_28;
    ppiVar15 = local_28;
  }
  else {
    ppiVar15 = extraout_r2_01;
    if (local_e4 != (int **)0x0) {
      iVar13 = 0;
      do {
        if (*(int ***)((int)ppiVar38 + iVar13 + 8) == ppiVar3) {
          iVar25 = thunk_FUN_016dd50a(*(undefined4 *)((int)ppiVar38 + iVar13 + 4),ppiVar2,ppiVar3);
          ppiVar15 = extraout_r2_02;
          if (iVar25 == 0) {
            if (ppiVar33 != (int **)0x0) {
              thunk_FUN_016d3fb4(ppiVar2);
              ppiVar15 = extraout_r2_03;
            }
            goto LAB_00f9f44c;
          }
        }
        iVar13 = iVar13 + 0xc;
      } while ((int)local_e4 * 0xc != iVar13);
    }
    if (local_e4 == (int **)local_74) {
      FUN_00f98de8(&local_74);
      ppiVar15 = extraout_r2_04;
      ppiVar38 = local_70;
    }
    ppiVar9 = ppiVar38 + (int)local_e4 * 3;
    *ppiVar9 = (int *)ppiVar33;
    ppiVar9[1] = (int *)ppiVar2;
    ppiVar9[2] = (int *)ppiVar3;
    local_e4 = (int **)((int)local_e4 + 1);
    local_6c = (int)local_e4;
  }
  goto LAB_00f9f44c;
  while (iVar16 = iVar16 + 0xc, (int)local_e4 * 0xc != iVar16) {
LAB_00f9f36c:
    if ((*(int **)((int)ppiVar35 + iVar16 + 8) == piVar19) &&
       (iVar26 = thunk_FUN_016dd50a(*(undefined4 *)((int)ppiVar35 + iVar16 + 4),piVar4,piVar19),
       iVar26 == 0)) {
      if (local_80 != (int *)0x0) {
        thunk_FUN_016d3fb4(piVar4);
      }
      goto LAB_00f9f260;
    }
  }
LAB_00f9f3ac:
  if (local_e4 == local_98) {
    FUN_00f98de8(&local_98);
    ppiVar35 = local_94;
  }
  ppiVar15 = ppiVar35 + (int)local_e4 * 3;
  *ppiVar15 = local_80;
  ppiVar15[1] = local_7c;
  ppiVar15[2] = local_78;
  local_e4 = (int **)((int)local_e4 + 1);
  local_90 = local_e4;
LAB_00f9f260:
  FUN_00fa1924(&local_a4,auStack_8c);
  ppiVar15 = extraout_r1;
  goto LAB_00f9f288;
}

