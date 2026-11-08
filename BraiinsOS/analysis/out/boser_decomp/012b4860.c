// FUN_012b4860 @ 012b4860 size=3716 calls_out=26 calls_in=1
// strings: 

void FUN_012b4860(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  int **ppiVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined4 uVar16;
  undefined1 *puVar17;
  int *piVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int *piVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  int **ppiVar27;
  int **ppiVar28;
  int iVar29;
  int iVar30;
  int *piVar31;
  undefined4 *puVar32;
  int iVar33;
  int *piVar34;
  int iVar35;
  int iVar36;
  undefined4 *puVar37;
  int iVar38;
  bool bVar39;
  undefined8 uVar40;
  int *local_110;
  undefined4 *local_108;
  int *local_ec;
  int local_e8;
  int *local_e4;
  int local_e0;
  int *local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  undefined1 auStack_cc [12];
  int local_c0;
  undefined4 *local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int **local_a8;
  int **local_a4;
  int local_a0;
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined4 local_84;
  int **local_80;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int iStack_70;
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
  undefined4 *local_34;
  int **local_30;
  int **local_2c;
  int **local_28;
  
  iVar19 = *param_1;
  iVar25 = param_1[1];
  local_ec = &local_e8;
  iVar3 = iVar25 + 0x2a;
  local_e4 = &local_e0;
  local_dc = *(int **)(iVar19 + 0xfc);
  local_e0 = iVar25 + 0x38;
  local_d8 = *(int *)(iVar19 + 0x100);
  if (*(int *)(iVar19 + 0xf8) == -0x80000000) {
    local_dc = *(int **)(iVar19 + 0x9c);
    if (*(int *)(iVar19 + 0x98) == -0x80000000) {
      local_d8 = *(int *)(iVar19 + 0x120);
      local_dc = *(int **)(iVar19 + 0x11c);
    }
    else {
      local_d8 = *(int *)(iVar19 + 0xa0);
    }
  }
  local_e8 = iVar3;
  if (local_d8 != 0) {
    local_60 = &local_dc;
    local_68 = &local_ec;
    local_5c = (int **)&LAB_018a13b8;
    local_64 = (int **)&DAT_012b59c8;
    FUN_012fa178(param_2,&DAT_01ce25b4,&DAT_0041fd98,&local_68);
  }
  if (param_4 != 0) {
LAB_012b4afc:
    local_d4 = &local_d0;
    puVar17 = (undefined1 *)param_1[2];
    puVar12 = puVar17;
    local_d0 = iVar3;
    if (puVar17 == (undefined1 *)0x0) {
      puVar12 = auStack_cc;
      FUN_012a7ff8(puVar12,iVar19);
    }
    iVar3 = *(int *)(puVar12 + 8);
    iVar30 = *(int *)(puVar12 + 4);
    local_b8 = 0;
    local_bc = (undefined4 *)&SUB_00000004;
    local_c0 = 0;
    if (iVar3 != 0) {
      iVar29 = iVar30;
      do {
        uVar20 = *(undefined4 *)(iVar19 + 0x4c);
        local_34 = (undefined4 *)0x0;
        local_3c = 0;
        uVar26 = *(undefined4 *)(iVar19 + 0x48);
        local_38 = (int *)0x4;
        ppiVar8 = (int **)thunk_FUN_01be5118(4);
        if (ppiVar8 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,4);
        }
        iVar24 = 0;
        iVar33 = iVar29 + 0x14;
        piVar4 = (int *)0x4;
        *ppiVar8 = (int *)(iVar29 + 0xc);
        local_28 = (int **)&DAT_00000001;
        local_30 = (int **)&DAT_00000001;
        local_60 = (int **)0x0;
        local_64 = (int **)&SUB_00000004;
        local_68 = (int **)0x0;
        local_2c = ppiVar8;
        do {
          ppiVar27 = local_30;
          local_28 = (int **)((int)local_28 + -1);
          piVar31 = ppiVar8[(int)local_28];
          iVar35 = FUN_012b9274(piVar31,piVar4,iVar24);
          if (iVar35 == 0) {
            if (iVar24 == local_3c) {
              FUN_01a54b48(&local_3c);
              piVar4 = local_38;
            }
            *(int **)((int)piVar4 + iVar24 * 4) = piVar31;
            iVar24 = iVar24 + 1;
            local_34 = (undefined4 *)iVar24;
            iVar35 = FUN_012a4878(uVar26,uVar20,*piVar31,piVar31[1]);
            if (iVar35 != 0) {
              piVar31 = *(int **)(iVar35 + 100);
              piVar34 = piVar31 + *(int *)(iVar35 + 0x68) * 4;
              while (piVar10 = piVar31, piVar31 != piVar34) {
                while (piVar31 = piVar10 + 4, *piVar10 != 0) {
                  piVar10 = piVar31;
                  if (piVar31 == piVar34) goto LAB_012b4cfc;
                }
                piVar18 = (int *)piVar10[2];
                piVar22 = (int *)piVar10[3];
                ppiVar9 = (int **)FUN_012a4878(uVar26,uVar20,piVar18,piVar22);
                ppiVar28 = local_28;
                piVar10 = (int *)0x0;
                if (ppiVar9 != (int **)0x0) {
                  piVar10 = ppiVar9[0x1a];
                  ppiVar27 = ppiVar9;
                }
                if (ppiVar9 != (int **)0x0 && piVar10 != (int *)0x0) {
                  if (local_28 == local_30) {
                    FUN_01a54b48(&local_30);
                  }
                  local_2c[(int)ppiVar28] = (int *)(ppiVar27 + 0x45);
                  local_28 = (int **)((int)ppiVar28 + 1);
                  ppiVar8 = local_2c;
                }
                ppiVar27 = local_60;
                if (local_60 == local_68) {
                  FUN_015f5ab8(&local_68);
                }
                local_64[(int)ppiVar27 * 2] = piVar18;
                (local_64 + (int)ppiVar27 * 2)[1] = piVar22;
                local_60 = (int **)((int)ppiVar27 + 1);
              }
            }
          }
LAB_012b4cfc:
          ppiVar9 = local_60;
          ppiVar28 = local_64;
          ppiVar27 = local_68;
        } while (local_28 != (int **)0x0);
        FUN_0134aee0(local_30,local_2c,4,4);
        FUN_0134aee0(local_3c,local_38,4,4);
        if (ppiVar9 != (int **)0x0) {
          ppiVar8 = ppiVar28;
          do {
            iVar24 = local_b8;
            piVar31 = *ppiVar8;
            piVar4 = ppiVar8[1];
            if (local_b8 == local_c0) {
              FUN_015f5ab8(&local_c0);
            }
            ppiVar8 = ppiVar8 + 2;
            local_bc[iVar24 * 2] = piVar31;
            local_b8 = iVar24 + 1;
            (local_bc + iVar24 * 2)[1] = piVar4;
          } while (ppiVar8 != ppiVar28 + (int)ppiVar9 * 2);
        }
        iVar24 = local_b8;
        FUN_0134aee0(ppiVar27,ppiVar28,4,8);
        uVar26 = *(undefined4 *)(iVar29 + 0xc);
        uVar20 = *(undefined4 *)(iVar29 + 0x10);
        if (iVar24 == local_c0) {
          FUN_015f5ab8(&local_c0);
        }
        local_bc[iVar24 * 2] = uVar26;
        (local_bc + iVar24 * 2)[1] = uVar20;
        local_b8 = iVar24 + 1;
        iVar29 = iVar33;
      } while (iVar33 != iVar30 + iVar3 * 0x14);
    }
    puVar2 = local_bc;
    puVar11 = local_bc + local_b8 * 2;
    local_ac = 0;
    local_b4 = 0;
    local_a0 = 0;
    local_a8 = (int **)0x0;
    local_b0 = 4;
    local_a4 = (int **)&SUB_00000004;
    puVar14 = param_3 + param_4 * 2;
    puVar13 = param_3;
    puVar15 = puVar14;
    puVar37 = local_bc;
LAB_012b4e3c:
    iVar30 = local_ac;
    iVar3 = local_b0;
    if (puVar37 != (undefined4 *)0x0) {
      puVar15 = puVar11;
    }
    if (puVar37 != (undefined4 *)0x0 && puVar37 != puVar15) {
      puVar32 = puVar37 + 2;
      puVar15 = puVar13;
    }
    else {
      if (puVar13 == puVar14) goto LAB_012b4f30;
      puVar32 = (undefined4 *)0x0;
      puVar15 = puVar13 + 2;
      puVar37 = puVar13;
    }
    puVar13 = puVar15;
    puVar15 = *(undefined4 **)(iVar19 + 0x70);
    iVar30 = *(int *)(iVar19 + 0x6c);
    uVar20 = *puVar37;
    iVar29 = puVar37[1];
    puVar23 = (undefined4 *)(iVar30 + 0x24);
    for (iVar3 = (int)puVar15 * 0x30; iVar3 != 0; iVar3 = iVar3 + -0x30) {
      if (*(int *)(iVar30 + 0x28) == iVar29) {
        uVar40 = thunk_FUN_01bed842(*puVar23,uVar20,iVar29);
        puVar15 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
        if ((int)uVar40 == 0) {
          FUN_012a7da0(auStack_9c,iVar19,puVar37);
          FUN_012a7aa8(auStack_90,iVar19,puVar37);
          FUN_012b1c8c(&local_a8,auStack_90);
          FUN_012b1244(&local_b4,auStack_9c);
          puVar15 = extraout_r1;
          puVar37 = puVar32;
          goto LAB_012b4e3c;
        }
      }
      iVar30 = iVar30 + 0x30;
      puVar23 = puVar23 + 0xc;
    }
    puVar37 = puVar32;
    goto LAB_012b4e3c;
  }
  iVar29 = *(int *)(iVar19 + 0x48);
  iVar33 = *(int *)(iVar19 + 0x4c);
  iVar30 = iVar29;
