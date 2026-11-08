// FUN_016e40e8 @ 016e40e8 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_016e40e8(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar1 = 0;
  }
  switch(iVar1) {
  case 0:
    FUN_016e4144();
    return;
  case 1:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  case 2:
    FUN_0134aee0(param_1[1],param_1[2],4,8);
    return;
  case 3:
    FUN_0134aee0(param_1[1],param_1[2],1,2);
    return;
  default:
    return;
  }
}

