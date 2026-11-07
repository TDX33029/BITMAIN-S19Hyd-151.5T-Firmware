// FUN_0093eb6c @ 0093eb6c size=460 calls_out=2 calls_in=1
// strings: top_left | left_bottom | bottom_left | right_bottom | bottom_rightBUG: No hashboards provided to calculate missing hashboards from | right_top

void FUN_0093eb6c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 8:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00569e70,8);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"top_left",8);
    if (iVar1 == 0) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    iVar1 = thunk_FUN_016dd50a(param_2,"right_top",9);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"top_right",9);
    if (iVar1 == 0) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(param_2,"left_bottom",0xb);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"bottom_left",0xb);
    if (iVar1 == 0) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    iVar1 = thunk_FUN_016dd50a(param_2,"right_bottom",0xc);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,
                               "bottom_rightBUG: No hashboards provided to calculate missing hashboards from"
                               ,0xc);
    if (iVar1 == 0) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  uVar2 = FUN_00953d54(param_2,param_3,&DAT_01868008,8);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

