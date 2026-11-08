// FUN_00a61904 @ 00a61904 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_00a61904(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x16b) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x16b) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x168) == '\x03') {
    puVar1 = param_1 + 0xb6;
  }
  else {
    if (*(char *)(param_1 + 0x168) != '\0') goto LAB_00a61950;
    puVar1 = param_1 + 4;
  }
  FUN_00df9ef8(puVar1);
LAB_00a61950:
  *(undefined1 *)((int)param_1 + 0x5ad) = 0;
  return;
}

