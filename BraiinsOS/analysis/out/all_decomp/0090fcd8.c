// FUN_0090fcd8 @ 0090fcd8 size=256 calls_out=2 calls_in=1
// strings: manual | immersion | hydro

void FUN_0090fcd8(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x6f747561) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    iVar2 = thunk_FUN_016dd50a(param_2,"hydro",5);
    if (iVar2 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    iVar2 = thunk_FUN_016dd50a(param_2,"manual",6);
    if (iVar2 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_016dd50a(param_2,"immersion",9);
    if (iVar2 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_00953d54(param_2,param_3,&DAT_01867938,4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

