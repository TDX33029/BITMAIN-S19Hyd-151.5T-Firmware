// FUN_01b8470c @ 01b8470c size=116 calls_out=0 calls_in=2
// strings: 

byte FUN_01b8470c(char *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  if ((byte)param_1[1] < param_3) {
    return 0;
  }
  bVar2 = 0;
  iVar3 = 0;
  do {
    param_1 = param_1 + 4;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    bVar2 = bVar2 | (*(int *)(param_2 + iVar1) != 0 && *param_1 == '\0');
  } while (iVar3 <= (int)param_3);
  return bVar2 ^ 1;
}

