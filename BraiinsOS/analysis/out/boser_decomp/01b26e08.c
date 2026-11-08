// FUN_01b26e08 @ 01b26e08 size=84 calls_out=1 calls_in=6
// strings: 

undefined8 FUN_01b26e08(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint local_10;
  uint local_c;
  
  local_c = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
            param_3 >> 0x18;
  local_10 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  FUN_01b26974(param_1,&local_10,8);
  return 0;
}

