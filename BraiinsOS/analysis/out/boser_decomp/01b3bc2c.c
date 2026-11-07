// FUN_01b3bc2c @ 01b3bc2c size=64 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_01b3bc2c(int param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01b3bc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 8))();
  return uVar1;
}

