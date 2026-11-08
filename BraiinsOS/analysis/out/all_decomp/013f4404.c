// FUN_013f4404 @ 013f4404 size=3076 calls_out=9 calls_in=1
// strings: regex parse error:  | regex parse error:  | regex parse error:  | regex parse error: 

undefined4 FUN_013f4404(int ***param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int **ppiVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  int **ppiVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int *piVar18;
  int **local_c4;
  int **local_c0;
  int ***local_bc;
  int ***local_b8;
  int ***local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int ***local_8c;
  undefined1 *local_88;
  int ***local_80;
  undefined4 local_7c;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int ***local_58;
  undefined1 *local_54;
  int iStack_50;
  int ****local_48;
  code *local_44;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 *local_34;
  int ****local_30;
  undefined1 *local_2c;
  
  ppiVar12 = *param_1;
  uVar14 = *param_2;
  iVar15 = param_2[1];
  if (ppiVar12 != (int **)0x22) {
    local_c4 = param_1[8];
    local_c0 = param_1[9];
    if (ppiVar12 == (int **)0x11 || ppiVar12 == (int **)0xe) {
      local_b4 = param_1 + 1;
    }
    else {
      local_b4 = (int ***)0x0;
      if (ppiVar12 == (int **)0xd) {
        local_b4 = param_1 + 1;
      }
    }
    piVar18 = &local_b0;
    local_b8 = param_1 + 10;
    local_bc = param_1;
    FUN_013f5198(piVar18,&local_c4);
    if (local_c0 < (int **)0x8) {
      if ((local_c0 == (int **)0x0) ||
         ((*(char *)local_c4 != '\n' &&
          ((local_c0 == (int **)0x1 ||
           ((*(char *)((int)local_c4 + 1) != '\n' &&
            ((local_c0 == (int **)0x2 ||
             ((*(char *)((int)local_c4 + 2) != '\n' &&
              ((local_c0 == (int **)0x3 ||
               ((*(char *)((int)local_c4 + 3) != '\n' &&
                ((local_c0 == (int **)0x4 ||
                 ((*(char *)(local_c4 + 1) != '\n' &&
                  ((local_c0 == (int **)0x5 ||
                   ((*(char *)((int)local_c4 + 5) != '\n' &&
                    ((local_c0 == (int **)0x6 || (*(char *)((int)local_c4 + 6) != '\n'))))))))))))))
              )))))))))))) goto LAB_013f4af0;
LAB_013f4714:
      FUN_013fbb90(&local_8c,0x7e,0x4f);
      iVar2 = (**(code **)(iVar15 + 0xc))(uVar14,"regex parse error:\n",0x13);
      if (iVar2 == 0) {
        local_44 = (code *)&DAT_006043a8;
        local_48 = &local_8c;
        iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00580c3b,&local_48);
        if (iVar2 != 0) goto LAB_013f4f5c;
        FUN_013f398c(&local_80,&local_b0);
        local_44 = (code *)&DAT_006043a8;
        local_48 = &local_80;
        iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00590e71,&local_48);
        if (iVar2 != 0) {
LAB_013f4f48:
          if (local_80 != (int ***)0x0) {
            thunk_FUN_016d3fb4(local_7c);
          }
          goto LAB_013f4f5c;
        }
        local_44 = (code *)&DAT_006043a8;
        local_48 = &local_8c;
        iVar3 = FUN_00fa948c(uVar14,iVar15,&DAT_00580c3b,&local_48);
        iVar2 = local_a0;
        if (iVar3 != 0) goto LAB_013f4f48;
        if (local_9c != 0) {
          iVar16 = 0;
          iVar3 = 4;
          iVar13 = 0;
          local_6c = 0;
          local_70 = 4;
          local_74 = 0;
          do {
            iVar1 = local_6c;
            iVar4 = iVar2 + iVar16;
            local_2c = &LAB_00fac484;
            local_58 = (int ***)(*(int *)(iVar4 + 0x14) + -1);
            local_30 = &local_58;
            local_38 = iVar4 + 0x10;
            local_40 = iVar4 + 8;
            local_48 = (int ****)(iVar4 + 4);
            local_34 = &LAB_00fac484;
            local_3c = &LAB_00fac484;
            local_44 = (code *)&LAB_00fac484;
            FUN_00600d2c(&local_68,&DAT_00595697,&local_48);
            if (iVar1 == local_74) {
              FUN_015f37b0(&local_74);
              iVar3 = local_70;
            }
            iVar16 = iVar16 + 0x18;
            local_6c = iVar1 + 1;
            puVar8 = (undefined4 *)(iVar3 + iVar13);
            *puVar8 = local_68;
            iVar13 = iVar13 + 0xc;
            puVar8[1] = uStack_64;
            puVar8[2] = uStack_60;
          } while (local_9c * 0x18 != iVar16);
          FUN_013ff7e4(&local_48,local_70,local_6c,uStack_60,piVar18);
          local_58 = (int ***)local_48;
          local_54 = local_44;
          iStack_50 = local_40;
          local_44 = (code *)&DAT_006043a8;
          local_48 = &local_58;
          iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00580c3b,&local_48);
          if (iVar2 != 0) {
            if (local_58 != (int ***)0x0) {
              thunk_FUN_016d3fb4(local_54);
            }
            FUN_0111d548(&local_74);
            goto LAB_013f4f48;
          }
          if (local_58 != (int ***)0x0) {
            thunk_FUN_016d3fb4(local_54);
          }
          FUN_0111d548(&local_74);
        }
        local_44 = (code *)&LAB_013f6780;
        local_48 = &local_bc;
        iVar15 = FUN_00fa948c(uVar14,iVar15,&DAT_00593eb1,&local_48);
        if (iVar15 != 0) goto LAB_013f4f48;
        if (local_80 != (int ***)0x0) {
          thunk_FUN_016d3fb4(local_7c);
        }
        if (local_8c != (int ***)0x0) goto LAB_013f4d20;
LAB_013f4d24:
        uVar10 = 0;
      }
      else {
LAB_013f4f5c:
        if (local_8c != (int ***)0x0) {
          thunk_FUN_016d3fb4(local_88);
        }
        uVar10 = 1;
      }
    }
    else {
      uVar5 = (uint)((int)local_c4 + 3) & 0xfffffffc;
      ppiVar12 = (int **)(uVar5 - (int)local_c4);
      if (ppiVar12 == (int **)0x0) {
        ppiVar12 = (int **)0x0;
LAB_013f48d0:
        do {
          uVar9 = *(uint *)((int)local_c4 + (int)ppiVar12);
          uVar5 = ((uint *)((int)local_c4 + (int)ppiVar12))[1] ^ 0xa0a0a0a;
          if (((0x1010100 - (uVar9 ^ 0xa0a0a0a) | uVar9) & 0x80808080 & (0x1010100 - uVar5 | uVar5))
              != 0x80808080) break;
          ppiVar12 = ppiVar12 + 2;
        } while (ppiVar12 <= local_c0 + -2);
      }
      else {
        iVar2 = (int)local_c4 - uVar5;
        ppiVar6 = local_c4;
        do {
          if (*(char *)ppiVar6 == '\n') goto LAB_013f4714;
          bVar17 = iVar2 != -1;
          iVar2 = iVar2 + 1;
          ppiVar6 = (int **)((int)ppiVar6 + 1);
        } while (bVar17);
        if (ppiVar12 <= local_c0 + -2) goto LAB_013f48d0;
      }
      iVar2 = (int)local_c0 - (int)ppiVar12;
      if (iVar2 != 0) {
        pcVar7 = (char *)((int)local_c4 + (int)ppiVar12);
        do {
          if (*pcVar7 == '\n') goto LAB_013f4714;
          iVar2 = iVar2 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iVar2 != 0);
      }
LAB_013f4af0:
      iVar2 = (**(code **)(iVar15 + 0xc))(uVar14,"regex parse error:\n",0x13);
      uVar10 = 1;
      if (iVar2 == 0) {
        FUN_013f5198(&local_48,&local_c4);
        FUN_013f398c(&local_58,&local_48);
        pcVar11 = local_44 + 4;
        for (iVar2 = local_40; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (*(int *)(pcVar11 + -4) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)pcVar11);
          }
          pcVar11 = pcVar11 + 0xc;
        }
        if (local_48 != (int ****)0x0) {
          thunk_FUN_016d3fb4(local_44);
        }
        if (local_3c != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(local_38);
        }
        local_44 = (code *)&DAT_006043a8;
        local_48 = &local_58;
        iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00590e71,&local_48);
        if (iVar2 == 0) {
          local_44 = (code *)&LAB_013f6780;
          local_48 = &local_bc;
          iVar15 = FUN_00fa948c(uVar14,iVar15,&DAT_00593eb1,&local_48);
          if (iVar15 == 0) {
            if (local_58 != (int ***)0x0) {
              local_88 = local_54;
LAB_013f4d20:
              thunk_FUN_016d3fb4(local_88);
            }
            goto LAB_013f4d24;
          }
        }
        if (local_58 != (int ***)0x0) {
          thunk_FUN_016d3fb4(local_54);
        }
      }
    }
    puVar8 = (undefined4 *)(local_ac + 4);
    for (iVar15 = local_a8; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    goto LAB_013f4fac;
  }
  piVar18 = &local_b0;
  local_c4 = param_1[2];
  local_c0 = param_1[3];
  local_b4 = (int ***)0x0;
  local_b8 = param_1 + 4;
  local_bc = param_1 + 10;
  FUN_013f5198(piVar18,&local_c4);
  if (local_c0 < (int **)0x8) {
    if ((local_c0 == (int **)0x0) ||
       ((*(char *)local_c4 != '\n' &&
        ((local_c0 == (int **)0x1 ||
         ((*(char *)((int)local_c4 + 1) != '\n' &&
          ((local_c0 == (int **)0x2 ||
           ((*(char *)((int)local_c4 + 2) != '\n' &&
            ((local_c0 == (int **)0x3 ||
             ((*(char *)((int)local_c4 + 3) != '\n' &&
              ((local_c0 == (int **)0x4 ||
               ((*(char *)(local_c4 + 1) != '\n' &&
                ((local_c0 == (int **)0x5 ||
                 ((*(char *)((int)local_c4 + 5) != '\n' &&
                  ((local_c0 == (int **)0x6 || (*(char *)((int)local_c4 + 6) != '\n'))))))))))))))))
           )))))))))) goto LAB_013f49cc;
LAB_013f4480:
    FUN_013fbb90(&local_8c,0x7e,0x4f);
    iVar2 = (**(code **)(iVar15 + 0xc))(uVar14,"regex parse error:\n",0x13);
    if (iVar2 == 0) {
      local_44 = (code *)&DAT_006043a8;
      local_48 = &local_8c;
      iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00580c3b,&local_48);
      if (iVar2 != 0) goto LAB_013f4e84;
      FUN_013f398c(&local_80,&local_b0);
      local_44 = (code *)&DAT_006043a8;
      local_48 = &local_80;
      iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00590e71,&local_48);
      if (iVar2 != 0) {
LAB_013f4e70:
        if (local_80 != (int ***)0x0) {
          thunk_FUN_016d3fb4(local_7c);
        }
        goto LAB_013f4e84;
      }
      local_44 = (code *)&DAT_006043a8;
      local_48 = &local_8c;
      iVar3 = FUN_00fa948c(uVar14,iVar15,&DAT_00580c3b,&local_48);
      iVar2 = local_a0;
      if (iVar3 != 0) goto LAB_013f4e70;
      if (local_9c != 0) {
        iVar13 = 0;
        iVar3 = 4;
        iVar16 = 0;
        local_6c = 0;
        local_70 = 4;
        local_74 = 0;
        do {
          iVar1 = local_6c;
          iVar4 = iVar2 + iVar13;
          local_2c = &LAB_00fac484;
          local_58 = (int ***)(*(int *)(iVar4 + 0x14) + -1);
          local_30 = &local_58;
          local_38 = iVar4 + 0x10;
          local_40 = iVar4 + 8;
          local_48 = (int ****)(iVar4 + 4);
          local_34 = &LAB_00fac484;
          local_3c = &LAB_00fac484;
          local_44 = (code *)&LAB_00fac484;
          FUN_00600d2c(&local_68,&DAT_00595697,&local_48);
          if (iVar1 == local_74) {
            FUN_015f37b0(&local_74);
            iVar3 = local_70;
          }
          iVar13 = iVar13 + 0x18;
          local_6c = iVar1 + 1;
          puVar8 = (undefined4 *)(iVar3 + iVar16);
          *puVar8 = local_68;
          iVar16 = iVar16 + 0xc;
          puVar8[1] = uStack_64;
          puVar8[2] = uStack_60;
        } while (local_9c * 0x18 != iVar13);
        FUN_013ff7e4(&local_48,local_70,local_6c,uStack_60,piVar18);
        local_58 = (int ***)local_48;
        local_54 = local_44;
        iStack_50 = local_40;
        local_44 = (code *)&DAT_006043a8;
        local_48 = &local_58;
        iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00580c3b,&local_48);
        if (iVar2 != 0) {
          if (local_58 != (int ***)0x0) {
            thunk_FUN_016d3fb4(local_54);
          }
          FUN_0111d548(&local_74);
          goto LAB_013f4e70;
        }
        if (local_58 != (int ***)0x0) {
          thunk_FUN_016d3fb4(local_54);
        }
        FUN_0111d548(&local_74);
      }
      local_44 = FUN_013e60d8;
      local_48 = &local_bc;
      iVar15 = FUN_00fa948c(uVar14,iVar15,&DAT_00593eb1,&local_48);
      if (iVar15 != 0) goto LAB_013f4e70;
      if (local_80 != (int ***)0x0) {
        thunk_FUN_016d3fb4(local_7c);
      }
      if (local_8c != (int ***)0x0) goto LAB_013f4d04;
