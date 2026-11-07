// FUN_013b12e0 @ 013b12e0 size=196 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013b12e0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x178) != 1) {
    uVar2 = *(uint *)(param_1 + 0x168);
    uVar4 = (uint)(param_2 - *(int *)(param_1 + 8)) >> (*(uint *)(param_1 + 0x15c) & 0x1f);
    if (uVar2 <= uVar4 * 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4 << 1,uVar2,&DAT_01894868);
    }
    uVar3 = uVar4 << 1 | 1;
    if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,uVar2,&DAT_01894878);
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x164) + uVar4 * 8);
    uVar4 = *(uint *)(*(int *)(param_1 + 0x164) + uVar3 * 4);
    if ((CARRY4(uVar4,uVar2)) || (*(uint *)(param_1 + 0x174) < uVar4 + uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar2,uVar4 + uVar2,*(uint *)(param_1 + 0x174),&DAT_01894888);
    }
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_01894818);
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x170) + uVar2 * 4);
  }
  return uVar1;
}

