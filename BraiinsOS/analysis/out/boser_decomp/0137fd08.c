// FUN_0137fd08 @ 0137fd08 size=136 calls_out=1 calls_in=5
// strings: 

void FUN_0137fd08(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_20;
  uint local_1c;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  
  local_1c = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
             param_2 >> 0x18;
  local_20 = 0;
  FUN_01284394(param_3,(uint)&local_20 | 5,3);
  local_16 = *(undefined1 *)((int)param_1 + 5);
  FUN_01284394(param_3,&local_16,1);
  local_15 = (undefined1)param_1[1];
  FUN_01284394(param_3,&local_15,1);
  uVar1 = *param_1;
  local_14 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  FUN_01284394(param_3,&local_14,4);
  return;
}

