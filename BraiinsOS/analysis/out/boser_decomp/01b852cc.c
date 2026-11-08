// FUN_01b852cc @ 01b852cc size=132 calls_out=0 calls_in=2
// strings: 

int FUN_01b852cc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = param_1[1] - *param_1 >> 3;
  if (iVar1 == 0) {
    return 0;
  }
  do {
    iVar2 = iVar2 + (uint)*(ushort *)(*param_1 + 4 + iVar3 * 8);
    if ((param_1[10] == iVar3) && (param_1[9] == 1)) {
      iVar2 = iVar2 + 0x10000;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != iVar1);
  return iVar2;
}

