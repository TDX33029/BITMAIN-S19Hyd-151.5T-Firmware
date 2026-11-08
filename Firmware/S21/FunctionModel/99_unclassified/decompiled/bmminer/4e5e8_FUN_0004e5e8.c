// FUN_0004e5e8 @ 0004e5e8  size=200  callers=2
// program: bmminer


void FUN_0004e5e8(int *param_1,int param_2,double *param_3,double *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  
  iVar2 = *param_1;
  if (param_2 <= iVar2) {
    iVar2 = param_1[3];
    *(int *)param_3 = param_1[2];
    *(int *)((int)param_3 + 4) = iVar2;
    iVar2 = param_1[5];
    *(int *)param_4 = param_1[4];
    *(int *)((int)param_4 + 4) = iVar2;
    return;
  }
  if (param_1[0x18] <= param_2) {
    iVar2 = param_1[0x1b];
    *(int *)param_3 = param_1[0x1a];
    *(int *)((int)param_3 + 4) = iVar2;
    iVar2 = param_1[0x1d];
    *(int *)param_4 = param_1[0x1c];
    *(int *)((int)param_4 + 4) = iVar2;
    return;
  }
  iVar4 = 0;
  piVar1 = param_1;
  while ((piVar3 = piVar1 + 6, param_2 < iVar2 || (*piVar3 <= param_2))) {
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) {
      return;
    }
    iVar2 = *piVar3;
    piVar1 = piVar3;
  }
  dVar6 = (double)VectorSignedToFloat(param_2 - iVar2,(byte)(in_fpscr >> 0x16) & 3);
  dVar5 = (double)VectorSignedToFloat(*piVar3 - iVar2,(byte)(in_fpscr >> 0x16) & 3);
  *param_3 = *(double *)(param_1 + iVar4 * 6 + 2) +
             (*(double *)(piVar1 + 8) - *(double *)(param_1 + iVar4 * 6 + 2)) * (dVar6 / dVar5);
  *param_4 = *(double *)(param_1 + iVar4 * 6 + 4) +
             (*(double *)(piVar1 + 10) - *(double *)(param_1 + iVar4 * 6 + 4)) * (dVar6 / dVar5);
  return;
}

