// FUN_00ac0bc0 @ 00ac0bc0 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00ac0bc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_38 = &PTR_FUN_0186ec98;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  puVar1 = (undefined4 *)((uint)&local_38 | 4);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  puVar1[5] = uStack_24;
  puVar1[6] = uStack_20;
  return;
}

