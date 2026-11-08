// FUN_014a8720 @ 014a8720 size=1048 calls_out=5 calls_in=1
// strings: 

void FUN_014a8720(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int local_90;
  int local_8c;
  int local_88;
  uint *local_80;
  uint *local_7c;
  int iStack_78;
  uint *puStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  iVar7 = param_2[2];
  if (iVar7 == 0) {
    iVar1 = 4;
    local_90 = 0;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar7 * 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar7 * 0xc);
    }
    local_90 = iVar7;
  }
  puVar4 = (uint *)param_2[1];
  iVar11 = *param_2;
  local_88 = 0;
  puVar15 = puVar4 + iVar7 * 4;
  puVar8 = puVar4;
  local_8c = iVar1;
  local_80 = puVar4;
  local_7c = puVar4;
  iStack_78 = iVar11;
  puStack_74 = puVar15;
  if (iVar7 != 0) {
    uVar19 = iVar7 << 4;
    puVar5 = puVar4;
    iVar7 = 0;
    do {
      uVar19 = uVar19 - 0x10;
      puVar8 = puVar5 + 4;
      local_7c = puVar8;
      if (*puVar5 == 2) goto LAB_014a8a00;
      if ((*puVar5 & 1) == 0) {
        uVar13 = puVar5[1];
        uVar17 = puVar5[3];
        uVar9 = puVar5[2];
        if (iVar7 == local_90) {
          FUN_0154e248(&local_90);
          iVar1 = local_8c;
        }
        iVar14 = iVar7 + 1;
        puVar5 = (uint *)(iVar1 + iVar7 * 0xc);
        *puVar5 = uVar13;
        puVar5[1] = uVar9;
        puVar5[2] = uVar17;
        local_88 = iVar14;
      }
      else {
        local_70 = puVar5[1];
        local_6c = puVar5[2];
        local_68 = puVar5[3];
        local_5c = 0;
        local_60 = 0;
        local_58 = local_70;
        local_54 = local_6c;
        local_50 = local_68;
        piVar2 = (int *)thunk_FUN_016d4a50(0x2000);
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x2000);
        }
        local_28 = &local_60;
        local_2c = 0;
        local_30 = (int *)0x0;
        local_34 = 0;
        local_38 = (int *)0x2000;
        local_3c = piVar2;
        FUN_0146ac38(&local_48,&local_3c);
        piVar2 = local_44;
        iVar14 = local_48;
        if (local_48 == -0x80000000) {
          *param_1 = -0x80000000;
          param_1[1] = (int)local_44;
          if (local_58 != 0) {
            thunk_FUN_016d3fb4(local_54);
          }
          for (uVar9 = 0; uVar19 >> 4 != uVar9; uVar9 = uVar9 + 1) {
            if (puVar5[uVar9 * 4 + 5] != 0) {
              thunk_FUN_016d3fb4(puVar5[uVar9 * 4 + 6]);
            }
          }
          if (iVar11 != 0) {
            thunk_FUN_016d3fb4(puVar4);
          }
          iVar1 = local_8c;
          if (iVar7 != 0) {
            puVar10 = (undefined4 *)(local_8c + 4);
            do {
              if ((puVar10[-1] & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(*puVar10);
              }
              puVar10 = puVar10 + 3;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (local_90 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(iVar1);
          return;
        }
        local_34 = local_48;
        local_38 = local_44;
        local_3c = local_44;
        piVar6 = local_44 + local_40 * 3;
        local_30 = piVar6;
        if (local_40 != 0) {
          iVar12 = iVar7 * 0xc;
          piVar3 = local_44;
          do {
            piVar18 = piVar3 + 3;
            iVar20 = *piVar3;
            if (iVar20 == -0x80000000) goto LAB_014a8970;
            iVar16 = piVar3[1];
            iVar1 = piVar3[2];
            if (iVar7 == local_90) {
              FUN_0154e248(&local_90);
            }
            iVar7 = iVar7 + 1;
            piVar3 = (int *)(local_8c + iVar12);
            *piVar3 = iVar20;
            iVar12 = iVar12 + 0xc;
            piVar3[1] = iVar16;
            piVar3[2] = iVar1;
            iVar1 = local_8c;
            piVar3 = piVar18;
            local_88 = iVar7;
          } while (piVar18 != piVar6);
          piVar18 = piVar6;
LAB_014a8970:
          local_38 = piVar18;
        }
        piVar3 = local_38 + 1;
        for (iVar12 = ((uint)((int)piVar6 - (int)local_38) >> 2) * -0x55555555; iVar12 != 0;
            iVar12 = iVar12 + -1) {
          if (piVar3[-1] != 0) {
            thunk_FUN_016d3fb4(*piVar3);
          }
          piVar3 = piVar3 + 3;
        }
        if (iVar14 != 0) {
          thunk_FUN_016d3fb4(piVar2);
        }
        iVar14 = iVar7;
        if (local_58 != 0) {
          thunk_FUN_016d3fb4(local_54);
        }
      }
      puVar5 = puVar8;
      iVar7 = iVar14;
    } while (puVar8 != puVar15);
    puVar8 = puVar15;
  }
LAB_014a8a00:
  puVar5 = puVar8 + 1;
  for (uVar19 = (uint)((int)puVar15 - (int)puVar8) >> 4; uVar19 != 0; uVar19 = uVar19 - 1) {
    if (*puVar5 != 0) {
      thunk_FUN_016d3fb4(puVar5[1]);
    }
    puVar5 = puVar5 + 4;
  }
  if (iVar11 != 0) {
    thunk_FUN_016d3fb4(puVar4);
  }
  *param_1 = local_90;
  param_1[1] = local_8c;
  param_1[2] = local_88;
  return;
}

