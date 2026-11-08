// FUN_0078810c @ 0078810c size=56 calls_out=0 calls_in=1
// strings: 

void FUN_0078810c(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00788140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_DAT_018afa20)[*param_1],
             *(undefined4 *)(&DAT_00566850 + (uint)*param_1 * 4));
  return;
}

