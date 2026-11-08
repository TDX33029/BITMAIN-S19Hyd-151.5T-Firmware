// FUN_0128568c @ 0128568c size=104 calls_out=1 calls_in=1
// strings: 

bool FUN_0128568c(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  if (7 < param_2) {
    iVar2 = FUN_01307168(0);
    return iVar2 == 1;
  }
  if (param_2 == 0) {
    return false;
  }
  do {
    param_2 = param_2 - 1;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return true;
    }
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return cVar1 == '\0';
}

