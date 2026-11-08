// FUN_016fd76c @ 016fd76c size=436 calls_out=5 calls_in=0
// strings: 

void FUN_016fd76c(char *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  code *local_40;
  int *local_3c;
  code *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  local_58 = param_4[1];
  uVar4 = param_4[2];
  if (local_58 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,local_58,local_58,&DAT_01d2cefc);
  }
  local_50 = 0;
  local_54 = 0;
  local_58 = local_58 - uVar4;
  local_5c = *param_4 + uVar4;
  if (*param_2 == 2) {
    FUN_0183b120(param_1,param_2[3],param_2[4],param_3,&local_5c);
  }
  else {
    FUN_016fc4b8(param_1,param_2,param_3,&local_5c);
  }
  uVar2 = local_54;
  uVar3 = local_58;
  cVar1 = *param_1;
  if (cVar1 != '\x05') {
    if (cVar1 != '\x04') {
      return;
    }
    if (4 < DAT_01d51b00) {
      if (local_58 < local_54) goto LAB_016fd8f0;
      local_38 = FUN_01744114;
      local_3c = &local_4c;
      local_44 = param_2 + 0xba;
      local_28 = 0x19;
      local_30 = 0x19;
      local_2c = &DAT_0050d78e;
      local_34 = &DAT_0050d78e;
      local_4c = local_5c;
      local_48 = local_54;
      local_40 = FUN_012fd9d0;
      local_24 = &DAT_01d18f10;
      FUN_0193b350(&DAT_0050d7a7,&local_44,5,&local_34);
    }
    if (uVar3 < uVar2) {
LAB_016fd8f0:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar2,uVar3,&DAT_01d20c0c);
    }
    uVar3 = uVar2 + uVar4;
    if (CARRY4(uVar2,uVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2cf0c);
    }
    uVar4 = param_4[3];
    if ((uint)param_4[3] <= uVar3) {
      uVar4 = uVar3;
    }
    param_4[2] = uVar3;
    param_4[3] = uVar4;
  }
  *param_1 = cVar1;
  return;
}

