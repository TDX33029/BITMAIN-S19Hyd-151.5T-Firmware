// FUN_01712f68 @ 01712f68 size=64 calls_out=0 calls_in=2
// strings: 

void FUN_01712f68(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(undefined4 *)(param_1 + 100));
  }
  if ((uVar1 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01712fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
  return;
}

