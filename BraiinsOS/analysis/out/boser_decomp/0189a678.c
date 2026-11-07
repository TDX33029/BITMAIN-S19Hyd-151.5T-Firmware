// FUN_0189a678 @ 0189a678 size=244 calls_out=5 calls_in=2
// strings: 

void FUN_0189a678(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined4 local_23c;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  undefined4 local_234;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_234 = 0;
  local_23c = 0;
  local_235 = (undefined1)((uint)param_4 >> 0x18);
  local_236 = (undefined1)((uint)param_4 >> 0x10);
  local_237 = (undefined1)((uint)param_4 >> 8);
  local_23d = (undefined1)((uint)param_3 >> 0x18);
  local_23e = (undefined1)((uint)param_3 >> 0x10);
  local_23f = (undefined1)((uint)param_3 >> 8);
  local_238 = (undefined1)param_4;
  local_240 = (undefined1)param_3;
  if (((byte)DAT_01d53480 & 1) == 0) {
    FUN_01bd5ac8(param_2,&local_240,0x10);
  }
  else {
    FUN_01bd82c4(param_2,&local_240,0x10);
  }
  FUN_01bed4e2(&local_240,param_2,0x200);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  if (((byte)DAT_01d53480 & 1) == 0) {
    FUN_01bd5bdc(&local_240,&local_28);
  }
  else {
    FUN_01bd8448(&local_240,&local_28);
  }
  FUN_01bed4e2(param_1,&local_28,0x10);
  return;
}

