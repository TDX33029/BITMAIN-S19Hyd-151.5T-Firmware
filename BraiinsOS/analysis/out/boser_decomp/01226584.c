// FUN_01226584 @ 01226584 size=24 calls_out=0 calls_in=1
// strings: 

void FUN_01226584(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 auStack_18 [8];
  uint uStack_10;
  int iStack_c;
  
  if ((uint)-param_4 < (uint)(param_3 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x01226598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0122659c + *(int *)(&LAB_0122659c + param_3 * 4)))();
    return;
  }
  auStack_18[0] = 1;
  uStack_10 = param_3;
  iStack_c = param_4;
  FUN_0123bf08(param_1,auStack_18,&DAT_01c24be4,&DAT_01d064b8);
  return;
}

