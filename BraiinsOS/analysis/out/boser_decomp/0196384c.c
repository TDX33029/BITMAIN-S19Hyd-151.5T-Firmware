// FUN_0196384c @ 0196384c size=108 calls_out=1 calls_in=0
// strings: 

int FUN_0196384c(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  if (CARRY4(param_3,param_2)) {
    iVar1 = 0;
  }
  else {
    FUN_0134b234(&local_1c,*param_1,param_1[1],param_3 + param_2,4,0x20);
    if (local_1c == 1) {
      iVar1 = local_18;
    }
    else {
      iVar1 = -0x7fffffff;
      *param_1 = param_3 + param_2;
      param_1[1] = local_18;
    }
  }
  return iVar1;
}

