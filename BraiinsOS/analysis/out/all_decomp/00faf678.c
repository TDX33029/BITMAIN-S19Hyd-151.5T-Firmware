// FUN_00faf678 @ 00faf678 size=1280 calls_out=5 calls_in=2
// strings: assertion failed: d.mant > 0

void FUN_00faf678(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                 int param_6,uint param_7,undefined4 param_8)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  
  if (param_3 == 0 && param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant > 0",0x1c,&DAT_01880f7c);
  }
  iVar7 = LZCOUNT(param_3) + 0x20;
  if (param_4 != 0) {
    iVar7 = LZCOUNT(param_4);
  }
  uVar8 = ((short)(-0x60 - (short)(param_5 - iVar7)) * 0x50 + 0x153b0) / 0x84e;
  if (0x50 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,0x51,&DAT_01880f8c);
  }
  uVar13 = param_3 << iVar7;
  uVar22 = iVar7 - 0x20;
  if (-1 < (int)uVar22) {
    uVar13 = 0;
  }
  iVar6 = uVar8 * 0x10;
  lVar3 = (ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_00362634 + iVar6) +
          ((ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_00362630 + iVar6) >> 0x20);
  uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar8 = param_3 >> (0x20U - iVar7 & 0xff) | param_4 << iVar7;
  if (-1 < (int)uVar22) {
    uVar8 = param_3 << (uVar22 & 0xff);
  }
  lVar5 = (ulonglong)uVar8 * (ulonglong)*(uint *)(&DAT_00362630 + iVar6);
  uVar22 = (uint)((ulonglong)lVar5 >> 0x20);
  lVar3 = (ulonglong)uVar8 * (ulonglong)*(uint *)(&DAT_00362634 + iVar6) +
          (ulonglong)
          CONCAT14(CARRY4(uVar13,uVar22) ||
                   CARRY4(uVar13 + uVar22,(uint)CARRY4((uint)lVar5,(uint)lVar3)),
                   (int)((ulonglong)(lVar3 + lVar5) >> 0x20)) +
          (ulonglong)(uint)-((int)(lVar3 + lVar5) >> 0x1f);
  uVar9 = (uint)lVar3;
  uVar25 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar11 = 0xffc0 - ((param_5 - iVar7) + (uint)*(ushort *)(&DAT_00362638 + iVar6));
  uVar13 = uVar11 & 0x3f;
  uVar18 = 0x20 - uVar13;
  uVar14 = uVar13 - 0x20;
  uVar22 = uVar9 >> uVar13 | uVar25 << (uVar18 & 0xff);
  uVar8 = 1 >> (uVar18 & 0xff);
  if (-1 < (int)uVar14) {
    uVar22 = uVar25 >> (uVar14 & 0xff);
    uVar8 = 1 << (uVar14 & 0xff);
  }
  uVar15 = 1 << uVar13;
  if (-1 < (int)uVar14) {
    uVar15 = 0;
  }
  uVar23 = uVar15 - 1 & uVar9;
  uVar12 = uVar8 - (uVar15 == 0);
  uVar24 = uVar12 & uVar25;
  if (uVar23 == 0 && uVar24 == 0) {
    *param_1 = 0;
    return;
  }
  if (uVar22 < 10000) {
    if (uVar22 < 100) {
      puVar16 = (undefined1 *)0x1;
      uVar10 = (uint)(9 < uVar22);
      if (9 < uVar22) {
        puVar16 = (undefined1 *)0xa;
      }
    }
    else {
      uVar10 = 3;
      puVar16 = (undefined1 *)0x3e8;
      if (uVar22 < 1000) {
        uVar10 = 2;
        puVar16 = (undefined1 *)0x64;
      }
    }
  }
  else if (uVar22 < 1000000) {
    uVar10 = 5;
    puVar16 = (undefined1 *)0x186a0;
    if (uVar22 < 100000) {
      uVar10 = 4;
      puVar16 = (undefined1 *)0x2710;
    }
  }
  else {
    puVar16 = (undefined1 *)0x5f5e100;
    if (uVar22 < 100000000) {
      puVar16 = &DAT_000f4240;
      if (9999999 < uVar22) {
        puVar16 = &LAB_00989680;
      }
      uVar10 = 7;
      if (9999999 >= uVar22) {
        uVar10 = 6;
      }
    }
    else {
      uVar10 = 9;
      if (uVar22 < 1000000000) {
        uVar10 = 8;
      }
      else {
        puVar16 = &DAT_3b9aca00;
      }
    }
  }
  sVar1 = ((short)uVar10 - *(short *)(&DAT_0036263a + iVar6)) + 1;
  iVar7 = (int)sVar1;
  sVar2 = (short)param_8;
  if (iVar7 <= sVar2) {
    uVar9 = uVar9 >> 1 | uVar25 * -0x80000000;
    uVar24 = uVar9 + (uVar25 >> 1) + (uint)CARRY4(uVar9,uVar25 >> 1);
    uVar24 = uVar24 - (((uint)((ulonglong)uVar24 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar24 / 5);
    uVar11 = uVar9 - uVar24;
    uVar22 = (uint)puVar16 >> (uVar18 & 0xff);
    if (-1 < (int)uVar14) {
      uVar22 = (int)puVar16 << (uVar14 & 0xff);
    }
    lVar3 = (ulonglong)uVar11 * 0xcccccccd;
    iVar6 = (int)puVar16 << uVar13;
    if (-1 < (int)uVar14) {
      iVar6 = 0;
    }
    FUN_00fb0764(param_1,param_6,param_7,0,iVar7,param_8,(int)lVar3,
                 ((uVar25 >> 1) - (uint)(uVar9 < uVar24)) * -0x33333333 +
                 uVar11 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20),iVar6,uVar22,uVar15,uVar8);
    return;
  }
  uVar9 = param_7;
  if ((uint)(iVar7 - sVar2) < param_7) {
    uVar9 = (uint)(short)(sVar1 - sVar2);
  }
  uVar25 = 0;
  while( true ) {
    iVar6 = FUN_018462e8(uVar22,puVar16);
    uVar22 = uVar22 - iVar6 * (int)puVar16;
    *(char *)(param_6 + uVar25) = (char)iVar6 + '0';
    if (uVar9 - 1 == uVar25) {
      uVar11 = (int)puVar16 << uVar13;
      uVar13 = uVar22 << uVar13;
      uVar25 = uVar22 >> (uVar18 & 0xff);
      uVar18 = (uint)puVar16 >> (uVar18 & 0xff);
      if (-1 < (int)uVar14) {
        uVar13 = 0;
        uVar25 = uVar22 << (uVar14 & 0xff);
        uVar11 = 0;
        uVar18 = (int)puVar16 << (uVar14 & 0xff);
      }
      bVar26 = CARRY4(uVar13,uVar23);
      uVar23 = uVar13 + uVar23;
      uVar24 = uVar25 + uVar24 + (uint)bVar26;
      goto LAB_00fafaf4;
    }
    if (uVar10 == uVar25) break;
    uVar25 = uVar25 + 1;
    bVar26 = puVar16 < (undefined1 *)0xa;
    puVar16 = (undefined1 *)((uint)puVar16 / 10);
    if (bVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_01880f9c);
    }
  }
  uVar25 = uVar25 + 1;
  uVar10 = 1;
  uVar11 = (uVar11 & 0xffff) - 1 & 0x3f;
  uVar22 = 0;
  do {
    uVar21 = uVar10 >> uVar11 | uVar22 << (0x20 - uVar11 & 0xff);
    uVar19 = uVar11 - 0x20;
    if (-1 < (int)uVar19) {
      uVar21 = uVar22 >> (uVar19 & 0xff);
    }
    uVar20 = uVar22 >> uVar11;
    if (-1 < (int)uVar19) {
      uVar20 = 0;
    }
    if (uVar21 != 0 || uVar20 != 0) {
      *param_1 = 0;
      return;
    }
    if (param_7 == uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_7,param_7,&DAT_01880fac);
    }
    uVar21 = (uint)((ulonglong)uVar23 * 10);
    uVar4 = (ulonglong)uVar10;
    uVar10 = (uint)(uVar4 * 10);
    uVar24 = (int)((ulonglong)uVar23 * 10 >> 0x20) + uVar24 * 10;
    bVar17 = (byte)(uVar21 >> uVar13) | (byte)(uVar24 << (uVar18 & 0xff));
    uVar22 = (int)(uVar4 * 10 >> 0x20) + uVar22 * 10;
    if (-1 < (int)uVar14) {
      bVar17 = (byte)(uVar24 >> (uVar14 & 0xff));
    }
    *(byte *)(param_6 + uVar25) = bVar17 + 0x30;
    uVar25 = uVar25 + 1;
    uVar23 = uVar21 & uVar15 - 1;
    uVar24 = uVar24 & uVar12;
  } while (uVar9 != uVar25);
  uVar11 = uVar15;
  uVar18 = uVar8;
  uVar15 = uVar10;
  uVar8 = uVar22;
LAB_00fafaf4:
  FUN_00fb0764(param_1,param_6,param_7,uVar9,iVar7,param_8,uVar23,uVar24,uVar11,uVar18,uVar15,uVar8)
  ;
  return;
}

