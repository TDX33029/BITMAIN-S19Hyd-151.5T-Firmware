// FUN_01b1c9d0 @ 01b1c9d0 size=72 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01b1c9d0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -4);
  do {
    piVar1 = piVar1 + 1;
    *piVar1 = (*piVar1 + 0x400000 >> 0x17) * -0x7fe001 + *piVar1;
  } while (piVar1 != (int *)(param_1 + 0x3fc));
  return 0;
}

