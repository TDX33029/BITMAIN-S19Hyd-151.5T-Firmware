// FUN_016f5e30 @ 016f5e30 size=528 calls_out=7 calls_in=8
// strings: 

void FUN_016f5e30(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint local_34;
  int local_30;
  uint *local_2c;
  uint local_28;
  int local_24;
  
  uVar15 = param_1[1];
  uVar16 = param_1[2];
  iVar1 = 0;
  do {
    if (uVar16 + iVar1 < 2) {
      return;
    }
    puVar5 = (uint *)(uVar15 + iVar1 * -8);
    uVar4 = *puVar5;
    uVar6 = puVar5[2];
    if (uVar4 == uVar6) {
      iVar12 = uVar15 + iVar1 * -8;
      uVar7 = *(uint *)(iVar12 + 4);
      uVar11 = *(uint *)(iVar12 + 0xc);
      if (uVar11 <= uVar7) break;
    }
    else {
      if (uVar6 <= uVar4) break;
      iVar12 = uVar15 + iVar1 * -8;
      uVar7 = *(uint *)(iVar12 + 4);
      uVar11 = *(uint *)(iVar12 + 0xc);
    }
    iVar1 = iVar1 + -1;
    if (uVar4 < uVar6) {
      uVar4 = uVar6;
    }
    if (uVar11 < uVar7) {
      uVar7 = uVar11;
    }
  } while (uVar7 + 1 < uVar4);
  if (uVar16 < 2) {
    if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("ass",0x29,&DAT_01d18818);
    }
  }
  else if (uVar16 < 0x15) {
    iVar1 = 8;
    do {
      FUN_016f3704(uVar15,uVar15 + iVar1);
      iVar1 = iVar1 + 8;
    } while (uVar16 * 8 != iVar1);
  }
  else {
    FUN_016ed3cc(uVar15,uVar16);
  }
  uVar6 = 0;
  uVar4 = uVar16;
  do {
    if (uVar16 < uVar4) {
      iVar1 = uVar15 + uVar4 * 8;
      puVar5 = (uint *)(uVar15 + uVar6 * 8);
      uVar2 = *puVar5;
      uVar11 = *(uint *)(iVar1 + -8);
      uVar7 = *(uint *)(iVar1 + -4);
      uVar13 = puVar5[1];
      uVar9 = uVar11;
      if (uVar11 < uVar2) {
        uVar9 = uVar2;
      }
      uVar8 = uVar7;
      if (uVar13 < uVar7) {
        uVar8 = uVar13;
      }
      if (uVar8 + 1 < uVar9) goto LAB_016f5f0c;
      if (uVar7 < uVar13) {
        uVar7 = uVar13;
      }
      if (uVar2 < uVar11) {
        uVar11 = uVar2;
      }
      uVar9 = uVar7;
      if (uVar7 < uVar11) {
        uVar9 = uVar11;
      }
      if (uVar7 <= uVar11) {
        uVar11 = uVar7;
      }
      *(uint *)(iVar1 + -8) = uVar11;
      *(uint *)(iVar1 + -4) = uVar9;
    }
    else {
LAB_016f5f0c:
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar4,&DAT_01d18808);
      }
      puVar3 = (undefined4 *)(uVar15 + uVar6 * 8);
      uVar10 = *puVar3;
      uVar14 = puVar3[1];
      if (uVar4 == *param_1) {
        FUN_015f5ab8(param_1);
        uVar15 = param_1[1];
      }
      puVar3 = (undefined4 *)(uVar15 + uVar4 * 8);
      *puVar3 = uVar10;
      uVar4 = uVar4 + 1;
      puVar3[1] = uVar14;
      param_1[2] = uVar4;
    }
    uVar6 = uVar6 + 1;
    if (uVar16 == uVar6) {
      uVar15 = param_1[2];
      if (uVar15 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar16,uVar15,&DAT_01d2fe30);
      }
      local_24 = uVar15 - uVar16;
      param_1[2] = 0;
      local_34 = param_1[1];
      local_30 = local_34 + uVar16 * 8;
      local_2c = param_1;
      local_28 = uVar16;
      FUN_016f1920(&local_34);
      return;
    }
  } while( true );
}

