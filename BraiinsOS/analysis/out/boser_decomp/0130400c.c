// FUN_0130400c @ 0130400c size=236 calls_out=1 calls_in=9
// strings: 

byte FUN_0130400c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_14 = (**(code **)(param_1[1] + 0xc))(*param_1);
  local_13 = 0;
  local_18 = param_1;
  uVar2 = FUN_01302c38(&local_18,param_4,param_5,param_6,param_7);
  uVar2 = FUN_01302c38(uVar2,param_8,param_9,param_10,param_11);
  uVar2 = FUN_01302c38(uVar2,param_12,param_13,param_14,param_15);
  uVar2 = FUN_01302c38(uVar2,param_16,param_17,param_18,param_19);
  FUN_01302c38(uVar2,param_20,param_21,param_22,param_23);
  bVar1 = local_13 | local_14;
  if (local_13 == 1 && (local_14 & 1) == 0) {
    if ((*(byte *)((int)local_18 + 10) & 0x80) == 0) {
      uVar2 = *local_18;
      uVar4 = 2;
      pcVar5 = *(code **)(local_18[1] + 0xc);
      pcVar3 = " }AlertMessagePayloadChangeCipherSpecPayload\x0e";
    }
    else {
      uVar2 = *local_18;
      uVar4 = 1;
      pcVar5 = *(code **)(local_18[1] + 0xc);
      pcVar3 = "}";
    }
    bVar1 = (*pcVar5)(uVar2,pcVar3,uVar4);
  }
  return bVar1 & 1;
}

