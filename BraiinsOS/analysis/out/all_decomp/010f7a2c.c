// FUN_010f7a2c @ 010f7a2c size=112 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010f7a2c(undefined4 param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = param_3[2];
  local_1c = (uint)CONCAT21((short)((uint)local_1c >> 0x10),param_2) << 8;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  puVar1[4] = local_38;
  puVar1[5] = uStack_34;
  puVar1[6] = uStack_30;
  puVar1[7] = uStack_2c;
  puVar1[8] = local_28;
  puVar1[9] = uStack_24;
  puVar1[10] = uStack_20;
  puVar1[0xb] = local_1c;
  puVar1[0xc] = uStack_18;
  return;
}