LAB_012b4954:
  iVar24 = iVar30;
  if (iVar24 == iVar33 * 0x134 + iVar29) goto LAB_012b4afc;
  piVar4 = *(int **)(iVar24 + 0x120);
  iVar30 = iVar24 + 0x134;
  if (piVar4 == (int *)0x0) goto LAB_012b499c;
  if (*(int *)(iVar24 + 0x124) != 7) {
    if ((*(int *)(iVar24 + 0x124) != 4) || (*piVar4 != 0x706c6568)) goto LAB_012b49c4;
    goto LAB_012b4954;
  }
  iVar35 = thunk_FUN_01bed842(piVar4,&DAT_00520eda,7);
  if (iVar35 == 0) goto LAB_012b4954;
LAB_012b49c4:
  if (((*(byte *)(iVar24 + 0x130) < 5) || (*(byte *)(iVar24 + 0x130) == 9)) &&
     ((*(byte *)(iVar24 + 0x11c) & 5) == 0)) {
    iVar35 = *(int *)(iVar19 + 0x6c);
    iVar38 = *(int *)(iVar19 + 0x70);
    uVar20 = *(undefined4 *)(iVar24 + 0x114);
    uVar26 = *(undefined4 *)(iVar24 + 0x118);
    iVar24 = iVar35;
    while (iVar36 = iVar24, iVar36 != iVar35 + iVar38 * 0x30) {
      iVar5 = FUN_012a949c(uVar20,uVar26,*(undefined4 *)(iVar36 + 4),*(undefined4 *)(iVar36 + 8));
      iVar24 = iVar36 + 0x30;
      if (iVar5 != 0) {
        uVar16 = *(undefined4 *)(iVar36 + 0x24);
        iVar21 = *(int *)(iVar36 + 0x28);
        iVar6 = iVar35;
        puVar15 = (undefined4 *)(iVar35 + 0x24);
        iVar5 = iVar38 * 0x30;
        while (iVar5 != 0) {
          bVar39 = false;
          if (*(int *)(iVar6 + 0x28) == iVar21) {
            iVar7 = thunk_FUN_01bed842(*puVar15,uVar16,iVar21);
            bVar39 = iVar7 == 0;
          }
          bVar1 = 0;
          if (bVar39) {
            bVar1 = *(byte *)(iVar6 + 0x2c);
          }
          iVar5 = iVar5 + -0x30;
          puVar15 = puVar15 + 0xc;
          iVar6 = iVar6 + 0x30;
          if (bVar39 && (bVar1 & 1) != 0) goto LAB_012b4954;
        }
      }
    }
    local_68 = &local_e4;
    local_64 = (int **)&DAT_012b59c8;
    FUN_012fa178(param_2,&DAT_01ce25b4,&DAT_0041fda4,&local_68);
    goto LAB_012b4afc;
  }
  goto LAB_012b4954;
