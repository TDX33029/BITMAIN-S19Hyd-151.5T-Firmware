// FUN_0110f260 @ 0110f260 size=136 calls_out=1 calls_in=0
// strings: signature errorUnclosedOpeningBracketInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported

undefined4 FUN_0110f260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *local_1c;
  int **local_18;
  undefined1 *local_14;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  piVar5 = (int *)*param_1;
  iVar1 = (**(code **)(iVar4 + 0xc))
                    (uVar3,
                     "signature errorUnclosedOpeningBracketInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                     ,0xf);
  uVar2 = 1;
  if (iVar1 == 0) {
    if (*piVar5 == 0) {
      return 0;
    }
    local_14 = &LAB_0135a8cc;
    local_18 = &local_1c;
    local_1c = piVar5;
    uVar2 = FUN_00fa948c(uVar3,iVar4,&DAT_0057523e,&local_18);
  }
  return uVar2;
}

