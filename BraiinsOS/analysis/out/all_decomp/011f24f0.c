// FUN_011f24f0 @ 011f24f0 size=40 calls_out=0 calls_in=4
// strings: 

void FUN_011f24f0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x22;
  if (0x80000009 < *(uint *)(*param_1 + 0x20)) {
    iVar1 = *(uint *)(*param_1 + 0x20) + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x011f2514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_011f2518 + *(int *)(&DAT_011f2518 + iVar1 * 4)))();
  return;
}

