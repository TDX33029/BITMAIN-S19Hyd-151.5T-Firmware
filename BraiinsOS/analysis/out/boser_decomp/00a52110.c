// FUN_00a52110 @ 00a52110 size=56 calls_out=0 calls_in=0
// strings: ManagerUserAction

void FUN_00a52110(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a52144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_ManagerUserAction_01d30cb4)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00535200 + (uint)*(byte *)*param_1 * 4));
  return;
}

