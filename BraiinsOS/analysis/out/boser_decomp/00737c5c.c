// FUN_00737c5c @ 00737c5c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00737c5c(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  
  if (*param_1 == 1) {
    bVar1 = (char)param_1[2] != '\0';
    if (bVar1) {
      param_3 = param_1[6];
    }
    if (bVar1 && param_3 != 0) {
      FUN_01443048(param_3,param_1[7]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  return;
}

