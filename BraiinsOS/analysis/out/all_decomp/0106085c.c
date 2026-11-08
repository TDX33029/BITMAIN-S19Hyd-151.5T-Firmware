// FUN_0106085c @ 0106085c size=608 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0106085c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_68 [3];
  int local_5c;
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar5 = 1;
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
  local_68[2] = *param_1;
  local_5c = param_1[1];
  local_48 = param_1[2];
  if (local_68[2] == 0) {
    local_48 = 0;
  }
  local_68[0] = (uint)(local_68[2] != 0);
  local_54 = 0;
  local_68[1] = 0;
  local_58 = local_68[0];
  local_50 = local_68[2];
  local_4c = local_5c;
  iVar2 = FUN_01040c1c(local_68);
  if (iVar2 != 0) {
    if (uVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        uVar5 = FUN_01038c2c(iVar2,param_2);
      }
      else {
        uVar5 = 1;
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
        if (iVar3 == 0) {
          uVar5 = 1;
          local_2c = param_2[2];
          local_28 = param_2[3];
          local_3c = &local_35;
          local_35 = 1;
          local_44 = *param_2;
          local_40 = param_2[1];
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          iVar2 = FUN_01038c2c(iVar2,&local_34);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
        }
      }
    }
    while (iVar2 = FUN_01040c1c(local_68), iVar2 != 0) {
      uVar1 = uVar5 & 1;
      uVar5 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar5 = 1;
          if (iVar3 == 0) {
            uVar5 = FUN_01038c2c(iVar2,param_2);
          }
        }
        else {
          local_35 = 1;
          local_2c = param_2[2];
          local_28 = param_2[3];
          local_44 = *param_2;
          local_40 = param_2[1];
          local_30 = &DAT_01880dc4;
          local_3c = &local_35;
          local_34 = &local_44;
          iVar2 = FUN_01038c2c(iVar2,&local_34);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          else {
            uVar5 = 1;
          }
        }
      }
    }
    uVar1 = uVar5;
  }
  uVar4 = 1;
  if ((uVar1 & 1) == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
  }
  return uVar4;
}

