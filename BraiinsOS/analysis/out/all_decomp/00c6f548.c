// FUN_00c6f548 @ 00c6f548 size=476 calls_out=8 calls_in=2
// strings: 

undefined4 FUN_00c6f548(int param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  undefined4 uVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 uStack_29;
  
  if (*(uint *)(param_1 + 0x28) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_2,*(uint *)(param_1 + 0x28),&DAT_0186aaa8);
  }
  dVar13 = (double)FUN_01845f30(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  dVar12 = (double)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  dVar13 = dVar12 / 1000000000.0 + dVar13;
  if (dVar13 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034ad0f,0x1f,&uStack_29,&DAT_0186ab28,&DAT_0186aa88);
  }
  iVar2 = *(int *)(param_1 + 0x90);
  iVar8 = *(int *)(param_1 + 0x6c);
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 0xc);
  uVar6 = *(uint *)(param_1 + 0x70);
  if (*(int *)(iVar2 + 0x30) == -0x80000000) {
    uVar4 = *(uint *)(iVar2 + 0x7c);
  }
  else {
    if (*(int *)(iVar2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0186ac38);
    }
    uVar4 = FUN_018462e8(*(undefined4 *)(iVar2 + 0x7c));
  }
  if (uVar6 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_2,uVar6,&DAT_0186ac48);
  }
  iVar8 = iVar8 + param_2 * 0x18;
  if (*(int *)(iVar8 + 0x14) == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = *(uint **)(iVar8 + 0x10);
    iVar2 = *(int *)(iVar8 + 0x14) << 2;
    uVar6 = 0;
    uVar7 = 0;
    do {
      if (*(uint *)(iVar8 + 8) <= *puVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
      }
      uVar5 = *(uint *)(*(int *)(iVar8 + 4) + *puVar3 * 4);
      puVar3 = puVar3 + 1;
      bVar10 = CARRY4(uVar6,uVar5);
      uVar6 = uVar6 + uVar5;
      uVar7 = uVar7 + bVar10;
      iVar2 = iVar2 + -4;
    } while (iVar2 != 0);
  }
  uVar9 = FUN_0184590c(0,uVar9,0,0);
  dVar13 = (double)CONCAT44(extraout_s1,uVar9) / dVar13;
  uVar14 = FUN_01845bac(SUB84(dVar13,0));
  if (dVar13 < 0.0) {
    uVar14 = 0;
  }
  if (3.4028236692093843e+38 < dVar13) {
    uVar14 = 0xffffffffffffffff;
  }
  uVar9 = FUN_0184590c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar7 + ((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20);
  uVar11 = FUN_0184590c((int)((ulonglong)uVar4 * (ulonglong)uVar6),(int)lVar1,
                        (int)((ulonglong)lVar1 >> 0x20),0);
  return SUB84((double)CONCAT44(extraout_s1_00,uVar9) / (double)CONCAT44(extraout_s1_01,uVar11),0);
}

