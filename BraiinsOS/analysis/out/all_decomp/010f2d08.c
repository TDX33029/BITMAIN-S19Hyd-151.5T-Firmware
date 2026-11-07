// FUN_010f2d08 @ 010f2d08 size=96 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010f2d08(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  uVar1 = uStack_14;
  uStack_14._0_2_ = (ushort)(byte)uStack_14;
  uStack_14._3_1_ = SUB41(uVar1,3);
  uStack_14._0_3_ = CONCAT12(param_2,(ushort)uStack_14);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x38);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x38);
  }
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = uStack_40;
  puVar2[3] = uStack_3c;
  puVar2[4] = local_38;
  puVar2[5] = uStack_34;
  puVar2[6] = uStack_30;
  puVar2[7] = uStack_2c;
  puVar2[8] = uStack_28;
  puVar2[9] = local_24;
  puVar2[10] = uStack_20;
  puVar2[0xb] = uStack_1c;
  puVar2[0xc] = param_1;
  puVar2[0xd] = uStack_14;
  return;
}

