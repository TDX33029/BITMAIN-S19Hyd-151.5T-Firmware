// FUN_010538f4 @ 010538f4 size=48 calls_out=0 calls_in=7
// strings: 

void FUN_010538f4(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < *param_2) {
    uVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01053920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01053924 + *(int *)(&DAT_01053924 + (uint)uVar1 * 4)))();
  return;
}

