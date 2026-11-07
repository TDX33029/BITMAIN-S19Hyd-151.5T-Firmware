// FUN_00f6f6ec @ 00f6f6ec size=160 calls_out=2 calls_in=2
// strings: 

void FUN_00f6f6ec(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar5 = *param_2;
  iVar4 = param_2[1] - iVar5;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  if (param_2[1] == iVar5) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(iVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar4);
  }
  pcVar6 = (char *)param_2[2];
  pcVar7 = (char *)param_2[3];
  iVar2 = 0;
  do {
    cVar3 = *(char *)(iVar5 + iVar2);
    if (cVar3 == *pcVar6) {
      cVar3 = *pcVar7;
    }
    *(char *)(iVar1 + iVar2) = cVar3;
    iVar2 = iVar2 + 1;
  } while (iVar4 != iVar2);
  *param_1 = iVar4;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

