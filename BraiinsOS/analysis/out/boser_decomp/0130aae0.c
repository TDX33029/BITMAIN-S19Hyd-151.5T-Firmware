// FUN_0130aae0 @ 0130aae0 size=904 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0130aae0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *piStack_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *piStack_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  FUN_01312ce0(&local_48);
  piVar5 = local_40;
  piVar3 = local_44;
  if (local_48 == (int *)&DAT_00000001) {
    local_80 = local_40;
    local_7c = local_3c;
    local_78 = local_38;
  }
  else {
    local_50 = (int *)0x0;
    local_54 = (int *)&SUB_00000004;
    local_58 = (int *)0x0;
    FUN_0130bdc8(&local_48,local_44);
    local_7c = local_44;
    local_84 = local_48;
    if (local_40 == (int *)0x80000006) {
LAB_0130ab4c:
      local_84 = local_3c;
      local_80 = local_38;
      local_7c = local_34;
      local_78 = local_30;
LAB_0130ab68:
      FUN_0130aeb4(&local_58);
      piVar6 = (int *)0x1;
      if (local_84 != (int *)&DAT_00000001) goto LAB_0130add4;
      FUN_0130bdc8(&local_48,piVar3,piVar5);
      local_68 = local_44;
      local_84 = local_48;
      if (local_40 == (int *)0x80000006) {
        local_58 = local_3c;
        local_54 = local_38;
        local_50 = local_34;
        piStack_4c = local_30;
        local_68 = local_38;
        local_64 = local_34;
        local_60 = local_30;
        local_70 = (int *)0x1;
        local_84 = local_3c;
      }
      else {
        local_58 = local_3c;
        local_54 = local_38;
        local_50 = local_34;
        piStack_4c = local_30;
        puVar8 = (undefined4 *)((uint)&local_48 | 4);
        *puVar8 = local_3c;
        puVar8[1] = local_38;
        puVar8[2] = local_34;
        puVar8[3] = local_30;
        local_30 = local_28;
        local_34 = local_2c;
        local_48 = local_40;
        local_60 = (int *)thunk_FUN_01be5118(0x1c);
        if (local_60 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        *local_60 = (int)local_48;
        local_60[1] = (int)local_44;
        local_60[2] = (int)local_40;
        local_60[3] = (int)local_3c;
        local_60[4] = (int)local_38;
        local_60[5] = (int)local_34;
        local_60[6] = (int)local_30;
        local_5c = 1;
        local_64 = (int *)&DAT_00000001;
        local_70 = (int *)0x0;
      }
      piStack_74 = (int *)&DAT_00000001;
      piVar6 = (int *)0x1;
      if (local_84 != (int *)&DAT_00000001) {
        piVar6 = local_70;
      }
      if (local_70 == (int *)0x0) {
        piVar6 = local_70;
      }
      local_80 = local_68;
      local_7c = local_64;
      local_78 = local_60;
    }
    else {
      FUN_015f5b48(&local_58);
      iVar9 = 0x1c;
      *local_54 = (int)local_40;
      local_54[1] = (int)local_3c;
      local_54[2] = (int)local_38;
      local_54[3] = (int)local_34;
      local_54[4] = (int)local_30;
      local_54[5] = (int)local_2c;
      local_54[6] = (int)local_28;
      local_50 = (int *)&DAT_00000001;
      piVar6 = local_54;
      while (piVar1 = local_50, FUN_0130fd94(&local_70,",",local_84,local_7c),
            local_70 != (int *)0x1) {
        if (local_68 == local_7c) {
          local_78 = (int *)CONCAT31(local_78._1_3_,6);
          local_80 = local_6c;
          local_84 = (int *)&DAT_00000001;
          goto LAB_0130ab68;
        }
        FUN_0130bdc8(&local_48);
        piVar4 = local_44;
        piVar2 = local_48;
        if (local_40 == (int *)0x80000006) {
          if (local_3c == (int *)&DAT_00000001) goto LAB_0130adac;
          goto LAB_0130ab4c;
        }
        if (piVar1 == local_58) {
          FUN_015f5b48(&local_58);
          piVar6 = local_54;
        }
        puVar8 = (undefined4 *)((int)piVar6 + iVar9);
        local_50 = (int *)((int)piVar1 + 1);
        iVar9 = iVar9 + 0x1c;
        *puVar8 = local_40;
        puVar8[1] = local_3c;
        puVar8[2] = local_38;
        puVar8[3] = local_34;
        puVar8[4] = local_30;
        puVar8[5] = local_2c;
        puVar8[6] = local_28;
        local_7c = piVar4;
        local_84 = piVar2;
      }
      if (local_6c != (int *)&DAT_00000001) {
        local_84 = local_6c;
        local_80 = local_68;
        local_7c = local_64;
        local_78 = local_60;
        goto LAB_0130ab68;
      }
LAB_0130adac:
      local_78 = local_54;
      piStack_74 = local_50;
      piVar6 = (int *)0x0;
      local_80 = local_7c;
      local_7c = local_58;
LAB_0130add4:
    }
    if (piVar6 == (int *)0x0) {
      FUN_01312ce0(&local_48,local_84);
      if (local_48 != (int *)&DAT_00000001) {
        param_1[2] = local_40;
        param_1[3] = local_7c;
        param_1[4] = local_78;
        param_1[5] = piStack_74;
        uVar7 = 0;
        param_1[1] = local_44;
        goto LAB_0130ae38;
      }
      local_70 = local_7c;
      local_6c = local_78;
      local_68 = piStack_74;
      FUN_0130aeb4(&local_70);
      local_80 = local_40;
      local_84 = local_44;
      local_7c = local_3c;
      local_78 = local_38;
    }
    local_44 = local_84;
  }
  param_1[1] = local_44;
  param_1[2] = local_80;
  param_1[3] = local_7c;
  param_1[4] = local_78;
  uVar7 = 1;
LAB_0130ae38:
  *param_1 = uVar7;
  return;
}

