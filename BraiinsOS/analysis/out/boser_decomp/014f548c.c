// FUN_014f548c @ 014f548c size=84 calls_out=1 calls_in=2
// strings: toolbox_version | toolbox_version

void FUN_014f548c(undefined1 *param_1)

{
  undefined4 uVar1;
  char *pcStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&pcStack_18;
  local_c = &DAT_0132b6a0;
  pcStack_18 = "toolbox_version";
  uStack_14 = 0xf;
  uVar1 = FUN_019676ac(&DAT_0057cd64,&local_10);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

