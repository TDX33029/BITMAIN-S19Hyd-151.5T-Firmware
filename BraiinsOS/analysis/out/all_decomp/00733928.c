// FUN_00733928 @ 00733928 size=344 calls_out=2 calls_in=0
// strings: StratumEarlyIo

void FUN_00733928(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x3;
  if (&DAT_8000000b < (undefined1 *)*param_1) {
    puVar1 = (undefined1 *)*param_1 + 0x7ffffff4;
  }
                    /* WARNING: Could not recover jumptable at 0x00733950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00733954 + *(int *)(&DAT_00733954 + (int)puVar1 * 4)))();
  return;
}

