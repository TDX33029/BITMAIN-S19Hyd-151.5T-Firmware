// FUN_007d3998 @ 007d3998 size=80 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007d3998(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = uStack_20;
  uStack_20._0_2_ = (ushort)(byte)uStack_20;
  uStack_20._3_1_ = SUB41(uVar1,3);
  uStack_20._0_3_ = CONCAT12(param_2,(ushort)uStack_20);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar2 = local_28;
  puVar2[1] = param_1;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  puVar2[4] = uStack_18;
  return;
}

