// FUN_01b7c268 @ 01b7c268 size=156 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b7c268(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint extraout_r2;
  uint extraout_r3;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  
  local_28 = param_3;
  uStack_24 = param_4;
  local_20 = param_1;
  uStack_1c = param_2;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    local_28 = param_1;
    uStack_24 = param_2;
    local_20 = param_3;
    uStack_1c = param_4;
  }
  while (local_28 != 0 || uStack_24 != 0) {
    FUN_01bf0ff0(local_20,uStack_1c,local_28,uStack_24);
    local_20 = local_28;
    uStack_1c = uStack_24;
    local_28 = extraout_r2;
    uStack_24 = extraout_r3;
  }
  return CONCAT44(uStack_1c,local_20);
}

