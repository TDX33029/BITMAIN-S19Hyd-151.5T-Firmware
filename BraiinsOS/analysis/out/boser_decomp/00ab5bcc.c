// FUN_00ab5bcc @ 00ab5bcc size=64 calls_out=0 calls_in=2
// strings: 

void FUN_00ab5bcc(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (puVar1 == &DAT_80000005) {
    *param_1 = 0;
    return;
  }
  puVar2 = (undefined1 *)0x5;
  if ((int)puVar1 < 0) {
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00ab5c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ab5c0c + *(int *)(&DAT_00ab5c0c + (int)puVar2 * 4)))();
  return;
}

