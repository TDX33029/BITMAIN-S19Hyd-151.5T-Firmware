// FUN_0132dd18 @ 0132dd18 size=124 calls_out=1 calls_in=2
// strings: 

void FUN_0132dd18(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  switch(iVar1) {
  case 0:
    uVar2 = param_1[2];
    if (iVar3 != 0) {
      iVar1 = uVar2 - 0x22;
      if (uVar2 < 0x22) {
        iVar1 = 0;
      }
      if (iVar1 == 1) {
        param_1 = param_1 + 4;
        if (*param_1 < -0x7ffffffc) {
          return;
        }
        break;
      }
      if (iVar1 != 0) {
        return;
      }
    }
    iVar1 = 0x1c;
    if (uVar2 == 0x22) {
      iVar1 = 4;
    }
    param_1 = (int *)((int)(param_1 + 2) + iVar1);
    break;
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
    return;
  default:
    param_1 = param_1 + 1;
  }
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

