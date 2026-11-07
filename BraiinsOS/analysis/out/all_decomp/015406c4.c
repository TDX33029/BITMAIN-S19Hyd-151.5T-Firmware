// FUN_015406c4 @ 015406c4 size=284 calls_out=4 calls_in=4
// strings: 

void FUN_015406c4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  if (uVar5 == uVar4) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = &DAT_00410f4f;
    param_1[3] = 2;
    *param_1 = 1;
    return;
  }
  uVar3 = uVar4 + 1;
  param_2[2] = uVar3;
  if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar3,uVar5,&DAT_018a78f8);
  }
  iVar6 = *param_2;
  uVar4 = (uint)*(byte *)(iVar6 + uVar4);
  if (uVar4 == 0) {
    *(undefined1 *)(param_1 + 1) = 0x17;
    *param_1 = 1;
    return;
  }
  if (uVar5 - uVar3 < uVar4) {
    param_1[3] = 0;
    param_1[1] = 0xb;
    *param_1 = 1;
    return;
  }
  uVar2 = uVar3 + uVar4;
  param_2[2] = uVar2;
  if ((CARRY4(uVar3,uVar4)) || (uVar5 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar3,uVar2,uVar5,&DAT_018a78f8);
  }
  iVar1 = thunk_FUN_016d4a50(uVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar4);
  }
  FUN_016dd1aa(iVar1,iVar6 + uVar3,uVar4);
  param_1[1] = uVar4;
  param_1[2] = iVar1;
  param_1[3] = uVar4;
  *param_1 = 0;
  return;
}

