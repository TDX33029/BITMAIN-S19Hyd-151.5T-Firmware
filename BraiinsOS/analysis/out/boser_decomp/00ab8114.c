// FUN_00ab8114 @ 00ab8114 size=124 calls_out=0 calls_in=2
// strings: 

void FUN_00ab8114(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x48);
  if (uVar1 < 0x80000001) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ab818c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_00ab8190 + (&DAT_00ab8190)[uVar1]))();
  return;
}

