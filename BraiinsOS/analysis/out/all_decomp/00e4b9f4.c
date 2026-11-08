// FUN_00e4b9f4 @ 00e4b9f4 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_00e4b9f4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) &&
       (1 < *(int *)(param_1 + 0x18) - 3U)) && (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0)) &&
     (uVar2 = iVar1 * 0x11 & 0xfffffffc, uVar2 + iVar1 != -0x19)) {
    thunk_FUN_016d3fb4((*(int *)(param_1 + 0x40) - uVar2) + -0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00e4ba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x74) + 0xc))(*(undefined4 *)(param_1 + 0x78));
  return;
}

