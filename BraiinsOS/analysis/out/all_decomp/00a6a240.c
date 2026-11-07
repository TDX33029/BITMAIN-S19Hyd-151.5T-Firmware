// FUN_00a6a240 @ 00a6a240 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_00a6a240(undefined4 param_1,int *param_2)

{
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  
  FUN_00a69d80(auStack_3c,param_2,param_1,0);
  local_24 = 7;
  local_28 = &DAT_0034ce78;
  local_2c = local_34;
  local_30 = local_38;
  FUN_00a63b14(DAT_018d7d38,&local_30,2);
                    /* WARNING: Could not recover jumptable at 0x00a6a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00a6a2b4 + *(int *)(&LAB_00a6a2b4 + *param_2 * 4)))();
  return;
}

