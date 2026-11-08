// FUN_00ba5250 @ 00ba5250 size=636 calls_out=6 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00ba5550 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00ba5250(float param_1,uint param_2,double *param_3,int param_4,uint *param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_fpscr;
  double dVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  FUN_00c6fdc8(param_7);
  dVar19 = (double)CONCAT44(param_2,param_1);
  uVar1 = FUN_00c6f758(param_7);
  if (param_6 == 0) {
    param_1 = *(float *)(param_4 + 0x1d0);
    iVar4 = *(int *)(param_4 + 0x1d8);
    iVar8 = *(int *)(iVar4 + 0xbc);
  }
  else {
    if (param_6 != 1) {
      param_1 = 60.0;
    }
    iVar4 = *(int *)(param_4 + 0x1d8);
    iVar8 = *(int *)(iVar4 + 0xbc);
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01879bd0);
  }
  uVar9 = *param_5;
  uVar10 = param_5[1];
  dVar12 = (double)((ulonglong)param_2 << 0x20);
  uVar2 = *(uint *)(param_4 + 0x538);
  uVar11 = uVar9 ^ 5;
  uVar5 = *(undefined4 *)(iVar4 + 0xb8);
  dVar18 = *(double *)(param_4 + 0x1a8);
  dVar15 = *(double *)(param_4 + 0x1b0);
  dVar16 = *(double *)(param_4 + 0x1b8);
  uVar6 = *(undefined4 *)(param_7 + 8);
  if (uVar2 == 5 && *(int *)(param_4 + 0x53c) == 0) {
    if (uVar11 == 0 && uVar10 == 0) {
      dVar12 = *(double *)(param_4 + 0x540) / *(double *)(param_5 + 2);
    }
  }
  else if (uVar11 != 0 || uVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ba5334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_00ba5338 + *(int *)(&LAB_00ba5338 + uVar2 * 4)))
              (*(int *)(&LAB_00ba5338 + uVar2 * 4),*(undefined4 *)(param_4 + 0x544),
               *(undefined4 *)(param_4 + 0x540));
    return;
  }
  FUN_016d5578(SUB84(dVar12,0));
  iVar7 = *(int *)(param_4 + 0x558);
  iVar4 = *(int *)(param_4 + 0x55c);
  if (iVar7 == 6 && iVar4 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    dVar17 = dVar12;
    if (uVar11 == 0 && uVar10 == 0) {
      if (iVar7 == 5 && iVar4 == 0) {
        dVar17 = *(double *)(param_5 + 2) / *(double *)(param_4 + 0x560);
      }
    }
    else if (iVar7 != 5 || iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ba5494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_00ba5498 + *(int *)(&LAB_00ba5498 + uVar9 * 4)))(param_5[2],param_5[3]);
      return;
    }
    uVar13 = SUB84(dVar17,0);
    FUN_016d5622(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),uVar13);
  }
  uVar3 = FUN_018462e8(uVar5,iVar8);
  dVar17 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  dVar14 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(uint *)(param_4 + 0x538) = *param_5;
  *(uint *)(param_4 + 0x53c) = uVar2;
  *(uint *)(param_4 + 0x540) = uVar9;
  *(uint *)(param_4 + 0x544) = uVar10;
  uVar2 = param_5[5];
  uVar9 = param_5[6];
  uVar10 = param_5[7];
  *(uint *)(param_4 + 0x548) = param_5[4];
  *(uint *)(param_4 + 0x54c) = uVar2;
  *(uint *)(param_4 + 0x550) = uVar9;
  *(uint *)(param_4 + 0x554) = uVar10;
  uVar1 = FUN_00c6f758(param_7);
  dVar19 = dVar19 / dVar17;
  dVar20 = (double)VectorUnsignedToFloat
                             (*(undefined4 *)(*(int *)(param_4 + 0x204) + 0x44),
                              (byte)(in_fpscr >> 0x16) & 3);
  dVar21 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  dVar17 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_016d5578(SUB84(dVar20 / 1000000.0,0));
  dVar17 = (dVar17 / 1000000.0) / (dVar20 / 1000000.0);
  *(undefined1 *)(param_3 + 3) = 0;
  dVar20 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  param_3[2] = dVar12;
  FUN_016d5622(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),uVar13);
  *param_3 = (1.0 / dVar12) *
             (dVar15 + (dVar14 / 1000000.0) * dVar18) * (dVar16 * (double)param_1 + 1.0) *
             dVar19 * dVar19 * dVar21 * dVar20;
  param_3[1] = dVar17;
  return;
}

