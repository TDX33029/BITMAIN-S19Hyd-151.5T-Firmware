// FUN_0191edf0 @ 0191edf0 size=88 calls_out=2 calls_in=10
// strings: 

void FUN_0191edf0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 1;
  if (0x80000000 < uVar2) {
    iVar1 = uVar2 + 0x7fffffff;
  }
  switch(iVar1) {
  case 0:
  case 3:
    return;
  case 1:
    FUN_0191eea4(param_1 + 3);
    break;
  default:
    param_1 = param_1 + 1;
    uVar2 = *param_1;
  }
  if (uVar2 == 0x80000000) {
    return;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

