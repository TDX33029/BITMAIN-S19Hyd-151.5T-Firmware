// FUN_00733dd0 @ 00733dd0 size=348 calls_out=2 calls_in=0
// strings: StratumEarlyIo

void FUN_00733dd0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x2;
  if (&DAT_8000000b < (undefined1 *)*param_1) {
    puVar1 = (undefined1 *)*param_1 + 0x7ffffff4;
  }
                    /* WARNING: Could not recover jumptable at 0x00733df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00733dfc + *(int *)(&DAT_00733dfc + (int)puVar1 * 4)))();
  return;
}

