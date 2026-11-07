// FUN_014976a0 @ 014976a0 size=64 calls_out=0 calls_in=1
// strings: 

void FUN_014976a0(undefined1 *param_1,undefined4 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x014976dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_014976e0 + *(int *)(&DAT_014976e0 + (int)puVar2 * 4)))();
  return;
}

