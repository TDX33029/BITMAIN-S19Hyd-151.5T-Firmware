// FUN_0070c6bc @ 0070c6bc size=1296 calls_out=11 calls_in=1
// strings: internal error: entered unreachable code: we check for this state earlier in this method

void FUN_0070c6bc(int *param_1,int *param_2)

{
  bool bVar1;
  int ***pppiVar2;
  int *piVar3;
  int iVar4;
  int ***pppiVar5;
  int ***pppiVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int ***pppiVar11;
  uint uVar12;
  int **ppiVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_a4;
  int ***local_90;
  int ***local_8c;
  int ***local_88;
  int ***local_84;
  int ***local_80;
  int ****local_78;
  int ***local_74;
  int ***local_70;
  int ***local_6c;
  int ***local_68;
  int ***local_64;
  int ***local_60;
  int **local_58;
  int **ppiStack_54;
  int **ppiStack_50;
  int **ppiStack_4c;
  int ****local_48;
  int ***local_44;
  int ***local_40;
  int ***local_3c;
  int **local_38;
  int **ppiStack_34;
  int **ppiStack_30;
  int **ppiStack_2c;
  
  piVar3 = (int *)*param_1;
  bVar1 = true;
  piVar7 = param_2;
  if (piVar3 != (int *)0x0) {
    piVar7 = (int *)piVar3[3];
  }
  if (piVar3 != (int *)0x0 && piVar7 != (int *)0x0) {
    iVar4 = *piVar3;
    uVar14 = piVar3[1];
    local_a4 = 0;
    uVar8 = uVar14 & 0x1e239a6a;
    while( true ) {
      uVar9 = *(uint *)(iVar4 + uVar8);
      uVar12 = (uVar9 & 0x80808080 ^ 0x80808080) & (uVar9 ^ 0xf0f0f0f) + 0xfefefeff;
      while (uVar12 != 0) {
        uVar10 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 uVar14;
        piVar7 = (int *)(iVar4 + -0x18 + uVar10 * -0x18);
        uVar12 = uVar12 - 1 & uVar12;
        if ((*piVar7 == -0x2155a0ae && piVar7[2] == 0x1e239a6a) &&
            (piVar7[1] == -0xd4b508e && piVar7[3] == 0x7069884)) {
          iVar4 = iVar4 + uVar10 * -0x18;
          uVar15 = (**(code **)(*(int *)(iVar4 + -4) + 0x18))(*(undefined4 *)(iVar4 + -8));
          pppiVar5 = (int ***)uVar15;
          bVar1 = true;
          (**(code **)((int)((ulonglong)uVar15 >> 0x20) + 0xc))(&local_48,pppiVar5);
          pppiVar11 = (int ***)0x0;
          if (((local_48 == (int ****)0xdeaa5f52 && local_40 == (int ***)0x1e239a6a) &&
               (local_44 == (int ***)0xf2b4af72 && local_3c == (int ***)0x7069884)) &&
             (bVar1 = false, pppiVar11 = pppiVar5, *pppiVar5 == (int **)0x80000000)) {
            if (*param_2 == 0) {
              FUN_0134aee0(param_2[1],param_2[2],4,0x10);
              return;
            }
            return;
          }
          goto LAB_0070c8d4;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_a4 = local_a4 + 4;
      uVar8 = uVar8 + local_a4 & uVar14;
    }
    bVar1 = true;
    pppiVar11 = (int ***)0x0;
  }
  else {
    pppiVar11 = (int ***)0x0;
  }
LAB_0070c8d4:
  local_70 = (int ***)param_2[2];
  local_6c = (int ***)param_2[0xc];
  if (*param_2 == 0) {
    local_6c = local_70 + param_2[3] * 4;
    local_74 = (int ***)0x0;
  }
  else {
    local_70 = (int ***)(param_2 + 0xc);
    local_74 = (int ***)param_2;
  }
  local_78 = &local_90;
  local_90 = (int ***)0x0;
  FUN_0070bf7c(&local_58,&local_78);
  if (local_58 == (int **)0x0) {
    local_80 = (int ***)0x0;
    local_84 = (int ***)&SUB_00000004;
    local_88 = (int ***)0x0;
  }
  else {
    pppiVar5 = (int ***)FUN_01298504(0x40,4);
    if (pppiVar5 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x40);
    }
    *pppiVar5 = local_58;
    pppiVar5[1] = ppiStack_54;
    pppiVar5[2] = ppiStack_50;
    pppiVar5[3] = ppiStack_4c;
    local_68 = (int ***)&SUB_00000004;
    local_60 = (int ***)&DAT_00000001;
    local_48 = local_78;
    local_44 = local_74;
    local_40 = local_70;
    local_3c = local_6c;
    local_64 = pppiVar5;
    while (pppiVar2 = local_60, FUN_0070bf7c(&local_38,&local_48), local_38 != (int **)0x0) {
      if (pppiVar2 == local_68) {
        FUN_0132b898(&local_68,pppiVar2,1,4,0x10);
        pppiVar5 = local_64;
      }
      pppiVar6 = pppiVar5 + (int)pppiVar2 * 4;
      local_60 = (int ***)((int)pppiVar2 + 1);
      *pppiVar6 = local_38;
      pppiVar6[1] = ppiStack_34;
      pppiVar6[2] = ppiStack_30;
      pppiVar6[3] = ppiStack_2c;
    }
    local_88 = local_68;
    local_84 = local_64;
    local_80 = local_60;
  }
  pppiVar6 = local_80;
  pppiVar2 = local_84;
  pppiVar5 = local_90;
  if (local_90 == (int ***)0x0) {
    local_74 = local_88;
    local_70 = local_84;
    local_6c = local_80;
    if (bVar1) {
      if (local_88 != (int ***)&DAT_80000000) {
        local_48 = (int ****)local_88;
        local_44 = local_84;
        local_40 = local_80;
        local_78 = (int ****)pppiVar11;
        FUN_0070ccf4(&local_68,param_1,&local_48);
        if (local_68 != (int ***)&DAT_80000001) {
          FUN_0070c500(&local_68);
        }
        goto LAB_0070caf4;
      }
    }
    else {
      if (*pppiVar11 == (int **)0x80000000) goto LAB_0070cbac;
      if (local_88 != (int ***)&DAT_80000000) {
        ppiVar13 = pppiVar11[2];
        local_3c = local_84 + (int)local_80 * 4;
        local_40 = local_88;
        local_48 = (int ****)local_84;
        local_44 = local_84;
        local_78 = (int ****)pppiVar11;
        if ((int ***)((int)*pppiVar11 - (int)ppiVar13) < local_80) {
          FUN_0132b898(pppiVar11,ppiVar13,local_80,4,0x10);
          ppiVar13 = pppiVar11[2];
        }
        FUN_01bed4e2(pppiVar11[1] + (int)ppiVar13 * 4,pppiVar2,(int)pppiVar6 << 4);
        pppiVar11[2] = (int **)((int)ppiVar13 + (int)pppiVar6);
        local_3c = pppiVar2;
        FUN_0070d114(&local_48);
        goto LAB_0070caf4;
      }
    }
  }
  else {
    FUN_0070c58c(&local_88);
    local_6c = local_8c;
    local_70 = pppiVar5;
    local_74 = (int ***)&DAT_80000000;
    if ((!bVar1) && (*pppiVar11 == (int **)0x80000000)) {
LAB_0070cbac:
      local_78 = (int ****)pppiVar11;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: we check for this state earlier in this method"
                   ,0xb1,&DAT_01c06f0c);
    }
  }
  local_48 = (int ****)&DAT_80000000;
  local_78 = (int ****)pppiVar11;
  local_44 = local_70;
  local_40 = local_6c;
  FUN_0070ccf4(&local_68,param_1,&local_48);
  if (local_68 != (int ***)&DAT_80000001) {
    FUN_0070c500(&local_68);
  }
LAB_0070caf4:
  if (*param_2 == 0) {
    FUN_0134aee0(param_2[1],param_2[2],4,0x10);
  }
  return;
}

