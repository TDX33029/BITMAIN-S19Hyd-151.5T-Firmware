// FUN_012be0e4 @ 012be0e4 size=1240 calls_out=11 calls_in=14
// strings: 

void FUN_012be0e4(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int local_a4;
  int local_a0;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  
  if (*(uint *)(param_2 + 0x3c) != param_4) {
    param_1[1] = *(uint *)(param_2 + 0x3c);
    param_1[2] = param_4;
    *param_1 = 1;
    return;
  }
  iVar16 = *(int *)(param_2 + 0x30);
  uVar6 = iVar16 + param_4;
  if (uVar6 == 0) {
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    return;
  }
  if (param_4 == 0) {
    FUN_012b7bd8(param_1 + 1,*(undefined4 *)(param_2 + 0x2c),iVar16);
    *param_1 = 5;
    return;
  }
  iVar7 = uVar6 * 0x28;
  if (0x3333333 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar7);
  }
  if (iVar7 == 0) {
    local_8c = 4;
    uVar6 = 0;
  }
  else {
    local_8c = thunk_FUN_016d4a50(iVar7);
    if (local_8c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar7);
    }
  }
  puVar14 = (undefined4 *)(*(int *)(param_2 + 0x38) + 4);
  iVar7 = param_4 * 0xc;
  local_90 = 0;
  local_80 = 0;
  local_88 = uVar6;
  local_84 = local_8c;
  while( true ) {
    uVar6 = local_80;
    iVar2 = 1;
    iVar9 = puVar14[1];
    uVar11 = *puVar14;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 1;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 1;
    local_78 = 0;
    if ((iVar9 != 0) && (iVar2 = thunk_FUN_016d4a50(iVar9), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar9);
    }
    FUN_016dd1aa(iVar2,uVar11,iVar9);
    local_6c = 1;
    local_78 = iVar9;
    local_74 = iVar2;
    local_70 = iVar9;
    if (param_4 == uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_4,param_4,&DAT_0188cbfc);
    }
    puVar1 = (undefined4 *)(param_3 + uVar6 * 8);
    uVar12 = *puVar1;
    iVar2 = puVar1[1];
    uVar11 = 0;
    if (iVar2 < 0) break;
    if (iVar2 == 0) {
      local_a0 = 1;
      local_a4 = 0;
    }
    else {
      local_a0 = thunk_FUN_016d4a50(iVar2);
      if (local_a0 == 0) {
        uVar11 = 1;
        local_a0 = iVar2;
        break;
      }
      local_a4 = iVar2;
    }
    FUN_016dd1aa(local_a0,uVar12,iVar2);
    local_5c = 1;
    local_68 = local_a4;
    local_64 = local_a0;
    local_60 = iVar2;
    if (uVar6 == local_88) {
      FUN_012bda90(&local_88);
      local_8c = local_84;
    }
    uVar6 = uVar6 + 1;
    puVar14 = puVar14 + 3;
    FUN_016dd52c(local_8c + local_90,&local_78,0x28);
    local_90 = local_90 + 0x28;
    iVar7 = iVar7 + -0xc;
    local_80 = uVar6;
    if (iVar7 == 0) {
      if (iVar16 != 0) {
        iVar7 = *(int *)(param_2 + 0x2c);
        iVar2 = 0;
        do {
          uVar6 = local_80;
          iVar3 = 0;
          iVar9 = 1;
          iVar15 = iVar7 + iVar2;
          uVar8 = 0;
          local_94 = 1;
          if (*(char *)(iVar15 + 0xc) == '\x01') {
            iVar3 = *(int *)(iVar15 + 8);
            uVar8 = 1;
            uVar11 = *(undefined4 *)(iVar15 + 4);
            if ((iVar3 != 0) && (iVar9 = thunk_FUN_016d4a50(iVar3), iVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar3);
            }
            FUN_016dd1aa(iVar9,uVar11,iVar3);
          }
          iVar10 = 0;
          uVar5 = 0;
          piVar4 = (int *)0x0;
          if (*(char *)(iVar15 + 0x1c) == '\x01') {
            iVar10 = *(int *)(iVar15 + 0x18);
            uVar5 = 1;
            uVar11 = *(undefined4 *)(iVar15 + 0x14);
            local_94 = 1;
            if ((iVar10 != 0) && (local_94 = thunk_FUN_016d4a50(iVar10), local_94 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar10);
            }
            FUN_016dd1aa(local_94,uVar11,iVar10);
          }
          iVar13 = *(int *)(iVar15 + 0x20);
          if (iVar13 != 0) {
            piVar4 = (int *)thunk_FUN_016d4a50(0x10);
            if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            FUN_012c14a0(&local_50,iVar13);
            *piVar4 = local_50;
            piVar4[1] = local_4c;
            piVar4[2] = local_48;
            piVar4[3] = local_44;
          }
          local_2c = *(int *)(iVar15 + 0x24);
          local_3c = local_94;
          local_44 = CONCAT31(local_44._1_3_,uVar8);
          local_34 = CONCAT31(local_34._1_3_,uVar5);
          local_50 = iVar3;
          local_4c = iVar9;
          local_48 = iVar3;
          local_40 = iVar10;
          local_38 = iVar10;
          local_30 = piVar4;
          if (uVar6 == local_88) {
            FUN_012bda90(&local_88);
            local_8c = local_84;
          }
          local_80 = uVar6 + 1;
          iVar2 = iVar2 + 0x28;
          piVar4 = (int *)(local_8c + local_90);
          local_90 = local_90 + 0x28;
          *piVar4 = local_50;
          piVar4[1] = local_4c;
          piVar4[2] = local_48;
          piVar4[3] = local_44;
          piVar4[4] = local_40;
          piVar4[5] = local_3c;
          piVar4[6] = local_38;
          piVar4[7] = local_34;
          piVar4[8] = (int)local_30;
          piVar4[9] = local_2c;
        } while (iVar16 * 0x28 != iVar2);
      }
      if (1 < local_80) {
        if (local_80 < 0x15) {
          FUN_012bbec8(local_8c);
        }
        else {
          FUN_012bc558(local_8c,local_80);
        }
      }
      *param_1 = 5;
      param_1[1] = local_88;
      param_1[2] = local_84;
      param_1[3] = local_80;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar11,local_a0);
}

