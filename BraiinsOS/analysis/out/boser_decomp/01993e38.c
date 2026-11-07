// FUN_01993e38 @ 01993e38 size=332 calls_out=0 calls_in=1
// strings: 

void FUN_01993e38(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  
  iVar10 = 0;
  iVar8 = -0x18;
  puVar17 = param_1 + 6;
  puVar13 = param_1;
  do {
    puVar1 = puVar17;
    uVar12 = *puVar1;
    uVar18 = puVar13[10];
    uVar2 = puVar1[1];
    if ((uVar18 < puVar13[4]) ||
       ((uVar18 <= puVar13[4] &&
        (uVar2 <= puVar13[1] && (uint)(*puVar13 <= uVar12) <= uVar2 - puVar13[1])))) {
      uVar3 = puVar13[9];
      uVar6 = puVar13[8];
      uVar4 = puVar13[0xb];
      uVar7 = puVar13[1];
      uVar9 = puVar13[2];
      uVar11 = puVar13[3];
      uVar14 = puVar13[4];
      uVar16 = puVar13[5];
      *puVar1 = *puVar13;
      puVar1[1] = uVar7;
      puVar1[2] = uVar9;
      puVar1[3] = uVar11;
      puVar1[4] = uVar14;
      puVar1[5] = uVar16;
      puVar17 = param_1;
      if (puVar13 != param_1) {
        iVar5 = iVar10;
        iVar15 = iVar8;
        do {
          puVar17 = (uint *)((int)param_1 + iVar5);
          puVar13 = (uint *)((int)param_1 + iVar15);
          if ((puVar17[-2] <= uVar18) &&
             ((puVar17[-2] < uVar18 ||
              (puVar13[1] < uVar2 || uVar2 - puVar13[1] < (uint)(*puVar13 <= uVar12)))))
          goto LAB_01993e64;
          uVar7 = puVar13[1];
          uVar9 = puVar13[2];
          uVar11 = puVar13[3];
          uVar14 = puVar13[4];
          uVar16 = puVar13[5];
          iVar15 = iVar15 + -0x18;
          iVar5 = iVar5 + -0x18;
          *puVar17 = *puVar13;
          puVar17[1] = uVar7;
          puVar17[2] = uVar9;
          puVar17[3] = uVar11;
          puVar17[4] = uVar14;
          puVar17[5] = uVar16;
        } while (iVar5 != 0);
        puVar17 = param_1;
      }
LAB_01993e64:
      puVar17[1] = uVar2;
      puVar17[2] = uVar6;
      puVar17[3] = uVar3;
      *puVar17 = uVar12;
      puVar17[4] = uVar18;
      puVar17[5] = uVar4;
    }
    iVar8 = iVar8 + 0x18;
    iVar10 = iVar10 + 0x18;
    puVar17 = puVar1 + 6;
    puVar13 = puVar1;
    if (puVar1 + 6 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

