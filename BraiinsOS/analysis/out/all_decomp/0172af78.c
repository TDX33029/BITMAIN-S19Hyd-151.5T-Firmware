// FUN_0172af78 @ 0172af78 size=64 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_0172af78(int param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0172af94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 8))();
  return uVar1;
}

