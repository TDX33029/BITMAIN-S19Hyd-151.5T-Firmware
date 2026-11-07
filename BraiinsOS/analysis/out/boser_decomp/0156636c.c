// FUN_0156636c @ 0156636c size=184 calls_out=0 calls_in=2
// strings: 

void FUN_0156636c(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    return;
  }
  piVar6 = (int *)*param_2;
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar5 = (int *)param_2[1];
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar7 = (int *)param_2[4];
      uVar8 = param_2[2];
      if (piVar7 != (int *)0x0) {
        do {
          iVar4 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_01566414;
      }
      puVar2 = (uint *)param_2[3];
      do {
        uVar3 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar3 + 1;
      if (uVar3 < 0x80000000) {
        *param_1 = piVar6;
        param_1[1] = piVar5;
        param_1[2] = uVar8;
      }
      if (-1 < (int)uVar3) {
        param_1[3] = puVar2;
        param_1[4] = piVar7;
        return;
      }
    }
  }
LAB_01566414:
  software_udf(0xfdee,0x1566414);
  return;
}

