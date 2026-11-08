// FUN_0130f600 @ 0130f600 size=48 calls_out=2 calls_in=4
// strings: 

void FUN_0130f600(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000002 < *param_1) {
    iVar1 = *param_1 + 0x7ffffffd;
  }
  if (iVar1 == 0) {
    param_1 = param_1 + 1;
  }
  else if (iVar1 != 1) {
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  }
  FUN_0130e74c(param_1);
  return;
}

