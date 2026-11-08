// FUN_009dea40 @ 009dea40 size=144 calls_out=7 calls_in=2
// strings: 

void FUN_009dea40(int param_1)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_1 + 0x3c)) {
  case 0:
    goto switchD_009dea5c_caseD_0;
  default:
    return;
  case 3:
    break;
  case 4:
    FUN_009de42c(param_1 + 0x40);
    break;
  case 5:
    FUN_01431b40(param_1 + 0x50);
    FUN_009de478(param_1 + 0x40);
    break;
  case 6:
    if (*(char *)(param_1 + 0x5dc) == '\x03') {
      if (*(char *)(param_1 + 0x5d0) == '\x03') {
        iVar1 = param_1 + 0x308;
      }
      else {
        if (*(char *)(param_1 + 0x5d0) != '\0') break;
        iVar1 = param_1 + 0x40;
      }
      FUN_009de504(iVar1);
    }
  }
  FUN_009de31c(param_1 + 0x2c);
  FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
switchD_009dea5c_caseD_0:
  FUN_01177b94(param_1 + 0x28);
  return;
}

