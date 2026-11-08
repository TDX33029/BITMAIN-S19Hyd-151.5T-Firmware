// FUN_00821790 @ 00821790 size=104 calls_out=2 calls_in=1
// strings: 

undefined * FUN_00821790(void)

{
  undefined *puVar1;
  undefined1 auStack_60 [64];
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  FUN_00fb6cfc(auStack_60,&DAT_00343323,0x4f,&DAT_00418eb9,2);
  local_1c = 0x4f;
  local_18 = 1;
  local_20 = 0;
  puVar1 = (undefined *)FUN_010f50c8(auStack_60);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_00343323;
  }
  return puVar1;
}

