// FUN_009ce204 @ 009ce204 size=456 calls_out=0 calls_in=1
// strings: 

void FUN_009ce204(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  puVar15 = param_1 + 4;
  iVar4 = 0;
  iVar14 = -0x10;
  do {
    uVar13 = puVar15[2];
    bVar17 = puVar15[-2] <= uVar13;
    if (uVar13 == puVar15[-2]) {
      uVar8 = *puVar15;
      uVar1 = puVar15[-4] ^ (uint)((int)puVar15[-4] >> 0x1f) >> 1;
      uVar10 = uVar8 ^ (uint)((int)uVar8 >> 0x1f) >> 1;
      bVar17 = (int)uVar1 <= (int)uVar10;
      if (uVar10 != uVar1) goto LAB_009ce2bc;
      uVar1 = puVar15[1];
      if ((int)(uVar1 ^ (uint)((int)uVar1 >> 0x1f) >> 1) <
          (int)(puVar15[-3] ^ (uint)((int)puVar15[-3] >> 0x1f) >> 1)) goto LAB_009ce2cc;
    }
    else {
LAB_009ce2bc:
      if (!bVar17) {
        uVar8 = *puVar15;
        uVar1 = puVar15[1];
LAB_009ce2cc:
        puVar6 = puVar15 + -4;
        uVar10 = puVar15[3];
        puVar15[1] = puVar15[-3];
        *puVar15 = *puVar6;
        puVar15[2] = puVar15[-2];
        puVar15[3] = puVar15[-1];
        puVar11 = param_1;
        if (puVar6 != param_1) {
          uVar2 = uVar8 ^ (uint)((int)uVar8 >> 0x1f) >> 1;
          iVar3 = iVar14;
          iVar16 = iVar4;
          do {
            puVar11 = (uint *)((int)param_1 + iVar16);
            puVar12 = (uint *)((int)param_1 + iVar3);
            bVar17 = puVar11[-2] <= uVar13;
            if ((uVar13 == puVar11[-2]) &&
               (uVar7 = *puVar12 ^ (uint)((int)*puVar12 >> 0x1f) >> 1,
               bVar17 = (int)uVar7 <= (int)uVar2, uVar2 == uVar7)) {
              uVar7 = *(uint *)((int)param_1 + iVar16 + -0xc);
              if ((int)(uVar7 ^ (uint)((int)uVar7 >> 0x1f) >> 1) <=
                  (int)(uVar1 ^ (uint)((int)uVar1 >> 0x1f) >> 1)) {
                puVar11 = puVar6;
                goto LAB_009ce234;
              }
            }
            else if (bVar17) goto LAB_009ce234;
            uVar9 = puVar12[1];
            puVar6 = puVar6 + -4;
            iVar3 = iVar3 + -0x10;
            iVar16 = iVar16 + -0x10;
            uVar5 = puVar12[2];
            uVar7 = puVar12[3];
            *puVar11 = *puVar12;
            puVar11[1] = uVar9;
            puVar11[2] = uVar5;
            puVar11[3] = uVar7;
          } while (iVar16 != 0);
          puVar11 = param_1;
        }
LAB_009ce234:
        *puVar11 = uVar8;
        puVar11[1] = uVar1;
        puVar11[2] = uVar13;
        puVar11[3] = uVar10;
      }
    }
    puVar15 = puVar15 + 4;
    iVar14 = iVar14 + 0x10;
    iVar4 = iVar4 + 0x10;
    if (puVar15 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

