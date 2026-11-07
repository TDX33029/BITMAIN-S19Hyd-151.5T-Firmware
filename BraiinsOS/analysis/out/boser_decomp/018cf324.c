// FUN_018cf324 @ 018cf324 size=48 calls_out=0 calls_in=0
// strings: 

void FUN_018cf324(int param_1)

{
  ushort local_e [3];
  
  local_e[0] = (*(ushort **)(param_1 + 4))[1];
                    /* WARNING: Could not recover jumptable at 0x018cf350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018cf354 + *(int *)(&DAT_018cf354 + (uint)**(ushort **)(param_1 + 4) * 4)))
            (local_e);
  return;
}

