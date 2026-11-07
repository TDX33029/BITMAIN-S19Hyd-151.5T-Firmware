// FUN_0102c580 @ 0102c580 size=76 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0102c580(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_34._0_2_ = (ushort)(byte)uStack_34;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  puVar1[5] = local_24;
  puVar1[6] = uStack_20;
  puVar1[7] = uStack_1c;
  puVar1[8] = uStack_18;
  puVar1[9] = uStack_14;
  return;
}

