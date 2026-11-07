// FUN_00df1050 @ 00df1050 size=308 calls_out=3 calls_in=1
// strings: 

void FUN_00df1050(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int *local_2c;
  int local_28;
  
  pcVar5 = (char *)param_2[2];
  iVar7 = param_2[1];
  iVar9 = *param_2;
  do {
    iVar8 = iVar9;
    if (iVar8 == iVar7) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    cVar1 = *pcVar5;
    *param_2 = iVar8 + 0x6c;
  } while ((cVar1 == '\0') && (iVar9 = iVar8 + 0x6c, *(int *)(iVar8 + 0x54) != -0x7fffffff));
  iVar10 = param_2[3];
  iVar9 = param_2[4];
  local_2c = (int *)thunk_FUN_01be5118(0x30);
  if (local_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  local_2c[2] = iVar8 + 0xc;
  *local_2c = iVar10;
  local_2c[1] = iVar9;
  local_30 = 4;
  iVar6 = 1;
  piVar3 = local_2c;
  while (iVar2 = iVar8, iVar8 = iVar2 + 0x6c, iVar8 != iVar7) {
    if ((*pcVar5 != '\0') || (*(int *)(iVar2 + 0xc0) == -0x7fffffff)) {
      if (iVar6 == local_30) {
        local_28 = iVar6;
        FUN_0132b898(&local_30,iVar6,1,4,0xc);
        piVar3 = local_2c;
      }
      piVar4 = piVar3 + iVar6 * 3;
      *piVar4 = iVar10;
      piVar4[1] = iVar9;
      piVar4[2] = iVar2 + 0x78;
      iVar6 = iVar6 + 1;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = iVar6;
  return;
}

