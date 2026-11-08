// FUN_01ac6264 @ 01ac6264 size=168 calls_out=1 calls_in=10
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01ac6264(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uStack_28 = *param_4;
  uStack_24 = param_4[1];
  local_40 = param_4[2];
  local_3c = param_4[3];
  puVar2 = (undefined4 *)param_4[4];
  local_34 = *puVar2;
  local_30 = puVar2[1];
  local_48 = puVar2[2];
  local_38 = 0;
  local_44 = 0;
  local_4c = 1;
  DataMemoryBarrier(0xb);
  puVar2 = DAT_01d4edc8;
  if (DAT_01d51174 != 2) {
    puVar2 = &DAT_01cfc5e0;
  }
  pcVar1 = DAT_01d4edc4;
  if (DAT_01d51174 != 2) {
    pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
  }
  local_2c = param_3;
  local_20 = param_1;
  local_1c = param_2;
  (*(code *)puVar2[4])(pcVar1,&local_4c);
  return;
}

