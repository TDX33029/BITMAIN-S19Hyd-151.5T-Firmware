// FUN_00b621e8 @ 00b621e8 size=104 calls_out=2 calls_in=3
// strings: 

void FUN_00b621e8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int local_80 [6];
  
  uVar1 = FUN_01221f24(param_2 + 0x98,param_2,5,0);
  FUN_00a5d500(local_80,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00b6224c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00b62250 + *(int *)(&LAB_00b62250 + local_80[0] * 4)))();
  return;
}

