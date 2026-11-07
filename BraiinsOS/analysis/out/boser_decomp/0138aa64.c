// FUN_0138aa64 @ 0138aa64 size=164 calls_out=1 calls_in=2
// strings: 

void FUN_0138aa64(uint param_1,uint param_2,byte param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  
  uVar3 = ~(-1 << (param_2 & 0xff));
  if (param_1 < uVar3) {
    local_13 = param_3 | (byte)param_1;
    pbVar2 = &local_13;
  }
  else {
    local_14 = param_3 | (byte)uVar3;
    FUN_01284394(param_4,&local_14,1);
    param_1 = param_1 - uVar3;
    if (0x7f < param_1) {
      uVar3 = param_1;
      do {
        local_11 = (byte)uVar3 | 0x80;
        FUN_01284394(param_4,&local_11,1);
        param_1 = uVar3 >> 7;
        uVar1 = uVar3 >> 0xe;
        uVar3 = param_1;
      } while (uVar1 != 0);
    }
    pbVar2 = &local_12;
    local_12 = (byte)param_1;
  }
  FUN_01284394(param_4,pbVar2,1);
  return;
}

