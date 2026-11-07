// FUN_00fb5528 @ 00fb5528 size=1576 calls_out=1 calls_in=2
// strings: 

void FUN_00fb5528(undefined4 *param_1,uint *param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  
  uVar1 = 0;
  puVar8 = param_2;
  uVar20 = param_3;
  uVar2 = 0;
  if (param_3 < 8) {
LAB_00fb5634:
    uVar1 = uVar2;
    do {
      uVar7 = (byte)*puVar8 - 0x30;
      if (9 < (uVar7 & 0xff)) {
        uVar7 = param_3 - uVar20;
        if ((byte)*puVar8 != 0x2e) {
          iVar10 = 0;
          iVar17 = 0;
          uVar12 = uVar20;
          goto joined_r0x00fb57c0;
        }
        uVar19 = uVar20 - 1;
        if (7 < uVar19) {
          iVar17 = -1;
          goto LAB_00fb56c8;
        }
        puVar8 = (uint *)((int)puVar8 + 1);
        uVar12 = uVar19;
        goto joined_r0x00fb5794;
      }
      puVar8 = (uint *)((int)puVar8 + 1);
      uVar20 = uVar20 - 1;
      uVar1 = (uVar1 & 0xffffffff) * 10 +
              (CONCAT44((int)(uVar1 >> 0x20) * 10,uVar7) & 0xffffffff000000ff);
    } while (uVar20 != 0);
  }
  else {
    do {
      uVar19 = *puVar8;
      uVar12 = uVar19 + 0xcfcfcfd0;
      uVar7 = puVar8[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar19);
      if (((uVar19 + 0x46464646 | uVar12) & 0x80808080) != 0 ||
          ((puVar8[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar19) | uVar7) & 0x80808080) != 0)
      goto LAB_00fb5630;
      puVar8 = puVar8 + 2;
      uVar19 = (uint)((ulonglong)uVar12 * 10);
      uVar13 = uVar12 >> 8 | uVar7 * 0x1000000;
      uVar20 = uVar20 - 8;
      uVar12 = (int)((ulonglong)uVar12 * 10 >> 0x20) + uVar7 * 10 + (uVar7 >> 8) +
               (uint)CARRY4(uVar19,uVar13);
      uVar7 = uVar19 + uVar13 & 0xff00ff;
      uVar1 = (uVar1 & 0xffffffff) * 100000000 +
              CONCAT44((int)(uVar1 >> 0x20) * 100000000,
                       (short)(uVar7 >> 0x10) * 10000 + (uVar12 >> 0x10 & 0xff) +
                       (short)((ushort)uVar12 & 0xff) * 100 + (short)uVar7 * 1000000);
    } while (7 < uVar20);
    if (uVar20 != 0) {
LAB_00fb5630:
      uVar2 = uVar1;
      goto LAB_00fb5634;
    }
  }
  uVar20 = 0;
  bVar22 = true;
  uVar4 = 0;
  lVar5 = 0;
  uVar7 = param_3;
  goto joined_r0x00fb593c;
  while( true ) {
    uVar12 = (uint)((ulonglong)uVar13 * 10);
    uVar18 = uVar13 >> 8 | uVar15 * 0x1000000;
    iVar17 = iVar17 + -8;
    uVar13 = (int)((ulonglong)uVar13 * 10 >> 0x20) + uVar15 * 10 + (uVar15 >> 8) +
             (uint)CARRY4(uVar12,uVar18);
    uVar12 = uVar12 + uVar18 & 0xff00ff;
    uVar1 = (uVar1 & 0xffffffff) * 100000000 +
            CONCAT44((int)(uVar1 >> 0x20) * 100000000,
                     (short)(uVar12 >> 0x10) * 10000 + (uVar13 >> 0x10 & 0xff) +
                     (short)((ushort)uVar13 & 0xff) * 100 + (short)uVar12 * 1000000);
    if (uVar20 + iVar17 < 8) break;
LAB_00fb56c8:
    uVar12 = *(uint *)((int)puVar8 - iVar17);
    uVar18 = ((uint *)((int)puVar8 - iVar17))[1];
    uVar13 = uVar12 + 0xcfcfcfd0;
    uVar15 = uVar18 + 0xcfcfcfcf + (uint)(0x3030302f < uVar12);
    if (((uVar12 + 0x46464646 | uVar13) & 0x80808080) != 0 ||
        ((uVar18 + 0x46464646 + (uint)(0xb9b9b9b9 < uVar12) | uVar15) & 0x80808080) != 0) {
      uVar12 = uVar20 + iVar17;
      puVar8 = (uint *)((int)puVar8 - iVar17);
      goto LAB_00fb580c;
    }
  }
  puVar8 = (uint *)((int)puVar8 - iVar17);
  uVar12 = uVar20 + iVar17;
joined_r0x00fb5794:
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
LAB_00fb580c:
    puVar9 = (uint *)((int)puVar8 + uVar12);
    do {
      uVar13 = (byte)*puVar8 - 0x30;
      if (9 < (uVar13 & 0xff)) goto LAB_00fb5854;
      puVar8 = (uint *)((int)puVar8 + 1);
      uVar12 = uVar12 - 1;
      uVar1 = (uVar1 & 0xffffffff) * 10 +
              (CONCAT44((int)(uVar1 >> 0x20) * 10,uVar13) & 0xffffffff000000ff);
    } while (uVar12 != 0);
    uVar12 = 0;
    puVar8 = puVar9;
  }
LAB_00fb5854:
  iVar10 = -(uVar19 - uVar12);
  iVar17 = iVar10 >> 0x1f;
  uVar7 = (uVar19 - uVar12) + uVar7;
