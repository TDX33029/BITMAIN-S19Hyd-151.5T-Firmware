// FUN_01289750 @ 01289750 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_01289750(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_1c = 0;
  local_24 = 0;
  local_20 = 1;
  FUN_019a65b4(&local_18,param_2,&local_24);
  uVar1 = local_20;
  if (((char)local_18 == '\x04') || ((local_18 & 0xff) == 4)) {
    FUN_012847a4(param_1,local_20,local_1c);
  }
  else {
    *param_1 = 1;
    param_1[2] = local_18;
    param_1[3] = local_14;
    param_1[4] = 0x3b9aca06;
  }
  FUN_0134bd64(local_24,uVar1);
  return;
}

