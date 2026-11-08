// FUN_008ecae4 @ 008ecae4 size=216 calls_out=0 calls_in=1
// strings: 

int FUN_008ecae4(int *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)param_1[1]) {
    return 0;
  }
  piVar7 = (int *)param_1[3];
  iVar8 = *piVar4;
  *param_1 = (int)(piVar4 + 1);
  piVar4 = (int *)(*(int *)(param_1[2] + 0x3bc) + -4);
  iVar5 = *(int *)(param_1[2] + 0x3c0) << 2;
  while (iVar5 != 0) {
    piVar4 = piVar4 + 1;
    piVar6 = (int *)*piVar4;
    iVar5 = iVar5 + -4;
    if (piVar6[0xe3] == iVar8) {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) {
        software_udf(0xfdee,0x8ecb54);
        return iVar5;
      }
      return *piVar4;
    }
  }
  if (*piVar7 == 0) {
    bVar1 = *(byte *)(piVar7 + 2);
    cVar3 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar3 = '\x04';
    }
    iVar5 = 0xc;
    if ((cVar3 != '\x05') && (cVar3 != '\x04' || bVar1 != 3)) goto LAB_008ecbb0;
  }
  else {
    iVar5 = 4;
    if (*piVar7 != 2) goto LAB_008ecbb0;
  }
  (**(code **)**(undefined4 **)((int)piVar7 + iVar5))();
LAB_008ecbb0:
  *piVar7 = 6;
  piVar7[1] = iVar8;
  return 0;
}

