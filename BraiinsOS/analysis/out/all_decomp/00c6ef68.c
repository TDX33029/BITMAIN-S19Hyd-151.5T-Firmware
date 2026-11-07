// FUN_00c6ef68 @ 00c6ef68 size=664 calls_out=9 calls_in=1
// strings: 

undefined4 FUN_00c6ef68(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint in_fpscr;
  undefined4 uVar18;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  uint local_50;
  undefined1 uStack_49;
  
  iVar6 = *(int *)(param_1 + 0x90);
  uVar11 = *(uint *)(param_1 + 0x28);
  local_50 = uVar11;
  if (uVar11 != *(uint *)(iVar6 + 200)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_50,iVar6 + 200,&DAT_0035558b,0xbb,&DAT_01874058);
  }
  iVar9 = *(int *)(iVar6 + 0xcc);
  uVar15 = iVar9 * param_2;
  uVar2 = iVar9 * param_2 + iVar9;
  if (uVar2 <= uVar15) {
    return 0;
  }
  dVar21 = (double)FUN_01845f30(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  dVar20 = (double)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  dVar19 = -0.0;
  dVar21 = dVar20 / 1000000000.0 + dVar21;
  uVar13 = uVar15;
  puVar14 = (undefined4 *)(*(int *)(param_1 + 0x24) + uVar15 * 0xc);
  do {
    if (uVar11 <= uVar13) {
      if (uVar15 < uVar11) {
        uVar15 = uVar11;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar15,uVar11,&DAT_0186aaa8);
    }
    if (dVar21 == 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034ad0f,0x1f,&uStack_49,&DAT_0186ab28,&DAT_0186aa88);
    }
    uVar18 = FUN_0184590c(0,*puVar14,0,0);
    dVar20 = (double)CONCAT44(extraout_s1,uVar18) / dVar21;
    uVar22 = FUN_01845bac(SUB84(dVar20,0));
    if (dVar20 < 0.0) {
      uVar22 = 0;
    }
    if (3.4028236692093843e+38 < dVar20) {
      uVar22 = 0xffffffffffffffff;
    }
    uVar18 = FUN_0184590c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    dVar19 = dVar19 + (double)CONCAT44(extraout_s1_00,uVar18);
    uVar13 = uVar13 + 1;
    iVar9 = iVar9 + -1;
    puVar14 = puVar14 + 3;
  } while (iVar9 != 0);
  iVar16 = *(int *)(param_1 + 0x6c);
  uVar13 = *(uint *)(param_1 + 0x70);
  dVar21 = -0.0;
  iVar9 = *(int *)(iVar6 + 0x30);
  uVar11 = uVar15;
  do {
    if (iVar9 == -0x80000000) {
      uVar3 = *(uint *)(iVar6 + 0x7c);
    }
    else {
      if (*(int *)(iVar6 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_0186ac38);
      }
      uVar3 = FUN_018462e8(*(undefined4 *)(iVar6 + 0x7c));
    }
    if (uVar13 <= uVar11) {
      if (uVar15 < uVar13) {
        uVar15 = uVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar15,uVar13,&DAT_0186ac48);
    }
    iVar4 = iVar16 + uVar11 * 0x18;
    if (*(int *)(iVar4 + 0x14) == 0) {
      uVar5 = 0;
      uVar12 = 0;
    }
    else {
      puVar7 = *(uint **)(iVar4 + 0x10);
      iVar8 = *(int *)(iVar4 + 0x14) << 2;
      uVar5 = 0;
      uVar12 = 0;
      do {
        if (*(uint *)(iVar4 + 8) <= *puVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
        }
        uVar10 = *(uint *)(*(int *)(iVar4 + 4) + *puVar7 * 4);
        puVar7 = puVar7 + 1;
        bVar17 = CARRY4(uVar5,uVar10);
        uVar5 = uVar5 + uVar10;
        uVar12 = uVar12 + bVar17;
        iVar8 = iVar8 + -4;
      } while (iVar8 != 0);
    }
    uVar11 = uVar11 + 1;
    lVar1 = (ulonglong)uVar3 * (ulonglong)uVar12 + ((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20);
    uVar18 = FUN_0184590c((int)((ulonglong)uVar3 * (ulonglong)uVar5),(int)lVar1,
                          (int)((ulonglong)lVar1 >> 0x20),0);
    dVar21 = dVar21 + (double)CONCAT44(extraout_s1_01,uVar18);
  } while (uVar11 != uVar2);
  return SUB84(dVar19 / dVar21,0);
}

