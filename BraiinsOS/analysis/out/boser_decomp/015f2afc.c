// FUN_015f2afc @ 015f2afc size=60 calls_out=0 calls_in=0
// strings: 

void FUN_015f2afc(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 + 1 & 0xff;
                    /* WARNING: Could not recover jumptable at 0x015f2b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d32920 + uVar1 * 4),
             *(undefined4 *)(&DAT_005373f8 + uVar1 * 4));
  return;
}

