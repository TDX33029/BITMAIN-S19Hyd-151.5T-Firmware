// FUN_01540ae4 @ 01540ae4 size=320 calls_out=4 calls_in=4
// strings: 

void FUN_01540ae4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  if (uVar6 - uVar5 < 2) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = &DAT_00410f57;
    *param_1 = 1;
    param_1[3] = 3;
    return;
  }
  uVar4 = uVar5 + 2;
  param_2[2] = uVar4;
  if ((0xfffffffd < uVar5) || (uVar6 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar4,uVar6,&DAT_018a78f8);
  }
  iVar7 = *param_2;
  uVar1 = *(ushort *)(iVar7 + uVar5);
  uVar5 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
  if (uVar6 - uVar4 < uVar5 >> 0x10) {
    param_1[1] = 0xb;
    *param_1 = 1;
    param_1[3] = 0;
    return;
  }
  uVar5 = uVar5 >> 0x10;
  uVar3 = uVar4 + uVar5;
  param_2[2] = uVar3;
  if ((CARRY4(uVar4,uVar5)) || (uVar6 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar3,uVar6,&DAT_018a78f8);
  }
  if (uVar1 == 0) {
    iVar2 = 1;
    uVar6 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar5);
    uVar6 = uVar5;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar5);
    }
  }
  FUN_016dd1aa(iVar2,iVar7 + uVar4,uVar5);
  param_1[1] = uVar6;
  param_1[2] = iVar2;
  *param_1 = 0;
  param_1[3] = uVar5;
  return;
}

