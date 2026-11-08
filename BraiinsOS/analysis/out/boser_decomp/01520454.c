// FUN_01520454 @ 01520454 size=352 calls_out=8 calls_in=1
// strings: multipleOf | multipleOf

void FUN_01520454(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 extraout_s1;
  undefined8 uVar9;
  double dVar10;
  
  if (*param_4 == '\x02') {
    uVar9 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                         "multipleOf",10);
    pdVar7 = (double *)(param_4 + 0x10);
    if (*(int *)(param_4 + 8) == 0) {
      dVar10 = (double)FUN_01bf0e80(*(undefined4 *)pdVar7,*(undefined4 *)(param_4 + 0x14));
    }
    else if (*(int *)(param_4 + 8) == 1) {
      dVar10 = (double)FUN_01bf0cac(*(undefined4 *)pdVar7,*(undefined4 *)(param_4 + 0x14));
    }
    else {
      dVar10 = *pdVar7;
    }
    uVar8 = FUN_01be6548(SUB84(dVar10,0));
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (dVar10 - (double)CONCAT44(extraout_s1,uVar8) == 0.0) {
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x10);
      }
      puVar6 = &DAT_01cfaad0;
    }
    else {
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x10);
      }
      puVar6 = &DAT_01cfaab0;
    }
    *puVar5 = (int)uVar9;
    *(double *)(puVar5 + 2) = dVar10;
    puVar5[1] = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    uVar9 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                         "multipleOf",10);
    uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
    piVar3 = (int *)uVar9;
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15205b4);
      (*pcVar1)();
    }
    uVar9 = FUN_015321a0();
    puVar6 = (undefined *)FUN_015956e0(piVar3,uVar8,piVar3,uVar8,uVar9,param_4,0x10);
    puVar5 = (undefined4 *)0x0;
  }
  param_1[1] = puVar5;
  param_1[2] = puVar6;
  *param_1 = 1;
  return;
}

