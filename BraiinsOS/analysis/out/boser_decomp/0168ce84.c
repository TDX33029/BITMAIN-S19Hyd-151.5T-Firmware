// FUN_0168ce84 @ 0168ce84 size=312 calls_out=4 calls_in=2
// strings: 

void FUN_0168ce84(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *local_18;
  undefined1 *local_14;
  
  uVar5 = *(uint *)(param_2 + 0x148);
  if ((int)uVar5 < 0) {
    local_14 = &LAB_01a6a304;
    local_18 = &DAT_0056e3b4;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00595e91,&local_18,&DAT_01d092e0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(uint *)(param_1 + 8) < uVar5) {
    FUN_016c1078(param_1,uVar5 - *(uint *)(param_1 + 8));
  }
  else {
    *(uint *)(param_1 + 8) = uVar5;
  }
  if (*(uint *)(param_1 + 0x14) < uVar5) {
    FUN_016c1078(param_1 + 0xc,uVar5 - *(uint *)(param_1 + 0x14));
  }
  else {
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  uVar5 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x13c) + 0x10);
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(param_2 + 0x13c) + 0xc) + iVar4 * 8;
    uVar5 = 0;
    if (iVar4 != 8) {
      uVar5 = *(uint *)(iVar4 + -4);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x148);
  iVar4 = *(int *)(param_2 + 0x154);
  *(uint *)(param_1 + 0x28) = uVar5;
  lVar1 = (ulonglong)uVar5 * (ulonglong)uVar2;
  uVar2 = (uint)lVar1;
  if (uVar5 < (uint)(iVar4 << 1)) {
    uVar5 = iVar4 << 1;
  }
  *(uint *)(param_1 + 0x2c) = uVar5;
  uVar3 = uVar2 + uVar5;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0 || CARRY4(uVar2,uVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004ce297,0x22,&DAT_01d079ec);
  }
  if (*(uint *)(param_1 + 0x24) < uVar3) {
    FUN_016c0fe4(param_1 + 0x1c,uVar3 - *(uint *)(param_1 + 0x24));
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  return;
}

