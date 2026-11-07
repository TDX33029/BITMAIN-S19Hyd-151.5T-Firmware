// FUN_01341130 @ 01341130 size=124 calls_out=1 calls_in=2
// strings: 

void FUN_01341130(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 2;
  if (2 < param_3) {
    iVar1 = thunk_FUN_01bed842(&DAT_00450e53,param_2 + param_3 + -3,3);
    if (iVar1 == 0) {
      param_3 = param_3 - 3;
      uVar2 = 0;
    }
    else if (param_3 != 3) {
      uVar2 = 1;
      if (*(int *)(param_2 + param_3 + -4) == 0x74737a2e) {
        param_3 = param_3 - 4;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[1] = param_3;
  return;
}

