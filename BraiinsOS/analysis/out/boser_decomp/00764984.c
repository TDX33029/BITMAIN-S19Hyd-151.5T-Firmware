// FUN_00764984 @ 00764984 size=104 calls_out=5 calls_in=1
// strings: 

void FUN_00764984(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x1dc)) {
  case 3:
    goto switchD_007649a4_caseD_3;
  case 4:
    FUN_0074ac60(param_1 + 0x1ec);
    goto switchD_007649a4_caseD_3;
  case 5:
    FUN_0074acc0(param_1 + 0x1f0);
    break;
  case 6:
    FUN_0074c55c(param_1 + 0x1f0);
    break;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x18) != 3) {
    FUN_0074c4a8();
  }
switchD_007649a4_caseD_3:
  FUN_01771d60(*(undefined4 *)(param_1 + 0x10));
  return;
}

