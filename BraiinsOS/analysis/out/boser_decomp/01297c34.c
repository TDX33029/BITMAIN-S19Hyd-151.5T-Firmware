// FUN_01297c34 @ 01297c34 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_01297c34(undefined2 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01297c64(*param_1);
                    /* WARNING: Could not recover jumptable at 0x01297c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}

