// FUN_01b6e7b8 @ 01b6e7b8 size=84 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_01b6e7b8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_01b6e264(*param_1);
  FUN_01b6e278(param_1[1]);
  FUN_01b6e250(param_1[2]);
  FUN_01b6e250(param_1[3]);
  uVar1 = FUN_01b6b1c4(param_1);
  return uVar1;
}

