// FUN_00c7600c @ 00c7600c size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00c7600c(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x38ef545b && param_2[2] == -0x1442c892) &&
      (param_2[1] == 0x42e05e4f && param_2[3] == -0x31afb367)) {
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

