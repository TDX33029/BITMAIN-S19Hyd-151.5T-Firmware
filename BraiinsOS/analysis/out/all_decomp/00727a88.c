// FUN_00727a88 @ 00727a88 size=536 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_00727a88(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,1,0);
  if (iVar1 == 0) {
    puVar6 = param_2 + 2;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00727e88(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar5 = *puVar6;
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      uVar5 = *puVar6;
      local_35 = 1;
      local_44 = uVar3;
      local_40 = iVar4;
      local_2c = uVar5;
      iVar1 = FUN_00727e88(param_1,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((uVar5 & 0x800000) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00727cc0(param_1 + 4,param_2);
    }
    else {
      local_44 = *param_2;
      local_40 = param_2[1];
      local_3c = &local_35;
      local_2c = *puVar6;
      local_28 = param_2[3];
      local_34 = &local_44;
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar1 = FUN_00727cc0(param_1 + 4,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar3;
    }
  }
  return 1;
}

