// FUN_01592e4c @ 01592e4c size=40 calls_out=0 calls_in=6
// strings: 

void FUN_01592e4c(int *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x22;
  if (&DAT_80000009 < *(undefined1 **)(*param_1 + 0x20)) {
    puVar1 = *(undefined1 **)(*param_1 + 0x20) + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x01592e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01592e74 + *(int *)(&DAT_01592e74 + (int)puVar1 * 4)))();
  return;
}

