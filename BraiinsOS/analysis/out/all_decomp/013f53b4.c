// FUN_013f53b4 @ 013f53b4 size=84 calls_out=0 calls_in=3
// strings: 

void FUN_013f53b4(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_2;
  puVar2 = puVar1 + -0x110000;
  if (*(int *)(param_1 + 8) == 0) {
    if (puVar1 < &DAT_00110000) {
      puVar2 = (undefined1 *)0x2;
    }
                    /* WARNING: Could not recover jumptable at 0x013f53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_013f53f4 + *(int *)(&DAT_013f53f4 + (int)puVar2 * 4)))();
    return;
  }
  if (puVar1 < &DAT_00110000) {
    puVar2 = (undefined1 *)0x2;
  }
                    /* WARNING: Could not recover jumptable at 0x013f5468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013f546c + *(int *)(&DAT_013f546c + (int)puVar2 * 4)))();
  return;
}

