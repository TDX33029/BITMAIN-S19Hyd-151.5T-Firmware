// FUN_00b69928 @ 00b69928 size=84 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b69928(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1[4] = local_38;
  puVar1[5] = uStack_34;
  puVar1[6] = uStack_30;
  puVar1[7] = uStack_2c;
  puVar1[8] = local_28;
  puVar1[9] = uStack_24;
  puVar1[10] = uStack_20;
  puVar1[0xb] = uStack_1c;
  puVar1[0xc] = local_18;
  return;
}

