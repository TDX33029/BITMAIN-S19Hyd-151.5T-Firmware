// FUN_019a896c @ 019a896c size=148 calls_out=2 calls_in=6
// strings: stderr

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019a896c(undefined4 param_1,undefined4 param_2)

{
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  code *pcStack_14;
  
  pcStack_38 = "stderr";
  uStack_34 = 6;
  FUN_019a7060(&local_30,&DAT_01d51ad0,param_1,param_2);
  if ((char)local_30 != '\x04') {
    pcStack_14 = FUN_019a7d7c;
    puStack_18 = &uStack_28;
    uStack_24 = uStack_2c;
    uStack_28 = local_30;
    puStack_1c = &DAT_0197a814;
    puStack_20 = (undefined1 *)&pcStack_38;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005744f9,&puStack_20,&DAT_01d27774);
  }
  return;
}

