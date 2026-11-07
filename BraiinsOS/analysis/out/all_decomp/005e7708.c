// FUN_005e7708 @ 005e7708 size=100 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005e7708(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  local_1c = local_1c & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  puVar1[4] = uStack_28;
  puVar1[5] = local_24;
  puVar1[6] = uStack_20;
  puVar1[7] = local_1c;
  puVar1[8] = uStack_18;
  puVar1[9] = uStack_14;
  return;
}

