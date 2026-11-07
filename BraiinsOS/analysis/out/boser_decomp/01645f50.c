// FUN_01645f50 @ 01645f50 size=132 calls_out=0 calls_in=2
// strings: 

bool FUN_01645f50(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  if (*param_1 != '\0') {
    return false;
  }
  cVar1 = param_1[1];
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = param_1[2];
  }
  if (bVar3 && cVar1 == '\0') {
    cVar1 = param_1[3];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = param_1[4];
    }
    if (bVar3 && cVar1 == '\0') {
      cVar1 = param_1[5];
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = param_1[6];
      }
      if (bVar3 && cVar1 == '\0') {
        cVar1 = param_1[7];
        bVar3 = cVar1 == '\0';
        if (bVar3) {
          cVar1 = param_1[8];
        }
        if (bVar3 && cVar1 == '\0') {
          if (param_1[9] == '\x15') {
            bVar2 = param_1[0xd] == '\x15';
          }
          return bVar2;
        }
      }
    }
  }
  return false;
}

