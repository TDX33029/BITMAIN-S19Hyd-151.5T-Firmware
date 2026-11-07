// FUN_016a6f80 @ 016a6f80 size=704 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016a6f80(int *param_1,undefined **param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 local_6c;
  undefined **local_64;
  undefined *local_60;
  int **local_5c;
  int *local_58;
  undefined1 *local_54;
  undefined **local_50;
  undefined *local_4c;
  undefined1 *local_48;
  undefined1 local_41;
  undefined ***local_40;
  code *local_3c;
  undefined *local_38;
  undefined *puStack_34;
  undefined ****local_30;
  undefined ***local_2c;
  code *local_28;
  
  uVar5 = 1;
  iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  local_6c._0_4_ = *param_1;
  local_6c._4_4_ = param_1[1];
  local_60 = &DAT_00590e71;
  local_54 = &LAB_01656d18;
  local_64 = &local_60;
  local_5c = &local_58;
  local_58 = (int *)&local_6c;
  uVar2 = *(undefined8 *)param_1;
  if (iVar3 != 0) goto LAB_016a7104;
  uVar2 = *(undefined8 *)param_1;
  if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
    uVar5 = 1;
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
    uVar2 = CONCAT44(local_6c._4_4_,(int)local_6c);
    if (iVar3 != 0) goto LAB_016a7104;
    local_50 = (undefined **)*param_2;
    local_4c = param_2[1];
    uVar5 = 1;
    local_38 = param_2[2];
    puStack_34 = param_2[3];
    local_48 = &local_41;
    local_40 = &local_50;
    local_30 = &local_40;
    local_41 = 1;
    local_3c = (code *)&DAT_01880dc4;
    local_28 = FUN_016a5bc0;
    local_2c = &local_64;
    iVar3 = FUN_00fa948c(&local_30,&DAT_018ae764,&DAT_00590e71,&local_2c);
    uVar2 = CONCAT44(local_6c._4_4_,(int)local_6c);
    if (iVar3 != 0) goto LAB_016a7104;
    goto LAB_016a70d8;
  }
LAB_016a70f8:
  local_3c = FUN_016a5bc0;
  local_40 = &local_64;
  local_50 = param_2;
  local_6c = uVar2;
  uVar5 = FUN_00fa948c(&local_50,&DAT_018ae764,&DAT_00590e71,&local_40);
  do {
    uVar2 = local_6c;
LAB_016a7104:
    while( true ) {
      while( true ) {
        do {
          local_6c._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
          local_6c._0_4_ = (int)uVar2;
          uVar6 = (**(code **)(local_6c._4_4_ + 0x18))((int)local_6c);
          local_6c = uVar2;
          if ((int)uVar6 == 0) {
            uVar4 = 1;
            if (uVar5 == 0) {
              uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
            }
            return uVar4;
          }
          uVar1 = uVar5 & 1;
          uVar5 = 1;
          local_54 = &LAB_01656d18;
          local_60 = &DAT_00590e71;
          local_64 = &local_60;
          local_5c = &local_58;
          local_58 = (int *)&local_6c;
          uVar2 = uVar6;
        } while (uVar1 != 0);
        local_6c = uVar6;
        if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) break;
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        uVar5 = 1;
        uVar2 = local_6c;
        if (iVar3 == 0) goto LAB_016a70f8;
      }
      local_41 = 1;
      local_38 = param_2[2];
      puStack_34 = param_2[3];
      local_50 = (undefined **)*param_2;
      local_4c = param_2[1];
      local_48 = &local_41;
      local_3c = (code *)&DAT_01880dc4;
      local_40 = &local_50;
      local_30 = &local_40;
      local_28 = FUN_016a5bc0;
      local_2c = &local_64;
      iVar3 = FUN_00fa948c(&local_30,&DAT_018ae764,&DAT_00590e71,&local_2c);
      uVar2 = local_6c;
      if (iVar3 == 0) break;
      uVar5 = 1;
    }
LAB_016a70d8:
    local_6c = uVar2;
    uVar5 = (**(code **)(local_3c + 0xc))(local_40,&DAT_00414a81,2);
  } while( true );
}

