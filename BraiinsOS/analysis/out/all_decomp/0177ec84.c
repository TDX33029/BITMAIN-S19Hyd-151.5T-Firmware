// FUN_0177ec84 @ 0177ec84 size=68 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_0177ec84(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_0177ec70(*param_1);
  FUN_0177ec70(param_1[1]);
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

