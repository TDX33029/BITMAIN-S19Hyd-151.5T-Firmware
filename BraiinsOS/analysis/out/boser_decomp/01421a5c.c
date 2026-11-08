// FUN_01421a5c @ 01421a5c size=148 calls_out=1 calls_in=2
// strings: header_read_timeoutAnyhowSysStrumUciInvalidUpgradeImageUpgradeNotSupportedUpgradeNotSuccessful

void FUN_01421a5c(uint *param_1,int param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&pcStack_18;
  puVar3 = (undefined1 *)param_3[4];
  pcStack_18 = 
  "header_read_timeoutAnyhowSysStrumUciInvalidUpgradeImageUpgradeNotSupportedUpgradeNotSuccessful";
  uStack_14 = 0x13;
  puVar1 = &DAT_3b9aca00;
  if ((*param_3 & 1) == 0) {
    if (puVar3 == &DAT_3b9aca00 || param_2 == 0) goto LAB_01421ae4;
  }
  else {
    if (puVar3 == &DAT_3b9aca00) goto LAB_01421ae4;
    if (param_2 == 0) {
      local_c = &DAT_0132b6a0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0059add2,&local_10,&DAT_01cf475c);
    }
  }
  uVar2 = param_3[3];
  *param_1 = param_3[2];
  param_1[1] = uVar2;
  puVar1 = puVar3;
LAB_01421ae4:
  param_1[2] = (uint)puVar1;
  return;
}

