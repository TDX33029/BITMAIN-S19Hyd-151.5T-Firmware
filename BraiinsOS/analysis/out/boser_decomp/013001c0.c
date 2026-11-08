// FUN_013001c0 @ 013001c0 size=1272 calls_out=5 calls_in=2
// strings: assertion failed: d.mant > 0

void FUN_013001c0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                 int param_6,uint param_7,undefined4 param_8)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
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
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  
  if (param_3 == 0 && param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant > 0",0x1c,&DAT_01ce47b0);
  }
  iVar8 = LZCOUNT(param_3) + 0x20;
  if (param_4 != 0) {
    iVar8 = LZCOUNT(param_4);
  }
  uVar9 = ((short)(-0x60 - (short)(param_5 - iVar8)) * 0x50 + 0x153b0) / 0x84e;
  if (0x50 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,0x51,&DAT_01ce47c0);
  }
  uVar13 = param_3 << iVar8;
  uVar23 = iVar8 - 0x20;
  if (-1 < (int)uVar23) {
    uVar13 = 0;
  }
  iVar6 = uVar9 * 0x10;
  lVar3 = (ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_00425464 + iVar6) +
          ((ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_00425460 + iVar6) >> 0x20);
  uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = param_3 >> (0x20U - iVar8 & 0xff) | param_4 << iVar8;
  if (-1 < (int)uVar23) {
    uVar9 = param_3 << (uVar23 & 0xff);
  }
  lVar5 = (ulonglong)uVar9 * (ulonglong)*(uint *)(&DAT_00425460 + iVar6);
  uVar23 = (uint)((ulonglong)lVar5 >> 0x20);
  lVar3 = (ulonglong)uVar9 * (ulonglong)*(uint *)(&DAT_00425464 + iVar6) +
          (ulonglong)
          CONCAT14(CARRY4(uVar13,uVar23) ||
                   CARRY4(uVar13 + uVar23,(uint)CARRY4((uint)lVar5,(uint)lVar3)),
                   (int)((ulonglong)(lVar3 + lVar5) >> 0x20)) +
          (ulonglong)(uint)-((int)(lVar3 + lVar5) >> 0x1f);
  uVar23 = (uint)lVar3;
  uVar26 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar11 = 0xffc0 - ((param_5 - iVar8) + (uint)*(ushort *)(&DAT_00425468 + iVar6));
  uVar13 = uVar11 & 0x3f;
  uVar18 = 0x20 - uVar13;
  uVar14 = uVar13 - 0x20;
  puVar22 = (undefined1 *)(uVar23 >> uVar13 | uVar26 << (uVar18 & 0xff));
  uVar9 = 1 >> (uVar18 & 0xff);
  if (-1 < (int)uVar14) {
    puVar22 = (undefined1 *)(uVar26 >> (uVar14 & 0xff));
    uVar9 = 1 << (uVar14 & 0xff);
  }
  uVar15 = 1 << uVar13;
  if (-1 < (int)uVar14) {
    uVar15 = 0;
  }
  uVar24 = uVar15 - 1 & uVar23;
  uVar12 = uVar9 - (uVar15 == 0);
  uVar25 = uVar12 & uVar26;
  if (uVar24 == 0 && uVar25 == 0) {
    *param_1 = 0;
    return;
  }
  if (puVar22 < (undefined1 *)0x2710) {
    if (puVar22 < (undefined1 *)0x64) {
      puVar16 = (undefined1 *)0x1;
      uVar7 = (uint)((undefined1 *)0x9 < puVar22);
      if ((undefined1 *)0x9 < puVar22) {
        puVar16 = (undefined1 *)0xa;
      }
    }
    else {
      uVar7 = 3;
      puVar16 = (undefined1 *)0x3e8;
      if (puVar22 < (undefined1 *)0x3e8) {
        uVar7 = 2;
        puVar16 = (undefined1 *)0x64;
      }
    }
  }
  else if (puVar22 < (undefined1 *)0xf4240) {
    uVar7 = 5;
    puVar16 = (undefined1 *)0x186a0;
    if (puVar22 < (undefined1 *)0x186a0) {
      uVar7 = 4;
      puVar16 = (undefined1 *)0x2710;
    }
  }
  else {
    puVar16 = (undefined1 *)0x5f5e100;
    if (puVar22 < (undefined1 *)0x5f5e100) {
      bVar27 = (undefined1 *)((int)&DAT_0098967c + 3) < puVar22;
      puVar16 = (undefined1 *)0xf4240;
      if (bVar27) {
        puVar16 = (undefined1 *)0x989680;
      }
      uVar7 = 7;
      if (!bVar27) {
        uVar7 = 6;
      }
    }
    else {
      uVar7 = 9;
      if (&DAT_3b9ac9ff < puVar22) {
        puVar16 = &DAT_3b9aca00;
      }
      else {
        uVar7 = 8;
      }
    }
  }
  sVar1 = ((short)uVar7 - *(short *)(&DAT_0042546a + iVar6)) + 1;
  iVar8 = (int)sVar1;
  sVar2 = (short)param_8;
  if (sVar2 < iVar8) {
    uVar26 = param_7;
    if ((uint)(iVar8 - sVar2) < param_7) {
      uVar26 = (uint)(short)(sVar1 - sVar2);
    }
    uVar23 = 0;
    while( true ) {
      iVar6 = FUN_01bf1250(puVar22,puVar16);
      puVar22 = puVar22 + -(iVar6 * (int)puVar16);
      *(char *)(param_6 + uVar23) = (char)iVar6 + '0';
      if (uVar26 - 1 == uVar23) break;
      if (uVar7 == uVar23) {
        uVar23 = uVar23 + 1;
        uVar10 = 1;
        uVar11 = (uVar11 & 0xffff) - 1 & 0x3f;
        uVar7 = 0;
        do {
          uVar21 = uVar10 >> uVar11 | uVar7 << (0x20 - uVar11 & 0xff);
          uVar19 = uVar11 - 0x20;
          if (-1 < (int)uVar19) {
            uVar21 = uVar7 >> (uVar19 & 0xff);
          }
          uVar20 = uVar7 >> uVar11;
          if (-1 < (int)uVar19) {
            uVar20 = 0;
          }
          if (uVar21 != 0 || uVar20 != 0) {
            *param_1 = 0;
            return;
          }
          if (param_7 == uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(param_7,param_7,&DAT_01ce47e0);
          }
          uVar21 = (uint)((ulonglong)uVar24 * 10);
          uVar4 = (ulonglong)uVar10;
          uVar10 = (uint)(uVar4 * 10);
          uVar25 = (int)((ulonglong)uVar24 * 10 >> 0x20) + uVar25 * 10;
          bVar17 = (byte)(uVar21 >> uVar13) | (byte)(uVar25 << (uVar18 & 0xff));
          uVar7 = (int)(uVar4 * 10 >> 0x20) + uVar7 * 10;
          if (-1 < (int)uVar14) {
            bVar17 = (byte)(uVar25 >> (uVar14 & 0xff));
          }
          *(byte *)(param_6 + uVar23) = bVar17 + 0x30;
          uVar23 = uVar23 + 1;
          uVar24 = uVar21 & uVar15 - 1;
          uVar25 = uVar25 & uVar12;
        } while (uVar26 != uVar23);
        uVar11 = uVar15;
        uVar23 = uVar9;
        uVar15 = uVar10;
        uVar9 = uVar7;
        goto LAB_0130063c;
      }
      uVar23 = uVar23 + 1;
      bVar27 = puVar16 < (undefined1 *)0xa;
      puVar16 = (undefined1 *)((uint)puVar16 / 10);
      if (bVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_012ffdf4(&DAT_01ce47d0);
      }
    }
    uVar11 = (int)puVar16 << uVar13;
    uVar13 = (int)puVar22 << uVar13;
    uVar12 = (uint)puVar22 >> (uVar18 & 0xff);
    uVar23 = (uint)puVar16 >> (uVar18 & 0xff);
    if (-1 < (int)uVar14) {
      uVar13 = 0;
      uVar12 = (int)puVar22 << (uVar14 & 0xff);
      uVar11 = 0;
      uVar23 = (int)puVar16 << (uVar14 & 0xff);
    }
    bVar27 = CARRY4(uVar13,uVar24);
    uVar24 = uVar13 + uVar24;
    uVar25 = uVar12 + uVar25 + (uint)bVar27;
  }
  else {
    uVar11 = uVar23 >> 1 | uVar26 * -0x80000000;
    uVar12 = uVar11 + (uVar26 >> 1) + (uint)CARRY4(uVar11,uVar26 >> 1);
    uVar12 = uVar12 - (((uint)((ulonglong)uVar12 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar12 / 5);
    uVar25 = uVar11 - uVar12;
    uVar23 = (uint)puVar16 >> (uVar18 & 0xff);
    if (-1 < (int)uVar14) {
      uVar23 = (int)puVar16 << (uVar14 & 0xff);
    }
    lVar3 = (ulonglong)uVar25 * 0xcccccccd;
    uVar24 = (uint)lVar3;
    uVar25 = ((uVar26 >> 1) - (uint)(uVar11 < uVar12)) * -0x33333333 +
             uVar25 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
    uVar11 = (int)puVar16 << uVar13;
    if (-1 < (int)uVar14) {
      uVar11 = 0;
    }
    uVar26 = 0;
  }
LAB_0130063c:
  FUN_0130128c(param_1,param_6,param_7,uVar26,iVar8,param_8,uVar24,uVar25,uVar11,uVar23,uVar15,uVar9
              );
  return;
}

