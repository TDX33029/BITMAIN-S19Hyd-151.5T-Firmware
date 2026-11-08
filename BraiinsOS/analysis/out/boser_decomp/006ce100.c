// FUN_006ce100 @ 006ce100 size=664 calls_out=4 calls_in=2
// strings: Invalid number

void FUN_006ce100(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 **local_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int **local_80;
  undefined1 *local_7c;
  char **local_78;
  undefined2 *local_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 **local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined2 **local_40;
  code *local_3c;
  undefined4 ***local_38;
  code *local_34;
  undefined2 *local_30;
  char *local_2c;
  undefined4 local_28;
  
  if (param_2[4] == -0x7ffffff9) {
    local_b0 = -0x80000000;
  }
  else {
    local_c0 = (undefined4 **)*param_2;
    iStack_bc = param_2[1];
    local_b8 = param_2[2];
    local_b4 = param_2[3];
    local_b0 = param_2[4];
    iStack_ac = param_2[5];
    local_a8 = param_2[6];
    iStack_a4 = param_2[7];
    iStack_a0 = param_2[8];
    iStack_9c = param_2[9];
    iStack_98 = param_2[10];
    iStack_94 = param_2[0xb];
    if (local_b0 == -0x7fffffff) {
      if (local_c0 == (undefined4 **)0x0 && iStack_bc == 0) {
        if (local_b4 == 0) {
          *param_1 = 2;
          param_1[1] = local_b8;
          return;
        }
        local_40 = (undefined2 **)&DAT_0056d238;
        local_3c = FUN_012fd02c;
        FUN_00664898(&local_80,&DAT_005b330f,&local_40);
        local_50 = local_80;
        local_4c = local_7c;
        uStack_48 = local_78;
        local_38 = (undefined4 ***)0x3;
        local_3c = (code *)0x3eece8;
        local_40 = (undefined2 **)0x80000000;
        local_74 = (undefined2 *)&LAB_00632348;
        local_7c = &LAB_012b97d8;
        local_80 = (int **)&local_40;
        local_78 = (char **)&local_50;
        FUN_00664898(&local_30,&DAT_00592d44,&local_80);
        if (local_40 != (undefined2 **)0x80000000) {
          FUN_019bb7e0(local_40,local_3c);
        }
        local_74 = local_30;
        iStack_70 = (int)local_2c;
        iStack_6c = local_28;
        FUN_019bb7e0(local_50,local_4c);
        *param_1 = 0;
        param_1[1] = local_80;
        param_1[2] = local_7c;
        param_1[3] = local_78;
        param_1[4] = local_74;
        param_1[5] = iStack_70;
        param_1[6] = iStack_6c;
      }
      else {
        local_3c = (code *)0x3eece8;
        local_40 = (undefined2 **)0x80000000;
        local_78 = (char **)&local_50;
        local_80 = (int **)&local_40;
        local_50 = (undefined4 **)0x3dbec9;
        local_4c = 0xe;
        local_38 = (undefined4 ***)0x3;
        local_74 = &DAT_0132b6a0;
        local_7c = &LAB_012b97d8;
        FUN_00664898(&local_30,&DAT_00592d44,&local_80);
        if (local_40 != (undefined2 **)0x80000000) {
          FUN_019bb7e0(local_40,local_3c);
        }
        puVar1 = (undefined4 *)((uint)&local_90 | 4);
        *puVar1 = local_30;
        puVar1[1] = local_2c;
        puVar1[2] = local_28;
        *param_1 = 0;
        param_1[3] = local_90;
        param_1[4] = uStack_8c;
        param_1[5] = uStack_88;
        param_1[6] = uStack_84;
      }
      FUN_006ccfc0(&local_c0);
      return;
    }
  }
  local_38 = &local_80;
  local_80 = local_c0;
  local_7c = (undefined1 *)iStack_bc;
  local_78 = (char **)local_b8;
  local_74 = (undefined2 *)local_b4;
  iStack_70 = local_b0;
  iStack_6c = iStack_ac;
  local_68 = local_a8;
  iStack_64 = iStack_a4;
  iStack_60 = iStack_a0;
  iStack_5c = iStack_9c;
  iStack_58 = iStack_98;
  iStack_54 = iStack_94;
  local_28 = 3;
  local_30 = (undefined2 *)0x80000000;
  local_40 = &local_30;
  local_2c = "Int";
  local_34 = FUN_00700f8c;
  local_3c = (code *)&LAB_012b97d8;
  FUN_00664898(&local_50,&DAT_0059054b,&local_40);
  if (local_30 != (undefined2 *)0x80000000) {
    FUN_019bb7e0(local_30,local_2c);
  }
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = uStack_48;
  *param_1 = 0;
  FUN_00fe40e4(&local_80);
  return;
}

