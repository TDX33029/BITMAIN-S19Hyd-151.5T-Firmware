// FUN_016459ec @ 016459ec size=1172 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_016459ec(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_31;
  char *local_30;
  undefined4 *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined4 *local_20;
  code *local_1c;
  
  iVar1 = FUN_01645f50();
  uVar2 = 0;
  if (iVar1 == 0) {
    if ((param_1[8] != '\0') &&
       (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056e530,4), iVar1 != 0)) {
      return 1;
    }
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004c124c,2);
    uVar2 = 1;
    if (iVar1 == 0) {
      local_31 = '\0';
      local_30 = &local_31;
      local_28 = &DAT_01d0658c;
      local_2c = param_2;
      if (*param_1 != '\0') {
        local_31 = '\x01';
        local_24 = 0x31;
        local_1c = FUN_012fbb84;
        local_20 = &local_24;
        iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_20);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (param_1[1] != '\0') {
        local_24 = 0x32;
        if ((local_31 == '\x01') &&
           (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 != 0)) {
          return 1;
        }
        local_31 = '\x01';
        local_1c = FUN_012fbb84;
        local_20 = &local_24;
        iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_20);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (param_1[2] != '\0') {
        local_24 = 0x33;
        if ((local_31 == '\x01') &&
           (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 != 0)) {
          return 1;
        }
        local_31 = '\x01';
        local_1c = FUN_012fbb84;
        local_20 = &local_24;
        iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_20);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (param_1[3] != '\0') {
        local_24 = 0x34;
        if ((local_31 == '\x01') &&
           (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 != 0)) {
          return 1;
        }
        local_31 = '\x01';
        local_1c = FUN_012fbb84;
        local_20 = &local_24;
        iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_20);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (param_1[4] != '\0') {
        local_24 = 0x35;
        if ((local_31 == '\x01') &&
           (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 != 0)) {
          return 1;
        }
        local_31 = '\x01';
        local_1c = FUN_012fbb84;
        local_20 = &local_24;
        iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_20);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (param_1[5] != '\0') {
        local_24 = 0x37;
        if ((local_31 == '\x01') &&
           (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 != 0)) {
          return 1;
        }
        local_31 = '\x01';
        local_1c = FUN_012fbb84;
        local_20 = &local_24;
        iVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_20);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (((param_1[6] == '\0') || (iVar1 = FUN_01645fd4(&local_30,0x38), iVar1 == 0)) &&
         ((param_1[7] == '\0' || (iVar1 = FUN_01645fd4(&local_30,0x39), iVar1 == 0)))) {
        if (param_1[0xd] != '\x15') {
          local_30 = *(char **)(param_1 + 0xd);
          if ((local_31 != '\0') &&
             (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 != 0)) {
            return 1;
          }
          local_31 = '\x01';
          iVar1 = FUN_01646064(&local_30,*param_2,param_2[1]);
          if (iVar1 != 0) {
            return 1;
          }
        }
        if ((param_1[9] == '\x15') ||
           (((local_30 = *(char **)(param_1 + 9), local_31 == '\0' ||
             (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,";",1), iVar1 == 0)) &&
            (iVar1 = FUN_0164629c(&local_30,*param_2,param_2[1]), iVar1 == 0)))) {
          uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004e9549,1);
        }
      }
    }
  }
  return uVar2;
}

