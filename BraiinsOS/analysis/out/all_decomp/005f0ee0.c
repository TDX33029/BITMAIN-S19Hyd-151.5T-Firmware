// FUN_005f0ee0 @ 005f0ee0 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_005f0ee0(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x005f0f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018af4e4 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_0041d9c0 + (uint)*param_1 * 4));
  return;
}

