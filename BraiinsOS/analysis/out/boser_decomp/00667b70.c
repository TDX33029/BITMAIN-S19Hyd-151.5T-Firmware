// FUN_00667b70 @ 00667b70 size=768 calls_out=9 calls_in=1
// strings: 

undefined4 FUN_00667b70(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  int *local_48;
  undefined1 *local_44;
  uint local_40;
  int **local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  local_60 = (**(code **)(*param_1 + 4))(param_1);
  iVar2 = (int)((ulonglong)local_60 >> 0x20);
  uVar3 = (undefined4)local_60;
  if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00667ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(iVar2 + 0xc))(uVar3,param_2);
    return uVar3;
  }
  local_38 = (int **)&local_60;
  local_34 = &LAB_012c1d70;
  iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_38);
  if (iVar1 != 0) {
    return 1;
  }
  uVar6 = (**(code **)(iVar2 + 0x18))(uVar3);
  if ((int)uVar6 != 0) {
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003d4287,0xc);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x18))((int)uVar6);
    puVar5 = (undefined1 *)0x0;
    while( true ) {
      if ((int)uVar6 == 0) break;
      uVar7 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x18))((int)uVar6);
      local_58 = uVar6;
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"\n",1);
      if (iVar1 != 0) {
        return 1;
      }
      local_2c = local_2c & 0xffffff00;
      local_48 = (int *)&local_58;
      local_44 = &LAB_012c1d70;
      local_38 = (int **)(uint)(iVar2 != 0);
      local_34 = puVar5;
      local_30 = param_2;
      iVar1 = FUN_012fa178(&local_38,&DAT_01c04198,&DAT_00590e5f,&local_48);
      if (iVar1 != 0) {
        return 1;
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar7;
    }
  }
  puVar4 = (uint *)FUN_00667ed8(param_1);
  if (*puVar4 < 2) {
    return 0;
  }
  local_38 = &local_48;
  local_40 = 0;
  local_48 = (int *)0x0;
  local_2c = 0;
  local_44 = (undefined1 *)0x1;
  local_30 = (undefined4 *)0x60000020;
  local_34 = &DAT_01c04050;
  iVar2 = FUN_019bac7c(puVar4,&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c04068,&DAT_01d30334);
  }
  local_58._0_4_ = local_48;
  local_58._4_4_ = local_44;
  local_50 = local_40;
  iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00420454,2);
  if (iVar2 != 0) goto LAB_00667e18;
  if (local_50 < 0x10) {
LAB_00667da0:
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003d4293,0x11);
    if (iVar2 != 0) goto LAB_00667e18;
  }
  else {
    iVar2 = thunk_FUN_01bed842(&DAT_00569e68,local_58._4_4_,0x10);
    if (iVar2 != 0) goto LAB_00667da0;
    FUN_006674ac(&local_58);
  }
  FUN_006685f8(local_58._4_4_,local_50);
  FUN_00667f28(&local_58);
  local_34 = &LAB_00632348;
  local_38 = (int **)&local_58;
  iVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_38);
  if (iVar2 == 0) {
    FUN_0134bd64((int *)local_58,local_58._4_4_);
    return 0;
  }
LAB_00667e18:
  FUN_0134bd64((int *)local_58,local_58._4_4_);
  return 1;
}

