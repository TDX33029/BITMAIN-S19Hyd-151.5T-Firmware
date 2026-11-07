// FUN_0159662c @ 0159662c size=44 calls_out=0 calls_in=5
// strings: 

void FUN_0159662c(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x22;
  if (&DAT_80000009 < (undefined1 *)*param_1) {
    puVar1 = (undefined1 *)*param_1 + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x01596654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01596658 + *(int *)(&DAT_01596658 + (int)puVar1 * 4)))();
  return;
}

