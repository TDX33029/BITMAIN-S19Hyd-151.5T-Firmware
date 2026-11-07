// FUN_01013f9c @ 01013f9c size=548 calls_out=3 calls_in=2
// strings: 

void FUN_01013f9c(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_30;
  
  uVar9 = param_2 >> 1;
  puVar13 = param_1 + param_2 * 3 + -3;
  puVar5 = param_3 + param_2 * 3 + -3;
  puVar8 = param_1 + uVar9 * 3;
  puVar12 = puVar8 + -3;
  do {
    puVar11 = param_3;
    uVar16 = FUN_019b00d0(param_1[1],param_1[2]);
    uVar3 = (uint)((ulonglong)uVar16 >> 0x20);
    uVar17 = FUN_019b00d0(puVar8[1],puVar8[2]);
    uVar4 = (uint)((ulonglong)uVar17 >> 0x20);
    iVar1 = (int)uVar17;
    puVar2 = param_1;
    if ((int)uVar16 == 0) {
      if (iVar1 == 0) goto LAB_01014064;
LAB_0101404c:
      local_30 = 1;
      puVar2 = puVar8;
    }
    else {
      local_30 = 0;
      if (iVar1 == 0) {
LAB_01014064:
        local_30 = 0;
      }
      else {
        uVar6 = uVar4;
        if (uVar3 < uVar4) {
          uVar6 = uVar3;
        }
        iVar1 = FUN_01bed842((int)uVar16,iVar1,uVar6);
        if (iVar1 == 0) {
          iVar1 = uVar3 - uVar4;
        }
        if (iVar1 < 0) goto LAB_0101404c;
      }
    }
    uVar7 = puVar2[1];
    uVar10 = puVar2[2];
    *puVar11 = *puVar2;
    puVar11[1] = uVar7;
    puVar11[2] = uVar10;
    uVar16 = FUN_019b00d0(puVar12[1],puVar12[2]);
    uVar3 = (uint)((ulonglong)uVar16 >> 0x20);
    uVar17 = FUN_019b00d0(puVar13[1],puVar13[2]);
    uVar4 = (uint)((ulonglong)uVar17 >> 0x20);
    iVar1 = (int)uVar17;
    puVar2 = puVar13;
    if ((int)uVar16 == 0) {
      if (iVar1 == 0) {
        iVar14 = 0;
      }
      else {
LAB_010140ec:
        iVar14 = 1;
        puVar2 = puVar12;
      }
    }
    else {
      iVar14 = 0;
      if (iVar1 != 0) {
        uVar6 = uVar4;
        if (uVar3 < uVar4) {
          uVar6 = uVar3;
        }
        iVar1 = FUN_01bed842((int)uVar16,iVar1,uVar6);
        if (iVar1 == 0) {
          iVar1 = uVar3 - uVar4;
        }
        if (iVar1 < 0) goto LAB_010140ec;
      }
    }
    uVar9 = uVar9 - 1;
    puVar8 = puVar8 + (local_30 | local_30 << 1);
    uVar7 = puVar2[1];
    uVar10 = puVar2[2];
    param_1 = param_1 + (local_30 ^ 1 | (local_30 ^ 1) << 1);
    *puVar5 = *puVar2;
    puVar5[1] = uVar7;
    puVar5[2] = uVar10;
    puVar12 = puVar12 + iVar14 * -3;
    puVar5 = puVar5 + -3;
    puVar2 = puVar13 + iVar14 * 3;
    puVar13 = puVar2 + -3;
    param_3 = puVar11 + 3;
    if (uVar9 == 0) {
      puVar12 = puVar12 + 3;
      if ((param_2 & 1) != 0) {
        bVar15 = param_1 < puVar12;
        puVar5 = puVar8;
        if (bVar15) {
          puVar5 = param_1;
        }
        uVar7 = puVar5[1];
        uVar10 = puVar5[2];
        puVar11[3] = *puVar5;
        puVar11[4] = uVar7;
        puVar11[5] = uVar10;
        param_1 = param_1 + ((uint)bVar15 | (uint)bVar15 << 1);
        puVar8 = puVar8 + ((uint)!bVar15 | (uint)!bVar15 << 1);
      }
      puVar5 = puVar12;
      if (param_1 == puVar12) {
        puVar5 = puVar2;
      }
      if (param_1 != puVar12 || puVar8 != puVar5) {
        FUN_01307140();
      }
      return;
    }
  } while( true );
}

