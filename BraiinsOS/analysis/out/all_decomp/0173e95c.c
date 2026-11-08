// FUN_0173e95c @ 0173e95c size=88 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_0173e95c(int param_1)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x4b8) - 1 < 2) {
    *(undefined1 *)(param_1 + 0x4b8) = 2;
                    /* WARNING: Could not recover jumptable at 0x0173e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1 + 8);
    return uVar1;
  }
  return 0;
}

