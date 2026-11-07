// FUN_00c00820 @ 00c00820 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_00c00820(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = *param_2;
  if (iVar1 != 2) {
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    iVar8 = param_2[6];
    iVar9 = param_2[7];
    iVar10 = param_2[8];
    iVar2 = param_2[9];
    iVar11 = param_2[10];
    iVar12 = param_2[0xb];
    *(char *)(param_1 + 0xc) = (char)param_2[0xc];
    param_1[9] = iVar2;
    param_1[10] = iVar11;
    param_1[0xb] = iVar12;
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
    param_1[4] = iVar6;
    param_1[5] = iVar7;
    param_1[6] = iVar8;
    param_1[7] = iVar9;
    param_1[8] = iVar10;
  }
  *param_1 = iVar1;
  return;
}

