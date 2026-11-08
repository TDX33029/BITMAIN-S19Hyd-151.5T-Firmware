// FUN_006954cc @ 006954cc size=400 calls_out=1 calls_in=2
// strings: 

int * FUN_006954cc(int *param_1,int *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (int *)FUN_006954cc(param_1,param_1 + param_4 * 0x98,param_1 + param_4 * 0x10a,param_4
                                 );
    param_2 = (int *)FUN_006954cc(param_2,param_2 + param_4 * 0x98,param_2 + param_4 * 0x10a,param_4
                                 );
    param_3 = (int *)FUN_006954cc(param_3,param_3 + param_4 * 0x98,param_3 + param_4 * 0x10a,param_4
                                 );
  }
  iVar11 = *param_2;
  uVar13 = param_2[1];
  iVar5 = *param_1;
  uVar7 = param_1[1];
  uVar9 = param_1[2];
  uVar12 = param_2[2];
  bVar14 = iVar11 <= iVar5;
  bVar1 = iVar11 < iVar5;
  if (iVar5 == iVar11) {
    bVar14 = uVar13 <= uVar7;
    bVar1 = uVar13 < uVar7;
    if (uVar7 != uVar13) goto LAB_00695594;
    uVar10 = (uint)(uVar9 >= uVar12 && uVar9 != uVar12) - (uint)(uVar9 < uVar12);
  }
  else {
LAB_00695594:
    uVar10 = (uint)bVar1 - (uint)!bVar14;
  }
  iVar4 = *param_3;
  uVar3 = param_3[1];
  uVar8 = param_3[2];
  uVar2 = (uint)(iVar5 != iVar4 && iVar4 <= iVar5);
  uVar6 = (uint)(iVar5 < iVar4);
  if (iVar5 == iVar4) {
    uVar2 = 0;
    if (uVar7 != uVar3) {
      uVar2 = (uint)(uVar7 >= uVar3 && uVar7 != uVar3) - (uint)(uVar7 < uVar3);
      goto LAB_006955ec;
    }
    uVar6 = (uint)(uVar9 < uVar8);
    if (uVar9 >= uVar8 && uVar9 != uVar8) {
      uVar2 = 1;
    }
  }
  uVar2 = uVar2 - uVar6;
LAB_006955ec:
  if (-1 < (int)(uVar2 ^ uVar10)) {
    if (iVar11 == iVar4) {
      uVar9 = (uint)(uVar13 < uVar3);
      uVar7 = (uint)(uVar13 >= uVar3 && uVar13 != uVar3);
      if (uVar13 == uVar3) {
        uVar9 = 0;
        uVar7 = (uint)(uVar12 >= uVar8 && uVar12 != uVar8);
        if (uVar12 < uVar8) {
          uVar9 = 1;
        }
      }
      uVar7 = uVar7 - uVar9;
    }
    else {
      uVar7 = (uint)(iVar4 < iVar11) - (uint)(iVar11 < iVar4);
    }
    param_1 = param_2;
    if ((int)(uVar7 ^ uVar10) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}

