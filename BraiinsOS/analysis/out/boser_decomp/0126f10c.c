// FUN_0126f10c @ 0126f10c size=228 calls_out=2 calls_in=1
// strings: boolean | integer | number | string

void FUN_0126f10c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 7) {
    iVar2 = thunk_FUN_01bed842(param_2,"boolean",7);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0126f1c4;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"integer",7);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0126f1bc;
    }
  }
  else if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,"number",6);
    if (iVar2 == 0) {
      uVar1 = 2;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"string",6);
      if (iVar2 != 0) goto LAB_0126f1cc;
      uVar1 = 3;
    }
LAB_0126f1bc:
    param_1[1] = uVar1;
    uVar1 = 0;
    goto LAB_0126f1c4;
  }
LAB_0126f1cc:
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c25424,4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_0126f1c4:
  *param_1 = uVar1;
  return;
}

