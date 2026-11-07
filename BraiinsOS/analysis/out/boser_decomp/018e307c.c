// FUN_018e307c @ 018e307c size=292 calls_out=3 calls_in=5
// strings: 

void FUN_018e307c(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint local_50;
  int *local_4c;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar4 = 0;
  iVar2 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_018e30a4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar2);
  }
  if (iVar2 == 0) {
    local_4c = (int *)&SUB_00000004;
    local_50 = 0;
  }
  else {
    uVar4 = 4;
    local_4c = (int *)FUN_01298504(iVar2,4);
    if (local_4c == (int *)0x0) goto LAB_018e30a4;
    local_50 = param_3;
    if (param_3 != 0) {
      uVar1 = 0;
      piVar3 = local_4c;
      do {
        if (iVar2 == 0) break;
        if (*param_2 == -0x80000000) {
          local_30 = *param_2;
          iStack_2c = param_2[1];
          iStack_28 = param_2[2];
        }
        else {
          FUN_015e8ad4(&local_30,param_2[1],param_2[2]);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + -0xc;
        *piVar3 = local_30;
        piVar3[1] = iStack_2c;
        piVar3[2] = iStack_28;
        param_2 = param_2 + 3;
        piVar3 = piVar3 + 3;
      } while (param_3 != uVar1);
    }
  }
  *param_1 = local_50;
  param_1[1] = (uint)local_4c;
  param_1[2] = param_3;
  return;
}

