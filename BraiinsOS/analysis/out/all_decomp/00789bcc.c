// FUN_00789bcc @ 00789bcc size=32 calls_out=0 calls_in=1
// strings: 

void FUN_00789bcc(ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00789bec + *(int *)(&DAT_00789bec + (uint)*param_1 * 4)))();
  return;
}

