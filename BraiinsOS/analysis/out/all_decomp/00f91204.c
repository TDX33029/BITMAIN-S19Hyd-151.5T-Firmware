// FUN_00f91204 @ 00f91204 size=112 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_00f91204(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = param_1;
  while (param_3 != *(int *)(iVar2 + 0x1c)) {
    iVar5 = iVar2 + 0x16c;
    iVar1 = *(int *)(iVar2 + 0x34) << 3;
    piVar3 = *(int **)(iVar2 + 0x30);
    while (iVar1 != 0) {
      iVar4 = *piVar3;
      iVar1 = iVar1 + -8;
      piVar3 = piVar3 + 2;
      if (param_3 == iVar4) goto LAB_00f91264;
    }
    iVar2 = iVar5;
    if (iVar5 == param_2 * 0x16c + param_1) {
      return 0;
    }
  }
LAB_00f91264:
  return *(undefined8 *)(iVar2 + 0x11c);
}

