// FUN_01b1cb0c @ 01b1cb0c size=52 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_01b1cb0c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -4);
  do {
    piVar1 = piVar1 + 1;
    *piVar1 = *piVar1 << 0xd;
  } while (piVar1 != (int *)(param_1 + 0x3fc));
  return 0;
}

