// FUN_013d73e0 @ 013d73e0 size=372 calls_out=0 calls_in=1
// strings: 

void FUN_013d73e0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  
  iVar18 = *param_2;
  if (iVar18 == 0x22) {
    iVar18 = param_2[1];
    iVar2 = param_2[2];
    iVar5 = param_2[3];
    iVar10 = param_2[4];
    *param_1 = *param_2;
    param_1[1] = iVar18;
    param_1[2] = iVar2;
    param_1[3] = iVar5;
    param_1[4] = iVar10;
    iVar18 = param_2[6];
    iVar2 = param_2[7];
    iVar5 = param_2[8];
    iVar10 = param_2[9];
    param_1[5] = param_2[5];
    param_1[6] = iVar18;
    param_1[7] = iVar2;
    param_1[8] = iVar5;
    param_1[9] = iVar10;
    iVar18 = param_2[0xb];
    iVar2 = param_2[0xc];
    iVar5 = param_2[0xd];
    iVar10 = param_2[0xe];
    iVar11 = param_2[0xf];
    param_1[10] = param_2[10];
    param_1[0xb] = iVar18;
    param_1[0xc] = iVar2;
    param_1[0xd] = iVar5;
    param_1[0xe] = iVar10;
    param_1[0xf] = iVar11;
    return;
  }
  iVar11 = param_2[1];
  iVar10 = param_2[6];
  puVar12 = (uint *)param_2[5];
  iVar2 = param_2[2];
  iVar5 = param_2[3];
  puVar17 = (uint *)param_2[4];
  if (iVar18 == *param_3) {
    switch(iVar18) {
    case 0xd:
    case 0xe:
    case 0x11:
      if (iVar11 == param_3[1]) {
        iVar3 = param_3[2];
        bVar20 = iVar2 == iVar3;
        if (bVar20) {
          iVar3 = param_3[3];
        }
        if (bVar20 && iVar5 == iVar3) {
          puVar6 = (uint *)param_3[4];
          bVar20 = puVar17 == puVar6;
          puVar1 = &switchD_013d7454::switchdataD_013d7458;
          if (bVar20) {
            puVar6 = (uint *)param_3[5];
            puVar1 = puVar12;
          }
          if ((bVar20 && puVar1 == puVar6) && (iVar10 == param_3[6])) goto switchD_013d7454_caseD_f;
        }
      }
      break;
    default:
switchD_013d7454_caseD_f:
      iVar5 = param_2[7];
      iVar13 = param_2[8];
      iVar18 = param_2[9];
      iVar2 = param_2[10];
      iVar11 = param_2[0xb];
      iVar3 = param_2[0xc];
      iVar7 = param_2[0xd];
      iVar14 = param_2[0xe];
      iVar19 = param_2[0xf];
      iVar8 = param_4[1];
      iVar15 = param_4[2];
      iVar10 = param_4[3];
      iVar4 = param_4[4];
      iVar9 = param_4[5];
      iVar16 = param_4[6];
      *param_1 = *param_4;
      param_1[1] = iVar8;
      param_1[2] = iVar15;
      param_1[3] = iVar10;
      param_1[4] = iVar4;
      param_1[5] = iVar9;
      param_1[6] = iVar16;
      param_1[7] = iVar5;
      param_1[8] = iVar13;
      param_1[9] = iVar18;
      param_1[10] = iVar2;
      param_1[0xb] = iVar11;
      param_1[0xc] = iVar3;
      param_1[0xd] = iVar7;
      param_1[0xe] = iVar14;
      param_1[0xf] = iVar19;
      return;
    case 0x17:
      if (iVar11 == param_3[1]) goto switchD_013d7454_caseD_f;
    }
  }
  iVar3 = param_2[7];
  iVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = iVar4;
  param_1[7] = iVar3;
  iVar3 = param_2[0xb];
  iVar4 = param_2[0xc];
  iVar7 = param_2[0xd];
  iVar8 = param_2[0xe];
  iVar9 = param_2[0xf];
  param_1[10] = param_2[10];
  param_1[0xb] = iVar3;
  param_1[0xc] = iVar4;
  param_1[0xd] = iVar7;
  param_1[0xe] = iVar8;
  param_1[0xf] = iVar9;
  param_1[5] = (int)puVar12;
  param_1[2] = iVar2;
  param_1[6] = iVar10;
  param_1[4] = (int)puVar17;
  param_1[3] = iVar5;
  param_1[1] = iVar11;
  *param_1 = iVar18;
  return;
}

