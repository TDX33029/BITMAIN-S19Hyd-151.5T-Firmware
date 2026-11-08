// FUN_0144416c @ 0144416c size=180 calls_out=1 calls_in=3
// strings: 

uint FUN_0144416c(uint param_1,uint param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [2];
  uint local_28;
  uint uStack_24;
  undefined1 *puStack_20;
  
  local_50 = param_9;
  uStack_4c = param_10;
  uStack_48 = param_11;
  uVar1 = 0;
  if (param_3 != &DAT_3b9aca00) {
    local_38 = param_7;
    local_3c = param_6;
    local_40 = param_5;
    FUN_019ac248(local_30,&local_50,&local_40);
    if ((local_30[0] & 1) != 0) {
      uStack_24 = 0;
      local_28 = 0;
    }
    uVar1 = (uint)(param_2 <= uStack_24 && (uint)(local_28 <= param_1) <= param_2 - uStack_24);
    if (local_28 == param_1 && uStack_24 == param_2) {
      uVar1 = (uint)(param_3 < puStack_20) & ~local_30[0];
    }
  }
  return uVar1;
}

