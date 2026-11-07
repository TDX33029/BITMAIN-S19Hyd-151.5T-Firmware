// FUN_00ee11e8 @ 00ee11e8 size=456 calls_out=6 calls_in=0
// strings: target_temperature | hot_temperature | dangerous_temperature | min_fan_speed | max_fan_speed | minimum_required_fans

void FUN_00ee11e8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  iVar4 = *param_2;
  pcVar3 = "{";
  uVar2 = 1;
  while( true ) {
    uVar5 = *(uint *)(iVar4 + 4);
    uVar1 = uVar5 ^ 0x7fffffff;
    if (uVar2 < uVar1) {
      uVar1 = uVar2;
    }
    FUN_01284394(iVar4,pcVar3,uVar1);
    if (uVar5 == 0x7fffffff) break;
    pcVar3 = pcVar3 + uVar1;
    uVar2 = uVar2 - uVar1;
    if (uVar2 == 0) {
      local_38 = 0x100;
      local_34 = param_2;
      iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_1 + 2),&local_38,"target_temperature",0x12,
                           param_1[1],*param_1,param_1[1]);
      if ((((iVar4 == 0) &&
           (iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_1 + 6),&local_38,"hot_temperature",0xf,
                                 param_1[5],param_1[4],param_1[5]), iVar4 == 0)) &&
          (iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_1 + 10),&local_38,"dangerous_temperature"
                                ,0x15,param_1[9],param_1[8],param_1[9]), iVar4 == 0)) &&
         (((iVar4 = FUN_00ee0f5c(&local_38,"min_fan_speed",0xd,param_1[0x12],param_1[0x13]),
           iVar4 == 0 &&
           (iVar4 = FUN_00ee0f5c(&local_38,"max_fan_speed",0xd,param_1[0x14],param_1[0x15]),
           iVar4 == 0)) &&
          ((iVar4 = FUN_00ee0f5c(&local_38,"minimum_required_fans",0x15,param_1[0x16],param_1[0x17])
           , iVar4 == 0 && (iVar4 = FUN_00ee1724(&local_38,param_1 + 0xc), iVar4 == 0)))))) {
        local_30 = local_38;
        local_2c = local_34;
        FUN_00d57dc0(&local_30);
      }
      return;
    }
  }
  FUN_01966f50(2,&DAT_01d2e7b8);
  return;
}

