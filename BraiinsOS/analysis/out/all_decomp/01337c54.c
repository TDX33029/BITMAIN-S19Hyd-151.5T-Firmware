// FUN_01337c54 @ 01337c54 size=716 calls_out=1 calls_in=63
// strings: assertion failed: field_number > 0 && field_number <= FIELD_NUMBER_MAX

int FUN_01337c54(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint in_r12;
  int unaff_lr;
  bool bVar11;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)*param_1;
    unaff_lr = param_1[3];
    param_2 = puVar5 + 1;
    in_r12 = ~*puVar5 & 0x80808080;
  }
  iVar2 = 0;
  while( true ) {
    if (puVar5 == (uint *)0x0 || unaff_lr == 0) {
      return iVar2;
    }
    puVar8 = param_2;
    if (in_r12 == 0) {
      do {
        param_2 = puVar8 + 1;
        uVar3 = *puVar8;
        puVar5 = puVar5 + -0x34;
        puVar8 = param_2;
      } while ((uVar3 & 0x80808080) == 0x80808080);
      in_r12 = uVar3 & 0x80808080 ^ 0x80808080;
    }
    sVar1 = (short)((uint)LZCOUNT(in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 |
                                  (in_r12 >> 0x10 & 0xff) << 8 | in_r12 >> 0x18) >> 3);
    uVar3 = puVar5[-sVar1 * 0xd + -0xd];
    if (0x1ffffffe < uVar3 - 1) break;
    if (uVar3 < 0x10) {
      uVar4 = puVar5[-sVar1 * 0xd + -4];
      iVar2 = uVar4 + puVar5[-sVar1 * 0xd + -10] * 5 + iVar2 + puVar5[-sVar1 * 0xd + -7] * 9;
    }
    else if (uVar3 < 0x800) {
      uVar4 = puVar5[-sVar1 * 0xd + -4];
      iVar2 = uVar4 * 2 + iVar2 + puVar5[-sVar1 * 0xd + -10] * 6 + puVar5[-sVar1 * 0xd + -7] * 10;
    }
    else if (uVar3 >> 0x12 == 0) {
      uVar4 = puVar5[-sVar1 * 0xd + -4];
      iVar2 = uVar4 * 3 + puVar5[-sVar1 * 0xd + -7] * 0xb + puVar5[-sVar1 * 0xd + -10] * 7 + iVar2;
    }
    else {
      bVar11 = uVar3 < 0x2000000;
      iVar7 = 9;
      if (bVar11) {
        iVar7 = 8;
      }
      iVar9 = 0xd;
      if (bVar11) {
        iVar9 = 0xc;
      }
      iVar6 = 5;
      if (bVar11) {
        iVar6 = 4;
      }
      uVar4 = puVar5[-sVar1 * 0xd + -4];
      iVar2 = uVar4 * iVar6 +
              puVar5[-sVar1 * 0xd + -7] * iVar9 + puVar5[-sVar1 * 0xd + -10] * iVar7 + iVar2;
    }
    if (uVar4 != 0) {
      puVar8 = (uint *)puVar5[-sVar1 * 0xd + -5];
      iVar7 = uVar4 << 3;
      do {
        uVar4 = *puVar8;
        uVar10 = puVar8[1];
        iVar9 = 1;
        if ((((uVar10 != 0 || uVar10 < (0x7f < uVar4)) &&
             (iVar9 = 2, uVar10 != 0 || uVar10 < (0x3fff < uVar4))) &&
            (iVar9 = 3, uVar10 != 0 || uVar10 < (0x1fffff < uVar4))) &&
           (iVar9 = 4, uVar10 != 0 || uVar10 < (0xfffffff < uVar4))) {
          iVar9 = 5;
          if (7 < uVar10) {
            iVar9 = 6;
          }
          if (0x3ff < uVar10) {
            iVar9 = 7;
            if (0x1ffff < uVar10) {
              iVar9 = 8;
            }
            if ((0xffffff < uVar10) && (iVar9 = 10, uVar10 < 0x80000000)) {
              iVar9 = 9;
            }
          }
        }
        puVar8 = puVar8 + 2;
        iVar2 = iVar9 + iVar2;
        iVar7 = iVar7 + -8;
      } while (iVar7 != 0);
    }
    iVar7 = 1;
    if (0xf < uVar3) {
      iVar7 = 2;
      if (0x7ff < uVar3) {
        iVar7 = 3;
      }
      if ((0x3ffff < uVar3) && (iVar7 = 5, uVar3 < 0x2000000)) {
        iVar7 = 4;
      }
    }
    uVar3 = puVar5[-sVar1 * 0xd + -1];
    in_r12 = in_r12 - 1 & in_r12;
    unaff_lr = unaff_lr + -1;
    iVar2 = uVar3 * iVar7 + iVar2;
    if (uVar3 != 0) {
      iVar7 = uVar3 * 0xc;
      puVar8 = (uint *)(puVar5[-sVar1 * 0xd + -2] + 8);
      do {
        uVar3 = *puVar8;
        iVar9 = 1;
        if (0x7f < uVar3) {
          iVar9 = 2;
          if (0x3fff < uVar3) {
            iVar9 = 3;
          }
          if ((0x1fffff < uVar3) && (iVar9 = 5, uVar3 < 0x10000000)) {
            iVar9 = 4;
          }
        }
        iVar7 = iVar7 + -0xc;
        iVar2 = uVar3 + iVar2 + iVar9;
        puVar8 = puVar8 + 3;
      } while (iVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464("assertion failed: field_number > 0 && field_number <= FIELD_NUMBER_MAX",0x46,
               &DAT_01890660);
}

