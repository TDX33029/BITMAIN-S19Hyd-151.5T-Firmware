// FUN_01555208 @ 01555208 size=136 calls_out=3 calls_in=2
// strings: 

void FUN_01555208(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_015345a4(param_2,param_3,param_4,param_5);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  piVar3 = (int *)uVar6;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x155528c);
    (*pcVar1)();
  }
  uVar6 = FUN_015321a0();
  uVar5 = FUN_015956e0(piVar3,uVar5,piVar3,uVar5,uVar6,param_6,0x10);
  *param_1 = 0;
  param_1[1] = uVar5;
  return;
}

