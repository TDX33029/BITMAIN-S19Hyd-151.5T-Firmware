// FUN_011398c0 @ 011398c0 size=324 calls_out=2 calls_in=0
// strings: MessageParseErrorMessageSerializeErrorEncryptionErrorInitializationError

void FUN_011398c0(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000007 < *param_1) {
    iVar1 = *param_1 + 0x7ffffff8;
  }
                    /* WARNING: Could not recover jumptable at 0x011398e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_011398ec + *(int *)(&DAT_011398ec + iVar1 * 4)))();
  return;
}

