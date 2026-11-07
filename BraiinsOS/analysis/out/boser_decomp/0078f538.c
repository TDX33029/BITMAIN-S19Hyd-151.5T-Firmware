// FUN_0078f538 @ 0078f538 size=136 calls_out=4 calls_in=2
// strings: 

void FUN_0078f538(int param_1)

{
  int iVar1;
  
  iVar1 = 0xc0;
  switch(*(undefined1 *)(param_1 + 0x105)) {
  case 0:
    goto switchD_0078f558_caseD_0;
  default:
    return;
  case 3:
    iVar1 = 0x6c;
    FUN_0078eaa4(param_1 + 0x108);
    goto switchD_0078f558_caseD_0;
  case 4:
    FUN_0078eaa4(param_1 + 0x170);
    FUN_0077a52c(param_1 + 0x108);
    *(undefined1 *)(param_1 + 0x104) = 0;
    break;
  case 5:
    FUN_0078eaa4(param_1 + 0x108);
  }
  iVar1 = 0x6c;
  if (*(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    FUN_0078bed0(param_1);
  }
switchD_0078f558_caseD_0:
  FUN_0079217c(param_1 + iVar1);
  return;
}

