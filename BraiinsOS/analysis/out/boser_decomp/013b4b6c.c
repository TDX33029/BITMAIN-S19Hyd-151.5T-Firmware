// FUN_013b4b6c @ 013b4b6c size=216 calls_out=2 calls_in=0
// strings: 

void FUN_013b4b6c(uint *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r5;
  int iVar7;
  uint local_30;
  int *local_2c;
  
  iVar6 = 0;
  if (0xaaaaaaa < param_3) {
LAB_013b4b94:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar6,param_3 * 0xc);
  }
  if (param_3 == 0) {
    uVar3 = 0;
    local_2c = (int *)&SUB_00000004;
    local_30 = 0;
  }
  else {
    iVar6 = 4;
    local_2c = (int *)FUN_01298504(param_3 * 0xc,4);
    if (local_2c == (int *)0x0) goto LAB_013b4b94;
    piVar1 = local_2c;
    uVar3 = 1;
    if (1 < param_3) {
      iVar2 = *param_2;
      iVar4 = param_2[1];
      iVar5 = param_2[2];
      iVar7 = param_3 - 1;
      do {
        if (iVar2 != 0) {
          unaff_r5 = iVar4;
          iVar6 = iVar5;
        }
        *piVar1 = iVar2;
        piVar1[1] = unaff_r5;
        iVar7 = iVar7 + -1;
        piVar1[2] = iVar6;
        piVar1 = piVar1 + 3;
      } while (iVar7 != 0);
      uVar3 = param_3;
    }
    iVar6 = param_2[1];
    iVar2 = param_2[2];
    *piVar1 = *param_2;
    piVar1[1] = iVar6;
    piVar1[2] = iVar2;
    local_30 = param_3;
  }
  *param_1 = local_30;
  param_1[1] = (uint)local_2c;
  param_1[2] = uVar3;
  return;
}

