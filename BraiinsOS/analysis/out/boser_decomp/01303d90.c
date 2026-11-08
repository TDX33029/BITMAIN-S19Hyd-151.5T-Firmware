// FUN_01303d90 @ 01303d90 size=188 calls_out=1 calls_in=117
// strings: 

byte FUN_01303d90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

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
  FUN_01302c38(uVar2,param_8,param_9,param_10,param_11);
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

