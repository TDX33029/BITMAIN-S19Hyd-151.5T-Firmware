// FUN_008bc21c @ 008bc21c size=56 calls_out=0 calls_in=0
// strings: 

void FUN_008bc21c(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008bc250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018afbfc + (*param_1 ^ 0x80) * 4),
             *(undefined4 *)(&DAT_0041df70 + (*param_1 ^ 0x80) * 4));
  return;
}

