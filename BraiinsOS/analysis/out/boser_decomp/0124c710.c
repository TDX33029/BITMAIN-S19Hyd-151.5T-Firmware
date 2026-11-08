// FUN_0124c710 @ 0124c710 size=84 calls_out=1 calls_in=1
// strings: model | model

void FUN_0124c710(undefined1 *param_1)

{
  undefined4 uVar1;
  char *pcStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&pcStack_18;
  local_c = &DAT_0132b6a0;
  pcStack_18 = "model";
  uStack_14 = 5;
  uVar1 = FUN_019676ac(&DAT_0057cd64,&local_10);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

