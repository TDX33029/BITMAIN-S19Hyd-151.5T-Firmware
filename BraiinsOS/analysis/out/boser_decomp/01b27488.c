// FUN_01b27488 @ 01b27488 size=72 calls_out=1 calls_in=11
// strings: 

undefined8 FUN_01b27488(undefined4 param_1,uint param_2)

{
  uint local_c;
  
  local_c = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
            param_2 >> 0x18;
  FUN_01b26974(param_1,&local_c,4);
  return 0;
}

