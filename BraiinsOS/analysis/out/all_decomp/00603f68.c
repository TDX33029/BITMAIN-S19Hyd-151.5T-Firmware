// FUN_00603f68 @ 00603f68 size=868 calls_out=9 calls_in=23
// strings: stack backtrace: | a Display implementation returned an error unexpectedly

undefined4 FUN_00603f68(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  int *local_48;
  undefined1 *local_44;
  uint local_40;
  int **local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  local_60 = (**(code **)(*param_1 + 4))(param_1);
  iVar2 = (int)((ulonglong)local_60 >> 0x20);
  uVar4 = (undefined4)local_60;
  if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00604030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(iVar2 + 0xc))(uVar4,param_2);
    return uVar4;
  }
  local_38 = (int **)&local_60;
  local_34 = (undefined4 *)&LAB_01656d18;
  iVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_38);
  if (iVar1 != 0) {
    return 1;
  }
  uVar7 = (**(code **)(iVar2 + 0x18))(uVar4);
  if ((int)uVar7 != 0) {
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0033d86a,0xc);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x18))((int)uVar7);
    puVar6 = (undefined1 *)0x0;
    while( true ) {
      if ((int)uVar7 == 0) break;
      uVar8 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x18))((int)uVar7);
      local_58 = uVar7;
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
      if (iVar1 != 0) {
        return 1;
      }
      local_2c = local_2c & 0xffffff00;
      local_48 = (int *)&local_58;
      local_44 = &LAB_01656d18;
      local_38 = (int **)(uint)(iVar2 != 0);
      local_34 = (undefined4 *)puVar6;
      local_30 = param_2;
      iVar1 = FUN_00fa948c(&local_38,&DAT_01857698,&DAT_00590e71,&local_48);
      if (iVar1 != 0) {
        return 1;
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar8;
    }
  }
  puVar3 = (uint *)(param_1 + 1);
  uVar5 = *puVar3;
  if (uVar5 == 3) {
    puVar3 = (uint *)(**(code **)(*param_1 + 0x18))(param_1);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0033d887,0x18,&DAT_018576d0);
    }
    uVar5 = *puVar3;
  }
  if (uVar5 < 2) {
    return 0;
  }
  local_40 = 0;
  local_34 = (undefined4 *)&DAT_01857670;
  local_38 = &local_48;
  local_48 = (int *)0x0;
  local_2c = 0;
  local_44 = (undefined1 *)0x1;
  local_30 = (undefined4 *)&DAT_60000020;
  iVar2 = FUN_01604fb0(puVar3,&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_01857688,&DAT_018af130);
  }
  local_58._0_4_ = local_48;
  local_58._4_4_ = local_44;
  local_50 = local_40;
  iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0035e2eb,2);
  if (iVar2 != 0) goto LAB_00604244;
  if (local_50 < 0x10) {
LAB_006041c8:
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0033d876,0x11);
    if (iVar2 != 0) goto LAB_00604244;
  }
  else {
    iVar2 = thunk_FUN_016dd50a("stack backtrace:",local_58._4_4_,0x10);
    if (iVar2 != 0) goto LAB_006041c8;
    FUN_006043d4(&local_58);
  }
  uVar4 = FUN_0060466c(local_58._4_4_,local_50);
  FUN_0060434c(&local_58,uVar4);
  local_34 = &DAT_006043a8;
  local_38 = (int **)&local_58;
  iVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_38);
  if (iVar2 == 0) {
    if ((int *)local_58 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_58._4_4_);
    }
    return 0;
  }
LAB_00604244:
  if ((int *)local_58 != (int *)0x0) {
    thunk_FUN_016d3fb4(local_58._4_4_);
  }
  return 1;
}

