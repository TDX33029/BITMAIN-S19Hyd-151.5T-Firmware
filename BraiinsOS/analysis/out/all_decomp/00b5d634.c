// FUN_00b5d634 @ 00b5d634 size=292 calls_out=1 calls_in=3
// strings: 

void FUN_00b5d634(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  
  puVar15 = param_1 + 6;
  iVar12 = 0;
  do {
    uVar10 = puVar15[-4];
    uVar11 = puVar15[1];
    uVar14 = puVar15[2];
    uVar3 = uVar10;
    if (uVar14 < uVar10) {
      uVar3 = uVar14;
    }
    uVar3 = FUN_016dd50a(uVar11,puVar15[-5],uVar3);
    if (uVar3 == 0) {
      uVar3 = uVar14 - uVar10;
    }
    if (0x7fffffff < uVar3) {
      uVar4 = *puVar15;
      uVar5 = puVar15[3];
      uVar8 = puVar15[4];
      uVar9 = puVar15[5];
      iVar1 = iVar12;
      do {
        iVar13 = iVar1;
        puVar6 = (undefined4 *)((int)param_1 + iVar13);
        puVar6[6] = *puVar6;
        puVar6[7] = puVar6[1];
        puVar6[8] = puVar6[2];
        puVar6[9] = puVar6[3];
        puVar6[10] = puVar6[4];
        puVar6[0xb] = puVar6[5];
        if (iVar13 == 0) {
          puVar2 = param_1;
          goto LAB_00b5d660;
        }
        uVar10 = puVar6[-4];
        uVar3 = uVar10;
        if (uVar14 < uVar10) {
          uVar3 = uVar14;
        }
        iVar7 = FUN_016dd50a(uVar11,puVar6[-5],uVar3);
        if (iVar7 == 0) {
          iVar7 = uVar14 - uVar10;
        }
        iVar1 = iVar13 + -0x18;
      } while (iVar7 < 0);
      puVar2 = (undefined4 *)((int)param_1 + iVar13);
LAB_00b5d660:
      *puVar2 = uVar4;
      puVar6[1] = uVar11;
      puVar6[2] = uVar14;
      puVar6[5] = uVar9;
      puVar6[4] = uVar8;
      puVar6[3] = uVar5;
    }
    puVar15 = puVar15 + 6;
    iVar12 = iVar12 + 0x18;
    if (puVar15 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

