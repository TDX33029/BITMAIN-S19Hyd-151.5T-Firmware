// FUN_00c5ba50 @ 00c5ba50 size=172 calls_out=1 calls_in=0
// strings: 

void FUN_00c5ba50(undefined4 *param_1,double *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  piVar1 = (int *)((int)param_2 + 0x1c);
  uVar4 = *(uint *)(param_2 + 4);
  if (*param_3 == 6 && param_3[1] == 0) {
    param_2 = (double *)(param_3 + 2);
  }
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = uVar4 << 3;
    dVar7 = INFINITY;
    uVar2 = 0;
    uVar6 = 0;
    pdVar5 = (double *)*piVar1;
    do {
      dVar8 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      if (ABS(dVar8 - *param_2) < dVar7) {
        uVar2 = uVar6;
        dVar7 = ABS(dVar8 - *param_2);
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + -8;
    } while (iVar3 != 0);
  }
  if (uVar4 - 1 < uVar2) {
    uVar2 = uVar4 - 1;
  }
  if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,uVar4,&DAT_01873878);
  }
  dVar7 = ((double *)*piVar1)[uVar2];
  *param_1 = 6;
  param_1[1] = 0;
  *(double *)(param_1 + 2) = dVar7;
  return;
}

