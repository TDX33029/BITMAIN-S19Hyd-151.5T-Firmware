// FUN_0172c088 @ 0172c088 size=128 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0172c088(int *param_1,int param_2,int param_3)

{
  if (param_3 == 0 || param_2 == 0) {
    return 0;
  }
  FUN_017046e0(*param_1);
  FUN_017046e0(param_1[1]);
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}

