// FUN_0172bf9c @ 0172bf9c size=68 calls_out=2 calls_in=8
// strings: 

undefined4 FUN_0172bf9c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_017046e0(*param_1);
  FUN_017046e0(param_1[1]);
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

