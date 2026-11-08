// FUN_013cab94 @ 013cab94 size=108 calls_out=1 calls_in=3
// strings: Name('

undefined4 FUN_013cab94(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  iVar3 = param_2[1];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,"Name(\"",6);
  if ((iVar1 == 0) && (iVar1 = FUN_013ca87c(param_1,uVar2,iVar3), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x013cabfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (uVar2,
                       "\")empty string, expected a semver versionunexpected character after wildcard in version reqexcessive number of version comparators1 element in sequence"
                       ,2);
    return uVar2;
  }
  return 1;
}

