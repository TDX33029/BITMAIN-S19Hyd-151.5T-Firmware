// FUN_01226634 @ 01226634 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_01226634(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 local_18 [8];
  uint local_10;
  int local_c;
  
  if ((uint)-param_4 < (uint)(param_3 < 5)) {
                    /* WARNING: Could not recover jumptable at 0x01226648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0122664c + *(int *)(&LAB_0122664c + param_3 * 4)))();
    return;
  }
  local_18[0] = 1;
  local_10 = param_3;
  local_c = param_4;
  FUN_0123bf08(param_1,local_18,&DAT_01cfa494,&DAT_01d064b8);
  return;
}

