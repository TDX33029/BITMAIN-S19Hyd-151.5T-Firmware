// FUN_00a43e60 @ 00a43e60 size=324 calls_out=2 calls_in=0
// strings: MessageParseErrorMessageSerializeErrorEncryptionErrorInitializationError

void FUN_00a43e60(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000007 < *param_1) {
    iVar1 = *param_1 + 0x7ffffff8;
  }
                    /* WARNING: Could not recover jumptable at 0x00a43e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a43e8c + *(int *)(&DAT_00a43e8c + iVar1 * 4)))();
  return;
}

