// FUN_01890640 @ 01890640 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_01890640(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01890678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d33904)[*(byte *)(*(int *)*param_1 + 0x58)],
             *(undefined4 *)(&DAT_00538524 + (uint)*(byte *)(*(int *)*param_1 + 0x58) * 4));
  return;
}

