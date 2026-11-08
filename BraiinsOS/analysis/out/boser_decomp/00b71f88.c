// FUN_00b71f88 @ 00b71f88 size=332 calls_out=10 calls_in=2
// strings: 

void FUN_00b71f88(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int unaff_r7;
  int iVar5;
  int unaff_r9;
  undefined4 uVar6;
  longlong lVar7;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    *(undefined1 *)(param_2 + 0xb) = 0;
    param_2[2] = *param_2;
    param_2[3] = param_2[1];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c132f0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c132f0);
  }
  FUN_00b69fb0(&local_40,param_2 + 2);
  if (local_40 == -0x7fffffff) {
    *param_1 = -0x7fffffff;
    uVar3 = 3;
  }
  else {
    local_30 = local_40;
    local_2c = uStack_3c;
    local_28 = uStack_38;
    if (*(char *)(param_2 + 0xb) == '\x03') {
      FUN_00b71be0(param_2 + 6);
    }
    uVar2 = local_2c;
    iVar1 = local_30;
    if (local_30 == -0x80000000) {
      FUN_00eab9a0(&local_30);
      iVar4 = -0x80000000;
      iVar5 = unaff_r7;
    }
    else {
      lVar7 = FUN_013245a0(local_2c,local_28);
      iVar5 = (int)((ulonglong)lVar7 >> 0x20);
      if (lVar7 < 0) {
        uVar6 = 0;
        iVar5 = unaff_r7;
LAB_00b7204c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,iVar5);
      }
      if (iVar5 == 0) {
        unaff_r9 = 1;
        iVar4 = 0;
      }
      else {
        uVar6 = 1;
        unaff_r9 = FUN_01298504(iVar5,1);
        if (unaff_r9 == 0) goto LAB_00b7204c;
        iVar4 = iVar5;
      }
      FUN_01bed4e2(unaff_r9,(int)lVar7,iVar5);
      FUN_019bb7e0(iVar1,uVar2);
    }
    uVar3 = 1;
    *param_1 = iVar4;
    param_1[1] = unaff_r9;
    param_1[2] = iVar5;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar3;
  return;
}

