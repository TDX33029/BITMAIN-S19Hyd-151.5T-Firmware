// FUN_016c4cec @ 016c4cec size=108 calls_out=2 calls_in=1
// strings: 

void FUN_016c4cec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_2c [2];
  int local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_24 = param_1 + 0x158;
  local_1c = 0;
  local_20 = 0;
  local_2c[0] = 0;
  while (uVar1 = FUN_016c2cec(local_2c), (uVar1 & 0xff) != 2) {
    FUN_016c49b8(param_1,param_2,param_3,uVar1,param_4);
  }
  return;
}