joined_r0x00fb57c0:
  if (uVar7 == 0) goto LAB_00fb57c4;
  lVar5 = CONCAT44(iVar17,iVar10);
  if (uVar12 == 0) {
    bVar22 = true;
LAB_00fb5930:
    uVar4 = 0;
  }
  else {
    if ((byte)((byte)*puVar8 | 0x20) != 0x65) {
      bVar22 = false;
      goto LAB_00fb5930;
    }
    iVar17 = uVar12 - 1;
    if (iVar17 == 0) goto LAB_00fb57c4;
    pbVar14 = (byte *)((int)puVar8 + 1);
    uVar13 = (uint)*pbVar14;
    uVar19 = uVar13;
    if (uVar13 == 0x2d || uVar13 == 0x2b) {
      iVar17 = uVar12 - 2;
      if (iVar17 == 0) goto LAB_00fb57c4;
      pbVar14 = (byte *)((int)puVar8 + 2);
      uVar19 = (uint)*pbVar14;
    }
    if (9 < uVar19 - 0x30) goto LAB_00fb57c4;
    uVar2 = 0;
    do {
      iVar10 = (int)(uVar2 >> 0x20);
      if (9 < (*pbVar14 - 0x30 & 0xff)) goto LAB_00fb5afc;
      bVar22 = 0xffff < (uint)uVar2;
      if ((int)-(iVar10 + (uint)bVar22) < 0 ==
          (SBORROW4(0,iVar10) != SBORROW4(-iVar10,(uint)bVar22))) {
        uVar2 = (uVar2 & 0xffffffff) * 10 +
                (CONCAT44(iVar10 * 10,*pbVar14 - 0x30) & 0xffffffff000000ff);
      }
      iVar17 = iVar17 + -1;
      pbVar14 = pbVar14 + 1;
    } while (iVar17 != 0);
    iVar17 = 0;
LAB_00fb5afc:
    uVar4 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
    if (uVar13 != 0x2d) {
      uVar4 = uVar2;
    }
    lVar5 = uVar4 + lVar5;
    bVar22 = iVar17 == 0;
  }
joined_r0x00fb593c:
  uVar6 = 0;
  if (0x13 < (int)uVar7) {
    iVar17 = uVar7 - 0x13;
    uVar7 = param_3;
    puVar8 = param_2;
    do {
      bVar3 = (byte)*puVar8;
      if (bVar3 != 0x2e && bVar3 != 0x30) break;
      bVar3 = UnsignedSaturate(bVar3 - 0x2f,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      puVar8 = (uint *)((int)puVar8 + 1);
      uVar7 = uVar7 - 1;
      iVar17 = iVar17 - (uint)bVar3;
    } while (uVar7 != 0);
    if (0 < iVar17) {
      uVar1 = 0;
      iVar10 = -param_3;
      do {
        iVar16 = iVar10;
        uVar7 = (byte)*param_2 - 0x30;
        iVar10 = iVar16;
        if (9 < (uVar7 & 0xff)) goto joined_r0x00fb5a20;
        param_2 = (uint *)((int)param_2 + 1);
        iVar10 = iVar16 + 1;
        uVar1 = (uVar1 & 0xffffffff) * 10 +
                (CONCAT44((int)(uVar1 >> 0x20) * 10,uVar7) & 0xffffffff000000ff);
        uVar7 = (uint)(uVar1 >> 0x20);
      } while ((uVar7 < 0xde0b6b3 || 0xde0b6b3 - uVar7 < (uint)((uint)uVar1 < 0xa7640000)) &&
              (iVar16 != -1));
      if (uVar7 < 0xde0b6b3 || 0xde0b6b3 - uVar7 < (uint)((uint)uVar1 < 0xa7640000)) {
        if (iVar16 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(1,0,0,&DAT_01880eec);
        }
joined_r0x00fb5a20:
        iVar10 = -1 - iVar10;
        if (iVar10 == 0) {
          iVar11 = 0;
        }
        else {
          iVar16 = iVar10;
          do {
            param_2 = (uint *)((int)param_2 + 1);
            if (9 < (*(byte *)param_2 - 0x30 & 0xff)) {
              iVar11 = iVar16 - iVar10;
              goto LAB_00fb5aa4;
            }
            iVar11 = iVar16 + -1;
            uVar1 = (uVar1 & 0xffffffff) * 10 +
                    (CONCAT44((int)(uVar1 >> 0x20) * 10,*(byte *)param_2 - 0x30) &
                    0xffffffff000000ff);
            uVar20 = (uint)(uVar1 >> 0x20);
          } while ((uVar20 < 0xde0b6b3 || 0xde0b6b3 - uVar20 < (uint)((uint)uVar1 < 0xa7640000)) &&
                  (bVar21 = iVar16 != 1, iVar16 = iVar11, bVar21));
          iVar11 = iVar11 - iVar10;
        }
      }
      else {
        iVar11 = -(uVar20 + iVar10);
      }
LAB_00fb5aa4:
      lVar5 = uVar4 + (longlong)iVar11;
    }
    uVar6 = 0;
    if (0 < iVar17) {
      uVar6 = 1;
    }
  }
  if (bVar22) {
    param_1[1] = (int)((ulonglong)lVar5 >> 0x20);
    *(ulonglong *)(param_1 + 2) = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (int)lVar5;
    *(undefined1 *)((int)param_1 + 0x11) = uVar6;
    return;
  }
LAB_00fb57c4:
  *(undefined1 *)((int)param_1 + 0x11) = 2;
  return;
}

