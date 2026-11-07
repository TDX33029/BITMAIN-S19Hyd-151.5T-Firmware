// FUN_00c04818 @ 00c04818 size=260 calls_out=1 calls_in=1
// strings: stage | created_on

void FUN_00c04818(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 5:
    iVar1 = thunk_FUN_016dd50a(param_2,"stage",5);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00354567,6);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    iVar1 = thunk_FUN_016dd50a(param_2,"created_on",10);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00354559,0xe);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

