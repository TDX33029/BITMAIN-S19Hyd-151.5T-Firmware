// FUN_01be31f8 @ 01be31f8 size=68 calls_out=2 calls_in=13
// strings: 

int FUN_01be31f8(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  pcVar1 = (char *)FUN_01bedaee(param_1,0x3d);
  iVar4 = (int)pcVar1 - param_1;
  if (((iVar4 == 0) || (*pcVar1 != '\0')) || (DAT_01d5348c == 0)) {
LAB_01be3238:
    iVar4 = 0;
  }
  else {
    piVar3 = (int *)(DAT_01d5348c + -4);
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 == 0) goto LAB_01be3238;
      iVar2 = FUN_01bedc16(param_1,*piVar3,iVar4);
    } while ((iVar2 != 0) || (*(char *)(*piVar3 + iVar4) != '='));
    iVar4 = *piVar3 + iVar4 + 1;
  }
  return iVar4;
}

