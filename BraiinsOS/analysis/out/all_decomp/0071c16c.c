// FUN_0071c16c @ 0071c16c size=48 calls_out=0 calls_in=2
// strings: 

void FUN_0071c16c(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_2) {
    uVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0071c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0071c19c + *(int *)(&DAT_0071c19c + (uint)uVar1 * 4)))();
  return;
}

