// FUN_0130bdc8 @ 0130bdc8 size=652 calls_out=5 calls_in=1
// strings: 

void FUN_0130bdc8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int local_80;
  int local_7c;
  undefined1 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_0130b94c(&local_80);
  iVar1 = local_64;
  iVar8 = local_68;
  iVar7 = local_6c;
  iVar4 = local_70;
  iVar3 = local_74;
  puVar5 = local_78;
  if (local_78 == (undefined1 *)0x80000003) {
    puVar5 = (undefined1 *)local_6c;
    puVar6 = (undefined1 *)local_70;
    iVar3 = local_68;
    iVar4 = local_74;
LAB_0130bee0:
    local_bc = (int)puVar5;
    local_c0 = (int)puVar6;
    local_c4 = iVar4;
    local_c8 = 0x80000006;
    local_b8 = iVar3;
    if (iVar4 == 1) {
      FUN_0130b94c(&local_80,param_2,param_3);
      if (local_78 == (undefined1 *)0x80000003) {
        local_58 = local_74;
        local_54 = local_70;
        iStack_50 = local_6c;
        iStack_4c = local_68;
        local_9c = local_74;
        local_98 = local_70;
        iStack_94 = local_6c;
        iStack_90 = local_68;
        local_a0 = 0x80000006;
        if (local_74 == 1) {
          FUN_0130b1a8(&local_58,param_2,param_3);
          if (local_58 == 0) {
            local_80 = local_54;
            local_74 = iStack_4c;
            local_70 = iStack_48;
            local_7c = iStack_50;
            local_6c = local_44;
            local_78 = &DAT_80000005;
          }
          else {
            local_6c = iStack_4c;
            local_68 = iStack_48;
            local_70 = iStack_50;
            local_74 = local_54;
            local_78 = (undefined1 *)0x80000006;
            if (local_54 == 1) {
              param_1[4] = iStack_50;
              param_1[5] = iStack_4c;
              param_1[6] = iStack_48;
              param_1[2] = -0x7ffffffa;
              param_1[3] = 1;
              return;
            }
          }
          *param_1 = local_80;
          param_1[1] = local_7c;
          param_1[2] = (int)local_78;
          param_1[3] = local_74;
          param_1[4] = local_70;
          param_1[5] = local_6c;
          param_1[6] = local_68;
          param_1[7] = local_64;
          param_1[8] = iStack_60;
          return;
        }
      }
      else {
        local_98 = local_74;
        iStack_94 = local_70;
        iStack_90 = local_6c;
        iStack_8c = local_68;
        local_9c = (int)local_78;
        local_88 = local_64;
        local_a4 = local_7c;
        local_a8 = local_80;
        local_a0 = 0x80000003;
      }
      piVar2 = &local_a8;
      goto LAB_0130c00c;
    }
  }
  else {
    local_2c = local_68;
    local_30 = local_6c;
    local_34 = local_70;
    local_38 = local_74;
    local_28 = local_64;
    local_3c = (int)local_78;
    FUN_0130fd94(&local_80,&DAT_005327c4,local_80,local_7c);
    if (local_80 != 0) {
      puVar5 = (undefined1 *)local_74;
      puVar6 = local_78;
      iVar3 = local_70;
      iVar4 = local_7c;
LAB_0130becc:
      FUN_0130e74c(&local_3c);
      goto LAB_0130bee0;
    }
    FUN_0130b738(&local_80,local_7c,local_78);
    if (local_80 != 3) {
      puVar5 = local_78;
      puVar6 = (undefined1 *)local_7c;
      iVar3 = local_74;
      iVar4 = local_80;
      goto LAB_0130becc;
    }
    local_bc = iVar7;
    local_c0 = iVar4;
    local_b0 = local_74;
    local_d0 = local_7c;
    iStack_cc = (int)local_78;
    local_c8 = (int)puVar5;
    local_c4 = iVar3;
    local_b4 = iVar1;
    local_b8 = iVar8;
  }
  piVar2 = &local_d0;
LAB_0130c00c:
  iVar3 = piVar2[1];
  iVar4 = piVar2[2];
  iVar7 = piVar2[3];
  *param_1 = *piVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar7;
  iVar3 = piVar2[5];
  iVar4 = piVar2[6];
  iVar7 = piVar2[7];
  iVar8 = piVar2[8];
  param_1[4] = piVar2[4];
  param_1[5] = iVar3;
  param_1[6] = iVar4;
  param_1[7] = iVar7;
  param_1[8] = iVar8;
  return;
}

