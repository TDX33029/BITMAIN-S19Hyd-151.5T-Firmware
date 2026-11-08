// FUN_01232b30 @ 01232b30 size=208 calls_out=2 calls_in=1
// strings: manual

void FUN_01232b30(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 4) {
    if (*param_2 != 0x6f747561) goto LAB_01232bdc;
    *param_1 = 2;
    uVar1 = 0;
  }
  else if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,"manual",6);
    if (iVar2 != 0) {
LAB_01232bdc:
      FUN_0123c0e0(param_1,param_2,param_3,&DAT_01c24b54,3);
      return;
    }
    *param_1 = 2;
    uVar1 = 1;
  }
  else {
    if ((param_3 != 8) || (iVar2 = thunk_FUN_01bed842(param_2,&DAT_0056fc98,8), iVar2 != 0))
    goto LAB_01232bdc;
    uVar1 = 2;
    *param_1 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

