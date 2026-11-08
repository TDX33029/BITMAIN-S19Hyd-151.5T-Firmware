// FUN_00eff724 @ 00eff724 size=176 calls_out=2 calls_in=0
// strings: 

void FUN_00eff724(char param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  byte local_25;
  
  local_25 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_25,1);
  uVar1 = FUN_00effb18(param_2);
  iVar2 = 10;
  do {
    local_25 = (byte)uVar1;
    if (uVar1 >> 7 == 0) {
      FUN_01284394(param_3,&local_25,1);
      break;
    }
    local_25 = local_25 | 0x80;
    FUN_01284394(param_3,&local_25,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  if (*param_2 == 10) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00eff7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00eff7cc + *(int *)(&DAT_00eff7cc + *param_2 * 4)))();
  return;
}

