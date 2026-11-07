// FUN_01b47028 @ 01b47028 size=96 calls_out=2 calls_in=6
// strings: 

void FUN_01b47028(int *param_1)

{
  code *pcVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  FUN_01b46fd8(param_1[2]);
  FUN_01b46fd8(param_1[3]);
  FUN_01b6b1c4(param_1);
  return;
}

