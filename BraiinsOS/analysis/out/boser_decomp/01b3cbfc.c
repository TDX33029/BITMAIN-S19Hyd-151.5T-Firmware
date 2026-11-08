// FUN_01b3cbfc @ 01b3cbfc size=112 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b3cbfc(int *param_1,int param_2,int param_3)

{
  if (param_3 == 0 || param_2 == 0) {
    return 0;
  }
  FUN_01b1f904(*param_1);
  FUN_01b1f904(param_1[1]);
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}

