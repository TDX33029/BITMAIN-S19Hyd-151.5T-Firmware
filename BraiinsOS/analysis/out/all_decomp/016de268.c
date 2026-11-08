// FUN_016de268 @ 016de268 size=26 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016de268(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x800U < 0x40000000) {
    *param_1 = param_2;
    uVar1 = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}

