// FUN_0087c634 @ 0087c634 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_0087c634(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_2 + 0x184);
  piVar5 = *(int **)(iVar4 + 8);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + 1;
  if (iVar2 < 0) {
    software_udf(0xfdee,0x87c664);
    return;
  }
  uVar3 = *(undefined4 *)(iVar4 + 0xc);
  *param_1 = *(undefined4 *)(iVar4 + 8);
  param_1[1] = uVar3;
  return;
}

