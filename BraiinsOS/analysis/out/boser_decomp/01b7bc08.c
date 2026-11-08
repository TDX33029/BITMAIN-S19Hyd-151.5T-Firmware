// FUN_01b7bc08 @ 01b7bc08 size=176 calls_out=4 calls_in=4
// strings: 

undefined8 FUN_01b7bc08(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_01b80614(*param_1);
    FUN_01b7b510(param_1);
    if (param_1[6] != 0) {
      uVar2 = param_1[6];
      uVar1 = FUN_01b7b774(param_1[4]);
      FUN_01b7ada0(uVar2,uVar1);
      param_1[6] = 0;
    }
    FUN_01b7ada0(param_1,200);
  }
  return 0;
}

