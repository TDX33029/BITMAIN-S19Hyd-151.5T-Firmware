// FUN_011d9a2c @ 011d9a2c size=692 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_011d9a2c(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  uint *local_70;
  uint *local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_6c = (uint *)*param_1;
  local_28 = param_1[0x15];
  local_64 = *(undefined2 *)(param_1 + 6);
  if (local_6c == (uint *)&DAT_00000001) {
    local_78 = (undefined4 *)param_1[1];
    do {
      local_6c = (uint *)*local_78;
      bVar2 = (bool)hasExclusiveAccess(local_78);
    } while (!bVar2);
    *local_78 = (undefined1 *)((int)local_6c + 1);
    local_7c = 1;
    if ((uint *)0x7fffffff < local_6c) goto LAB_011d9c18;
  }
  else {
    local_78 = (undefined4 *)param_1[1];
    local_7c = 0;
  }
  local_74 = param_1[2];
  if (param_1[3] == 2) {
    local_70 = (uint *)0x2;
  }
  else {
    if ((param_1[3] & 1) == 0) {
      local_6c = (uint *)param_1[4];
      local_70 = (uint *)0x0;
    }
    else {
      local_6c = (uint *)param_1[4];
      do {
        uVar3 = *local_6c;
        bVar2 = (bool)hasExclusiveAccess(local_6c);
      } while (!bVar2);
      *local_6c = uVar3 + 1;
      local_70 = (uint *)&DAT_00000001;
      if (0x7fffffff < uVar3) goto LAB_011d9c18;
    }
    local_a8 = param_1[5];
  }
  if (param_1[7] == 1) {
    local_5c = (uint *)param_1[8];
    do {
      uVar3 = *local_5c;
      bVar2 = (bool)hasExclusiveAccess(local_5c);
    } while (!bVar2);
    *local_5c = uVar3 + 1;
    local_80 = 1;
    if (0x7fffffff < uVar3) goto LAB_011d9c18;
  }
  else {
    local_5c = (uint *)param_1[8];
    local_80 = 0;
  }
  local_58 = param_1[9];
  if (param_1[10] == 2) {
    local_54 = 2;
    local_50 = local_70;
  }
  else {
    if ((param_1[10] & 1) == 0) {
      local_50 = (uint *)param_1[0xb];
      local_54 = 0;
    }
    else {
      local_50 = (uint *)param_1[0xb];
      do {
        uVar3 = *local_50;
        bVar2 = (bool)hasExclusiveAccess(local_50);
      } while (!bVar2);
      *local_50 = uVar3 + 1;
      local_54 = 1;
      if (0x7fffffff < uVar3) goto LAB_011d9c18;
    }
    local_ac = param_1[0xc];
  }
  if (param_1[0xd] == 1) {
    local_44 = (uint *)param_1[0xe];
    do {
      uVar3 = *local_44;
      bVar2 = (bool)hasExclusiveAccess(local_44);
    } while (!bVar2);
    *local_44 = uVar3 + 1;
    local_48 = 1;
    if (0x7fffffff < uVar3) goto LAB_011d9c18;
  }
  else {
    local_44 = (uint *)param_1[0xe];
    local_48 = 0;
  }
  local_40 = param_1[0xf];
  if (param_1[0x10] == 2) {
    local_3c = 2;
    local_34 = 2;
    local_38 = param_3;
  }
  else {
    if ((param_1[0x10] & 1) == 0) {
      local_38 = (uint *)param_1[0x11];
      local_3c = 0;
    }
    else {
      local_38 = (uint *)param_1[0x11];
      do {
        uVar3 = *local_38;
        bVar2 = (bool)hasExclusiveAccess(local_38);
      } while (!bVar2);
      *local_38 = uVar3 + 1;
      local_3c = 1;
      if (0x7fffffff < uVar3) {
LAB_011d9c18:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11d9c18);
        (*pcVar1)();
      }
    }
    local_34 = param_1[0x12];
  }
  local_2c = param_1[0x14];
  local_4c = local_ac;
  local_30 = param_1[0x13];
  local_60 = local_80;
  local_68 = local_a8;
  uVar4 = FUN_011d8b0c(param_2,param_3,&local_7c);
  FUN_00f80ea8(param_1);
  return uVar4;
}

