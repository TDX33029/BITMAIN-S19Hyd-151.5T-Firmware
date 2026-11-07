// FUN_0090fe00 @ 0090fe00 size=280 calls_out=2 calls_in=1
// strings: manual | immersion | hydro

void FUN_0090fe00(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x6f747561) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    break;
  case 5:
    iVar1 = thunk_FUN_016dd50a(param_2,"hydro",5);
    if (iVar1 == 0) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 3;
      return;
    }
    break;
  case 6:
    iVar1 = thunk_FUN_016dd50a(param_2,"manual",6);
    if (iVar1 == 0) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    break;
  case 9:
    iVar1 = thunk_FUN_016dd50a(param_2,"immersion",9);
    if (iVar1 == 0) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 2;
      return;
    }
  }
  FUN_00924538(param_1,param_2,param_3,&DAT_01867938,4);
  return;
}

