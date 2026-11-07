// FUN_01596fc0 @ 01596fc0 size=288 calls_out=1 calls_in=2
// strings: number | objectSingle | string | boolean | integer | array

undefined4 FUN_01596fc0(int *param_1,undefined4 param_2)

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
    iVar2 = thunk_FUN_01bed842(param_1,"array",5);
    if (iVar2 == 0) {
      return 1;
    }
    break;
  case 6:
    iVar2 = thunk_FUN_01bed842(param_1,"number",6);
    if (iVar2 == 0) {
      return 0x10;
    }
    iVar2 = thunk_FUN_01bed842(param_1,"objectSingle",6);
    if (iVar2 == 0) {
      return 0x20;
    }
    iVar2 = thunk_FUN_01bed842(param_1,"string",6);
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar1 = 0x40;
    }
    return uVar1;
  case 7:
    iVar2 = thunk_FUN_01bed842(param_1,"boolean",7);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = thunk_FUN_01bed842(param_1,"integer",7);
    if (iVar2 == 0) {
      return 4;
    }
  }
  return 0;
}

