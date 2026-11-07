// FUN_00058d34 @ 00058d34  size=340  callers=1
// program: bmminer


int FUN_00058d34(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_2078;
  int local_2074;
  int iStack_2070;
  int iStack_206c;
  int local_2068 [16];
  int local_2028;
  char acStack_2024 [8192];
  
  if (param_4 == 0) {
    iVar7 = 0;
  }
  else {
    iVar8 = param_3 * param_4 * 0x54;
    iVar7 = 0;
    do {
      iVar5 = *(int *)(DAT_00944b80 + (int)(&DAT_003fea2a + param_2) * 4 + 4);
      sVar1 = fread(&local_2078,1,0x50,(FILE *)*param_1);
      piVar6 = (int *)(iVar5 + iVar8);
      if (sVar1 != 0x50) {
        if (DAT_000be63c < 4) {
          return iVar7;
        }
        local_2028._0_1_ = 'L';
        local_2028._1_1_ = 'o';
        local_2028._2_1_ = 'a';
        local_2028._3_1_ = 'd';
        builtin_strncpy(acStack_2024," core pattern failed!\n",0x17);
        FUN_0004948c(3,&local_2028,0);
        return iVar7;
      }
      piVar9 = local_2068;
      piVar6[1] = local_2078;
      piVar10 = piVar6 + 5;
      do {
        iVar5 = *piVar9;
        iVar2 = piVar9[1];
        iVar3 = piVar9[2];
        iVar4 = piVar9[3];
        piVar11 = piVar9 + 4;
        piVar9 = piVar9 + 4;
        *piVar10 = iVar5;
        piVar10[1] = iVar2;
        piVar10[2] = iVar3;
        piVar10[3] = iVar4;
        piVar10 = piVar10 + 4;
      } while (piVar11 != &local_2028);
      iVar8 = iVar8 + 0x54;
      *piVar6 = iVar7;
      iVar7 = iVar7 + 1;
      piVar6[2] = local_2074;
      piVar6[3] = iStack_2070;
      piVar6[4] = iStack_206c;
    } while (iVar7 != param_4);
  }
  return iVar7;
}

