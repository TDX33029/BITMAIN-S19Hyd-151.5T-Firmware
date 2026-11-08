// FUN_01b82c0c @ 01b82c0c size=64 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b82c0c(undefined2 *param_1,int param_2)

{
  param_1[1] = (short)param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + (param_2 + 1) * 4 + 2) = 0;
  *(undefined4 *)(param_1 + (param_2 + 1) * 4) = 0;
  return 0;
}

