// FUN_0093e9e4 @ 0093e9e4 size=364 calls_out=2 calls_in=1
// strings: right_left | left_right | top_bottom | bottom_top | hydro | immersion

void FUN_0093e9e4(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 5) {
    iVar1 = thunk_FUN_016dd50a(param_2,"hydro",5);
    if (iVar1 == 0) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 10) {
    iVar1 = thunk_FUN_016dd50a(param_2,"right_left",10);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"left_right",10);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"top_bottom",10);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"bottom_top",10);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 9) && (iVar1 = thunk_FUN_016dd50a(param_2,"immersion",9), iVar1 == 0)) {
    param_1[1] = 5;
    *param_1 = 0;
    return;
  }
  uVar2 = FUN_00953d54(param_2,param_3,&DAT_01867fd8,6);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

