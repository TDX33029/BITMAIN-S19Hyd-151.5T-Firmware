// FUN_013944d0 @ 013944d0 size=488 calls_out=7 calls_in=2
// strings: assertion failed: !self.ranges.is_empty()

void FUN_013944d0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
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
    puVar6 = (uint *)(uVar14 + iVar1 * -8);
    uVar4 = *puVar6;
    uVar5 = puVar6[1];
    uVar11 = puVar6[2];
    uVar7 = puVar6[3];
    bVar16 = uVar4 < uVar11;
    if (uVar4 == uVar11) {
      bVar16 = uVar5 < uVar7;
    }
    if (!bVar16) break;
    iVar1 = iVar1 + -1;
    if (uVar4 < uVar11) {
      uVar4 = uVar11;
    }
    if (uVar7 < uVar5) {
      uVar5 = uVar7;
    }
  } while (uVar5 + 1 < uVar4);
  if (uVar15 < 2) {
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: !self.ranges.is_empty()",0x29,&DAT_0189df30);
    }
  }
  else if (uVar15 < 0x15) {
    FUN_013f6c60();
  }
  else {
    FUN_013fc73c(uVar14,uVar15);
  }
  uVar5 = 0;
  uVar4 = uVar15;
  do {
    if (uVar15 < uVar4) {
      iVar1 = uVar14 + uVar4 * 8;
      puVar6 = (uint *)(uVar14 + uVar5 * 8);
      uVar2 = *puVar6;
      uVar11 = *(uint *)(iVar1 + -8);
      uVar7 = *(uint *)(iVar1 + -4);
      uVar12 = puVar6[1];
      uVar8 = uVar11;
      if (uVar11 < uVar2) {
        uVar8 = uVar2;
      }
      uVar9 = uVar7;
      if (uVar12 < uVar7) {
        uVar9 = uVar12;
      }
      if (uVar9 + 1 < uVar8) goto LAB_013945d0;
      if (uVar7 < uVar12) {
        uVar7 = uVar12;
      }
      if (uVar2 < uVar11) {
        uVar11 = uVar2;
      }
      uVar8 = uVar7;
      if (uVar7 < uVar11) {
        uVar8 = uVar11;
      }
      if (uVar7 <= uVar11) {
        uVar11 = uVar7;
      }
      *(uint *)(iVar1 + -8) = uVar11;
      *(uint *)(iVar1 + -4) = uVar8;
    }
    else {
LAB_013945d0:
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,uVar4,&DAT_0189df40);
      }
      puVar3 = (undefined4 *)(uVar14 + uVar5 * 8);
      uVar10 = *puVar3;
      uVar13 = puVar3[1];
      if (uVar4 == *param_1) {
        FUN_01401514(param_1);
        uVar14 = param_1[1];
      }
      puVar3 = (undefined4 *)(uVar14 + uVar4 * 8);
      *puVar3 = uVar10;
      uVar4 = uVar4 + 1;
      puVar3[1] = uVar13;
      param_1[2] = uVar4;
    }
    uVar5 = uVar5 + 1;
    if (uVar15 == uVar5) {
      uVar14 = param_1[2];
      if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar15,uVar14,&DAT_018af198);
      }
      uVar14 = uVar14 - uVar15;
      param_1[2] = 0;
      if (uVar14 != 0) {
        FUN_016dd52c(param_1[1],param_1[1] + uVar15 * 8,uVar14 * 8);
        param_1[2] = uVar14;
      }
      return;
    }
  } while( true );
}

