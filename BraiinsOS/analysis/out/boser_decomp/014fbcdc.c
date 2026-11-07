// FUN_014fbcdc @ 014fbcdc size=276 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_014fbcdc(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 extraout_s1;
  double dVar11;
  undefined8 uVar12;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  undefined4 local_2c;
  
  pcVar6 = (char *)param_1[1];
  iVar8 = param_1[2];
  pcVar9 = (char *)*param_1;
  while( true ) {
    if (pcVar9 == pcVar6) {
      return 0;
    }
    cVar2 = *pcVar9;
    *param_1 = pcVar9 + 0x18;
    if (cVar2 != '\x02') break;
    if (*(int *)(pcVar9 + 8) == 2 && *(int *)(pcVar9 + 0xc) == 0) {
      dVar11 = *(double *)(pcVar9 + 0x10);
      uVar10 = FUN_01be6548(SUB84(dVar11,0));
      param_1[2] = iVar8 + 1;
      if (dVar11 - (double)CONCAT44(extraout_s1,uVar10) != 0.0) goto LAB_014fbd6c;
    }
    else {
      param_1[2] = iVar8 + 1;
    }
    iVar8 = iVar8 + 1;
    pcVar9 = pcVar9 + 0x18;
  }
  param_1[2] = iVar8 + 1;
LAB_014fbd6c:
  puVar5 = (undefined4 *)param_1[3];
  piVar7 = (int *)*puVar5;
  do {
    iVar4 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x14fbdec);
    (*pcVar1)();
  }
  uVar10 = puVar5[1];
  FUN_014fbbcc(auStack_58,*(undefined4 *)param_1[4]);
  local_2c = param_1[5];
  local_38 = 0x80000001;
  local_34 = iVar8;
  uVar12 = FUN_01531840(&local_38);
  uVar10 = FUN_01595634(piVar7,uVar10,auStack_58,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),pcVar9
                        ,4);
  return uVar10;
}

