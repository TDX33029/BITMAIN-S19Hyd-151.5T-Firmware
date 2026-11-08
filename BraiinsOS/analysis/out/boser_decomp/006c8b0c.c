// FUN_006c8b0c @ 006c8b0c size=212 calls_out=1 calls_in=0
// strings: variables | operation_name

void FUN_006c8b0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 5:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_0050c2f4,5);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_006c8bf0;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,"variables",9);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_006c8bf0;
    }
    break;
  case 10:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00520f23,10);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_006c8bf0;
    }
    break;
  case 0xe:
    iVar2 = thunk_FUN_01bed842(param_2,"operation_name",0xe);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_006c8bf0;
    }
  }
  uVar1 = 4;
LAB_006c8bf0:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 0;
  return;
}

