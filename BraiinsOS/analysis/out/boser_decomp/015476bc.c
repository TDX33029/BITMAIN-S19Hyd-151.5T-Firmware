// FUN_015476bc @ 015476bc size=456 calls_out=9 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0154773c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_015476bc(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 in_d0;
  undefined4 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 local_60 [3];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  uVar5 = 0;
  if (*param_2 != '\x02') {
    return 0;
  }
  pdVar3 = (double *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 2);
  if (*(int *)(param_2 + 8) == 0) {
    dVar14 = (double)FUN_01bf0e80(*(undefined4 *)pdVar3,*(undefined4 *)(param_2 + 0x14));
  }
  else if (*(int *)(param_2 + 8) == 1) {
    dVar14 = (double)FUN_01bf0cac(*(undefined4 *)pdVar3,*(undefined4 *)(param_2 + 0x14));
  }
  else {
    dVar14 = *pdVar3;
  }
  uVar12 = (undefined4)((ulonglong)in_d0 >> 0x20);
  uVar11 = SUB84(dVar14,0);
  FUN_01be6548(uVar11);
  FUN_01be5c80(uVar11,uVar12,(int)uVar13);
  if (((double)CONCAT44(uVar12,uVar11) != 0.0) || (dVar14 - (double)CONCAT44(uVar12,uVar11) != 0.0))
  {
    piVar6 = (int *)*param_1;
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_01547880:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1547880);
      (*pcVar1)();
    }
    uVar10 = param_1[1];
    if (param_4 == 0) {
      local_60[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar8 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_01547880;
      uVar5 = *(undefined4 *)(param_4 + 0x10);
      piVar9 = piVar6 + 2;
      uVar7 = (*(int **)(param_4 + 4))[1];
      if (uVar10 < uVar7) {
        uVar7 = 0;
      }
      else {
        iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar7);
        if (iVar4 != 0) {
          uVar7 = 0;
        }
        piVar9 = (int *)((int)piVar9 + uVar7);
      }
      local_48 = FUN_016bc0ec(piVar9,uVar10 - uVar7);
      local_54 = 3;
      local_60[0] = 2;
      local_50 = piVar8;
      local_4c = uVar5;
    }
    uVar5 = FUN_01531840(param_3);
    uVar5 = FUN_01594618((int)uVar13,piVar6,uVar10,local_60,uVar5);
  }
  return uVar5;
}

