// FUN_016e5160 @ 016e5160 size=52 calls_out=0 calls_in=3
// strings: 

void FUN_016e5160(undefined4 param_1,undefined4 param_2,int *param_3)

{
  for (; *param_3 == 5; param_3 = (int *)param_3[1]) {
  }
                    /* WARNING: Could not recover jumptable at 0x016e5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_016e5194 + *(int *)(&LAB_016e5194 + *param_3 * 4)))();
  return;
}

