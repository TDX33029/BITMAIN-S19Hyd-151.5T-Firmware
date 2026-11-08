// FUN_01516a74 @ 01516a74 size=168 calls_out=4 calls_in=1
// strings: 

void FUN_01516a74(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r5;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  if (uVar2 == uVar5) {
    param_1[3] = 0x80000001;
    *param_1 = 0;
    param_1[1] = 0x80000001;
    param_1[2] = unaff_r5;
    return;
  }
  if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar2,uVar2,&DAT_018a78e8);
  }
  iVar4 = *param_2;
  iVar3 = uVar2 - uVar5;
  param_2[2] = uVar2;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar3);
  }
  iVar1 = thunk_FUN_016d4a50(iVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar3);
  }
  FUN_016dd1aa(iVar1,iVar4 + uVar5,iVar3);
  param_1[3] = iVar3;
  *param_1 = 0;
  param_1[1] = iVar3;
  param_1[2] = iVar1;
  return;
}

