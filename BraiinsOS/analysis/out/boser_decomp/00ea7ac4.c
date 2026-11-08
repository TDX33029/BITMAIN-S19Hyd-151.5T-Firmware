// FUN_00ea7ac4 @ 00ea7ac4 size=152 calls_out=2 calls_in=1
// strings: Default | Compact

void FUN_00ea7ac4(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 7) {
    param_3 = 7;
    iVar2 = thunk_FUN_01bed842(param_2,"Default",7);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00ea7b30;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"Compact",7);
    if (iVar2 == 0) {
      param_1[1] = 1;
      uVar1 = 0;
      goto LAB_00ea7b30;
    }
  }
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c17f84,2);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_00ea7b30:
  *param_1 = uVar1;
  return;
}

