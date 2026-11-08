// FUN_01a54fb4 @ 01a54fb4 size=44 calls_out=1 calls_in=0
// strings: 

bool FUN_01a54fb4(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_01a4b4b0(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  return *piVar1 != 0;
}

