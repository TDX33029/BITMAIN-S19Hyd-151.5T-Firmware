// FUN_015409a4 @ 015409a4 size=308 calls_out=4 calls_in=10
// strings: 

void FUN_015409a4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_2[1];
  uVar4 = param_2[2];
  if (uVar6 - uVar4 < 2) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = &DAT_00410f57;
    param_1[3] = 3;
    *param_1 = 1;
    return;
  }
  uVar3 = uVar4 + 2;
  param_2[2] = uVar3;
  if ((0xfffffffd < uVar4) || (uVar6 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar3,uVar6,&DAT_018a78f8);
  }
  iVar7 = *param_2;
  uVar1 = *(ushort *)(iVar7 + uVar4);
  uVar4 = (uint)uVar1;
  if (uVar4 == 0) {
    *(undefined1 *)(param_1 + 1) = 0x17;
    *param_1 = 1;
    return;
  }
  if (uVar6 - uVar3 < (uVar4 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) {
    param_1[3] = 0;
    param_1[1] = 0xb;
    *param_1 = 1;
    return;
  }
  uVar5 = (uVar4 & 0xff) << 8 | (uint)(uVar1 >> 8);
  uVar4 = uVar3 + uVar5;
  param_2[2] = uVar4;
  if ((CARRY4(uVar3,uVar5)) || (uVar6 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar3,uVar4,uVar6,&DAT_018a78f8);
  }
  iVar2 = thunk_FUN_016d4a50(uVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar5);
  }
  FUN_016dd1aa(iVar2,iVar7 + uVar3,uVar5);
  param_1[1] = uVar5;
  param_1[2] = iVar2;
  param_1[3] = uVar5;
  *param_1 = 0;
  return;
}

