// FUN_0156f670 @ 0156f670 size=128 calls_out=0 calls_in=2
// strings: 

void FUN_0156f670(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  piVar4 = *(int **)(param_2 + 0x54);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (-1 < iVar5) {
    piVar6 = *(int **)(param_2 + 0x38);
    uVar7 = *(undefined4 *)(param_2 + 0x3c);
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar3 = *(int **)(param_2 + 0x58);
      if (piVar3 != (int *)0x0) {
        do {
          iVar5 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_0156f6ec;
      }
      *param_1 = piVar4;
      param_1[1] = piVar6;
      param_1[2] = uVar7;
      param_1[3] = piVar3;
      return;
    }
  }
LAB_0156f6ec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x156f6ec);
  (*pcVar1)();
}

