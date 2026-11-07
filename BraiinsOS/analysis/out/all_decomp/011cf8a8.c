// FUN_011cf8a8 @ 011cf8a8 size=1764 calls_out=7 calls_in=47
// strings: 

undefined8
FUN_011cf8a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 ****param_4,
            undefined4 ****param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 ****local_c4;
  uint *local_c0;
  uint *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint *local_98;
  uint *local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 ****ppppuStack_88;
  undefined4 ****local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_6c;
  uint *local_68;
  uint local_64;
  uint *local_60;
  uint *local_5c;
  uint local_58;
  uint *local_54;
  undefined4 ****ppppuStack_50;
  undefined4 ****local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  iVar8 = *param_1;
  uVar10 = 1;
  if ((int)*(uint *)(iVar8 + 8) < 0) {
    uVar10 = *(uint *)(iVar8 + 8) ^ 0x80000000;
  }
  local_c4 = param_4;
  if (uVar10 == 0) {
    if (*(int *)(iVar8 + 0xc) == 0) {
      return 0x188a11400000001;
    }
                    /* WARNING: Could not recover jumptable at 0x011cf92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)(*(int *)(iVar8 + 0x10) + 0xc))(*(int *)(iVar8 + 0xc));
    return uVar18;
  }
  if (uVar10 != 1) {
    local_98 = *(uint **)(iVar8 + 0x10);
    local_94 = local_98 + *(int *)(iVar8 + 0x14) * 8;
    local_78 = 0;
    local_80 = 0;
    ppppuStack_88 = param_5;
    local_90 = param_2;
    uStack_8c = param_3;
    local_84 = param_4;
    puVar1 = (uint *)FUN_0115876c(&local_98);
    if (puVar1 == (uint *)0x0) {
      FUN_011588f0(&local_98);
      local_60 = (uint *)&DAT_00000004;
      uVar10 = 0;
      local_58 = 0;
    }
    else {
      puVar6 = (uint *)0x0;
      puVar11 = (uint *)1;
      uVar10 = 0;
      local_34 = puVar1;
      if (local_80 != 0) {
        (**(code **)(local_7c + 0x10))(&local_60);
        puVar6 = local_60;
        puVar11 = local_5c;
        uVar10 = local_58;
      }
      puVar2 = (uint *)0x0;
      uVar9 = 0;
      puVar14 = (uint *)1;
      if (local_78 != 0) {
        (**(code **)(local_74 + 0x10))(&local_60);
        puVar2 = local_60;
        uVar9 = local_58;
        puVar14 = local_5c;
      }
      iVar8 = (int)puVar6 + (int)puVar2;
      if (CARRY4((uint)puVar6,(uint)puVar2)) {
        iVar8 = -1;
      }
      if (local_98 == (uint *)0x0) {
        if (((uint)puVar14 & (uint)puVar11) != 0) goto LAB_011cfb44;
        puVar6 = (uint *)0x0;
        ppuVar7 = &local_60;
      }
      else {
        ppuVar7 = &local_60;
        puVar6 = (uint *)0x0;
        if ((((local_94 == local_98) && (puVar11 != (uint *)0x0)) && (local_94 == local_98)) &&
           (puVar14 != (uint *)0x0)) {
LAB_011cfb44:
          puVar6 = (uint *)(uVar9 + uVar10);
          ppuVar7 = &local_30;
        }
      }
      *ppuVar7 = puVar6;
      uVar10 = iVar8 + 1;
      if (iVar8 == -1) {
        uVar10 = 0xffffffff;
      }
      uVar3 = 0;
      uVar9 = uVar10;
      if (uVar10 < 5) {
        uVar9 = 4;
      }
      bVar17 = 0x3ffffffe < uVar10;
      bVar16 = uVar10 == 0x3fffffff;
      uVar15 = uVar9 * 4;
      if (uVar10 < 0x40000000) {
        bVar17 = 0x7ffffffb < uVar15;
        bVar16 = uVar15 == 0x7ffffffc;
      }
      if (bVar17 && !bVar16) {
LAB_011cfbb0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,uVar15);
      }
      puVar6 = (uint *)thunk_FUN_016d4a50(uVar15);
      if (puVar6 == (uint *)0x0) {
        uVar3 = 4;
        goto LAB_011cfbb0;
      }
      *puVar6 = (uint)puVar1;
      local_64 = 1;
      local_60 = local_98;
      local_5c = local_94;
      local_58 = local_90;
      local_54 = (uint *)uStack_8c;
      ppppuStack_50 = ppppuStack_88;
      local_4c = local_84;
      local_48 = local_80;
      local_44 = local_7c;
      local_40 = local_78;
      local_3c = local_74;
      local_6c = uVar9;
      local_68 = puVar6;
      while (uVar10 = local_64, uVar9 = FUN_0115876c(&local_60), uVar9 != 0) {
        local_38 = uVar9;
        if (uVar10 == local_6c) {
          puVar1 = (uint *)0x0;
          uVar15 = 1;
          iVar8 = 0;
          if (local_48 != 0) {
            (**(code **)(local_44 + 0x10))(&local_30);
            puVar1 = local_30;
            uVar15 = local_2c;
            iVar8 = local_28;
          }
          puVar6 = (uint *)0x0;
          iVar12 = 0;
          uVar13 = 1;
          if (local_40 != 0) {
            (**(code **)(local_3c + 0x10))(&local_30);
            puVar6 = local_30;
            iVar12 = local_28;
            uVar13 = local_2c;
          }
          iVar4 = (int)puVar1 + (int)puVar6;
          if (CARRY4((uint)puVar1,(uint)puVar6)) {
            iVar4 = -1;
          }
          if (local_60 == (uint *)0x0) {
            if ((uVar13 & uVar15) == 0) goto LAB_011cfd20;
LAB_011cfc0c:
            puVar1 = (uint *)(iVar12 + iVar8);
            ppuVar7 = &local_34;
          }
          else {
            puVar1 = (uint *)0x0;
            if (((local_5c == local_60) && (uVar15 != 0)) && (local_5c == local_60)) {
              ppuVar7 = &local_30;
              if (uVar13 != 0) goto LAB_011cfc0c;
            }
            else {
LAB_011cfd20:
              puVar1 = (uint *)0x0;
              ppuVar7 = &local_30;
            }
          }
          *ppuVar7 = puVar1;
          iVar8 = iVar4 + 1;
          if (iVar4 == -1) {
            iVar8 = -1;
          }
          FUN_011cf828(&local_6c,uVar10,iVar8,4,4);
          puVar6 = local_68;
        }
        puVar6[uVar10] = uVar9;
        local_64 = uVar10 + 1;
      }
      FUN_011588f0(&local_60);
      local_60 = local_68;
      local_58 = local_6c;
    }
    local_54 = local_60 + uVar10;
    local_5c = local_60;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    goto LAB_011cff50;
  }
  if (*(int *)(iVar8 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x011cf904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)((*(undefined4 **)(iVar8 + 0xc))[1] + 0xc))(**(undefined4 **)(iVar8 + 0xc))
    ;
    return uVar18;
  }
  local_b0 = &local_c4;
  local_c0 = *(uint **)(iVar8 + 0xc);
  local_bc = local_c0 + *(int *)(iVar8 + 0x10) * 8;
  local_a0 = 0;
  local_a8 = 0;
  local_ac = param_5;
  local_b8 = param_2;
  local_b4 = param_3;
  puVar1 = (uint *)FUN_011591c8(&local_c0);
  if (puVar1 == (uint *)0x0) {
    FUN_011588f0(&local_c0);
    local_60 = (uint *)&DAT_00000004;
    uVar10 = 0;
    local_58 = 0;
  }
  else {
    puVar6 = (uint *)0x0;
    puVar11 = (uint *)1;
    uVar10 = 0;
    local_34 = puVar1;
    if (local_a8 != 0) {
      (**(code **)(local_a4 + 0x10))(&local_60);
      puVar6 = local_60;
      puVar11 = local_5c;
      uVar10 = local_58;
    }
    puVar2 = (uint *)0x0;
    uVar9 = 0;
    puVar14 = (uint *)1;
    if (local_a0 != 0) {
      (**(code **)(local_9c + 0x10))(&local_60);
      puVar2 = local_60;
      uVar9 = local_58;
      puVar14 = local_5c;
    }
    iVar8 = (int)puVar6 + (int)puVar2;
    if (CARRY4((uint)puVar6,(uint)puVar2)) {
      iVar8 = -1;
    }
    if (local_c0 == (uint *)0x0) {
      if (((uint)puVar14 & (uint)puVar11) != 0) goto LAB_011cfb70;
      puVar6 = (uint *)0x0;
      ppuVar7 = &local_60;
    }
    else {
      ppuVar7 = &local_60;
      puVar6 = (uint *)0x0;
      if (((local_bc == local_c0) && (puVar11 != (uint *)0x0)) &&
         ((local_bc == local_c0 && (puVar14 != (uint *)0x0)))) {
LAB_011cfb70:
        puVar6 = (uint *)(uVar9 + uVar10);
        ppuVar7 = &local_30;
      }
    }
    *ppuVar7 = puVar6;
    uVar10 = iVar8 + 1;
    if (iVar8 == -1) {
      uVar10 = 0xffffffff;
    }
    uVar3 = 0;
    uVar9 = uVar10;
    if (uVar10 < 5) {
      uVar9 = 4;
    }
    bVar17 = 0x3ffffffe < uVar10;
    bVar16 = uVar10 == 0x3fffffff;
    uVar15 = uVar9 * 4;
    if (uVar10 < 0x40000000) {
      bVar17 = 0x7ffffffb < uVar15;
      bVar16 = uVar15 == 0x7ffffffc;
    }
    if (bVar17 && !bVar16) {
LAB_011cfda0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,uVar15);
    }
    puVar6 = (uint *)thunk_FUN_016d4a50(uVar15);
    if (puVar6 == (uint *)0x0) {
      uVar3 = 4;
      goto LAB_011cfda0;
    }
    *puVar6 = (uint)puVar1;
    local_64 = 1;
    local_60 = local_c0;
    local_5c = local_bc;
    local_58 = local_b8;
    local_54 = (uint *)local_b4;
    ppppuStack_50 = local_b0;
    local_4c = local_ac;
    local_48 = local_a8;
    local_44 = local_a4;
    local_40 = local_a0;
    local_3c = local_9c;
    local_6c = uVar9;
    local_68 = puVar6;
    while (uVar10 = local_64, uVar9 = FUN_011591c8(&local_60), uVar9 != 0) {
      local_38 = uVar9;
      if (uVar10 == local_6c) {
        puVar1 = (uint *)0x0;
        uVar15 = 1;
        iVar8 = 0;
        if (local_48 != 0) {
          (**(code **)(local_44 + 0x10))(&local_30);
          puVar1 = local_30;
          uVar15 = local_2c;
          iVar8 = local_28;
        }
        puVar6 = (uint *)0x0;
        iVar12 = 0;
        uVar13 = 1;
        if (local_40 != 0) {
          (**(code **)(local_3c + 0x10))(&local_30);
          puVar6 = local_30;
          iVar12 = local_28;
          uVar13 = local_2c;
        }
        iVar4 = (int)puVar1 + (int)puVar6;
        if (CARRY4((uint)puVar1,(uint)puVar6)) {
          iVar4 = -1;
        }
        if (local_60 == (uint *)0x0) {
          if ((uVar13 & uVar15) == 0) goto LAB_011cfee8;
LAB_011cfed8:
          puVar1 = (uint *)(iVar12 + iVar8);
          ppuVar7 = &local_34;
        }
        else {
          puVar1 = (uint *)0x0;
          if (((local_5c == local_60) && (uVar15 != 0)) && (local_5c == local_60)) {
            ppuVar7 = &local_30;
            if (uVar13 != 0) goto LAB_011cfed8;
          }
          else {
LAB_011cfee8:
            puVar1 = (uint *)0x0;
            ppuVar7 = &local_30;
          }
        }
        *ppuVar7 = puVar1;
        iVar8 = iVar4 + 1;
        if (iVar4 == -1) {
          iVar8 = -1;
        }
        FUN_011cf828(&local_6c,uVar10,iVar8,4,4);
        puVar6 = local_68;
      }
      puVar6[uVar10] = uVar9;
      local_64 = uVar10 + 1;
    }
    FUN_011588f0(&local_60);
    local_60 = local_68;
    local_58 = local_6c;
  }
  local_54 = local_60 + uVar10;
  local_5c = local_60;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
LAB_011cff50:
  *puVar5 = local_60;
  puVar5[1] = local_5c;
  puVar5[2] = local_58;
  puVar5[3] = local_54;
  return CONCAT44(&UNK_01889fe8,puVar5);
}

