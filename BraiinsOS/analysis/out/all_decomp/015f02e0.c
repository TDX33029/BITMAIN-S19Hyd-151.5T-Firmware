// FUN_015f02e0 @ 015f02e0 size=152 calls_out=2 calls_in=1
// strings: stderr

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015f02e0(undefined4 param_1,undefined4 param_2)

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
  FUN_015ee5cc(&local_30,&DAT_018dd9d8,param_1,param_2);
  if ((char)local_30 != '\x04') {
    pcStack_14 = FUN_015ef5b4;
    puStack_18 = &uStack_28;
    uStack_24 = uStack_2c;
    uStack_28 = local_30;
    puStack_1c = &DAT_015bee04;
    puStack_20 = (undefined1 *)&pcStack_38;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056faa6,&puStack_20,&DAT_018aab78);
  }
  return;
}

