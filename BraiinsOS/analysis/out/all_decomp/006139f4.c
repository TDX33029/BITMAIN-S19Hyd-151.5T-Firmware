// FUN_006139f4 @ 006139f4 size=340 calls_out=0 calls_in=1
// strings: 

void FUN_006139f4(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  
  puVar11 = param_1 + 6;
  iVar4 = 0;
  iVar13 = -0x18;
  do {
    uVar1 = puVar11[1];
    puVar17 = puVar11 + -6;
    uVar16 = puVar11[4];
    uVar9 = *puVar11;
    if ((uVar16 < puVar11[-2]) ||
       ((uVar16 <= puVar11[-2] &&
        (uVar1 <= puVar11[-5] && (uint)(*puVar17 <= uVar9) <= uVar1 - puVar11[-5])))) {
      uVar5 = puVar11[2];
      uVar2 = puVar11[3];
      uVar3 = puVar11[5];
      *puVar11 = *puVar17;
      puVar11[1] = puVar11[-5];
      puVar11[2] = puVar11[-4];
      puVar11[3] = puVar11[-3];
      puVar11[4] = puVar11[-2];
      puVar11[5] = puVar11[-1];
      puVar18 = param_1;
      if (puVar17 != param_1) {
        iVar6 = iVar4;
        iVar15 = iVar13;
        do {
          puVar18 = (uint *)((int)param_1 + iVar6);
          puVar17 = (uint *)((int)param_1 + iVar15);
          if ((puVar18[-2] <= uVar16) &&
             ((puVar18[-2] < uVar16 ||
              (puVar17[1] < uVar1 || uVar1 - puVar17[1] < (uint)(*puVar17 <= uVar9)))))
          goto LAB_00613a1c;
          uVar7 = puVar17[1];
          uVar8 = puVar17[2];
          uVar10 = puVar17[3];
          uVar12 = puVar17[4];
          uVar14 = puVar17[5];
          iVar15 = iVar15 + -0x18;
          iVar6 = iVar6 + -0x18;
          *puVar18 = *puVar17;
          puVar18[1] = uVar7;
          puVar18[2] = uVar8;
          puVar18[3] = uVar10;
          puVar18[4] = uVar12;
          puVar18[5] = uVar14;
        } while (iVar6 != 0);
        puVar18 = param_1;
      }
LAB_00613a1c:
      *puVar18 = uVar9;
      puVar18[1] = uVar1;
      puVar18[2] = uVar5;
      puVar18[3] = uVar2;
      puVar18[5] = uVar3;
      puVar18[4] = uVar16;
    }
    puVar11 = puVar11 + 6;
    iVar13 = iVar13 + 0x18;
    iVar4 = iVar4 + 0x18;
    if (puVar11 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

