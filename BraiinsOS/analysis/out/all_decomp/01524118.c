// FUN_01524118 @ 01524118 size=16 calls_out=0 calls_in=1
// strings: 

void FUN_01524118(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01524124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01524128 + *(int *)(&DAT_01524128 + (param_1 & 0xffff) * 4)))();
  return;
}

