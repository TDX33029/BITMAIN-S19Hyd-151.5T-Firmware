// FUN_014f8be0 @ 014f8be0 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_014f8be0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  uStack_14 = 0xb;
  local_c = &DAT_0132b6a0;
  local_18 = param_2;
  uVar1 = FUN_019676ac(&DAT_0057cd64,&local_10);
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 0xd) = 2;
  return;
}

