// FUN_015f3e34 @ 015f3e34 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_015f3e34(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 - 1 & 0xff;
                    /* WARNING: Could not recover jumptable at 0x015f3e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_Up_01d3292c)[uVar1],*(undefined4 *)(&DAT_00537404 + uVar1 * 4));
  return;
}

