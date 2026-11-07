// FUN_009dc824 @ 009dc824 size=72 calls_out=0 calls_in=1
// strings: 

void FUN_009dc824(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  }
  *param_1 = 0;
  return;
}

