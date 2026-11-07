// FUN_01b0cf3c @ 01b0cf3c size=124 calls_out=0 calls_in=1
// strings: 

void FUN_01b0cf3c(int *param_1)

{
  char cVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      return;
    }
    cVar1 = *(char *)*param_1;
    if (cVar1 != '\t' && cVar1 != ' ') break;
    *param_1 = (int)((char *)*param_1 + 1);
    param_1[1] = iVar2 + -1;
  }
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    if (*(char *)(*param_1 + iVar2) != '\t' && *(char *)(*param_1 + iVar2) != ' ') break;
    param_1[1] = iVar2;
  }
  return;
}

