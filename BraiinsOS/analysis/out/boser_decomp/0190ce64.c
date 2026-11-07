// FUN_0190ce64 @ 0190ce64 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_0190ce64(char param_1,undefined1 param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      uVar1 = 2;
    }
    else {
      uVar1 = param_2;
    }
  }
  iVar2 = param_3[2];
  if (iVar2 == *param_3) {
    FUN_006666a0(param_3);
  }
  *(undefined1 *)(param_3[1] + iVar2) = uVar1;
  param_3[2] = iVar2 + 1;
  return;
}

