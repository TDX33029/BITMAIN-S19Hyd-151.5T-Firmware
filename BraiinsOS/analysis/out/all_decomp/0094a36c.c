// FUN_0094a36c @ 0094a36c size=84 calls_out=1 calls_in=1
// strings: hashchain_address | hashchain_address

void FUN_0094a36c(undefined4 *param_1)

{
  undefined4 uVar1;
  char *pcStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined1 *)&pcStack_18;
  local_c = &DAT_0157d360;
  pcStack_18 = "hashchain_address";
  uStack_14 = 0x11;
  uVar1 = FUN_00f56780(&DAT_0057a25d,&local_10);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 2;
  return;
}

