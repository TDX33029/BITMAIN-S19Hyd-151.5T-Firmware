// FUN_00d654b8 @ 00d654b8 size=344 calls_out=1 calls_in=1
// strings: origin | tuning_duration

void FUN_00d654b8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 6:
    iVar1 = thunk_FUN_016dd50a(param_2,"origin",6);
    if (iVar1 == 0) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00357804,0xb);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_003577f7,0xd);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_003577e8,0xf);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_0035780f,0xf);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"tuning_duration",0xf);
    if (iVar1 == 0) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

