// FUN_013f9740 @ 013f9740 size=500 calls_out=7 calls_in=5
// strings: assertion failed: !self.ranges.is_empty()

void FUN_013f9740(uint *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  uVar14 = param_1[1];
  uVar15 = param_1[2];
  iVar1 = 0;
  do {
    if (uVar15 + iVar1 < 2) {
      return;
    }
    pbVar8 = (byte *)(uVar14 + iVar1 * -2);
    uVar4 = (uint)*pbVar8;
    uVar6 = (uint)pbVar8[1];
    uVar12 = (uint)pbVar8[2];
    uVar9 = (uint)pbVar8[3];
    bVar16 = uVar4 < uVar12;
    if (uVar4 == uVar12) {
      bVar16 = uVar6 < uVar9;
    }
    if (!bVar16) break;
    iVar1 = iVar1 + -1;
    if (uVar4 < uVar12) {
      uVar4 = uVar12;
    }
    if (uVar9 < uVar6) {
      uVar6 = uVar9;
    }
  } while (uVar6 + 1 < uVar4);
  if (uVar15 < 2) {
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: !self.ranges.is_empty()",0x29,&DAT_0189df30);
    }
  }
  else if (uVar15 < 0x15) {
    FUN_013f6e34();
  }
  else {
    FUN_013fc620(uVar14,uVar15);
  }
  uVar6 = 0;
  uVar4 = uVar15;
  do {
    if (uVar15 < uVar4) {
      iVar1 = uVar14 + uVar4 * 2;
      pbVar8 = (byte *)(uVar14 + uVar6 * 2);
      uVar10 = (uint)*pbVar8;
      uVar12 = (uint)*(byte *)(iVar1 + -2);
      uVar9 = (uint)*(byte *)(iVar1 + -1);
      uVar13 = (uint)pbVar8[1];
      uVar11 = uVar12;
      if (uVar12 < uVar10) {
        uVar11 = uVar10;
      }
      uVar7 = uVar9;
      if (uVar13 < uVar9) {
        uVar7 = uVar13;
      }
      if (uVar7 + 1 < uVar11) goto LAB_013f984c;
      if (uVar9 < uVar13) {
        uVar9 = uVar13;
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
LAB_013f984c:
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar4,&DAT_0189df40);
      }
      puVar2 = (undefined1 *)(uVar14 + uVar6 * 2);
      uVar5 = *puVar2;
      uVar3 = puVar2[1];
      if (uVar4 == *param_1) {
        FUN_014017b4(param_1);
        uVar14 = param_1[1];
      }
      puVar2 = (undefined1 *)(uVar14 + uVar4 * 2);
      *puVar2 = uVar5;
      uVar4 = uVar4 + 1;
      puVar2[1] = uVar3;
      param_1[2] = uVar4;
    }
    uVar6 = uVar6 + 1;
    if (uVar15 == uVar6) {
      uVar14 = param_1[2];
      if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar15,uVar14,&DAT_018af198);
      }
      uVar14 = uVar14 - uVar15;
      param_1[2] = 0;
      if (uVar14 != 0) {
        FUN_016dd52c(param_1[1],param_1[1] + uVar15 * 2,uVar14 * 2);
        param_1[2] = uVar14;
      }
      return;
    }
  } while( true );
}

