// FUN_01935fb0 @ 01935fb0 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_01935fb0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  ushort local_12;
  
  local_12 = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  FUN_01ac6cbc(param_3,&local_12,2);
  FUN_01ac6cbc(param_3,param_1,param_2);
  return;
}

