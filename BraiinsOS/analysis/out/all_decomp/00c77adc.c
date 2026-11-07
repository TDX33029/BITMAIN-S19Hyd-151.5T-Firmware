// FUN_00c77adc @ 00c77adc size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00c77adc(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x3a04cfef && param_2[2] == 0x2756ae7f) &&
      (param_2[1] == 0x3f8dd2c5 && param_2[3] == 0x6db1d80b)) {
    iVar1 = param_1 + 0x28;
  }
  else {
    iVar1 = 0;
    if ((*param_2 == 0x50f052f7 && param_2[2] == -0x20684cdb) &&
        (param_2[1] == -0x66f64d5b && param_2[3] == -0x4aa34df2)) {
      return param_1 + 0x1c;
    }
  }
  return iVar1;
}

