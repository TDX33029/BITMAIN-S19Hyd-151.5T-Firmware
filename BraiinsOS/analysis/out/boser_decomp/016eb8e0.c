// FUN_016eb8e0 @ 016eb8e0 size=84 calls_out=0 calls_in=3
// strings: 

void FUN_016eb8e0(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_2;
  puVar2 = puVar1 + -0x110000;
  if (*(int *)(param_1 + 8) == 0) {
    if (puVar1 < &DAT_00110000) {
      puVar2 = (undefined1 *)0x2;
    }
                    /* WARNING: Could not recover jumptable at 0x016eb91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_016eb920 + *(int *)(&DAT_016eb920 + (int)puVar2 * 4)))();
    return;
  }
  if (puVar1 < &DAT_00110000) {
    puVar2 = (undefined1 *)0x2;
  }
                    /* WARNING: Could not recover jumptable at 0x016eb98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016eb990 + *(int *)(&DAT_016eb990 + (int)puVar2 * 4)))();
  return;
}

