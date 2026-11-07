// FUN_015ee464 @ 015ee464 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_015ee464(uint param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x015ee498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_DAT_018b546c)[param_1 & 0xff],
             *(undefined4 *)(&DAT_004241e8 + (param_1 & 0xff) * 4));
  return;
}

