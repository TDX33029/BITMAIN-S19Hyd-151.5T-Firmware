// FUN_0151fa7c @ 0151fa7c size=200 calls_out=4 calls_in=1
// strings: pattern

void FUN_0151fa7c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_68 [17];
  
  if (*param_4 == '\x03') {
    FUN_0157cf50(local_68,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x0151fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0151fac4 + *(int *)(&DAT_0151fac4 + local_68[0] * 4)))();
    return;
  }
  uVar6 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"pattern",7);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  piVar3 = (int *)uVar6;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x151feb8);
    (*pcVar1)();
  }
  uVar6 = FUN_015321a0();
  uVar5 = FUN_015956e0(piVar3,uVar5,piVar3,uVar5,uVar6,param_4,0x40);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = uVar5;
  return;
}

