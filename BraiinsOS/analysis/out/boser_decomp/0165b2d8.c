// FUN_0165b2d8 @ 0165b2d8 size=64 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0165b2d8(undefined4 param_1)

{
  undefined4 uVar1;
  int local_14 [2];
  int local_c;
  
  FUN_0165b318(local_14,param_1);
  if (local_14[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(local_14[0] + local_c * 4 + 4);
  }
  return uVar1;
}

