// FUN_0072d424 @ 0072d424 size=324 calls_out=2 calls_in=0
// strings: MessageParseErrorMessageSerializeErrorEncryptionErrorInitializationError

void FUN_0072d424(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000007 < *param_1) {
    iVar1 = *param_1 + 0x7ffffff8;
  }
                    /* WARNING: Could not recover jumptable at 0x0072d44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0072d450 + *(int *)(&DAT_0072d450 + iVar1 * 4)))();
  return;
}

