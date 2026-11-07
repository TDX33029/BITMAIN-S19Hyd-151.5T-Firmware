// FUN_01232790 @ 01232790 size=252 calls_out=2 calls_in=1
// strings: manual | immersion | hydro

void FUN_01232790(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x6f747561) {
      *param_1 = 2;
      uVar1 = 0;
LAB_01232874:
      *(undefined1 *)(param_1 + 1) = uVar1;
      return;
    }
    break;
  case 5:
    iVar2 = thunk_FUN_01bed842(param_2,"hydro",5);
    if (iVar2 == 0) {
      *param_1 = 2;
      uVar1 = 3;
      goto LAB_01232874;
    }
    break;
  case 6:
    iVar2 = thunk_FUN_01bed842(param_2,"manual",6);
    if (iVar2 == 0) {
      *param_1 = 2;
      uVar1 = 1;
      goto LAB_01232874;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,"immersion",9);
    if (iVar2 == 0) {
      uVar1 = 2;
      *param_1 = 2;
      goto LAB_01232874;
    }
  }
  FUN_0123c0e0(param_1,param_2,param_3,&DAT_01c24b34,4);
  return;
}

