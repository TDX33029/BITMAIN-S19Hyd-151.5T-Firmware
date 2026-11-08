// FUN_01305198 @ 01305198 size=792 calls_out=2 calls_in=1
// strings: 

void FUN_01305198(uint *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  uVar6 = *param_1;
  if (uVar6 != 0) {
    param_2 = param_2 & 0x3f;
    uVar8 = *(ushort *)("" + param_2 * 2) & 0x7ff;
    if (0x51c < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar8,0x51c,0x51c,&DAT_01ce4710);
    }
    uVar14 = (uint)(*(ushort *)("" + param_2 * 2) >> 0xb);
    uVar11 = 0;
    do {
      if ((*(ushort *)(&DAT_0042250e + param_2 * 2) & 0x7ff) - uVar8 == uVar11 ||
          0x51c - uVar8 == uVar11) goto LAB_01305244;
      if (uVar6 == uVar11) {
        uVar14 = uVar14 - 1;
        goto LAB_01305244;
      }
      if (uVar11 == 0x300) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0x300,0x300,&DAT_01ce4700);
      }
      iVar15 = uVar11 + uVar8;
      bVar3 = *(byte *)((int)param_1 + uVar11 + 8);
      uVar11 = uVar11 + 1;
    } while (bVar3 == (&DAT_0042258e)[iVar15]);
    if (bVar3 < (byte)(&DAT_0042258e)[iVar15]) {
      uVar14 = uVar14 - 1;
    }
LAB_01305244:
    uVar8 = 0;
    uVar11 = 0;
    do {
      while( true ) {
        uVar7 = uVar6 - 1;
        if (0x300 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,0x300,&DAT_01ce46b0);
        }
        bVar3 = *(byte *)((int)param_1 + uVar6 + 7);
        uVar12 = param_2 - 0x20;
        uVar9 = (uint)(bVar3 >> (0x20 - param_2 & 0xff));
        if (-1 < (int)uVar12) {
          uVar9 = (uint)bVar3 << (uVar12 & 0xff);
        }
        uVar13 = (uint)bVar3 << param_2;
        if (-1 < (int)uVar12) {
          uVar13 = 0;
        }
        uVar16 = uVar13 + uVar8;
        uVar13 = uVar9 + uVar11 + (uint)CARRY4(uVar13,uVar8);
        uVar11 = uVar16 >> 1 | uVar13 * -0x80000000;
        uVar12 = uVar11 + (uVar13 >> 1) + (uint)CARRY4(uVar11,uVar13 >> 1);
        uVar12 = uVar12 - (((uint)((ulonglong)uVar12 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                          uVar12 / 5);
        uVar9 = uVar11 - uVar12;
        uVar4 = (ulonglong)uVar9 * 0xcccccccd;
        uVar8 = (uint)uVar4;
        uVar11 = ((uVar13 >> 1) - (uint)(uVar11 < uVar12)) * -0x33333333 +
                 uVar9 * -0x33333334 + (int)(uVar4 >> 0x20);
        lVar5 = (uVar4 & 0xffffffff) * 0xfffffff6;
        uVar9 = (uint)lVar5;
        iVar15 = uVar9 + uVar16;
        if (0x2ff < (uVar14 - 1) + uVar6) break;
        *(char *)((int)param_1 + uVar6 + uVar14 + 7) = (char)iVar15;
        uVar6 = uVar7;
        if (uVar7 == 0) goto LAB_01305348;
      }
      if (iVar15 != 0 ||
          uVar11 * -10 + ((int)((ulonglong)lVar5 >> 0x20) - uVar8) + uVar13 +
          (uint)CARRY4(uVar9,uVar16) != 0) {
        *(undefined1 *)(param_1 + 0xc2) = 1;
      }
      uVar6 = uVar7;
    } while (uVar7 != 0);
LAB_01305348:
    if (uVar13 != 0 || uVar13 < (9 < uVar16)) {
      iVar15 = uVar14 + 7;
      do {
        uVar6 = uVar8 >> 1 | uVar11 << 0x1f;
        uVar9 = uVar6 + (uVar11 >> 1) + (uint)CARRY4(uVar6,uVar11 >> 1);
        uVar9 = uVar9 - (((uint)((ulonglong)uVar9 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar9 / 5);
        uVar7 = uVar6 - uVar9;
        uVar4 = (ulonglong)uVar7 * 0xcccccccd;
        uVar7 = ((uVar11 >> 1) - (uint)(uVar6 < uVar9)) * -0x33333333 +
                uVar7 * -0x33333334 + (int)(uVar4 >> 0x20);
        lVar5 = (uVar4 & 0xffffffff) * 0xfffffff6;
        uVar6 = (uint)lVar5;
        iVar10 = uVar6 + uVar8;
        if (iVar15 - 8U < 0x300) {
          *(char *)((int)param_1 + iVar15) = (char)iVar10;
        }
        else if (iVar10 != 0 ||
                 uVar7 * -10 + ((int)((ulonglong)lVar5 >> 0x20) - (uint)uVar4) + uVar11 +
                 (uint)CARRY4(uVar6,uVar8) != 0) {
          *(undefined1 *)(param_1 + 0xc2) = 1;
        }
        iVar15 = iVar15 + -1;
        bVar1 = uVar11 != 0;
        bVar2 = uVar11 < (9 < uVar8);
        uVar8 = (uint)uVar4;
        uVar11 = uVar7;
      } while (bVar1 || bVar2);
    }
    uVar8 = *param_1 + uVar14;
    uVar6 = uVar8;
    if (0x2ff < uVar8) {
      uVar6 = 0x300;
    }
    *param_1 = uVar6;
    param_1[1] = param_1[1] + uVar14;
    if (uVar8 != 0) {
      iVar15 = uVar6 + 7;
      do {
        uVar6 = iVar15 - 8;
        if (0x300 < iVar15 - 7U) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,0x300,&DAT_01ce46a0);
        }
        if (*(char *)((int)param_1 + iVar15) != '\0') {
          return;
        }
        iVar15 = iVar15 + -1;
        *param_1 = uVar6;
      } while (iVar15 != 7);
    }
  }
  return;
}

