// FUN_0102cf58 @ 0102cf58 size=136 calls_out=1 calls_in=1
// strings: 

int FUN_0102cf58(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  iVar1 = -0x7fffffff;
  if (*param_1 - param_2 < param_3) {
    iVar1 = 0;
    if (!CARRY4(param_3,param_2)) {
      FUN_006bc77c(&local_1c,*param_1,param_1[1],param_3 + param_2,4,0xc);
      if (local_1c == 1) {
        return local_18;
      }
      *param_1 = param_3 + param_2;
      param_1[1] = local_18;
      return -0x7fffffff;
    }
  }
  return iVar1;
}

