// FUN_00fb2e80 @ 00fb2e80 size=868 calls_out=2 calls_in=0
// strings: 

undefined4
FUN_00fb2e80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,code *param_4,
            undefined4 param_5,code *param_6,int param_7,undefined4 param_8,code *param_9)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
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
  iVar1 = (*pcVar3)(uVar2,param_2,8);
  if (iVar1 == 0) {
    puVar4 = param_1 + 2;
    if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar2,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*param_4)(param_3,param_1);
    }
    else {
      iVar1 = (*pcVar3)(uVar2,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      uStack_44 = *param_1;
      uStack_40 = param_1[1];
      local_2c = *puVar4;
      local_28 = param_1[3];
      local_30 = &DAT_01880dc4;
      local_34 = &uStack_44;
      local_35 = 1;
      iVar1 = (*param_4)(param_3,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_0041950f,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (*param_6)(param_5,param_1);
      }
      else {
        local_3c = &local_35;
        uStack_44 = *param_1;
        uStack_40 = param_1[1];
        local_2c = *puVar4;
        local_28 = param_1[3];
        local_30 = &DAT_01880dc4;
        local_34 = &uStack_44;
        local_35 = 1;
        iVar1 = (*param_6)(param_5,&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      }
      if (iVar1 == 0) {
        if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
          iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_0041950f,2);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = FUN_01274a78(*(undefined4 *)(param_7 + 4),*(undefined4 *)(param_7 + 8),param_1);
        }
        else {
          local_3c = &local_35;
          uStack_44 = *param_1;
          uStack_40 = param_1[1];
          local_2c = *puVar4;
          local_28 = param_1[3];
          local_30 = &DAT_01880dc4;
          local_34 = &uStack_44;
          local_35 = 1;
          iVar1 = FUN_01274a78(*(undefined4 *)(param_7 + 4),*(undefined4 *)(param_7 + 8),&local_34);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        }
        if (iVar1 == 0) {
          if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
            iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_0041950f,2);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = (*param_9)(param_8,param_1);
          }
          else {
            local_3c = &local_35;
            uStack_44 = *param_1;
            uStack_40 = param_1[1];
            local_2c = *puVar4;
            local_28 = param_1[3];
            local_30 = &DAT_01880dc4;
            local_34 = &uStack_44;
            local_35 = 1;
            iVar1 = (*param_9)(param_8,&local_34);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          if (iVar1 == 0) {
            uVar2 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00418e07,1);
            return uVar2;
          }
        }
      }
    }
  }
  return 1;
}

