// FUN_0177f2f8 @ 0177f2f8 size=84 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_0177f2f8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_0177ec70(*param_1);
  FUN_0177ec84(param_1[1]);
  FUN_0177ec5c(param_1[2]);
  FUN_0177ec5c(param_1[3]);
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

