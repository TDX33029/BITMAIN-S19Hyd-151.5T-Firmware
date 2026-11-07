// FUN_0003afc4 @ 0003afc4  size=252  callers=1
// program: bmminer


int * FUN_0003afc4(int *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar11;
  byte *pbVar10;
  
  sVar1 = strlen(param_3);
  if (0 < *(int *)(param_2 + 0x78)) {
    piVar5 = *(int **)(param_2 + 0x70);
    iVar3 = 0;
    piVar6 = piVar5;
    do {
      if (piVar6[2] == 4 && piVar6[1] == sVar1) {
        iVar8 = *(int *)(param_2 + 0x18);
        if ((int)sVar1 < 1) {
LAB_0003b08c:
          iVar4 = piVar5[(iVar3 + 1) * 3];
          param_1[1] = piVar5[(iVar3 + 1) * 3 + 1];
          *param_1 = iVar8 + iVar4;
          return param_1;
        }
        pbVar7 = (byte *)(param_3 + -1);
        pbVar11 = (byte *)(iVar8 + *piVar6);
        while( true ) {
          pbVar10 = pbVar11 + 1;
          uVar9 = (uint)*pbVar11;
          pbVar7 = pbVar7 + 1;
          uVar2 = (uint)*pbVar7;
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 + 0x20 & 0xff;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 + 0x20 & 0xff;
          }
          if (uVar9 != uVar2) break;
          pbVar11 = pbVar10;
          if ((byte *)(iVar8 + sVar1 + *piVar6) == pbVar10) goto LAB_0003b08c;
        }
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 3;
    } while (iVar3 != *(int *)(param_2 + 0x78));
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

