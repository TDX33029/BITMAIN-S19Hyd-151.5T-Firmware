// FUN_01546624 @ 01546624 size=108 calls_out=2 calls_in=4
// strings: 

void FUN_01546624(void)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 in_stack_00000000;
  
  uVar6 = FUN_015345a4();
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  piVar3 = (int *)uVar6;
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (-1 < iVar5) {
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (-1 < iVar5) {
      FUN_015956e0(piVar3,uVar4,piVar3,uVar4,uVar6,in_stack_00000000,0x40);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x154668c);
  (*pcVar1)();
}

