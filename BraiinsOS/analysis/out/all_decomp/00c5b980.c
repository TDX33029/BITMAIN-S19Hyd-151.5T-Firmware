// FUN_00c5b980 @ 00c5b980 size=180 calls_out=2 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00c5b99c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00c5b980(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = *(double *)(param_2 + 0x10);
  dVar7 = *(double *)(param_2 + 8);
  FUN_016d5622(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),0x51eb851f);
  uVar2 = *(uint *)(param_2 + 0x20);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar4 = uVar2 << 3;
    uVar1 = 0;
    uVar5 = 0;
    dVar8 = INFINITY;
    pdVar3 = *(double **)(param_2 + 0x1c);
    do {
      dVar9 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      dVar9 = ABS(dVar9 - dVar7 * dVar6);
      if (dVar9 < dVar8) {
        uVar1 = uVar5;
        dVar8 = dVar9;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + -8;
    } while (iVar4 != 0);
  }
  if (uVar2 - 1 < uVar1) {
    uVar1 = uVar2 - 1;
  }
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,uVar2,&DAT_01873878);
  }
  dVar6 = (*(double **)(param_2 + 0x1c))[uVar1];
  *param_1 = 6;
  param_1[1] = 0;
  *(double *)(param_1 + 2) = dVar6;
  return;
}

