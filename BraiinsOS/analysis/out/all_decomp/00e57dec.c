// FUN_00e57dec @ 00e57dec size=1380 calls_out=4 calls_in=2
// strings: 

void FUN_00e57dec(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 local_50;
  byte local_4c [16];
  undefined1 local_3c [2];
  byte local_3a [17];
  undefined2 local_29 [2];
  
  local_50 = param_1;
  if (param_6 == 0 && (0x7ffff < param_5) <= param_6) {
    uVar20 = FUN_01846088(param_3 >> 0x13 | param_4 << 0xd,param_4 >> 0x13 | param_5 << 0xd,
                          0xe460913d,0x1158);
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)((ulonglong)param_3 * 0xdb4ab0d2);
    lVar21 = (ulonglong)param_4 * 0xdb4ab0d2 + ((ulonglong)param_3 * 0xdb4ab0d2 >> 0x20);
    uVar9 = (uint)((ulonglong)lVar21 >> 0x20);
    lVar1 = (ulonglong)param_3 * 0x760f253e;
    uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar7 = (uint)(lVar21 + lVar1);
    lVar21 = (ulonglong)param_4 * 0x760f253e +
             (ulonglong)
             CONCAT14(CARRY4(uVar9,uVar11) ||
                      CARRY4(uVar9 + uVar11,(uint)CARRY4((uint)lVar1,(uint)lVar21)),
                      (int)((ulonglong)(lVar21 + lVar1) >> 0x20));
    uVar9 = (uint)lVar21;
    lVar1 = (ulonglong)param_4 * 0xe8361973 + ((ulonglong)param_3 * 0xe8361973 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar11 = (uint)((ulonglong)param_3 * 0x9598f4f1 >> 0x20);
    bVar17 = CARRY4((uint)((ulonglong)param_3 * 0x9598f4f1),(uint)lVar1);
    lVar1 = (ulonglong)param_4 * 0x9598f4f1 +
            (ulonglong)
            CONCAT14(CARRY4(uVar5,uVar11) || CARRY4(uVar5 + uVar11,(uint)bVar17),
                     uVar5 + uVar11 + (uint)bVar17);
    uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar3 = lVar1 + CONCAT44(uVar7,uVar14);
    bVar17 = CARRY4(uVar11,uVar7) || CARRY4(uVar11 + uVar7,(uint)CARRY4((uint)lVar1,uVar14));
    uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar15 = uVar9 + bVar17;
    uVar8 = (uint)((ulonglong)param_5 * 0xdb4ab0d2);
    lVar1 = (ulonglong)param_6 * 0xdb4ab0d2 + ((ulonglong)param_5 * 0xdb4ab0d2 >> 0x20);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar5 = (int)((ulonglong)lVar21 >> 0x20) + (uint)CARRY4(uVar9,(uint)bVar17);
    lVar21 = (ulonglong)param_5 * 0x760f253e;
    uVar9 = (uint)((ulonglong)lVar21 >> 0x20);
    uVar11 = (uint)(lVar1 + lVar21);
    lVar21 = (ulonglong)param_6 * 0x760f253e +
             (ulonglong)
             CONCAT14(CARRY4(uVar7,uVar9) ||
                      CARRY4(uVar7 + uVar9,(uint)CARRY4((uint)lVar21,(uint)lVar1)),
                      (int)((ulonglong)(lVar1 + lVar21) >> 0x20));
    uVar9 = (uint)lVar21;
    bVar17 = CARRY4(uVar5,uVar11) || CARRY4(uVar5 + uVar11,(uint)CARRY4(uVar15,uVar8));
    uVar16 = uVar5 + uVar11 + (uint)CARRY4(uVar15,uVar8);
    uVar13 = uVar9 + bVar17;
    lVar1 = (ulonglong)param_6 * 0xe8361973 + ((ulonglong)param_5 * 0xe8361973 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar2 = (ulonglong)param_5 * 0x9598f4f1;
    uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar11 = (uint)(lVar1 + lVar2);
    lVar1 = (ulonglong)param_6 * 0x9598f4f1 +
            (ulonglong)
            CONCAT14(CARRY4(uVar5,uVar7) ||
                     CARRY4(uVar5 + uVar7,(uint)CARRY4((uint)lVar2,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar2) >> 0x20));
    uVar5 = (uint)lVar1;
    bVar18 = CARRY4(uVar14,uVar11) ||
             CARRY4(uVar14 + uVar11,
                    (uint)CARRY4((uint)lVar3,(uint)((ulonglong)param_5 * 0xe8361973)));
    uVar7 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar5,(uint)bVar18);
    bVar18 = CARRY4(uVar15 + uVar8,uVar5 + bVar18);
    bVar19 = CARRY4(uVar16,uVar7) || CARRY4(uVar16 + uVar7,(uint)bVar18);
    uVar11 = uVar13 + bVar19;
    uVar14 = (int)((ulonglong)lVar21 >> 0x20) + (uint)CARRY4(uVar9,(uint)bVar17) +
             (uint)CARRY4(uVar13,(uint)bVar19);
    uVar20 = CONCAT44(uVar14 * 4 | uVar11 >> 0x1e,uVar16 + uVar7 + (uint)bVar18 >> 0x1e | uVar11 * 4
                     );
    uVar14 = uVar14 >> 0x1e;
  }
  lVar21 = uVar20 * 0x7538dcfb76180000 + CONCAT44(param_4,param_3);
  uVar11 = (uint)lVar21;
  iVar4 = 0x14;
  uVar9 = (uint)((ulonglong)lVar21 >> 0x20);
  if (uVar9 == 0 && (9999 < uVar11) <= uVar9) {
    if (-uVar9 < (uint)(uVar11 < 100)) goto LAB_00e58074;
LAB_00e580b4:
    iVar6 = iVar4 + -2;
    uVar9 = (uint)((short)((uVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(local_3c + iVar4 + 1) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar9 * 0xff9c + uVar11 & 0xffff) * 2);
    if (9 < uVar9) goto LAB_00e58084;
LAB_00e580f4:
    iVar4 = iVar6 + -1;
    local_3a[iVar6] = (byte)uVar9 | 0x30;
  }
  else {
    iVar6 = 0;
    do {
      iVar4 = iVar6;
      iVar10 = (int)((ulonglong)lVar21 >> 0x20);
      uVar7 = (uint)lVar21;
      lVar21 = FUN_01846088(uVar7,iVar10,10000,0);
      uVar11 = (uint)lVar21;
      uVar5 = uVar11 * 0xd8f0 + uVar7;
      uVar9 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_29 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
      *(undefined2 *)((int)local_29 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar9 * 0xff9c + uVar5 & 0xffff) * 2);
      iVar6 = iVar4 + -4;
    } while ((uint)(uVar7 < 100000000) <= (uint)-iVar10);
    iVar4 = iVar4 + 0x10;
    if ((uint)(uVar11 < 100) <= (uint)-(int)((ulonglong)lVar21 >> 0x20)) goto LAB_00e580b4;
LAB_00e58074:
    uVar11 = (uint)((ulonglong)lVar21 >> 0x20);
    uVar9 = (uint)lVar21;
    iVar6 = iVar4;
    if (uVar11 == 0 && (9 < uVar9) <= uVar11) goto LAB_00e580f4;
LAB_00e58084:
    iVar4 = iVar6 + -2;
    *(undefined2 *)(local_3c + iVar6 + 1) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
  }
  if (((int)uVar20 == 0 && uVar14 == 0) && (int)(uVar20 >> 0x20) == 0) {
    iVar4 = iVar4 + 0x13;
    piVar12 = local_50;
    goto LAB_00e582f0;
  }
  FUN_016dd606(local_3a + 2,0x30,iVar4 + -1);
  uVar11 = (uint)(uVar20 >> 0x13);
  uVar9 = (uint)((uVar20 >> 0x13) >> 0x20) | uVar14 << 0xd;
  lVar21 = FUN_01846088(uVar11,uVar9,0xe460913d,0x1158);
  uVar20 = lVar21 * 0x7538dcfb76180000 + uVar20;
  uVar14 = (uint)uVar20;
  iVar6 = 0x14;
  uVar5 = (uint)(uVar20 >> 0x20);
  if (uVar5 == 0 && (9999 < uVar14) <= uVar5) {
    if ((uint)(uVar14 < 100) <= -uVar5) goto LAB_00e58248;
  }
  else {
    iVar4 = 0;
    do {
      iVar6 = iVar4;
      iVar10 = (int)(uVar20 >> 0x20);
      uVar8 = (uint)uVar20;
      uVar20 = FUN_01846088(uVar8,iVar10,10000,0);
      uVar14 = (uint)uVar20;
      uVar7 = uVar14 * 0xd8f0 + uVar8;
      uVar5 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(local_3c + iVar6) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      *(undefined2 *)(local_3a + iVar6) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + uVar7 & 0xffff) * 2);
      iVar4 = iVar6 + -4;
    } while ((uint)(uVar8 < 100000000) <= (uint)-iVar10);
    iVar6 = iVar6 + 0x10;
    if ((uint)(uVar14 < 100) <= (uint)-(int)(uVar20 >> 0x20)) {
LAB_00e58248:
      uVar5 = (uint)((short)((uVar14 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(local_4c + iVar6 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + uVar14 & 0xffff) * 2);
      uVar20 = (ulonglong)uVar5;
      iVar6 = iVar6 + -2;
    }
  }
  piVar12 = local_50;
  uVar5 = (uint)(uVar20 >> 0x20);
  uVar14 = (uint)uVar20;
  if (uVar5 == 0 && (9 < uVar14) <= uVar5) {
    iVar4 = iVar6 + -1;
    local_4c[iVar6 + -1] = (byte)uVar20 | 0x30;
  }
  else {
    iVar4 = iVar6 + -2;
    *(undefined2 *)(local_4c + iVar6 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar14 * 2);
  }
  if (0x1158 < uVar9 || uVar9 - 0x1158 < (uint)(0xe460913c < uVar11)) {
    FUN_016dd606(local_4c + 1,0x30,iVar4 + -1,uVar14 - 10);
    iVar4 = 0;
    local_4c[0] = (byte)lVar21 | 0x30;
  }
LAB_00e582f0:
  uVar14 = 0x27 - iVar4;
  iVar6 = piVar12[2];
  if ((uint)(*piVar12 - iVar6) < uVar14) {
    FUN_00edff4c(piVar12,iVar6,uVar14,1,1);
    iVar6 = piVar12[2];
  }
  FUN_016dd1aa(piVar12[1] + iVar6,local_4c + iVar4,uVar14);
  piVar12[2] = iVar6 + uVar14;
  return;
}

