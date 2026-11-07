// FUN_01b1ca84 @ 01b1ca84 size=68 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01b1ca84(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + -4);
  piVar1 = (int *)(param_2 + -4);
  do {
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
    *piVar2 = *piVar2 + *piVar1;
  } while (piVar2 != (int *)(param_1 + 0x3fc));
  return 0;
}

