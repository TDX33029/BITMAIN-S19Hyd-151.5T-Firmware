// FUN_0178d588 @ 0178d588 size=176 calls_out=4 calls_in=5
// strings: 

undefined8 FUN_0178d588(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_01791f94(*param_1);
    FUN_0178ce90(param_1);
    if (param_1[6] != 0) {
      uVar2 = param_1[6];
      uVar1 = FUN_0178d0f4(param_1[4]);
      FUN_0178c720(uVar2,uVar1);
      param_1[6] = 0;
    }
    FUN_0178c720(param_1,200);
  }
  return 0;
}

