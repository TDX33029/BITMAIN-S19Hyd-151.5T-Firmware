// FUN_016833e0 @ 016833e0 size=496 calls_out=6 calls_in=1
// strings: 

void FUN_016833e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int extraout_r2;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_78;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar6 = thunk_FUN_016de0ee(param_1,param_2,0x2c0);
  uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
  puVar3 = (uint *)((int)uVar6 + extraout_r2);
  if ((char)puVar3[4] == '\0') {
    FUN_015f62e4(&local_a8);
    *puVar3 = local_a8;
    puVar3[1] = uStack_a4;
    puVar3[2] = uStack_a0;
    puVar3[3] = local_9c;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  local_a8 = *puVar3;
  uStack_a4 = puVar3[1];
  uStack_a0 = puVar3[2];
  local_9c = puVar3[3];
  *puVar3 = local_a8 + 1;
  puVar3[1] = uStack_a4 + (0xfffffffe < local_a8);
  local_80 = 0;
  local_8c = &DAT_005674cc;
  local_94 = 8;
  local_78 = 0x80000000;
  local_88 = 0;
  local_84 = 0;
  local_90 = 0;
  local_98 = 0;
  if (uVar1 == 0) goto LAB_016834c0;
  FUN_0167cb88(&local_8c,uVar1,8);
  uVar2 = local_98 - local_90;
  if (uVar1 <= uVar2) goto LAB_016834c0;
  uVar5 = local_84 + local_80;
  uVar4 = 0xaaaaaa;
  if (uVar5 < 0xaaaaaa) {
    uVar4 = uVar5;
  }
  if (uVar4 - local_90 <= uVar1) goto joined_r0x016834bc;
  if (uVar4 - local_90 <= uVar2) goto LAB_016834c0;
  if (uVar5 < local_90) {
joined_r0x016834bc:
    if (uVar1 <= uVar2) goto LAB_016834c0;
    uVar4 = uVar1 + local_90;
    if (CARRY4(uVar1,local_90)) {
      local_28 = 0;
LAB_016835c0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_28,uVar1);
    }
    FUN_0166e228(&local_2c,local_98,local_94,uVar4,8,0xc0);
    if (local_2c == 1) {
      uVar1 = local_24;
      goto LAB_016835c0;
    }
  }
  else {
    FUN_0166e228(&local_2c,local_98,local_94,uVar4,8,0xc0);
    if (local_2c == 1) {
      uVar2 = local_98 - local_90;
      local_2c = 1;
      goto joined_r0x016834bc;
    }
  }
  local_94 = local_28;
  local_98 = uVar4;
LAB_016834c0:
  FUN_016dd1aa(param_1,&local_a8,0x78);
  return;
}

