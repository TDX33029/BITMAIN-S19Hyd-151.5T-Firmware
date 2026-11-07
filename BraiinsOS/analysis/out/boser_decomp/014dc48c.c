// FUN_014dc48c @ 014dc48c size=200 calls_out=2 calls_in=1
// strings: Active | EndOfLife

void FUN_014dc48c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,"Active",6);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014dc528;
    }
LAB_014dc530:
    uVar3 = FUN_014dee68(param_2,param_3,&DAT_01cfa04c,3);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
  }
  else {
    if (param_3 == 8) {
      iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570308,8);
      if (iVar2 != 0) goto LAB_014dc530;
      uVar1 = 1;
    }
    else {
      if ((param_3 != 9) || (iVar2 = thunk_FUN_01bed842(param_2,"EndOfLife",9), iVar2 != 0))
      goto LAB_014dc530;
      uVar1 = 2;
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
LAB_014dc528:
  *param_1 = uVar1;
  return;
}

