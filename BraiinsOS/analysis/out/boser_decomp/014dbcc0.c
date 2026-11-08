// FUN_014dbcc0 @ 014dbcc0 size=76 calls_out=1 calls_in=5
// strings: release_date | release_date

undefined8 FUN_014dbcc0(void)

{
  undefined4 uVar1;
  char *pcStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&pcStack_18;
  local_c = &DAT_0132b6a0;
  pcStack_18 = "release_date";
  uStack_14 = 0xc;
  uVar1 = FUN_019676ac(&DAT_0057cd64,&local_10);
  return CONCAT44(uVar1,1);
}

