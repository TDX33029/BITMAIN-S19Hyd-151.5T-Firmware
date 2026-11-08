// FUN_0090fb58 @ 0090fb58 size=312 calls_out=1 calls_in=1
// strings: fan_control | hash_chain | temp_control | hash_chain_global

void FUN_0090fb58(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 5:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00377f5d,5);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
    break;
  case 10:
    iVar1 = thunk_FUN_016dd50a(param_2,"hash_chain",10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    break;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(param_2,"fan_control",0xb);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    break;
  case 0xc:
    iVar1 = thunk_FUN_016dd50a(param_2,"temp_control",0xc);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    break;
  case 0x11:
    iVar1 = thunk_FUN_016dd50a(param_2,"hash_chain_global",0x11);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  return;
}

