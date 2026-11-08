// FUN_014440fc @ 014440fc size=100 calls_out=0 calls_in=0
// strings: tunnel error:  | failed to create underlying connection

undefined4 FUN_014440fc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,"tunnel error: ",0xe);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0144415c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (uVar2,(&PTR_s_failed_to_create_underlying_conn_01d32758)[*param_1],
                       *(undefined4 *)(&DAT_00537084 + *param_1 * 4));
    return uVar2;
  }
  return 1;
}

