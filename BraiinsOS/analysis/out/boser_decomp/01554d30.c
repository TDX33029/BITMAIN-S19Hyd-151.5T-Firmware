// FUN_01554d30 @ 01554d30 size=144 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01554d30(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [32];
  
  if (*param_2 == '\0') {
    uVar5 = 0;
  }
  else {
    piVar4 = (int *)*param_1;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1554dbc);
      (*pcVar1)();
    }
    uVar5 = param_1[1];
    FUN_01508624(auStack_38,param_4,piVar4,uVar5);
    uVar6 = FUN_01531840(param_3);
    uVar5 = FUN_01595634(piVar4,uVar5,auStack_38,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),param_2,
                         8);
  }
  return uVar5;
}

