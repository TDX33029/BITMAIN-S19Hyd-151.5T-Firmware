// FUN_008865cc @ 008865cc size=88 calls_out=2 calls_in=3
// strings: 

void FUN_008865cc(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5cc) == '\0') {
    FUN_00b9c308(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x5cc) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x5b8) == '\x03') {
    iVar1 = param_1 + 0x2f0;
  }
  else {
    if (*(char *)(param_1 + 0x5b8) != '\0') goto LAB_00886618;
    iVar1 = param_1 + 0x28;
  }
  FUN_00b9a8cc(iVar1);
LAB_00886618:
  *(undefined1 *)(param_1 + 0x5cd) = 0;
  return;
}

