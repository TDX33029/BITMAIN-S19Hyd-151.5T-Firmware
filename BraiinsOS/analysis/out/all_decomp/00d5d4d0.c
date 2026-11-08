// FUN_00d5d4d0 @ 00d5d4d0 size=532 calls_out=6 calls_in=1
// strings: BUG: impossible

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00d5d5e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00d5d4d0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint unaff_r7;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  
  piVar3 = &local_78;
  FUN_00c31a94(piVar3,*(undefined4 *)(param_3[0x82] + 4),*(undefined4 *)(param_3[0x82] + 8));
  if (local_78 != 5 || local_74 != 0) {
    VectorUnsignedToFloat(*(undefined4 *)(param_3[0x76] + 0xc4),(byte)(in_fpscr >> 0x16) & 3);
                    /* WARNING: Could not recover jumptable at 0x00d5d5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00d5d5ac + *(int *)(&DAT_00d5d5ac + local_78 * 4)))
              (*(undefined4 *)(param_3[0x76] + 0xc4),local_70,uStack_6c,
               *(int *)(&DAT_00d5d5ac + local_78 * 4),local_64);
    return param_1;
  }
  uVar2 = param_3[0x81];
  if ((*param_3 & 1) == 0) {
    dVar6 = (double)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (dVar6 - *(double *)(param_3 + 4)) / *(double *)(param_3 + 2);
    FUN_016d5622(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),(int)*(undefined8 *)(uVar2 + 0x30));
  }
  else {
    dVar6 = *(double *)(uVar2 + 0x30);
  }
  bVar5 = *(int *)(uVar2 + 0xbc) != 0;
  if (bVar5) {
    unaff_r7 = param_3[0x76];
    piVar3 = *(int **)(unaff_r7 + 0xbc);
  }
  if (!bVar5 || piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01879bd0);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x96);
  uVar8 = *(undefined8 *)(param_3 + 0x98);
  uVar1 = FUN_018462e8(*(undefined4 *)(uVar2 + 0xb8));
  dVar9 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar6 = dVar6 * dVar9;
  uVar1 = (undefined4)((ulonglong)dVar6 >> 0x20);
  FUN_016d5578(SUB84(dVar6,0),uVar1,(int)uVar7);
  FUN_016d5622(SUB84(dVar6,0),uVar1,(int)uVar8);
  uVar4 = *(undefined4 *)(unaff_r7 + 0xb8);
  uVar1 = FUN_018462e8(uVar4,piVar3);
  dVar9 = (double)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  dVar11 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  dVar9 = (dVar6 / dVar11) * (dVar6 / dVar11) * dVar10 *
          (*(double *)(param_3 + 0x6c) + (dVar9 / 1000000.0) * *(double *)(param_3 + 0x6a)) *
          (*(double *)(param_3 + 0x6e) * (double)(float)param_3[0x74] + 1.0);
  dVar6 = *(double *)(param_3 + 0x9e);
  if (!NAN(dVar6)) {
    if (NAN(dVar9)) {
      return SUB84(dVar9,0);
    }
    if (dVar6 <= dVar9) {
      if (NAN(dVar6) || NAN(dVar9)) {
        dVar6 = dVar9;
      }
      return SUB84(dVar6,0);
    }
    if (dVar6 < dVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
    }
  }
  return SUB84(dVar6,0);
}

