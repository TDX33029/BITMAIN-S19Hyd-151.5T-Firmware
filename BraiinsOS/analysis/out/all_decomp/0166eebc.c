// FUN_0166eebc @ 0166eebc size=172 calls_out=0 calls_in=3
// strings: 

void FUN_0166eebc(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if ((*(int *)(param_2 + 0xc) == 0) || (pcVar3 = *(char **)(param_2 + 8), *pcVar3 != '#')) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar2 = *(int *)(param_2 + 0xc) + -1;
  iVar4 = 0;
  if (iVar2 != 0) {
    do {
      bVar1 = pcVar3[iVar4 + 1];
      if (((bVar1 != 9) && (0x5e < bVar1 - 0x20)) && (-1 < (char)bVar1)) goto LAB_0166ef50;
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
    iVar4 = iVar2;
  }
LAB_0166ef50:
  *(char **)(param_2 + 8) = pcVar3 + iVar4 + 1;
  *(int *)(param_2 + 0xc) = iVar2 - iVar4;
  *param_1 = 3;
  return;
}

