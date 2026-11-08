// FUN_00f9090c @ 00f9090c size=2036 calls_out=14 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

int ***** FUN_00f9090c(int ******param_1,undefined4 param_2,int ****param_3)

{
  int ****ppppiVar1;
  int ****ppppiVar2;
  int iVar3;
  int *****pppppiVar4;
  int ******ppppppiVar5;
  int *****pppppiVar6;
  int ******ppppppiVar7;
  undefined *puVar8;
  int *****pppppiVar9;
  int ****ppppiVar10;
  undefined4 *puVar11;
  int ****ppppiVar12;
  int *****pppppiVar13;
  int ****ppppiVar14;
  int iVar15;
  int *****pppppiVar16;
  int *****local_bc;
  undefined1 *local_b8;
  int *****local_b4;
  int *****local_b0;
  int ****local_ac;
  int ****local_a8;
  int *****local_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  int *****local_90;
  int ****ppppiStack_8c;
  int ****ppppiStack_88;
  int ****local_80;
  int ****ppppiStack_7c;
  int ****ppppiStack_78;
  int *****local_70;
  int *****local_6c;
  int ****local_68;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int ******local_58;
  uint local_54;
  int *****local_50;
  int ****local_4c;
  int ****local_48;
  int ******local_40;
  code *local_3c;
  int ******local_38;
  undefined4 *local_34;
  int *****local_30;
  undefined4 *local_2c;
  
  local_b8 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (local_b8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,1);
  }
  pppppiVar6 = param_1[0x51];
  pppppiVar9 = param_1[0x52];
  *local_b8 = 0x20;
  local_b4 = (int *****)0x1;
  local_bc = (int *****)0x1;
  if ((((uint)pppppiVar6 | (uint)pppppiVar9) & 0x1000) == 0 &&
      (((uint)pppppiVar6 | (uint)pppppiVar9) & 0x2000) == 0) {
    pppppiVar9 = param_1[0x1e];
    iVar15 = (int)param_1[0x1f] << 4;
    pppppiVar6 = (int *****)0xffffffff;
    do {
      if (iVar15 == 0) {
        puVar11 = (undefined4 *)0x0;
        goto LAB_00f90b70;
      }
      ppppiVar10 = *pppppiVar9;
      pppppiVar16 = pppppiVar9 + 1;
      iVar15 = iVar15 + -0x10;
      pppppiVar13 = pppppiVar9 + 2;
      pppppiVar4 = pppppiVar9 + 3;
      pppppiVar6 = (int *****)((int)pppppiVar6 + 1);
      pppppiVar9 = pppppiVar9 + 4;
    } while ((ppppiVar10 != (int ****)0x81d215be || *pppppiVar13 != (int ****)0xd07db95e) ||
             (*pppppiVar16 != (int ****)0x4c65521b || *pppppiVar4 != (int ****)0x76f4a2ad));
    if (param_1[0x22] <= pppppiVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppiVar6,param_1[0x22],&DAT_01880824);
    }
    ppppiVar10 = (param_1[0x21] + (int)pppppiVar6 * 6)[1];
    puVar11 = (undefined4 *)
              ((int)param_1[0x21][(int)pppppiVar6 * 6] + ((int)ppppiVar10[2] - 1U & 0xfffffff8) + 8)
    ;
    (*(code *)ppppiVar10[3])(&local_40,puVar11);
    if ((local_40 != (int ******)0x81d215be || local_38 != (int ******)0xd07db95e) ||
        (local_3c != (code *)0x4c65521b || local_34 != (undefined4 *)0x76f4a2ad)) {
      puVar11 = (undefined4 *)0x0;
    }
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00f90b70:
    local_38 = (int ******)0x0;
    local_3c = (code *)&DAT_0035dc52;
    if (puVar11 != (undefined4 *)0x0) {
      local_3c = (code *)puVar11;
    }
    local_40 = param_1;
    FUN_00fa0620(&local_b0,&local_40,4,0,0);
    ppppiVar14 = local_a8;
    ppppiVar10 = local_ac;
    if (local_a8 != (int ****)0x0) {
      iVar15 = (int)local_a8 * 0xc;
      ppppiVar12 = local_ac + 1;
      do {
        local_48 = (int ****)0x0;
        local_4c = (int ****)0x1;
        local_50 = (int *****)0x0;
        local_34 = (undefined4 *)0x0;
        local_38 = (int ******)&DAT_60000020;
        local_3c = (code *)&DAT_018804e4;
        local_40 = &local_50;
        iVar3 = FUN_00faace8(&local_40,*ppppiVar12,ppppiVar12[1]);
        ppppiVar2 = local_48;
        ppppiVar1 = local_4c;
        pppppiVar6 = local_50;
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                       &DAT_0188054c,&DAT_018af130);
        }
        if ((int ****)((int)local_bc - (int)local_b4) < local_48) {
          FUN_00f991dc(&local_bc,local_b4,local_48,1,1);
        }
        FUN_016dd1aa(local_b8 + (int)local_b4,ppppiVar1,ppppiVar2);
        local_b4 = (int *****)((int)local_b4 + (int)ppppiVar2);
        if (pppppiVar6 != (int *****)0x0) {
          thunk_FUN_016d3fb4(ppppiVar1);
        }
        pppppiVar6 = local_b4;
        if (local_bc == local_b4) {
          FUN_00f991dc(&local_bc,local_b4,1,1,1);
        }
        ppppiVar12 = ppppiVar12 + 3;
        iVar15 = iVar15 + -0xc;
        local_b8[(int)local_b4] = 0x20;
        local_b4 = (int *****)((int)pppppiVar6 + 1);
      } while (iVar15 != 0);
    }
    ppppiVar12 = ppppiVar10 + 1;
    for (; ppppiVar14 != (int ****)0x0; ppppiVar14 = (int ****)((int)ppppiVar14 + -1)) {
      if (ppppiVar12[-1] != (int ***)0x0) {
        thunk_FUN_016d3fb4(*ppppiVar12);
      }
      ppppiVar12 = ppppiVar12 + 3;
    }
    if (local_b0 != (int *****)0x0) {
      thunk_FUN_016d3fb4(ppppiVar10);
    }
    pppppiVar6 = param_1[0x51];
    pppppiVar9 = param_1[0x52];
  }
  if (param_1[0x19] != (int *****)0x0) {
    pppppiVar13 = param_1[0x18];
    iVar15 = (int)param_1[0x19] * 0x16c;
    do {
      if (pppppiVar13[0x48] == param_3) {
        ppppiVar10 = pppppiVar13[0x47];
        iVar3 = thunk_FUN_016dd50a(ppppiVar10,param_2,param_3);
        if (iVar3 == 0) {
          local_a8 = (int ****)0x0;
          local_ac = (int ****)0x1;
          local_b0 = (int *****)0x0;
          ppppiVar14 = pppppiVar13[0x48];
          if (ppppiVar14 != (int ****)0x0) {
            FUN_00f991dc(&local_b0,0,ppppiVar14,1,1);
          }
          FUN_016dd1aa((int)local_ac + (int)local_a8,ppppiVar10,ppppiVar14);
          local_a8 = (int ****)((int)local_a8 + (int)ppppiVar14);
          if ((int *****)pppppiVar13[0x49] == (int *****)0x0) {
            pppppiVar4 = (int *****)pppppiVar13[7];
            if (pppppiVar4 != (int *****)&DAT_00110000) {
LAB_00f90d54:
              local_40 = &local_50;
              local_3c = FUN_00faaf34;
              local_50 = pppppiVar4;
              iVar15 = FUN_00fa948c(&local_b0,&DAT_018804e4,&DAT_00593c1c,&local_40);
              if (iVar15 != 0) {
                puVar8 = &DAT_0188050c;
LAB_00f910d0:
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_0188054c,puVar8);
              }
              goto LAB_00f90d90;
            }
          }
          else {
            local_4c = pppppiVar13[0x4a];
            local_40 = &local_50;
            local_3c = (code *)&DAT_0157d360;
            local_50 = (int *****)pppppiVar13[0x49];
            iVar15 = FUN_00fa948c(&local_b0,&DAT_018804e4,&DAT_005831a8,&local_40);
            if (iVar15 != 0) {
              puVar8 = &DAT_018804fc;
              goto LAB_00f910d0;
            }
            pppppiVar4 = (int *****)pppppiVar13[7];
            if (pppppiVar4 != (int *****)&DAT_00110000) goto LAB_00f90d54;
LAB_00f90d90:
            local_40 = &local_b0;
            local_3c = (code *)&DAT_006043a8;
            FUN_00600d2c(&local_a0,&DAT_00584e46,&local_40);
            if (local_b0 != (int *****)0x0) {
              thunk_FUN_016d3fb4(local_ac);
            }
            local_b0 = local_a0;
            local_ac = ppppiStack_9c;
            local_a8 = ppppiStack_98;
          }
          ppppppiVar5 = param_1 + 0x26;
          if (*ppppppiVar5 == (int *****)0x80000000) {
            local_90 = local_b0;
            ppppiStack_8c = local_ac;
            ppppiStack_88 = local_a8;
          }
          else {
            local_30 = (int *****)&local_b0;
            local_3c = (code *)&LAB_01110b14;
            local_40 = (int ******)&local_58;
            local_38 = &local_bc;
            local_2c = &DAT_006043a8;
            local_34 = &DAT_006043a8;
            local_58 = ppppppiVar5;
            FUN_00600d2c(&local_50,&DAT_0057fce6,&local_40);
            local_90 = local_50;
            ppppiStack_8c = local_4c;
            ppppiStack_88 = local_48;
            if (local_b0 != (int *****)0x0) {
              thunk_FUN_016d3fb4(local_ac);
            }
          }
          if (((uint)pppppiVar13[0x3e] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(pppppiVar13[0x3f]);
          }
          pppppiVar13[0x3e] = (int ****)local_90;
          pppppiVar13[0x3f] = ppppiStack_8c;
          pppppiVar13[0x40] = ppppiStack_88;
          if (*ppppppiVar5 != (int *****)0x80000000) {
            local_70 = param_1[0x27];
            local_6c = param_1[0x28];
            local_58 = (int ******)&DAT_0041545b;
          }
          else {
            local_6c = (int *****)0x0;
            local_70 = (int *****)0x1;
            local_58 = (int ******)&DAT_00000001;
          }
          local_54 = (uint)(*ppppppiVar5 != (int *****)0x80000000);
          local_50 = (int *****)pppppiVar13[0x47];
          local_4c = pppppiVar13[0x48];
          local_2c = &DAT_0157d360;
          local_34 = &DAT_0157d360;
          local_3c = (code *)&DAT_0157d360;
          local_40 = &local_70;
          local_38 = (int ******)&local_58;
          local_30 = (int *****)&local_50;
          FUN_00600d2c(&local_80,&DAT_0057fce6,&local_40);
          if (((uint)pppppiVar13[0x26] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(pppppiVar13[0x27]);
          }
          pppppiVar4 = pppppiVar13 + 0x23;
          pppppiVar13[0x26] = local_80;
          pppppiVar13[0x27] = ppppiStack_7c;
          pppppiVar13[0x28] = ppppiStack_78;
          if (*pppppiVar4 == (int ****)0x80000000) {
            if ((int)(((uint)pppppiVar6 | (uint)pppppiVar9) << 0x14) < 0) {
              if (param_1[0x23] != (int *****)0x80000000) {
                ppppppiVar5 = param_1 + 0x25;
                ppppppiVar7 = param_1 + 0x24;
                goto LAB_00f90fb0;
              }
              local_54 = 0;
              local_58 = (int ******)&DAT_00000001;
              local_6c = (int *****)0x0;
              local_70 = (int *****)0x1;
            }
            else {
              iVar15 = 0x90;
              iVar3 = 0x94;
              if (param_1[0x23] == (int *****)0x80000000) {
                iVar15 = 0x11c;
                iVar3 = 0x120;
              }
              ppppppiVar7 = (int ******)((int)param_1 + iVar15);
              ppppppiVar5 = (int ******)((int)param_1 + iVar3);
LAB_00f90fb0:
              local_6c = *ppppppiVar5;
              local_70 = *ppppppiVar7;
              local_54 = (uint)(local_6c != (int *****)0x0);
              local_58 = (int ******)&DAT_00410f51;
              if (local_6c == (int *****)0x0) {
                local_58 = (int ******)&DAT_00000001;
              }
            }
            local_50 = (int *****)pppppiVar13[0x47];
            local_4c = pppppiVar13[0x48];
            local_2c = &DAT_0157d360;
            local_34 = &DAT_0157d360;
            local_3c = (code *)&DAT_0157d360;
            local_40 = &local_70;
            local_38 = (int ******)&local_58;
            local_30 = (int *****)&local_50;
            FUN_00600d2c(&local_68,&DAT_0057fce6,&local_40);
            if (((uint)*pppppiVar4 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(pppppiVar13[0x24]);
            }
            *pppppiVar4 = local_68;
            pppppiVar13[0x24] = ppppiStack_64;
            pppppiVar13[0x25] = ppppiStack_60;
          }
          FUN_00f8a844(pppppiVar13,0);
          goto LAB_00f91048;
        }
      }
      pppppiVar13 = pppppiVar13 + 0x5b;
      iVar15 = iVar15 + -0x16c;
    } while (iVar15 != 0);
  }
  pppppiVar13 = (int *****)0x0;
LAB_00f91048:
  if (local_bc != (int *****)0x0) {
    thunk_FUN_016d3fb4(local_b8);
  }
  return pppppiVar13;
}

