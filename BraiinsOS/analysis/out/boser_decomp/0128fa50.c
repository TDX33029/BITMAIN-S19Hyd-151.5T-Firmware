// FUN_0128fa50 @ 0128fa50 size=588 calls_out=2 calls_in=4
// strings: 

void FUN_0128fa50(longlong *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined *local_2c;
  undefined4 local_28;
  
  uVar6 = param_3[1];
  uVar7 = param_2[1];
  uVar20 = *param_3;
  puVar13 = (undefined1 *)param_3[2];
  puVar11 = (undefined1 *)param_2[2];
  uVar19 = *param_2;
  uVar14 = (int)puVar11 - (int)puVar13;
  local_2c = &DAT_00405072;
  local_28 = 0xf;
  uVar22 = FUN_01bf0fb0(uVar14,-(uint)(puVar11 < puVar13),&DAT_3b9aca00,0);
  lVar4 = (uVar22 & 0xffffffff) * 1000000000;
  uVar8 = (uint)lVar4;
  puVar17 = (undefined1 *)(uVar14 - uVar8);
  iVar9 = -(uint)(puVar11 < puVar13) -
          ((int)(uVar22 >> 0x20) * 1000000000 + (int)((ulonglong)lVar4 >> 0x20) +
          (uint)(uVar14 < uVar8));
  if (iVar9 < 0) {
    puVar17 = &DAT_3b9aca00 + (int)puVar17;
  }
  puVar12 = puVar17;
  if (999999999 < (int)puVar17) {
    puVar12 = puVar17 + -1000000000;
  }
  iVar1 = (int)uVar19 >> 0xd;
  iVar18 = iVar1 % 400;
  iVar10 = (int)uVar20 >> 0xd;
  iVar21 = iVar18;
  if (iVar18 < 0) {
    iVar21 = iVar18 + 400;
  }
  iVar16 = iVar10 % 400;
  iVar15 = iVar16;
  if (iVar16 < 0) {
    iVar15 = iVar16 + 400;
  }
  if (&DAT_3b9ac9ff < puVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0128ec48(&local_2c);
  }
  bVar2 = ""[iVar15];
  bVar3 = ""[iVar21];
  iVar10 = (int)((ulonglong)((longlong)iVar10 * -0x51eb851f) >> 0x20);
  *(undefined1 **)(param_1 + 1) = puVar12;
  lVar4 = (longlong)
          ((iVar1 / 400 + (iVar18 >> 0x1f) + ((iVar10 >> 7) - (iVar10 >> 0x1f))) - (iVar16 >> 0x1f))
          * 0x23ab1 + (ulonglong)((iVar21 * 0x16d + ((uVar19 & 0x1fff) >> 4) + (uint)bVar3) - 1);
  uVar19 = (uint)lVar4;
  uVar8 = -(uint)(&DAT_3b9ac9ff < puVar11 && uVar7 < uVar6);
  uVar14 = uVar8;
  if (uVar6 < uVar7 && &DAT_3b9ac9ff < puVar13) {
    uVar14 = 0;
    uVar8 = 1;
  }
  uVar20 = (iVar15 * 0x16d + ((uVar20 & 0x1fff) >> 4) + (uint)bVar2) - 1;
  lVar5 = (ulonglong)(uVar19 - uVar20) * 0x15180;
  iVar9 = iVar9 >> 0x1f;
  lVar4 = uVar22 + CONCAT44(iVar9,iVar9) +
          CONCAT44((uVar14 - (uVar7 < uVar6)) + (uint)CARRY4(uVar7 - uVar6,uVar8),
                   (uVar7 - uVar6) + uVar8) +
          CONCAT44(((int)((ulonglong)lVar4 >> 0x20) - (uint)(uVar19 < uVar20)) * 0x15180 +
                   (int)((ulonglong)lVar5 >> 0x20),(int)lVar5);
  lVar5 = lVar4 + 1;
  if ((int)puVar17 < 1000000000) {
    lVar5 = lVar4;
  }
  *param_1 = lVar5;
  return;
}

