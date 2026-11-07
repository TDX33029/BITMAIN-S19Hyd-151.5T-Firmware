// FUN_0155ae50 @ 0155ae50 size=452 calls_out=4 calls_in=0
// strings: 

void FUN_0155ae50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  int local_68;
  int local_64;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 *local_2c;
  
  (**(code **)(param_2[6] + 0x10))(&local_58,param_2[5]);
  puVar3 = (undefined4 *)local_50;
  iVar1 = local_58._4_4_;
  if ((int)local_58 != -0x7fffffd7) {
    param_1[3] = local_50._4_4_;
    param_1[4] = local_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = iStack_3c;
    *param_1 = (int)local_58;
    param_1[1] = local_58._4_4_;
    param_1[2] = (int)(undefined4 *)local_50;
    return;
  }
  (**(code **)(param_2[8] + 0x10))(&local_58,param_2[7]);
  puVar4 = (undefined4 *)local_50;
  iVar2 = local_58._4_4_;
  if ((int)local_58 == -0x7fffffd7) {
    uVar7 = (*(code *)((undefined4 *)local_50)[7])();
    local_50 = (*(code *)puVar3[7])(iVar1);
    if ((char)param_2[4] == '\0') {
      local_58 = local_50;
      FUN_0155c778(&local_68,&local_58);
      local_50 = uVar7;
    }
    else {
      local_58 = uVar7;
      FUN_0155c778(&local_68,&local_58);
    }
    local_50._4_4_ = *param_2;
    local_30 = iVar2;
    local_48 = param_2[1];
    iStack_44 = param_2[2];
    local_40 = param_2[3];
    iStack_3c = param_2[4];
    local_50._0_4_ = (undefined4 *)local_60;
    local_2c = puVar4;
    local_34 = puVar3;
    local_38 = iVar1;
    local_58._0_4_ = local_68;
    local_58._4_4_ = local_64;
    piVar5 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x30);
    }
    *piVar5 = (int)local_58;
    piVar5[1] = local_58._4_4_;
    piVar5[2] = (int)(undefined4 *)local_50;
    piVar5[3] = local_50._4_4_;
    piVar5[4] = local_48;
    piVar5[5] = iStack_44;
    piVar5[6] = local_40;
    piVar5[7] = iStack_3c;
    piVar5[8] = local_38;
    piVar5[9] = (int)local_34;
    piVar5[10] = local_30;
    piVar5[0xb] = (int)local_2c;
    *param_1 = -0x7fffffd7;
    param_1[1] = (int)piVar5;
    param_1[2] = (int)&DAT_018a8b88;
  }
  else {
    param_1[3] = local_50._4_4_;
    param_1[4] = local_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = iStack_3c;
    pcVar6 = (code *)*puVar3;
    *param_1 = (int)local_58;
    param_1[1] = local_58._4_4_;
    param_1[2] = (int)(undefined4 *)local_50;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar1);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar1);
      return;
    }
  }
  return;
}

