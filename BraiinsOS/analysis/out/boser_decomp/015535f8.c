// FUN_015535f8 @ 015535f8 size=208 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_015535f8(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [32];
  
  if ((*param_2 != '\x02') ||
     ((uVar4 = 0, *(int *)(param_2 + 8) == 2 && *(int *)(param_2 + 0xc) == 0 &&
      (dVar7 = *(double *)(param_2 + 0x10), uVar6 = FUN_01be6548(SUB84(dVar7,0)),
      dVar7 - (double)CONCAT44(extraout_s1,uVar6) != 0.0)))) {
    piVar5 = (int *)*param_1;
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15536c4);
      (*pcVar1)();
    }
    uVar4 = param_1[1];
    FUN_01508624(auStack_48,param_4,piVar5,uVar4);
    uVar8 = FUN_01531840(param_3);
    uVar4 = FUN_01595634(piVar5,uVar4,auStack_48,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_2,
                         4);
  }
  return uVar4;
}

