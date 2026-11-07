// FUN_00f6ba94 @ 00f6ba94 size=632 calls_out=2 calls_in=2
// strings: 

void FUN_00f6ba94(longlong *param_1,uint *param_2,uint *param_3)

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
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined *local_34;
  undefined4 local_30;
  undefined **local_2c;
  undefined4 *local_28;
  
  uVar6 = param_3[1];
  uVar20 = *param_3;
  uVar13 = param_3[2];
  uVar7 = param_2[1];
  uVar19 = *param_2;
  uVar11 = param_2[2];
  uVar15 = uVar11 - uVar13;
  uVar22 = FUN_01846048(uVar15,-(uint)(uVar11 < uVar13),&DAT_3b9aca00,0);
  lVar4 = (uVar22 & 0xffffffff) * 1000000000;
  uVar8 = (uint)lVar4;
  puVar18 = (undefined1 *)(uVar15 - uVar8);
  iVar9 = -(uint)(uVar11 < uVar13) -
          ((int)(uVar22 >> 0x20) * 1000000000 + (int)((ulonglong)lVar4 >> 0x20) +
          (uint)(uVar15 < uVar8));
  if (iVar9 < 0) {
    puVar18 = &DAT_3b9aca00 + (int)puVar18;
  }
  puVar14 = puVar18;
  if (999999999 < (int)puVar18) {
    puVar14 = puVar18 + -1000000000;
  }
  iVar1 = (int)uVar19 >> 0xd;
  iVar16 = iVar1 % 400;
  iVar12 = (int)uVar20 >> 0xd;
  iVar21 = iVar16;
  if (iVar16 < 0) {
    iVar21 = iVar16 + 400;
  }
  iVar17 = iVar12 % 400;
  iVar10 = iVar17;
  if (iVar17 < 0) {
    iVar10 = iVar17 + 400;
  }
  if (&DAT_3b9aca00 <= puVar14) {
    local_28 = &DAT_0157d360;
    local_2c = &local_34;
    local_30 = 0xf;
    local_34 = &DAT_0035d4a6;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018802ac);
  }
  iVar12 = (int)((ulonglong)((longlong)iVar12 * -0x51eb851f) >> 0x20);
  bVar2 = (&DAT_0035cf22)[iVar10];
  bVar3 = (&DAT_0035cf22)[iVar21];
  *(undefined1 **)(param_1 + 1) = puVar14;
  lVar4 = (longlong)
          ((iVar1 / 400 + (iVar16 >> 0x1f) + ((iVar12 >> 7) - (iVar12 >> 0x1f))) - (iVar17 >> 0x1f))
          * 0x23ab1 + (ulonglong)((iVar21 * 0x16d + ((uVar19 & 0x1fff) >> 4) + (uint)bVar3) - 1);
  uVar15 = (uint)lVar4;
  uVar8 = -(uint)(999999999 < uVar11 && uVar7 < uVar6);
  uVar11 = uVar8;
  if (uVar6 < uVar7 && 999999999 < uVar13) {
    uVar11 = 0;
    uVar8 = 1;
  }
  uVar13 = (iVar10 * 0x16d + ((uVar20 & 0x1fff) >> 4) + (uint)bVar2) - 1;
  lVar5 = (ulonglong)(uVar15 - uVar13) * 0x15180;
  iVar9 = iVar9 >> 0x1f;
  lVar4 = uVar22 + CONCAT44(iVar9,iVar9) +
          CONCAT44((uVar11 - (uVar7 < uVar6)) + (uint)CARRY4(uVar7 - uVar6,uVar8),
                   (uVar7 - uVar6) + uVar8) +
          CONCAT44(((int)((ulonglong)lVar4 >> 0x20) - (uint)(uVar15 < uVar13)) * 0x15180 +
                   (int)((ulonglong)lVar5 >> 0x20),(int)lVar5);
  lVar5 = lVar4 + 1;
  if ((int)puVar18 < 1000000000) {
    lVar5 = lVar4;
  }
  *param_1 = lVar5;
  return;
}

