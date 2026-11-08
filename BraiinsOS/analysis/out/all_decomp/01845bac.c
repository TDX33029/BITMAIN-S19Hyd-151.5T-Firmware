// FUN_01845bac @ 01845bac size=252 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01845bac(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 < 0x3ff00000) {
    return 0;
  }
  if (param_2 < 0x47f00000) {
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_30[1] = 0;
    local_30[0] = 0;
    local_30[2] = param_1 << 0xb;
    local_30[3] = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    uVar1 = 0x7e - (param_2 >> 0x14);
    uVar3 = uVar1 & 0x1f;
    uVar1 = (uVar1 & 0x7f) >> 5;
    return CONCAT44(local_30[uVar1 + 1] >> uVar3 | (local_30[uVar1 + 2] << 1) << (uVar3 ^ 0x1f),
                    local_30[uVar1] >> uVar3 | (local_30[uVar1 + 1] << 1) << (uVar3 ^ 0x1f));
  }
  uVar2 = 0;
  if (param_2 < 0x7ff00001 && (uint)(param_1 != 0) <= param_2 + 0x80100000) {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(uVar2,uVar2);
}

