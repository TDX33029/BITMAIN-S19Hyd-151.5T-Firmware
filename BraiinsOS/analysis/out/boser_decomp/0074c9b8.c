// FUN_0074c9b8 @ 0074c9b8 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_0074c9b8(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_2) {
    uVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0074c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0074c9f0 + *(int *)(&DAT_0074c9f0 + (uint)uVar1 * 4)))();
  return;
}

