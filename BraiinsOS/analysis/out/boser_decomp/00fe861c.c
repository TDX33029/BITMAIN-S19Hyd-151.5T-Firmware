// FUN_00fe861c @ 00fe861c size=180 calls_out=4 calls_in=2
// strings: 

void FUN_00fe861c(int *param_1,int param_2)

{
  bool bVar1;
  char local_28;
  char local_27;
  char local_26;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  FUN_012c3960(&local_28);
  if (local_28 != '\x01') {
    bVar1 = local_27 == '\x01';
    if (bVar1) {
      local_27 = local_26;
    }
    if (bVar1 && local_27 == 'n') {
      FUN_012c6160(param_2 + 0xc);
      local_24 = FUN_012c3a60(param_2,"ull",3);
      if (local_24 == 0) {
        *param_1 = -0x80000000;
        return;
      }
    }
    else {
      FUN_012c658c(&local_20,param_2);
      if (local_20 != -0x80000000) {
        *param_1 = local_20;
        param_1[1] = local_1c;
        param_1[2] = iStack_18;
        return;
      }
      local_24 = local_1c;
    }
  }
  *param_1 = -0x7fffffff;
  param_1[1] = local_24;
  return;
}

