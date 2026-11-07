// FUN_010cbb18 @ 010cbb18 size=100 calls_out=0 calls_in=0
// strings: tunnel error: failed to create underlying connectionio error establishing tunnelmissing destination hostproxy authorization requiredproxy response headers too longunsuccessfulInvalidUriCharInvalidSchemeInvalidFormatSchemeMissingPathAndQueryMissing

undefined4 FUN_010cbb18(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
  iVar1 = (*UNRECOVERED_JUMPTABLE)
                    (uVar2,
                     "tunnel error: failed to create underlying connectionio error establishing tunnelmissing destination hostproxy authorization requiredproxy response headers too longunsuccessfulInvalidUriCharInvalidSchemeInvalidFormatSchemeMissingPathAndQueryMissing"
                     ,0xe);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010cbb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (uVar2,*(undefined4 *)(&DAT_018b2008 + *param_1 * 4),
                       *(undefined4 *)(&DAT_00420130 + *param_1 * 4));
    return uVar2;
  }
  return 1;
}

