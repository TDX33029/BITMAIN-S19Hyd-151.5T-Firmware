// FUN_0191d778 @ 0191d778 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_0191d778(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint local_14;
  
  local_14 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
             param_2 >> 0x18;
  FUN_01ac6cbc(param_3,(uint)&local_14 | 1,3);
  FUN_01ac6cbc(param_3,param_1,param_2);
  return;
}

