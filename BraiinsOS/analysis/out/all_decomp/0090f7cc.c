// FUN_0090f7cc @ 0090f7cc size=280 calls_out=2 calls_in=2
// strings: enabled

void FUN_0090f7cc(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 3:
    iVar1 = thunk_FUN_016dd50a(param_2,"url",3);
    if (iVar1 == 0) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    break;
  case 4:
    if (*param_2 == 0x72657375) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 2;
      return;
    }
    break;
  case 7:
    iVar1 = thunk_FUN_016dd50a(param_2,"enabled",7);
    if (iVar1 == 0) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    break;
  case 8:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_0056aa78,8);
    if (iVar1 == 0) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 3;
      return;
    }
  }
  FUN_00924444(param_1,param_2,param_3,&DAT_01867988,4);
  return;
}

