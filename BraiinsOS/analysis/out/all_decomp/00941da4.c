// FUN_00941da4 @ 00941da4 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_00941da4(undefined4 param_1,int *param_2)

{
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [140];
  
  FUN_016716cc(auStack_ec);
  FUN_016716cc(auStack_bc,param_2);
                    /* WARNING: Could not recover jumptable at 0x00941ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00941de0 + *(int *)(&LAB_00941de0 + *param_2 * 4)))();
  return;
}

