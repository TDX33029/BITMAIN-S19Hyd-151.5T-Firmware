// FUN_0181ad44 @ 0181ad44 size=220 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0181ad44(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) ||
      (pcVar2 = *(code **)(param_1 + 0x24), pcVar2 == (code *)0x0)) ||
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 == (int *)0x0 || (param_1 != *piVar1)) ||
      (0x1f < piVar1[1] - 0x3f34U)))) {
    return 0xfffffffe;
  }
  if (piVar1[0xe] != 0) {
    (*pcVar2)(*(undefined4 *)(param_1 + 0x28),piVar1[0xe]);
    pcVar2 = *(code **)(param_1 + 0x24);
    piVar1 = *(int **)(param_1 + 0x1c);
  }
  (*pcVar2)(*(undefined4 *)(param_1 + 0x28),piVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}

