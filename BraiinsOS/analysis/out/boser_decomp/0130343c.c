// FUN_0130343c @ 0130343c size=488 calls_out=1 calls_in=6
// strings: 

undefined4
FUN_0130343c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            code *param_5,undefined4 param_6,code *param_7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = *param_1;
  pcVar3 = *(code **)(param_1[1] + 0xc);
  iVar1 = (*pcVar3)(uVar2);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar2,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*param_5)(param_4,param_1);
    }
    else {
      iVar1 = (*pcVar3)(uVar2,"(\n",2);
      if (iVar1 != 0) goto LAB_01303468;
      local_28 = param_1[3];
      local_3c = &local_35;
      uStack_44 = *param_1;
      uStack_40 = param_1[1];
      local_30 = &DAT_01ce45f8;
      local_34 = &uStack_44;
      local_2c = param_1[2];
      local_35 = 1;
      iVar1 = (*param_5)(param_4,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    }
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = 1;
      if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00533bc1,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (*param_7)(param_6,param_1);
      }
      else {
        local_3c = &local_35;
        local_2c = param_1[2];
        local_28 = param_1[3];
        uStack_44 = *param_1;
        uStack_40 = param_1[1];
        local_30 = &DAT_01ce45f8;
        local_34 = &uStack_44;
        local_35 = 1;
        iVar1 = (*param_7)(param_6,&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
      if (iVar1 == 0) {
        uVar2 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_0053341b,1);
      }
    }
  }
  else {
LAB_01303468:
    uVar2 = 1;
  }
  return uVar2;
}

