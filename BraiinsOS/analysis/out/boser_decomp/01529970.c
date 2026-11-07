// FUN_01529970 @ 01529970 size=536 calls_out=9 calls_in=1
// strings: 

void FUN_01529970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  double *pdVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_s1;
  double dVar8;
  undefined8 uVar9;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  pcVar3 = (char *)FUN_0196b3a8(param_2,param_3,param_6,0xb);
  if (pcVar3 == (char *)0x0) {
    *param_1 = 2;
    return;
  }
  if (*pcVar3 == '\x02') {
    piVar4 = (int *)(pcVar3 + 8);
    if (*piVar4 == 0 && *(int *)(pcVar3 + 0xc) == 0) {
      uVar7 = *(undefined4 *)(pcVar3 + 0x14);
      param_1[2] = *(undefined4 *)(pcVar3 + 0x10);
      *param_1 = 0;
      param_1[3] = uVar7;
      return;
    }
    if (*piVar4 == 0) {
      if (*(int *)(pcVar3 + 0x14) < 0) goto LAB_015299dc;
    }
    else if (*piVar4 != 1) {
LAB_015299dc:
      pdVar5 = (double *)(pcVar3 + 0x10);
      if (*piVar4 == 2) {
        dVar8 = *pdVar5;
      }
      else if (*piVar4 == 1) {
        dVar8 = (double)FUN_01bf0cac(*(undefined4 *)pdVar5,*(undefined4 *)(pcVar3 + 0x14));
      }
      else {
        dVar8 = (double)FUN_01bf0e80(*(undefined4 *)pdVar5,*(undefined4 *)(pcVar3 + 0x14));
      }
      uVar7 = FUN_01be6548(SUB84(dVar8,0));
      if ((double)CONCAT44(extraout_s1,uVar7) == dVar8) {
        *param_1 = 0;
        uVar9 = FUN_01bf0b64(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
        if (dVar8 < 0.0) {
          uVar9 = 0;
        }
        if (1.844674407370955e+19 < dVar8) {
          uVar9 = 0xffffffffffffffff;
        }
        *(undefined8 *)(param_1 + 2) = uVar9;
        return;
      }
      goto LAB_01529b10;
    }
    uVar9 = FUN_015345a4(param_4,param_5,param_6,0xb);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    piVar4 = (int *)uVar9;
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01529b84;
    uVar9 = FUN_015321a0();
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_40[0] = 2;
    uVar7 = FUN_0159610c(piVar4,uVar7,piVar4,uVar7,uVar9,pcVar3,local_40);
  }
  else {
LAB_01529b10:
    uVar9 = FUN_015345a4(param_4,param_5,param_6,0xb);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    piVar4 = (int *)uVar9;
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_01529b84:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1529b84);
      (*pcVar1)();
    }
    uVar9 = FUN_015321a0();
    uVar7 = FUN_015956e0(piVar4,uVar7,piVar4,uVar7,uVar9,pcVar3,4);
  }
  *param_1 = 1;
  param_1[1] = uVar7;
  return;
}

