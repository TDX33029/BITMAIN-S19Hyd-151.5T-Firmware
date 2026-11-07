// FUN_0124d080 @ 0124d080 size=380 calls_out=2 calls_in=1
// strings: top_left | left_bottom | bottom_left | right_bottom | bottom_right | right_top

void FUN_0124d080(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570248,8);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0124d1e4;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"top_left",8);
    if (iVar2 == 0) {
      uVar1 = 4;
      break;
    }
  default:
switchD_0124d0a4_caseD_a:
    uVar3 = FUN_01265080(param_2,param_3,&DAT_01c24eb0,8);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
    goto LAB_0124d1e4;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,"right_top",9);
    if (iVar2 == 0) {
      uVar1 = 2;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"top_right",9);
      if (iVar2 != 0) goto switchD_0124d0a4_caseD_a;
      uVar1 = 5;
    }
    break;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"left_bottom",0xb);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"bottom_left",0xb);
      if (iVar2 != 0) goto switchD_0124d0a4_caseD_a;
      uVar1 = 6;
    }
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"right_bottom",0xc);
    if (iVar2 == 0) {
      uVar1 = 3;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"bottom_right",0xc);
      if (iVar2 != 0) goto switchD_0124d0a4_caseD_a;
      uVar1 = 7;
    }
  }
  param_1[1] = uVar1;
  uVar1 = 0;
LAB_0124d1e4:
  *param_1 = uVar1;
  return;
}

