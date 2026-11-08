// FUN_005effa0 @ 005effa0 size=180 calls_out=8 calls_in=0
// strings: 

void FUN_005effa0(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x84)) {
  case 0:
    FUN_005fcbf8(param_1);
    return;
  default:
    goto switchD_005effbc_caseD_1;
  case 3:
    FUN_005f54a4(param_1 + 0x90);
    break;
  case 4:
    FUN_005fbcbc(param_1 + 0x8c);
    *(undefined2 *)(param_1 + 0x87) = 0;
    break;
  case 5:
    FUN_005efd2c(param_1 + 0x8c);
  }
  if (*(char *)(param_1 + 0x85) != '\0') {
    FUN_019d8724(param_1 + 0x7c);
  }
  *(undefined1 *)(param_1 + 0x85) = 0;
  FUN_005f983c(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x89) = 0;
  FUN_005f983c(param_1 + 0x74);
  *(undefined1 *)(param_1 + 0x8a) = 0;
  FUN_005f5594(param_1 + 0x54);
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_00b76614(param_1 + 0x44);
  }
  *(undefined1 *)(param_1 + 0x86) = 0;
switchD_005effbc_caseD_1:
  return;
}

