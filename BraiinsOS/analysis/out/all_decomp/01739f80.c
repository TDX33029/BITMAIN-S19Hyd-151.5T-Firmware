// FUN_01739f80 @ 01739f80 size=96 calls_out=2 calls_in=7
// strings: 

void FUN_01739f80(int *param_1)

{
  code *pcVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  FUN_01739ee4(param_1[2]);
  FUN_01739ee4(param_1[3]);
  FUN_0177aafc(param_1);
  return;
}

