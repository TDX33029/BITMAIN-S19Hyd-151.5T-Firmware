// FUN_00845e7c @ 00845e7c size=284 calls_out=7 calls_in=0
// strings: 

ulonglong FUN_00845e7c(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x21]) {
  case '\0':
    unaff_r5 = param_1[0x1f];
    uVar3 = 0;
    if (unaff_r5 < 0) {
LAB_00845eb8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,unaff_r5);
    }
    iVar6 = param_1[0x1e];
    iVar7 = param_1[0x20];
    uVar1 = *(undefined1 *)((int)param_1 + 0x86);
    uVar2 = *(undefined1 *)((int)param_1 + 0x85);
    iVar4 = param_1[0x1c];
    if (unaff_r5 == 0) {
      iVar5 = 1;
      iVar8 = 0;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(unaff_r5);
      iVar8 = unaff_r5;
      if (iVar5 == 0) {
        uVar3 = 1;
        goto LAB_00845eb8;
      }
    }
    FUN_016dd1aa(iVar5,iVar6,unaff_r5);
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[4] = iVar7;
    *(char *)((int)param_1 + 0xe) = (char)iVar4;
    *(undefined1 *)((int)param_1 + 0xd) = uVar1;
    *(undefined1 *)(param_1 + 3) = uVar2;
    *param_1 = iVar8;
    param_1[1] = iVar5;
    param_1[2] = unaff_r5;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860a4c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860a4c);
  }
  uVar9 = FUN_00846334(param_1,param_2);
  if ((uVar9 & 1) == 0) {
    FUN_00845fec(param_1);
    *(undefined1 *)(param_1 + 0x21) = 1;
    return uVar9 & 0xffffffff00000000;
  }
  *(undefined1 *)(param_1 + 0x21) = 3;
  return CONCAT44(unaff_r5,1);
}

