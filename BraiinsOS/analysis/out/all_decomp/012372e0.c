// FUN_012372e0 @ 012372e0 size=280 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_012372e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_2) {
  case 4:
    if (*param_1 == 0x6c6c756e) {
      return 8;
    }
    break;
  case 5:
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_0041465b,5);
    if (iVar2 == 0) {
      return 1;
    }
    break;
  case 6:
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_003e873a,6);
    if (iVar2 == 0) {
      return 0x10;
    }
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_003b511a,6);
    if (iVar2 == 0) {
      return 0x20;
    }
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_00414642,6);
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar1 = 0x40;
    }
    return uVar1;
  case 7:
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_00414654,7);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_00414648,7);
    if (iVar2 == 0) {
      return 4;
    }
  }
  return 0;
}

