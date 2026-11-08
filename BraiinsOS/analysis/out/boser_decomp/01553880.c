// FUN_01553880 @ 01553880 size=152 calls_out=4 calls_in=1
// strings: 

undefined4
FUN_01553880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [32];
  
  uVar2 = *(undefined1 *)(param_1 + 2);
  iVar4 = FUN_01596a18(uVar2);
  uVar5 = 0;
  if (iVar4 == 0) {
    piVar6 = (int *)*param_1;
    do {
      iVar4 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1553914);
      (*pcVar1)();
    }
    uVar5 = param_1[1];
    FUN_01508624(auStack_40,param_4,piVar6,uVar5);
    uVar7 = FUN_01531840(param_3);
    uVar5 = FUN_015959c4(piVar6,uVar5,auStack_40,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_2,
                         uVar2);
  }
  return uVar5;
}

