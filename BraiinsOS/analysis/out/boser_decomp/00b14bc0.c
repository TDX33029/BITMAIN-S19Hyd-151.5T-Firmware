// FUN_00b14bc0 @ 00b14bc0 size=192 calls_out=3 calls_in=1
// strings: 

void FUN_00b14bc0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  undefined8 uVar10;
  
  puVar6 = (undefined4 *)*param_2;
  if (puVar6 == (undefined4 *)param_2[1]) {
    uVar8 = 0;
    uVar4 = 2;
  }
  else {
    iVar5 = puVar6[10];
    uVar4 = 0;
    uVar8 = puVar6[9];
    *param_2 = (int)(puVar6 + 0xc);
    if (iVar5 < 0) {
LAB_00b14bf0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar5);
    }
    if (iVar5 == 0) {
      iVar1 = 1;
      iVar7 = 0;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(iVar5,1);
      iVar7 = iVar5;
      if (iVar1 == 0) goto LAB_00b14bf0;
    }
    FUN_01bed4e2(iVar1,uVar8,iVar5);
    dVar9 = *(double *)(puVar6 + 2);
    uVar4 = *puVar6;
    uVar8 = puVar6[1];
    uVar2 = puVar6[4];
    uVar3 = puVar6[5];
    param_1[8] = iVar7;
    param_1[9] = iVar1;
    param_1[10] = iVar5;
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    uVar10 = *(undefined8 *)(puVar6 + 6);
    *(double *)(param_1 + 2) = dVar9 * 1000000.0;
    *(undefined8 *)(param_1 + 6) = uVar10;
  }
  *param_1 = uVar4;
  param_1[1] = uVar8;
  return;
}

