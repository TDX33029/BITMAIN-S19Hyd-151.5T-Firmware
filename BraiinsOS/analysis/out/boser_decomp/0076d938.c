// FUN_0076d938 @ 0076d938 size=196 calls_out=4 calls_in=1
// strings: 

void FUN_0076d938(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *local_2c;
  int local_28;
  undefined4 local_24;
  
  puVar2 = param_2 + -((uint)param_2 >> 1);
  puVar3 = (undefined *)0x8235;
  if (param_2 < (undefined *)0x8235) {
    puVar3 = param_2;
  }
  if (puVar3 <= puVar2) {
    puVar3 = puVar2;
  }
  if (puVar3 < (undefined *)0x31) {
    puVar3 = (undefined *)0x30;
  }
  uVar4 = 0;
  iVar1 = (int)puVar3 * 0xf0;
  if (&UNK_00888888 < puVar2) {
LAB_0076d984:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  if (iVar1 == 0) {
    local_28 = 8;
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar4 = 8;
    local_28 = FUN_01298504(iVar1,8);
    if (local_28 == 0) goto LAB_0076d984;
  }
  local_24 = 0;
  local_2c = puVar3;
  FUN_007628a8(param_1,param_2,local_28,puVar3,param_2 < (undefined *)0x41);
  FUN_00761df0(&local_2c);
  return;
}

