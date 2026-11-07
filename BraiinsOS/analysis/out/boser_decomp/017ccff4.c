// FUN_017ccff4 @ 017ccff4 size=64 calls_out=0 calls_in=1
// strings: 

void FUN_017ccff4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  }
  if ((uVar1 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017cd030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
  return;
}

