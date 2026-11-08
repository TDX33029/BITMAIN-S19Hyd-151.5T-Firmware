// FUN_01ad0118 @ 01ad0118 size=164 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01ad0118(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  if (*param_1 == '\0') {
    uVar1 = FUN_012fb940(param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  }
  if (*param_1 == '\x01') {
    uVar1 = FUN_013095bc(param_1 + 1);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar3 = param_2[1];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
  iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar1,&DAT_0053340d,1);
  if ((iVar2 == 0) && (iVar2 = FUN_01acf270(param_1 + 1,uVar1,iVar3), iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x01ad01b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,"]",1);
    return uVar1;
  }
  return 1;
}

