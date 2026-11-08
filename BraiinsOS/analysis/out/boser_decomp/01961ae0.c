// FUN_01961ae0 @ 01961ae0 size=44 calls_out=1 calls_in=0
// strings: 

void FUN_01961ae0(undefined4 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01961a10();
                    /* WARNING: Could not recover jumptable at 0x01961b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}

