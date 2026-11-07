// FUN_00932d4c @ 00932d4c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00932d4c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5c8) == '\0') {
    FUN_00b9c308(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x5c8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x5b8) == '\x03') {
    iVar1 = param_1 + 0x2f0;
  }
  else {
    if (*(char *)(param_1 + 0x5b8) != '\0') goto LAB_00932d98;
    iVar1 = param_1 + 0x28;
  }
  FUN_00926ab4(iVar1);
LAB_00932d98:
  *(undefined1 *)(param_1 + 0x5c9) = 0;
  return;
}

