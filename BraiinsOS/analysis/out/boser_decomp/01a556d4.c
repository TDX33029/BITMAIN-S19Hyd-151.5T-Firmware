// FUN_01a556d4 @ 01a556d4 size=56 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_01a556d4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  do {
    piVar2 = piVar1;
    if (piVar2 == (int *)param_1[1]) {
      return 0;
    }
    iVar3 = *piVar2;
    *param_1 = (int)(piVar2 + 0x30);
    piVar1 = piVar2 + 0x30;
  } while (iVar3 == 0);
  return CONCAT44(piVar2,piVar2 + 0x1c);
}

