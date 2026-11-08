// FUN_01796e04 @ 01796e04 size=100 calls_out=0 calls_in=3
// strings: 

uint FUN_01796e04(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (param_3 < 0) {
    return 0;
  }
  piVar2 = (int *)(param_2 + -4);
  uVar1 = 0;
  do {
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
    uVar1 = *piVar2 * (*param_1 & 0xff) + uVar1;
  } while ((int *)(param_2 + param_3 * 4) != piVar2);
  return uVar1 >> 3;
}