LAB_012b499c:
  if (*(undefined1 **)(iVar24 + 0x34) == &DAT_00110000) goto LAB_012b4954;
  goto LAB_012b49c4;
LAB_012b4f30:
  piVar4 = (int *)(local_b0 + 4);
  local_110 = (int *)&SUB_00000004;
  iVar29 = local_ac << 3;
  local_7c = 0;
  local_80 = (int **)&SUB_00000004;
  local_84 = 0;
  local_34 = (undefined4 *)0x0;
  local_38 = (int *)&SUB_00000004;
  local_108 = (undefined4 *)0x0;
  local_3c = 0;
  puVar13 = puVar2;
  puVar15 = (undefined4 *)0x0;
LAB_012b4f80:
  if (puVar13 != (undefined4 *)0x0) {
    puVar15 = puVar11;
  }
  if (puVar13 != (undefined4 *)0x0 && puVar13 != puVar15) {
    puVar15 = puVar13;
    puVar13 = puVar13 + 2;
  }
  else {
    if (param_3 == puVar14) goto LAB_012b50d4;
    puVar15 = param_3;
    param_3 = param_3 + 2;
    puVar13 = (undefined4 *)0x0;
  }
  uVar40 = FUN_012a4878(*(undefined4 *)(iVar19 + 0x48),*(undefined4 *)(iVar19 + 0x4c),*puVar15,
                        puVar15[1]);
  iVar33 = (int)uVar40;
  puVar15 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
  if (iVar33 != 0) {
    uVar20 = *(undefined4 *)(iVar33 + 0x114);
    iVar35 = *(int *)(iVar33 + 0x118);
    piVar31 = piVar4;
    for (iVar24 = iVar29; iVar24 != 0; iVar24 = iVar24 + -8) {
      if (*piVar31 == iVar35) {
        uVar40 = thunk_FUN_01bed842(piVar31[-1],uVar20,iVar35);
        if ((int)uVar40 == 0) {
          puVar15 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
          goto LAB_012b4f80;
        }
      }
      piVar31 = piVar31 + 2;
    }
    FUN_012bafb0(&local_78,iVar33,iVar25,param_5);
    if (*(int *)(iVar33 + 0x14) == 0) {
      FUN_012b1c8c(&local_84,&local_78);
      puVar15 = extraout_r1_00;
    }
    else {
      puVar15 = *(undefined4 **)(iVar33 + 0x18);
      if (local_108 < (undefined4 *)((int)puVar15 + 1)) {
        local_68 = (int **)&DAT_80000000;
        FUN_01298fcc(&local_3c,(undefined4 *)((int)puVar15 + 1),&local_68);
        local_108 = local_34;
      }
      if (local_108 <= puVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(puVar15,local_108,&DAT_01ce2634);
      }
      local_110 = local_38;
      piVar31 = local_38 + (int)puVar15 * 3;
      if (*piVar31 != -0x80000000) {
        FUN_0134bd64(*piVar31,piVar31[1]);
      }
      *piVar31 = (int)local_78;
      piVar31[1] = local_74;
      piVar31[2] = iStack_70;
      puVar15 = local_78;
    }
  }
  goto LAB_012b4f80;
