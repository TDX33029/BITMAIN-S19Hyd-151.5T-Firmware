// FUN_00667a08 @ 00667a08 size=308 calls_out=3 calls_in=13
// strings: 

undefined4 FUN_00667a08(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 **local_48;
  undefined8 local_44;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  
  piVar3 = (int *)*param_1;
  local_2c = (**(code **)(*piVar3 + 4))(piVar3);
  local_48 = (undefined4 **)&local_2c;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  local_44._0_4_ = &LAB_012c1d70;
  iVar1 = FUN_012fa178(uVar4,uVar5,&DAT_00590e5f,&local_48);
  uVar2 = 1;
  if ((iVar1 == 0) && (uVar2 = 0, (*(byte *)((int)param_2 + 10) & 0x80) != 0)) {
    local_44 = (**(code **)(*piVar3 + 4))(piVar3);
    local_38 = 1;
    local_48 = (undefined4 **)0x0;
    do {
      uVar6 = FUN_00667f84(&local_48);
      if ((int)uVar6 == 0) {
        uVar2 = 0;
        uVar6 = local_44;
        if (local_48 == (undefined4 **)0x0) {
          return 0;
        }
        goto LAB_00667b20;
      }
      uVar2 = 1;
      local_2c._4_4_ = &LAB_012c1d70;
      local_2c._0_4_ = &local_34;
      local_34 = uVar6;
      iVar1 = FUN_012fa178(uVar4,uVar5,&DAT_00578eff,&local_2c);
    } while (iVar1 == 0);
    uVar6 = local_44;
    if (local_48 == (undefined4 **)0x0) {
      uVar2 = 1;
    }
    else {
LAB_00667b20:
      local_44._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_0134aee0(local_44._4_4_,local_48,4,8);
      local_44 = uVar6;
    }
  }
  return uVar2;
}

