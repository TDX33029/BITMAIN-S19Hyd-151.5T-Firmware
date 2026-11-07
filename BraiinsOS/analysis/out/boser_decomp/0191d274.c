// FUN_0191d274 @ 0191d274 size=340 calls_out=5 calls_in=6
// strings: 

void FUN_0191d274(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *unaff_r6;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (param_4 == 1) {
    local_2c = *param_3;
    local_28 = param_3[1];
    bVar1 = false;
    local_30 = (int *)0x0;
  }
  else {
    if (param_4 == 0) {
      *param_1 = 4;
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    unaff_r6 = (int *)FUN_01298504(param_4 << 3,4);
    if (unaff_r6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,param_4 << 3);
    }
    iVar4 = 0;
    do {
      iVar2 = iVar4 * 2;
      iVar3 = iVar4 * 2;
      unaff_r6[iVar3] = param_3[iVar2];
      iVar4 = iVar4 + 1;
      (unaff_r6 + iVar3)[1] = (param_3 + iVar2)[1];
    } while (param_4 != iVar4);
    if (param_4 == 1) {
      local_2c = *unaff_r6;
      local_30 = (int *)0x0;
      local_28 = unaff_r6[1];
    }
    else {
      local_24 = 0;
      if (param_4 != 0) {
        local_24 = 0;
        piVar6 = unaff_r6 + 1;
        iVar4 = param_4;
        do {
          iVar4 = iVar4 + -1;
          local_24 = *piVar6 + local_24;
          piVar6 = piVar6 + 2;
        } while (iVar4 != 0);
      }
      local_28 = 0;
      local_30 = unaff_r6;
      local_2c = param_4;
    }
    bVar1 = true;
  }
  uVar5 = FUN_018f2b8c(param_2,&local_30,param_2 + 0x2b0);
  FUN_0191d3f0(param_2);
  *param_1 = 4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  if (bVar1) {
    FUN_0134aee0(param_4,unaff_r6,4,8);
    return;
  }
  return;
}

