// FUN_00fa7de4 @ 00fa7de4 size=56 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00fa7de4(short *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && ((char)*param_1 == '-')) {
    if (param_2 == 1) {
      return 0;
    }
    uVar1 = 0;
    if (*param_1 != 0x2d2d) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

