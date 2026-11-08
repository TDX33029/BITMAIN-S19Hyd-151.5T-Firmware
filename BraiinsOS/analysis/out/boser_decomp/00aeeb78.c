// FUN_00aeeb78 @ 00aeeb78 size=72 calls_out=1 calls_in=15
// strings: 

void FUN_00aeeb78(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_80000004) {
    FUN_019a7d7c(param_1 + 1);
    return;
  }
  puVar2 = (undefined1 *)0x4;
  if ((int)puVar1 < 0) {
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x019d0b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_019d0b5c + *(int *)(&DAT_019d0b5c + (int)puVar2 * 4)))();
  return;
}

