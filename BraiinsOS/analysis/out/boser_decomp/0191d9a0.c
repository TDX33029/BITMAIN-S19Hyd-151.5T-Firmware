// FUN_0191d9a0 @ 0191d9a0 size=140 calls_out=5 calls_in=18
// strings: 

void FUN_0191d9a0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 extraout_r1;
  
  if (0x80000000 < *param_2) {
    FUN_0191d928(param_1,*param_2);
    return;
  }
  uVar2 = FUN_0191d818(param_2 + 3);
  iVar1 = param_6 << 1;
  iVar3 = FUN_01298504(iVar1,1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar1);
  }
  FUN_01bed4e2(iVar3,param_5,iVar1);
  *(undefined1 *)((int)param_1 + 0x11) = extraout_r1;
  *(undefined1 *)(param_1 + 4) = uVar2;
  *param_1 = &DAT_80000014;
  param_1[1] = param_6;
  param_1[2] = iVar3;
  param_1[3] = param_6;
  return;
}

