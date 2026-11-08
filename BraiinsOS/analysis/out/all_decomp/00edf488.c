// FUN_00edf488 @ 00edf488 size=252 calls_out=2 calls_in=1
// strings: signature_pub_key

void FUN_00edf488(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 7:
    iVar2 = thunk_FUN_016dd50a(param_2,&DAT_00410ff9,7);
    if (iVar2 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_016dd50a(param_2,&DAT_0056a890,8);
    if (iVar2 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_016dd50a(param_2,&DAT_00409137,9);
    if (iVar2 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    iVar2 = thunk_FUN_016dd50a(param_2,"signature_pub_key",0x11);
    if (iVar2 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_00e947bc(param_2,param_3);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

