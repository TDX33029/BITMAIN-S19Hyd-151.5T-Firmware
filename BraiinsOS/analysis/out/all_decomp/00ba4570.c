// FUN_00ba4570 @ 00ba4570 size=504 calls_out=3 calls_in=0
// strings: 

void FUN_00ba4570(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  double *pdVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034f831,0x16,&DAT_01870cac);
  }
  if (*param_2 == 1) {
    pdVar9 = (double *)(param_2 + 2);
    dVar15 = -0.0;
    iVar4 = param_3;
    do {
      dVar16 = *pdVar9;
      pdVar1 = pdVar9 + -1;
      pdVar9 = pdVar9 + 10;
      if (*(int *)pdVar1 != 0) {
        dVar15 = dVar15 + dVar16;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    dVar17 = *(double *)(param_4 + 0x1c0);
    dVar18 = *(double *)(param_4 + 0x1c8);
    *param_1 = 5;
    param_1[1] = 0;
    dVar16 = (double)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    *(double *)(param_1 + 2) = (dVar15 + dVar18 + dVar17 * 100.0) / dVar16;
    return;
  }
  puVar12 = (uint *)(param_2 + 1);
  iVar3 = *(int *)(param_4 + 0x204);
  iVar4 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar14 = 0;
  uVar11 = 0;
  uVar13 = 0;
  iVar5 = 0;
  iVar10 = param_3;
  do {
    if (puVar12[-1] == 0) {
      uVar8 = *puVar12;
      lVar2 = (ulonglong)uVar8 * (ulonglong)(uint)(*(int *)(iVar3 + 0xb8) * *(int *)(iVar3 + 0x6c));
      local_48 = (double)FUN_0184590c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),0,0,param_1);
      local_48 = local_48 * 1e-12;
      local_4c = 0;
      local_50 = 4;
      local_68 = iVar4;
      local_64 = uVar7;
      local_60 = uVar6;
      uStack_5c = uVar14;
      local_58 = uVar11;
      local_54 = uVar13;
      FUN_010e1750(&local_80,&local_68,&local_50);
      iVar5 = uVar8 + iVar5;
      uVar6 = local_78;
      iVar4 = local_80;
      uVar7 = uStack_7c;
      uVar11 = local_70;
      uVar13 = local_6c;
      uVar14 = uStack_74;
    }
    puVar12 = puVar12 + 0x14;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  dVar16 = (double)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  dVar15 = (double)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  dVar15 = (((dVar16 / 1000000.0) * 1.1) / dVar15) * 1000000.0;
                    /* WARNING: Could not recover jumptable at 0x00ba474c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00ba4750 + *(int *)(&LAB_00ba4750 + iVar4 * 4)))
            ((uint)(0.0 < dVar15) * (int)(longlong)dVar15);
  return;
}

