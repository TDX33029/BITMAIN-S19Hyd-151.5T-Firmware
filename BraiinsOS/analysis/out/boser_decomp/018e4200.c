// FUN_018e4200 @ 018e4200 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_018e4200(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 3;
  if (0x80000000 < uVar2) {
    iVar1 = uVar2 + 0x7fffffff;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_018e26a0(param_1 + 1);
      return;
    }
    if (iVar1 != 2) {
      if (uVar2 == 0x80000000) {
        return;
      }
      FUN_0134bd64(uVar2,param_1[1]);
      return;
    }
  }
  FUN_0134aee0(param_1[1],param_1[2],2,4);
  return;
}

