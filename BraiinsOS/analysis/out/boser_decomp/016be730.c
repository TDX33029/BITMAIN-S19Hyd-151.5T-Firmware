// FUN_016be730 @ 016be730 size=48 calls_out=0 calls_in=1
// strings: 

void FUN_016be730(undefined4 param_1,int *param_2)

{
  for (; *param_2 == 5; param_2 = (int *)param_2[1]) {
  }
                    /* WARNING: Could not recover jumptable at 0x016be75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_016be760 + *(int *)(&LAB_016be760 + *param_2 * 4)))();
  return;
}

