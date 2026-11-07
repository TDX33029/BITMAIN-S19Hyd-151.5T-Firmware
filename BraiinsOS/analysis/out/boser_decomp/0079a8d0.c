// FUN_0079a8d0 @ 0079a8d0 size=92 calls_out=5 calls_in=2
// strings: 

void FUN_0079a8d0(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0xf8)) {
  case 0:
    goto switchD_0079a8ec_caseD_0;
  default:
    return;
  case 3:
    FUN_0079a974(param_1 + 0x100);
    break;
  case 4:
    FUN_01431b40(param_1 + 0x100);
    break;
  case 5:
    FUN_0079a9b4(param_1 + 0x100);
    FUN_0079aa98(param_1 + 0xfc);
  }
  param_1 = param_1 + 0x7c;
switchD_0079a8ec_caseD_0:
  FUN_0079a76c(param_1);
  return;
}

