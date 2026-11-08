// FUN_013e8704 @ 013e8704 size=56 calls_out=0 calls_in=6
// strings: 

void FUN_013e8704(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < *param_2) {
    uVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013e8738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013e873c + *(int *)(&DAT_013e873c + (uint)uVar1 * 4)))();
  return;
}

