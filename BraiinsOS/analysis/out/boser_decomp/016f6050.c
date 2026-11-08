// FUN_016f6050 @ 016f6050 size=532 calls_out=7 calls_in=8
// strings: 

void FUN_016f6050(uint *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
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
    pbVar6 = (byte *)(uVar15 + iVar1 * -2);
    uVar4 = (uint)*pbVar6;
    uVar7 = (uint)pbVar6[2];
    if (uVar4 == uVar7) {
      iVar13 = uVar15 + iVar1 * -2;
      uVar9 = (uint)*(byte *)(iVar13 + 1);
      uVar12 = (uint)*(byte *)(iVar13 + 3);
      if (uVar12 <= uVar9) break;
    }
    else {
      if (uVar7 <= uVar4) break;
      iVar13 = uVar15 + iVar1 * -2;
      uVar9 = (uint)*(byte *)(iVar13 + 1);
      uVar12 = (uint)*(byte *)(iVar13 + 3);
    }
    iVar1 = iVar1 + -1;
    if (uVar4 < uVar7) {
      uVar4 = uVar7;
    }
    if (uVar12 < uVar9) {
      uVar9 = uVar12;
    }
  } while (uVar9 + 1 < uVar4);
  if (uVar16 < 2) {
    if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("ass",0x29,&DAT_01d18818);
    }
  }
  else if (uVar16 < 0x15) {
    iVar1 = 2;
    do {
      FUN_016f3784(uVar15,uVar15 + iVar1);
      iVar1 = iVar1 + 2;
    } while (uVar16 * 2 != iVar1);
  }
  else {
    FUN_016eccb8(uVar15,uVar16);
  }
  uVar7 = 0;
  uVar4 = uVar16;
  do {
    if (uVar16 < uVar4) {
      iVar1 = uVar15 + uVar4 * 2;
      pbVar6 = (byte *)(uVar15 + uVar7 * 2);
      uVar10 = (uint)*pbVar6;
      uVar12 = (uint)*(byte *)(iVar1 + -2);
      uVar9 = (uint)*(byte *)(iVar1 + -1);
      uVar14 = (uint)pbVar6[1];
      uVar11 = uVar12;
      if (uVar12 < uVar10) {
        uVar11 = uVar10;
      }
      uVar8 = uVar9;
      if (uVar14 < uVar9) {
        uVar8 = uVar14;
      }
      if (uVar8 + 1 < uVar11) goto LAB_016f612c;
      if (uVar9 < uVar14) {
        uVar9 = uVar14;
      }
      if (uVar10 < uVar12) {
        uVar12 = uVar10;
      }
      uVar5 = (char)uVar9;
      if (uVar9 < uVar12) {
        uVar5 = (char)uVar12;
      }
      uVar3 = (char)uVar12;
      if (uVar9 <= uVar12) {
        uVar3 = (char)uVar9;
      }
      *(undefined1 *)(iVar1 + -1) = uVar5;
      *(undefined1 *)(iVar1 + -2) = uVar3;
    }
    else {
LAB_016f612c:
      if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,uVar4,&DAT_01d18808);
      }
      puVar2 = (undefined1 *)(uVar15 + uVar7 * 2);
      uVar5 = *puVar2;
      uVar3 = puVar2[1];
      if (uVar4 == *param_1) {
        FUN_016f5378(param_1);
        uVar15 = param_1[1];
      }
      puVar2 = (undefined1 *)(uVar15 + uVar4 * 2);
      *puVar2 = uVar5;
      uVar4 = uVar4 + 1;
      puVar2[1] = uVar3;
      param_1[2] = uVar4;
    }
    uVar7 = uVar7 + 1;
    if (uVar16 == uVar7) {
      uVar15 = param_1[2];
      if (uVar15 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar16,uVar15,&DAT_01d2fe30);
      }
      local_24 = uVar15 - uVar16;
      param_1[2] = 0;
      local_34 = param_1[1];
      local_30 = local_34 + uVar16 * 2;
      local_2c = param_1;
      local_28 = uVar16;
      FUN_00700ec0(&local_34);
      return;
    }
  } while( true );
}

