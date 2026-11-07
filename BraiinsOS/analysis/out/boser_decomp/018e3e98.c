// FUN_018e3e98 @ 018e3e98 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_018e3e98(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = 4;
  if (0x80000000 < uVar1) {
    iVar2 = uVar1 + 0x7fffffff;
  }
  switch(iVar2) {
  case 0:
  case 2:
    return;
  case 1:
  case 3:
    param_1 = param_1 + 1;
    break;
  default:
    if (uVar1 == 0x80000000) {
      return;
    }
  }
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

