// FUN_00c5bb50 @ 00c5bb50 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_00c5bb50(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  if ((uint)(*param_3 < 5) <= -param_3[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003550b4,0x22,&DAT_01873bb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00c5bb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00c5bb98 + *(int *)(&DAT_00c5bb98 + *param_3 * 4)))();
  return;
}

