// FUN_00f23710 @ 00f23710 size=108 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f23710(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_40 = &PTR_FUN_0187e0c8;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  puVar1 = (undefined4 *)((uint)&local_40 | 4);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  puVar1[4] = uStack_30;
  puVar1[5] = uStack_2c;
  puVar1[6] = uStack_28;
  puVar1[7] = local_24;
  puVar1[8] = local_20;
  puVar1[9] = local_1c;
  return;
}

