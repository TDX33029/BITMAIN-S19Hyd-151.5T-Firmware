// FUN_00fb4cf0 @ 00fb4cf0 size=700 calls_out=1 calls_in=2
// strings: 

void FUN_00fb4cf0(uint *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  param_2 = param_2 & 0x3f;
  uVar9 = *param_1;
  uVar3 = 0;
  uVar12 = 0;
  do {
    uVar5 = (uint)(uVar3 >> 0x20);
    if (uVar9 == uVar12) {
      if (uVar3 == 0) {
        return;
      }
      uVar14 = param_2 - 0x20;
      uVar12 = uVar5 >> param_2;
      uVar13 = (uint)uVar3 >> param_2 | uVar5 << (0x20 - param_2 & 0xff);
      if (-1 < (int)uVar14) {
        uVar12 = 0;
        uVar13 = uVar5 >> (uVar14 & 0xff);
      }
      uVar7 = uVar9;
      if (uVar13 == 0 && uVar12 == 0) {
        do {
          lVar4 = (uVar3 & 0xffffffff) * 10;
          uVar12 = (uint)lVar4;
          uVar7 = uVar7 + 1;
          uVar13 = (int)((ulonglong)lVar4 >> 0x20) + (int)(uVar3 >> 0x20) * 10;
          uVar3 = CONCAT44(uVar13,uVar12);
          uVar5 = uVar12 >> param_2 | uVar13 << (0x20 - param_2 & 0xff);
          uVar12 = uVar13 >> param_2;
          if (-1 < (int)uVar14) {
            uVar5 = uVar13 >> (uVar14 & 0xff);
            uVar12 = 0;
          }
        } while (uVar5 == 0 && uVar12 == 0);
      }
      break;
    }
    if (uVar12 == 0x300) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0x300,0x300,&DAT_01880e8c);
    }
    uVar7 = uVar12 + 1;
    uVar3 = (uVar3 & 0xffffffff) * 10 +
            ((ulonglong)(uVar5 * 10) << 0x20 | (ulonglong)*(byte *)((int)param_1 + uVar12 + 8));
    uVar13 = (uint)(uVar3 >> 0x20);
    uVar5 = (uint)uVar3 >> param_2 | uVar13 << (0x20 - param_2 & 0xff);
    uVar12 = param_2 - 0x20;
    if (-1 < (int)uVar12) {
      uVar5 = uVar13 >> (uVar12 & 0xff);
    }
    uVar13 = uVar13 >> param_2;
    if (-1 < (int)uVar12) {
      uVar13 = 0;
    }
    uVar12 = uVar7;
  } while (uVar5 == 0 && uVar13 == 0);
  uVar12 = param_1[1];
  uVar5 = (uVar12 - uVar7) + 1;
  param_1[1] = uVar5;
  if (uVar12 - uVar7 == -0x801 || (int)uVar5 < -0x800) {
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar5 = 0xffffffff;
  uVar13 = param_2 - 0x20;
  uVar12 = -1 << param_2;
  uVar14 = 0;
  if (-1 < (int)uVar13) {
    uVar5 = -1 << (uVar13 & 0xff);
    uVar12 = 0;
  }
  if (uVar7 < uVar9) {
    uVar6 = uVar7;
    if (0x2ff < uVar7) {
      uVar6 = 0x300;
    }
    uVar14 = uVar9 - uVar7;
    iVar8 = uVar7 + 8;
    iVar10 = 8;
    do {
      uVar7 = (uint)(uVar3 >> 0x20);
      if ((uVar6 - 0x300) + iVar10 == 8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(iVar8 + -8,0x300,&DAT_01880e9c);
      }
      bVar11 = (byte)((uint)uVar3 >> param_2) | (byte)(uVar7 << (0x20 - param_2 & 0xff));
      if (-1 < (int)uVar13) {
        bVar11 = (byte)(uVar7 >> (uVar13 & 0xff));
      }
      bVar2 = *(byte *)((int)param_1 + iVar8);
      *(byte *)((int)param_1 + iVar10) = bVar11;
      uVar3 = (ulonglong)((uint)uVar3 & ~uVar12) * 10 +
              ((ulonglong)((uVar7 & ~uVar5) * 10) << 0x20 | (ulonglong)bVar2);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar8 - uVar9 != 8);
  }
  if (uVar3 != 0) {
    do {
      uVar7 = (uint)(uVar3 >> 0x20);
      uVar9 = (uint)uVar3 >> param_2 | uVar7 << (0x20 - param_2 & 0xff);
      if (-1 < (int)uVar13) {
        uVar9 = uVar7 >> (uVar13 & 0xff);
      }
      if (uVar14 < 0x300) {
        *(char *)((int)param_1 + uVar14 + 8) = (char)uVar9;
        uVar14 = uVar14 + 1;
      }
      else if ((uVar9 & 0xff) != 0) {
        *(undefined1 *)(param_1 + 0xc2) = 1;
      }
      lVar4 = (ulonglong)((uint)uVar3 & ~uVar12) * 10;
      iVar8 = (int)lVar4;
      iVar10 = (int)((ulonglong)lVar4 >> 0x20) + (uVar7 & ~uVar5) * 10;
      uVar3 = CONCAT44(iVar10,iVar8);
    } while (iVar8 != 0 || iVar10 != 0);
  }
  iVar8 = uVar14 + 7;
  while( true ) {
    *param_1 = iVar8 - 7U;
    if (iVar8 - 7U == 0) {
      return;
    }
    if (0x300 < uVar14) break;
    pcVar1 = (char *)((int)param_1 + iVar8);
    iVar8 = iVar8 + -1;
    if (*pcVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(iVar8 + -8,0x300,&DAT_01880e6c);
}

