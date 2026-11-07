// FUN_012a3b0c @ 012a3b0c size=104 calls_out=2 calls_in=4
// strings: 

void FUN_012a3b0c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = 4;
  iVar2 = 4;
  if ((int)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x80000000;
  }
  if (1 < uVar3 - 6) {
    if (uVar3 == 4) {
      FUN_0134bd64(uVar1,param_1[1]);
      FUN_0134aee0(param_1[3],param_1[4],4,8);
      iVar2 = 0x18;
    }
    else if (uVar3 != 0) {
      return;
    }
  }
  FUN_0134bd64(*(undefined4 *)((int)param_1 + iVar2),((undefined4 *)((int)param_1 + iVar2))[1]);
  return;
}

