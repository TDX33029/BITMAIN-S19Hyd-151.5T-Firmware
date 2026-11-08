// FUN_016d7cb4 @ 016d7cb4 size=154 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d7d42) */

byte FUN_016d7cb4(int *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  cVar1 = (char)*param_1;
  if (cVar1 == -1) {
    return *(byte *)((int)param_1 + 1) & 0xf;
  }
  if (cVar1 != -2) {
    if ((*param_1 == 0) && (param_1[1] == 0)) {
      if ((param_1[2] == 0) &&
         (((((char)param_1[3] == '\0' && (*(char *)((int)param_1 + 0xd) == '\0')) &&
           (*(char *)((int)param_1 + 0xe) == '\0')) && (*(char *)((int)param_1 + 0xf) == '\x01'))))
      {
        return 2;
      }
      if (cVar1 == -2) {
        if ((*param_1 & 0xc000) == 0xc000) {
          bVar2 = 5;
        }
        else {
          bVar2 = 0xe;
        }
        return bVar2;
      }
    }
    return 0xe;
  }
  bVar2 = *(byte *)((int)param_1 + 1);
  bVar3 = bVar2 & 0xc0;
  if (bVar3 == 0x80) {
    return 2;
  }
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      if (((param_1[2] == 0) && ((char)param_1[3] == '\0')) &&
         ((*(char *)((int)param_1 + 0xd) == '\0' &&
          ((*(char *)((int)param_1 + 0xe) == '\0' && (*(char *)((int)param_1 + 0xf) == '\x01'))))))
      {
        return 2;
      }
      bVar2 = *(byte *)((int)param_1 + 1);
    }
    bVar3 = bVar2 & 0xc0;
  }
  if (bVar3 == 0xc0) {
    bVar2 = 5;
  }
  else {
    bVar2 = 0xe;
  }
  return bVar2;
}

