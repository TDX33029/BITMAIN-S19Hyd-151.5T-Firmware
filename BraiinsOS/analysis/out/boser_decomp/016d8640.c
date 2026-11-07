// FUN_016d8640 @ 016d8640 size=352 calls_out=0 calls_in=1
// strings: 

void FUN_016d8640(int *param_1,int *param_2,int *param_3,int *param_4)

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
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  iVar13 = *param_2;
  if (iVar13 == 0x22) {
    iVar13 = param_2[1];
    iVar1 = param_2[2];
    iVar2 = param_2[3];
    iVar7 = param_2[4];
    *param_1 = *param_2;
    param_1[1] = iVar13;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_1[4] = iVar7;
    iVar13 = param_2[6];
    iVar1 = param_2[7];
    iVar2 = param_2[8];
    iVar7 = param_2[9];
    param_1[5] = param_2[5];
    param_1[6] = iVar13;
    param_1[7] = iVar1;
    param_1[8] = iVar2;
    param_1[9] = iVar7;
    iVar13 = param_2[0xb];
    iVar1 = param_2[0xc];
    iVar2 = param_2[0xd];
    iVar7 = param_2[0xe];
    iVar8 = param_2[0xf];
    param_1[10] = param_2[10];
    param_1[0xb] = iVar13;
    param_1[0xc] = iVar1;
    param_1[0xd] = iVar2;
    param_1[0xe] = iVar7;
    param_1[0xf] = iVar8;
    return;
  }
  iVar1 = param_2[1];
  iVar8 = param_2[2];
  iVar14 = param_2[3];
  iVar2 = param_2[4];
  iVar7 = param_2[5];
  iVar15 = param_2[6];
  if (iVar13 == *param_3) {
    if (iVar13 < 0x11) {
      if (iVar13 == 0xd || iVar13 == 0xe) {
LAB_016d86c8:
        if (iVar1 == param_3[1]) {
          iVar3 = param_3[2];
          bVar16 = iVar8 == iVar3;
          if (bVar16) {
            iVar3 = param_3[3];
          }
          if (bVar16 && iVar14 == iVar3) {
            iVar3 = param_3[4];
            bVar16 = iVar2 == iVar3;
            if (bVar16) {
              iVar3 = param_3[5];
            }
            if ((bVar16 && iVar7 == iVar3) && (iVar15 == param_3[6])) goto LAB_016d8754;
          }
        }
        goto LAB_016d86fc;
      }
    }
    else {
      if (iVar13 == 0x11) goto LAB_016d86c8;
      if ((iVar13 == 0x17) && (iVar1 != param_3[1])) goto LAB_016d86fc;
    }
LAB_016d8754:
    iVar2 = param_2[7];
    iVar8 = param_2[8];
    iVar3 = param_2[9];
    iVar13 = param_2[10];
    iVar7 = param_2[0xb];
    iVar14 = param_2[0xc];
    iVar4 = param_2[0xd];
    iVar9 = param_2[0xe];
    iVar12 = param_2[0xf];
    iVar5 = param_4[1];
    iVar10 = param_4[2];
    iVar1 = param_4[3];
    iVar15 = param_4[4];
    iVar6 = param_4[5];
    iVar11 = param_4[6];
    *param_1 = *param_4;
    param_1[1] = iVar5;
    param_1[2] = iVar10;
    param_1[3] = iVar1;
    param_1[4] = iVar15;
    param_1[5] = iVar6;
    param_1[6] = iVar11;
    param_1[7] = iVar2;
    param_1[8] = iVar8;
    param_1[9] = iVar3;
    param_1[10] = iVar13;
    param_1[0xb] = iVar7;
    param_1[0xc] = iVar14;
    param_1[0xd] = iVar4;
    param_1[0xe] = iVar9;
    param_1[0xf] = iVar12;
  }
  else {
LAB_016d86fc:
    iVar3 = param_2[8];
    iVar4 = param_2[9];
    param_1[7] = param_2[7];
    param_1[8] = iVar3;
    param_1[9] = iVar4;
    iVar3 = param_2[0xb];
    iVar4 = param_2[0xc];
    iVar5 = param_2[0xd];
    iVar6 = param_2[0xe];
    iVar9 = param_2[0xf];
    param_1[10] = param_2[10];
    param_1[0xb] = iVar3;
    param_1[0xc] = iVar4;
    param_1[0xd] = iVar5;
    param_1[0xe] = iVar6;
    param_1[0xf] = iVar9;
    param_1[5] = iVar7;
    *param_1 = iVar13;
    param_1[1] = iVar1;
    param_1[2] = iVar8;
    param_1[3] = iVar14;
    param_1[4] = iVar2;
    param_1[6] = iVar15;
  }
  return;
}

