// FUN_012266f8 @ 012266f8 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_012266f8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 local_18 [8];
  uint local_10;
  int local_c;
  
  if ((uint)-param_4 < (uint)(param_3 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x0122670c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_01226710 + *(int *)(&LAB_01226710 + param_3 * 4)))();
    return;
  }
  local_18[0] = 1;
  local_10 = param_3;
  local_c = param_4;
  FUN_0123bf08(param_1,local_18,&DAT_01cfa354,&DAT_01d064b8);
  return;
}

