// FUN_01b42c18 @ 01b42c18 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_01b42c18(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_4 < 0) {
    FUN_01b424bc(param_2,(-param_4 >> 1) * 0xcc + param_3);
    FUN_01b3f584(param_1,param_2 + 0x44);
    return;
  }
  FUN_01b424bc(param_2,(param_4 >> 1) * 0xcc + param_3);
  return;
}

