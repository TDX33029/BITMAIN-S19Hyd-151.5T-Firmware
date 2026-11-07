// FUN_0007fde0 @ 0007fde0  size=308  callers=0
// program: bmminer


undefined4 FUN_0007fde0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_c;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 1)) || (param_2 == (int *)0x0)) || (*param_2 != 1))
  {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0007f8d4(param_1,param_2[3],1);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      for (local_c = 0; local_c < (uint)param_2[3]; local_c = local_c + 1) {
        FUN_0007e880(*(undefined4 *)(param_2[4] + local_c * 4));
      }
      FUN_0007f87c(param_1[4],param_1[3],param_2[4],0,param_2[3]);
      param_1[3] = param_1[3] + param_2[3];
      uVar2 = 0;
    }
  }
  return uVar2;
}

