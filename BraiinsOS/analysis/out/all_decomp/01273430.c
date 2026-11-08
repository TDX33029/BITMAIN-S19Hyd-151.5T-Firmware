// FUN_01273430 @ 01273430 size=1292 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01273430(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  char local_3d;
  char *local_3c;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  
  bVar1 = param_1[9];
  bVar2 = param_1[4];
  bVar3 = *param_1;
  bVar4 = param_1[0xd];
  bVar5 = param_1[1];
  bVar6 = param_1[7];
  bVar7 = param_1[6];
  bVar8 = param_1[5];
  bVar9 = param_1[2];
  bVar10 = param_1[3];
  if ((((bVar3 == 0 && bVar5 == 0) && (bVar9 == 0 && bVar10 == 0)) && (bVar2 == 0 && bVar8 == 0)) &&
     ((bVar7 == 0 && bVar6 == 0 && (param_1[8] == 0 && bVar1 == 0x15)))) {
    if (bVar4 == 0x15) {
      return 0;
    }
  }
  else if (((param_1[8] & 1) != 0) &&
          (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005685c8,4), iVar11 != 0)) {
    return 1;
  }
  iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6537,2);
  if (iVar11 != 0) {
    return 1;
  }
  local_3d = '\0';
  local_34 = &DAT_0188b5d4;
  local_3c = &local_3d;
  local_38 = param_2;
  if ((bVar3 & 1) != 0) {
    local_3d = '\x01';
    local_30 = 0x31;
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    iVar11 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_2c);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if ((bVar5 & 1) != 0) {
    local_30 = 0x32;
    if ((local_3d == '\x01') &&
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 != 0)) {
      return 1;
    }
    local_3d = '\x01';
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    iVar11 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_2c);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if ((bVar9 & 1) != 0) {
    local_30 = 0x33;
    if ((local_3d == '\x01') &&
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 != 0)) {
      return 1;
    }
    local_3d = '\x01';
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    iVar11 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_2c);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if ((bVar10 & 1) != 0) {
    local_30 = 0x34;
    if ((local_3d == '\x01') &&
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 != 0)) {
      return 1;
    }
    local_3d = '\x01';
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    iVar11 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_2c);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if ((bVar2 & 1) != 0) {
    local_30 = 0x35;
    if ((local_3d == '\x01') &&
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 != 0)) {
      return 1;
    }
    local_3d = '\x01';
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    iVar11 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_2c);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if ((bVar8 & 1) != 0) {
    local_30 = 0x37;
    if ((local_3d == '\x01') &&
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 != 0)) {
      return 1;
    }
    local_3d = '\x01';
    local_28 = FUN_00faaf34;
    local_2c = &local_30;
    iVar11 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_2c);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if (((bVar7 & 1) != 0) && (iVar11 = FUN_01272e78(&local_3c,0x38), iVar11 != 0)) {
    return 1;
  }
  if (((bVar6 & 1) != 0) && (iVar11 = FUN_01272e78(&local_3c,0x39), iVar11 != 0)) {
    return 1;
  }
  if (bVar4 != 0x15) {
    local_3c = *(char **)(param_1 + 0xd);
    if ((local_3d != '\0') &&
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 != 0)) {
      return 1;
    }
    local_3d = '\x01';
    iVar11 = FUN_01272f10(&local_3c,*param_2,param_2[1]);
    if (iVar11 != 0) {
      return 1;
    }
  }
  if ((bVar1 == 0x15) ||
     (((local_3c = *(char **)(param_1 + 9), local_3d == '\0' ||
       (iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003b6539,1), iVar11 == 0)) &&
      (iVar11 = FUN_01273150(&local_3c,*param_2,param_2[1]), iVar11 == 0)))) {
    uVar12 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003e86b1,1);
    return uVar12;
  }
  return 1;
}

