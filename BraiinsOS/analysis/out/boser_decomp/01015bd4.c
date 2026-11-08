// FUN_01015bd4 @ 01015bd4 size=696 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01015bd4(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r5;
  int local_a4;
  int local_a0;
  undefined4 local_80;
  uint *local_7c;
  int local_78;
  undefined4 local_74;
  uint *local_70;
  int local_6c;
  undefined2 local_68;
  uint *local_64;
  uint *local_60;
  int local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  undefined4 local_4c;
  uint *local_48;
  int local_44;
  undefined4 local_40;
  uint *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = param_1[0x15];
  local_68 = (undefined2)param_1[6];
  if (*param_1 == 1) {
    local_7c = (uint *)param_1[1];
    do {
      uVar4 = *local_7c;
      bVar2 = (bool)hasExclusiveAccess(local_7c);
    } while (!bVar2);
    *local_7c = uVar4 + 1;
    local_80 = 1;
    if (0x7fffffff < uVar4) goto LAB_01015db4;
  }
  else {
    local_7c = (uint *)param_1[1];
    local_80 = 0;
  }
  local_78 = param_1[2];
  if (param_1[3] == 2) {
    local_74 = 2;
    local_70 = (uint *)0x2;
  }
  else {
    if ((param_1[3] & 1U) == 0) {
      local_70 = (uint *)param_1[4];
      local_74 = 0;
    }
    else {
      local_70 = (uint *)param_1[4];
      do {
        uVar4 = *local_70;
        bVar2 = (bool)hasExclusiveAccess(local_70);
      } while (!bVar2);
      *local_70 = uVar4 + 1;
      local_74 = 1;
      if (0x7fffffff < uVar4) goto LAB_01015db4;
    }
    local_a0 = param_1[5];
  }
  if (param_1[7] == 1) {
    local_60 = (uint *)param_1[8];
    do {
      uVar4 = *local_60;
      bVar2 = (bool)hasExclusiveAccess(local_60);
    } while (!bVar2);
    *local_60 = uVar4 + 1;
    local_64 = (uint *)&DAT_00000001;
    unaff_r5 = 0;
    if (0x7fffffff < uVar4) goto LAB_01015db4;
  }
  else {
    local_60 = (uint *)param_1[8];
    local_64 = (uint *)0x0;
  }
  local_5c = param_1[9];
  if (param_1[10] == 2) {
    local_58 = (uint *)0x2;
    local_54 = local_64;
  }
  else {
    if ((param_1[10] & 1U) == 0) {
      local_54 = (uint *)param_1[0xb];
      local_58 = (uint *)0x0;
    }
    else {
      local_54 = (uint *)param_1[0xb];
      do {
        uVar4 = *local_54;
        bVar2 = (bool)hasExclusiveAccess(local_54);
      } while (!bVar2);
      *local_54 = uVar4 + 1;
      local_58 = (uint *)&DAT_00000001;
      unaff_r5 = 0;
      if (0x7fffffff < uVar4) goto LAB_01015db4;
    }
    local_a4 = param_1[0xc];
  }
  if (param_1[0xd] == 1) {
    local_48 = (uint *)param_1[0xe];
    do {
      uVar4 = *local_48;
      bVar2 = (bool)hasExclusiveAccess(local_48);
    } while (!bVar2);
    *local_48 = uVar4 + 1;
    local_4c = 1;
    unaff_r5 = 0;
    if (0x7fffffff < uVar4) goto LAB_01015db4;
  }
  else {
    local_48 = (uint *)param_1[0xe];
    local_4c = 0;
  }
  local_44 = param_1[0xf];
  if (param_1[0x10] == 2) {
    local_40 = 2;
    local_3c = local_58;
  }
  else {
    if ((param_1[0x10] & 1U) == 0) {
      local_3c = (uint *)param_1[0x11];
      local_40 = 0;
    }
    else {
      local_3c = (uint *)param_1[0x11];
      do {
        uVar4 = *local_3c;
        bVar2 = (bool)hasExclusiveAccess(local_3c);
      } while (!bVar2);
      *local_3c = uVar4 + 1;
      local_40 = 1;
      if (0x7fffffff < uVar4) {
LAB_01015db4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1015db4);
        (*pcVar1)();
      }
    }
    unaff_r5 = param_1[0x12];
  }
  local_30 = param_1[0x14];
  local_34 = param_1[0x13];
  local_50 = local_a4;
  local_6c = local_a0;
  local_38 = unaff_r5;
  iVar3 = thunk_FUN_01be5118(0x58);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x58);
  }
  FUN_01bed4e2(iVar3,&local_80,0x58);
  return CONCAT44(&UNK_01c1d32c,iVar3);
}

