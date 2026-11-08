// FUN_01b1f904 @ 01b1f904 size=108 calls_out=1 calls_in=39
// strings: 

undefined4 FUN_01b1f904(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1[4] & 2) == 0) {
    FUN_01b6b1c4(*param_1);
  }
  if ((param_1[4] & 1) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_01b6b1c4(param_1);
  return uVar1;
}

