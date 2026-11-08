// FUN_0187ef2c @ 0187ef2c size=264 calls_out=3 calls_in=2
// strings: 

void FUN_0187ef2c(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  uint local_50;
  int *local_4c;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  local_50 = (int)param_3 - (int)param_2;
  uVar1 = 0;
  if (0x7ffffff8 < local_50) {
LAB_0187ef54:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,local_50);
  }
  if (param_3 == param_2) {
    local_4c = (int *)&SUB_00000004;
    local_50 = 0;
  }
  else {
    uVar1 = 4;
    local_4c = (int *)FUN_01298504(local_50,4);
    if (local_4c == (int *)0x0) goto LAB_0187ef54;
    local_50 = local_50 / 0xc;
    uVar1 = 0;
    piVar2 = local_4c;
    do {
      if (*param_2 == -0x80000000) {
        local_30 = *param_2;
        iStack_2c = param_2[1];
        iStack_28 = param_2[2];
      }
      else {
        FUN_015e8ad4(&local_30,param_2[1],param_2[2]);
      }
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 3;
      *piVar2 = local_30;
      piVar2[1] = iStack_2c;
      piVar2[2] = iStack_28;
      piVar2 = piVar2 + 3;
    } while (local_50 != uVar1);
  }
  *param_1 = local_50;
  param_1[1] = (uint)local_4c;
  param_1[2] = uVar1;
  return;
}

