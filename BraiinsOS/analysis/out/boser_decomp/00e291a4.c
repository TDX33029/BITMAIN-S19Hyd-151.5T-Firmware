// FUN_00e291a4 @ 00e291a4 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_00e291a4(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  double in_d0;
  undefined1 auStack_24 [12];
  
  if ((*param_2 & (uint)(in_d0 < *(double *)(param_2 + 2))) == 0 &&
      (param_2[4] & (uint)(*(double *)(param_2 + 6) < in_d0)) == 0) {
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_00e28fe8(auStack_24,param_3,param_4,param_4,*param_2,param_2[1],param_2[4],param_2[5]);
    FUN_01a70fd4(param_1,3,auStack_24);
  }
  return;
}

