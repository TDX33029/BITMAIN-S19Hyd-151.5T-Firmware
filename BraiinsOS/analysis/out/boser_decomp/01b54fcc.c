// FUN_01b54fcc @ 01b54fcc size=68 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_01b54fcc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_01b1f904(*param_1);
  FUN_01b1f904(param_1[1]);
  uVar1 = FUN_01b6b1c4(param_1);
  return uVar1;
}