LAB_012b50d4:
  iVar29 = *(int *)(iVar19 + 0x48);
  iVar33 = *(int *)(iVar19 + 0x4c);
  iVar19 = iVar29;
LAB_012b50f0:
  iVar24 = iVar19;
  if (iVar24 != iVar33 * 0x134 + iVar29) {
    puVar12 = *(undefined1 **)(iVar24 + 0x120);
    iVar19 = iVar24 + 0x134;
    bVar39 = puVar12 == (undefined1 *)0x0;
    if (bVar39) {
      puVar12 = *(undefined1 **)(iVar24 + 0x34);
    }
    if ((bVar39 && puVar12 == &DAT_00110000) && ((*(byte *)(iVar24 + 0x11c) & 4) == 0)) {
      uVar20 = *(undefined4 *)(iVar24 + 0x114);
      iVar38 = *(int *)(iVar24 + 0x118);
      piVar4 = (int *)(iVar3 + 4);
      for (iVar35 = iVar30 << 3; iVar35 != 0; iVar35 = iVar35 + -8) {
        if (*piVar4 == iVar38) {
          uVar40 = thunk_FUN_01bed842(piVar4[-1],uVar20,iVar38);
          puVar15 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
          if ((int)uVar40 == 0) goto LAB_012b50f0;
        }
        piVar4 = piVar4 + 2;
      }
      if (*(int *)(iVar24 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce25e4,puVar15);
      }
      puVar13 = *(undefined4 **)(iVar24 + 0x18);
      if (local_108 < (undefined4 *)((int)puVar13 + 1)) {
        local_68 = (int **)&DAT_80000000;
        FUN_01298fcc(&local_3c,(undefined4 *)((int)puVar13 + 1),&local_68);
        local_108 = local_34;
      }
      if (local_108 <= puVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(puVar13,local_108,&DAT_01ce25f4);
      }
      local_110 = local_38;
      piVar4 = local_38 + (int)puVar13 * 3;
      puVar15 = (undefined4 *)*piVar4;
      if (puVar15 == (undefined4 *)&DAT_80000000) {
        if ((*(byte *)(iVar24 + 0x11d) & 1) == 0) {
          FUN_012bafb0(&local_68,iVar24,iVar25,0);
          local_30 = local_68;
          local_2c = local_64;
          local_28 = local_60;
        }
        else {
          local_28 = (int **)0x0;
          local_30 = (int **)0x0;
          local_68 = &local_d4;
          local_2c = (int **)&DAT_00000001;
          local_64 = (int **)&DAT_012b59c8;
          FUN_012fa178(&local_30,&DAT_01ce25b4,&DAT_0041fd7b,&local_68);
          FUN_012bafb0(&local_68,iVar24,iVar25,1);
          ppiVar8 = local_64;
          FUN_012b255c(&local_30,local_64,local_60);
          FUN_0134bd64(local_68,ppiVar8);
          local_68 = &local_d4;
          local_64 = (int **)&DAT_012b59c8;
          FUN_012fa178(&local_30,&DAT_01ce25b4,&DAT_0041fe15,&local_68);
        }
        ppiVar28 = local_28;
        ppiVar27 = local_2c;
        ppiVar8 = local_30;
        if (local_108 <= puVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar13,local_108,&DAT_01ce2604);
        }
        puVar15 = puVar13;
        if (*piVar4 != -0x80000000) {
          FUN_0134bd64();
          puVar15 = extraout_r1_02;
        }
        *piVar4 = (int)ppiVar8;
        piVar4[1] = (int)ppiVar27;
        piVar4[2] = (int)ppiVar28;
      }
      else if ((*(byte *)(iVar24 + 0x11d) & 1) != 0) {
        iVar38 = piVar4[1];
        *piVar4 = -0x80000000;
        iVar35 = piVar4[2];
        local_60 = (int **)0x0;
        local_68 = (int **)0x0;
        local_30 = &local_d4;
        local_64 = (int **)&DAT_00000001;
        local_2c = (int **)&DAT_012b59c8;
        FUN_012fa178(&local_68,&DAT_01ce25b4,&DAT_0041fd8a,&local_30);
        FUN_012b255c(&local_68,iVar38,iVar35);
        ppiVar28 = local_60;
        ppiVar27 = local_64;
        ppiVar8 = local_68;
        if (local_108 <= puVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar13,local_108,&DAT_01ce2614);
        }
        if (*piVar4 != -0x80000000) {
          FUN_0134bd64(*piVar4,piVar4[1]);
        }
        *piVar4 = (int)ppiVar8;
        piVar4[1] = (int)ppiVar27;
        piVar4[2] = (int)ppiVar28;
        FUN_0134bd64(puVar15,iVar38);
        puVar15 = extraout_r1_01;
      }
      if (((*(byte *)(iVar24 + 0x11d) & 1) != 0) && (param_5 == 0)) {
        if (local_108 <= puVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar13,local_108,&DAT_01ce2624);
        }
        if (*piVar4 != -0x80000000) {
          FUN_0134bd64();
          puVar13 = extraout_r1_03;
        }
        *piVar4 = -0x80000000;
        puVar15 = puVar13;
      }
    }
    goto LAB_012b50f0;
  }
  if (param_5 != 0) {
    local_60 = (int **)local_84;
    local_64 = local_80;
    ppiVar27 = local_80 + local_7c * 3;
    local_68 = local_80;
    ppiVar8 = local_80;
    local_5c = ppiVar27;
    if (local_7c != 0) {
      do {
        piVar4 = *ppiVar8;
        ppiVar28 = ppiVar8 + 3;
        if (piVar4 == (int *)0x80000000) goto LAB_012b5490;
        piVar31 = ppiVar8[1];
        FUN_012b255c(param_2,piVar31,ppiVar8[2]);
        FUN_012b2fd4(param_2,&DAT_005319c3,1);
        FUN_0134bd64(piVar4,piVar31);
        ppiVar28 = ppiVar8 + 3;
        ppiVar8 = ppiVar8 + 3;
      } while (ppiVar28 != ppiVar27);
      ppiVar28 = ppiVar27;
LAB_012b5490:
      local_64 = ppiVar28;
    }
    FUN_012bb240(&local_68);
    local_60 = local_a8;
    local_64 = local_a4;
    ppiVar27 = local_a4 + local_a0 * 3;
    local_68 = local_a4;
    ppiVar8 = local_a4;
    local_5c = ppiVar27;
    if (local_a0 != 0) {
      do {
        piVar4 = *ppiVar8;
        ppiVar28 = ppiVar8 + 3;
        if (piVar4 == (int *)0x80000000) goto LAB_012b5538;
        piVar31 = ppiVar8[1];
        FUN_012b255c(param_2,piVar31,ppiVar8[2]);
        FUN_012b2fd4(param_2,&DAT_005319c3,1);
        FUN_0134bd64(piVar4,piVar31);
        ppiVar28 = ppiVar8 + 3;
        ppiVar8 = ppiVar8 + 3;
      } while (ppiVar28 != ppiVar27);
      ppiVar28 = ppiVar27;
LAB_012b5538:
      local_64 = ppiVar28;
    }
    FUN_012bb240(&local_68);
  }
  local_48 = local_3c;
  local_5c = (int **)0x80000001;
  local_68 = (int **)0x80000001;
  local_50 = local_110;
  piVar4 = local_110 + (int)local_108 * 3;
  local_44 = piVar4;
  do {
    if (local_110 == piVar4) {
LAB_012b55f8:
      local_4c = local_110;
      FUN_012b5bc4(&local_68);
      if (param_5 == 0) {
        FUN_018a8274(&local_84);
        FUN_018a8274(&local_a8);
      }
      FUN_0134aee0(local_b4,iVar3,4,8);
      FUN_0134aee0(local_c0,puVar2,4,8);
      if (puVar17 == (undefined1 *)0x0) {
        FUN_012a34d4(auStack_cc);
      }
      return;
    }
    while( true ) {
      piVar31 = local_110;
      local_110 = piVar31 + 3;
      iVar19 = *piVar31;
      if (iVar19 != -0x80000000) break;
      if (local_110 == piVar4) goto LAB_012b55f4;
    }
    if (iVar19 == -0x7fffffff) {
LAB_012b55f4:
      local_110 = piVar31 + 3;
      goto LAB_012b55f8;
    }
    iVar25 = piVar31[1];
    local_4c = local_110;
    FUN_012b255c(param_2,iVar25,piVar31[2]);
    FUN_012b2fd4(param_2,&DAT_005319c3,1);
    FUN_0134bd64(iVar19,iVar25);
  } while( true );
}