LAB_013f4d08:
      uVar10 = 0;
    }
    else {
LAB_013f4e84:
      if (local_8c != (int ***)0x0) {
        thunk_FUN_016d3fb4(local_88);
      }
      uVar10 = 1;
    }
  }
  else {
    uVar5 = (uint)((int)local_c4 + 3) & 0xfffffffc;
    ppiVar12 = (int **)(uVar5 - (int)local_c4);
    if (ppiVar12 == (int **)0x0) {
      ppiVar12 = (int **)0x0;
LAB_013f4654:
      do {
        uVar9 = *(uint *)((int)local_c4 + (int)ppiVar12);
        uVar5 = ((uint *)((int)local_c4 + (int)ppiVar12))[1] ^ 0xa0a0a0a;
        if (((0x1010100 - (uVar9 ^ 0xa0a0a0a) | uVar9) & 0x80808080 & (0x1010100 - uVar5 | uVar5))
            != 0x80808080) break;
        ppiVar12 = ppiVar12 + 2;
      } while (ppiVar12 <= local_c0 + -2);
    }
    else {
      iVar2 = (int)local_c4 - uVar5;
      ppiVar6 = local_c4;
      do {
        if (*(char *)ppiVar6 == '\n') goto LAB_013f4480;
        bVar17 = iVar2 != -1;
        iVar2 = iVar2 + 1;
        ppiVar6 = (int **)((int)ppiVar6 + 1);
      } while (bVar17);
      if (ppiVar12 <= local_c0 + -2) goto LAB_013f4654;
    }
    iVar2 = (int)local_c0 - (int)ppiVar12;
    if (iVar2 != 0) {
      pcVar7 = (char *)((int)local_c4 + (int)ppiVar12);
      do {
        if (*pcVar7 == '\n') goto LAB_013f4480;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar7 + 1;
      } while (iVar2 != 0);
    }
LAB_013f49cc:
    iVar2 = (**(code **)(iVar15 + 0xc))(uVar14,"regex parse error:\n",0x13);
    uVar10 = 1;
    if (iVar2 == 0) {
      FUN_013f5198(&local_48,&local_c4);
      FUN_013f398c(&local_58,&local_48);
      pcVar11 = local_44 + 4;
      for (iVar2 = local_40; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*(int *)(pcVar11 + -4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)pcVar11);
        }
        pcVar11 = pcVar11 + 0xc;
      }
      if (local_48 != (int ****)0x0) {
        thunk_FUN_016d3fb4(local_44);
      }
      if (local_3c != (undefined1 *)0x0) {
        thunk_FUN_016d3fb4(local_38);
      }
      local_44 = (code *)&DAT_006043a8;
      local_48 = &local_58;
      iVar2 = FUN_00fa948c(uVar14,iVar15,&DAT_00590e71,&local_48);
      if (iVar2 == 0) {
        local_44 = FUN_013e60d8;
        local_48 = &local_bc;
        iVar15 = FUN_00fa948c(uVar14,iVar15,&DAT_00593eb1,&local_48);
        if (iVar15 == 0) {
          if (local_58 != (int ***)0x0) {
            local_88 = local_54;
LAB_013f4d04:
            thunk_FUN_016d3fb4(local_88);
          }
          goto LAB_013f4d08;
        }
      }
      if (local_58 != (int ***)0x0) {
        thunk_FUN_016d3fb4(local_54);
      }
    }
  }
  puVar8 = (undefined4 *)(local_ac + 4);
  for (iVar15 = local_a8; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
LAB_013f4fac:
  if (local_b0 != 0) {
    thunk_FUN_016d3fb4(local_ac);
  }
  if (local_a4 != 0) {
    thunk_FUN_016d3fb4(local_a0);
  }
  return uVar10;
}

