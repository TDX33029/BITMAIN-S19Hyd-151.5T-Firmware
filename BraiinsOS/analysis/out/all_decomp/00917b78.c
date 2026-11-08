// FUN_00917b78 @ 00917b78 size=248 calls_out=1 calls_in=1
// strings: power_target | enabled | hashrate_target

void FUN_00917b78(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x65646f6d) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    break;
  case 7:
    iVar1 = thunk_FUN_016dd50a(param_2,"enabled",7);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    break;
  case 0xc:
    iVar1 = thunk_FUN_016dd50a(param_2,"power_target",0xc);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    break;
  case 0xf:
    iVar1 = thunk_FUN_016dd50a(param_2,"hashrate_target",0xf);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 4;
  *param_1 = 2;
  return;
}

