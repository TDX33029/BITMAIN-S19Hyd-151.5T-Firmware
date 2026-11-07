// FUN_01b0ce50 @ 01b0ce50 size=132 calls_out=4 calls_in=1
// strings: 

void FUN_01b0ce50(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_01b0c708(param_3,param_1);
  for (uVar1 = 1; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_01b0c74c(param_3);
    FUN_01b0cb4c(param_3);
    FUN_01b0cc9c(param_3);
    FUN_01b0c708(param_3,param_1 + uVar1 * 0x20);
  }
  FUN_01b0c74c(param_3);
  FUN_01b0cb4c(param_3);
  FUN_01b0c708(param_3,param_1 + param_2 * 0x20);
  return;
}

