// FUN_00a51cdc @ 00a51cdc size=552 calls_out=8 calls_in=1
// strings: try_reclaim_frameevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:129 | tracing::span::active

undefined4 FUN_00a51cdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *local_a0;
  undefined2 *local_9c;
  uint local_98;
  int local_94;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 *local_80;
  undefined2 *local_7c;
  uint local_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  int local_60 [14];
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d5087c - 1 < 2 ||
       ((DAT_01d5087c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50874), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d50874), iVar2 != 0)))) {
    local_78 = DAT_01d50874 + 0x1c;
    local_7c = (undefined2 *)0x0;
    local_80 = (undefined4 *)&SUB_00000004;
    FUN_01aaa548(&local_a0,DAT_01d50874,&local_80);
  }
  else {
    local_68 = DAT_01d50874;
    local_78 = 2;
    if (DAT_01d51ae9 == '\0') {
      local_98 = DAT_01d50874 + 0x1c;
      local_9c = (undefined2 *)0x0;
      local_a0 = (undefined4 *)0x4;
      FUN_01aaa3e0(&local_80,&local_a0);
    }
    local_a0 = local_80;
    local_9c = local_7c;
    local_98 = local_78;
    local_94 = iStack_74;
    local_90 = local_70;
    uStack_8c = uStack_6c;
    local_88 = local_68;
    uStack_84 = uStack_64;
  }
  if (local_98 != 2) {
    if ((local_98 & 1) == 0) {
      iVar2 = local_94;
    }
    else {
      iVar2 = local_94 + (*(int *)(local_90 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_90 + 0x30))(iVar2,&local_a0);
  }
  if ((DAT_01d51ae9 == '\0') && (local_88 != 0)) {
    local_24 = *(undefined4 *)(local_88 + 0x10);
    local_28 = *(undefined4 *)(local_88 + 0xc);
    local_80 = &local_28;
    local_7c = &DAT_0132b6a0;
    FUN_006404a8(&local_a0,"tracing::span::active",0x15,&DAT_00594cdd,&local_80);
  }
  iVar2 = *(int *)(param_4 + 0x118);
  uVar4 = 0;
  *(undefined4 *)(param_4 + 0x118) = 3;
  if (iVar2 != 3) {
    uVar4 = *(undefined4 *)(param_4 + 0x120);
    uVar5 = *(undefined4 *)(param_4 + 0x124);
    uVar6 = *(undefined4 *)(param_4 + 0x128);
    puVar3 = (undefined4 *)((uint)local_60 | 4);
    *puVar3 = *(undefined4 *)(param_4 + 0x11c);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    uVar4 = *(undefined4 *)(param_4 + 0x130);
    uVar5 = *(undefined4 *)(param_4 + 0x134);
    uVar6 = *(undefined4 *)(param_4 + 0x138);
    puVar3[4] = *(undefined4 *)(param_4 + 300);
    puVar3[5] = uVar4;
    puVar3[6] = uVar5;
    puVar3[7] = uVar6;
    uVar4 = *(undefined4 *)(param_4 + 0x140);
    uVar5 = *(undefined4 *)(param_4 + 0x144);
    uVar6 = *(undefined4 *)(param_4 + 0x148);
    uVar7 = *(undefined4 *)(param_4 + 0x14c);
    puVar3[8] = *(undefined4 *)(param_4 + 0x13c);
    puVar3[9] = uVar4;
    puVar3[10] = uVar5;
    puVar3[0xb] = uVar6;
    puVar3[0xc] = uVar7;
    local_60[0] = iVar2;
    uVar4 = FUN_01a6f534(param_1,param_2,param_3);
  }
  FUN_0134c39c(&local_a0);
  FUN_01834abc(&local_a0);
  return uVar4;
}

