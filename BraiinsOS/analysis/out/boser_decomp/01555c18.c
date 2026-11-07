// FUN_01555c18 @ 01555c18 size=156 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_01555c18(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [32];
  
  uVar3 = 0;
  if ((*param_2 == '\x05') && (*(int *)(param_2 + 0xc) != 0)) {
    piVar5 = (int *)*param_1;
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1555cb0);
      (*pcVar1)();
    }
    uVar3 = param_1[1];
    FUN_01508624(auStack_38,param_4,piVar5,uVar3);
    uVar6 = FUN_01531840(param_3);
    uVar3 = FUN_015946b8(piVar5,uVar3,auStack_38,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),param_2)
    ;
  }
  return uVar3;
}

