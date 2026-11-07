// FUN_01b1fe74 @ 01b1fe74 size=204 calls_out=1 calls_in=1
// strings: 

bool FUN_01b1fe74(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 == 0) || (((char)param_1[0x12e] != 0 && (*param_1 == param_2)))) {
    return ((int)(char)param_1[0x12e] - 1U & 0xff) < 2;
  }
  FUN_01b70810(&DAT_01d51e10,FUN_01b3c600);
  iVar2 = 0;
  piVar1 = &DAT_01d51e14;
  do {
    if (param_2 == *piVar1) goto LAB_01b1fef0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 7;
  } while (iVar2 != 0xc);
  piVar1 = (int *)0x0;
LAB_01b1fef0:
  param_1[1] = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *param_1 = param_2;
  }
  return piVar1 != (int *)0x0;
}

