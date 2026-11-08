// FUN_01401e58 @ 01401e58 size=64 calls_out=0 calls_in=4
// strings: 

void FUN_01401e58(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_2) {
    uVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01401e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01401e98 + *(int *)(&DAT_01401e98 + (uint)uVar1 * 4)))();
  return;
}

