// FUN_0090f9f0 @ 0090f9f0 size=300 calls_out=1 calls_in=2
// strings: cold_temp | target_temp | dangerous_temp

void FUN_0090f9f0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x65646f6d) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    break;
  case 8:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_0056a8a8,8);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    break;
  case 9:
    iVar1 = thunk_FUN_016dd50a(param_2,"cold_temp",9);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
    break;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(param_2,"target_temp",0xb);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    break;
  case 0xe:
    iVar1 = thunk_FUN_016dd50a(param_2,"dangerous_temp",0xe);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  return;
}

