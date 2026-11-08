// FUN_016d2b7c @ 016d2b7c size=68 calls_out=2 calls_in=14
// strings: 

int FUN_016d2b7c(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  pcVar1 = (char *)FUN_016dd7b6(param_1,0x3d);
  iVar4 = (int)pcVar1 - param_1;
  if (((iVar4 == 0) || (*pcVar1 != '\0')) || (DAT_018dda24 == 0)) {
LAB_016d2bbc:
    iVar4 = 0;
  }
  else {
    piVar3 = (int *)(DAT_018dda24 + -4);
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 == 0) goto LAB_016d2bbc;
      iVar2 = FUN_016dd8de(param_1,*piVar3,iVar4);
    } while ((iVar2 != 0) || (*(char *)(*piVar3 + iVar4) != '='));
    iVar4 = *piVar3 + iVar4 + 1;
  }
  return iVar4;
}

