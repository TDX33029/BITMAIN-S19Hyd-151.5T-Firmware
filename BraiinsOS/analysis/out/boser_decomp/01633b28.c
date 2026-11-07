// FUN_01633b28 @ 01633b28 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_01633b28(int *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  
  if (0xf < param_3) {
    iVar1 = param_4[2];
    if (iVar1 == *param_4) {
      FUN_0161d754(param_4);
    }
    FUN_01bed4e2(param_4[1] + iVar1 * 0x10,param_2,0x10);
    param_4[2] = iVar1 + 1;
    FUN_01633b28(&local_24,param_2 + 0x10,param_3 - 0x10,param_4);
    if (local_24 != -0x80000000) {
      *param_1 = local_24;
      param_1[1] = local_20;
      param_1[2] = local_1c;
      return;
    }
  }
  *param_1 = -0x80000000;
  return;
}

