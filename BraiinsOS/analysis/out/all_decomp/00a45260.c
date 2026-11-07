// FUN_00a45260 @ 00a45260 size=36 calls_out=0 calls_in=0
// strings: 

void FUN_00a45260(int *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 4))();
                    /* WARNING: Could not recover jumptable at 0x00a45280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)((ulonglong)uVar1 >> 0x20) + 0x10))((int)uVar1,param_2);
  return;
}

