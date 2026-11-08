// FUN_0152ad94 @ 0152ad94 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_0152ad94(byte param_1,byte param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_3[2];
  if (iVar1 == *param_3) {
    FUN_006029c0(param_3);
  }
  if (param_1 < 2) {
    param_2 = param_1;
  }
  *(byte *)(param_3[1] + iVar1) = param_2;
  param_3[2] = iVar1 + 1;
  return;
}

