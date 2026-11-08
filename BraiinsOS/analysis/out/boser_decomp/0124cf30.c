// FUN_0124cf30 @ 0124cf30 size=308 calls_out=2 calls_in=1
// strings: right_left | left_right | top_bottom | bottom_top | hydro | immersion

void FUN_0124cf30(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 5) {
    iVar2 = thunk_FUN_01bed842(param_2,"hydro",5);
    if (iVar2 != 0) {
LAB_0124d040:
      uVar3 = FUN_01265080(param_2,param_3,&DAT_01c24e50,6);
      *(undefined4 *)(param_1 + 4) = uVar3;
      uVar1 = 1;
      goto LAB_0124d01c;
    }
    uVar1 = 4;
  }
  else if (param_3 == 10) {
    iVar2 = thunk_FUN_01bed842(param_2,"right_left",10);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0124d01c;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"left_right",10);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"top_bottom",10);
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        iVar2 = thunk_FUN_01bed842(param_2,"bottom_top",10);
        if (iVar2 != 0) goto LAB_0124d040;
        uVar1 = 3;
      }
    }
  }
  else {
    if ((param_3 != 9) || (iVar2 = thunk_FUN_01bed842(param_2,"immersion",9), iVar2 != 0))
    goto LAB_0124d040;
    uVar1 = 5;
  }
  param_1[1] = uVar1;
  uVar1 = 0;
LAB_0124d01c:
  *param_1 = uVar1;
  return;
}

