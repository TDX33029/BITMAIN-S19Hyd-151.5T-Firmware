// FUN_0100ef9c @ 0100ef9c size=164 calls_out=2 calls_in=0
// strings: 

void FUN_0100ef9c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint local_1c;
  uint *local_18;
  code *local_14;
  
  local_1c = *param_1;
  if (0x80000000 < local_1c) {
    local_14 = (code *)-local_1c;
    local_18 = (uint *)((uint)local_18 & 0xffffff00);
    FUN_015ef5b4(&local_18);
    return;
  }
  uVar1 = local_1c - 0x10000;
  if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x0100efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))
              (*param_2,*(undefined4 *)(&DAT_018b1238 + uVar1 * 4),
               *(undefined4 *)(&DAT_0041f350 + uVar1 * 4));
    return;
  }
  local_14 = FUN_00fac2b8;
  local_18 = &local_1c;
  FUN_00fa948c(*param_2,param_2[1],&DAT_0057eb05,&local_18);
  return;
}

