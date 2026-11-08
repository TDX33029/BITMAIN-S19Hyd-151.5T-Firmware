// FUN_019cb3c0 @ 019cb3c0 size=356 calls_out=6 calls_in=0
// strings: 

void FUN_019cb3c0(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2 - 2;
  if (*param_2 < 2) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x019cb3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_019cb3f0 + *(int *)(&DAT_019cb3f0 + (uint)uVar1 * 4)))();
  return;
}

