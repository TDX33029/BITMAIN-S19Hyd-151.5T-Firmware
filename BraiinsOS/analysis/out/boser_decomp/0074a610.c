// FUN_0074a610 @ 0074a610 size=368 calls_out=3 calls_in=1
// strings: 

void FUN_0074a610(undefined2 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 auStack_1ac [156];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  if (param_2 == (short *)0x0) {
    *param_1 = 2;
  }
  else {
    sVar1 = *param_2;
    sVar3 = param_2[0x20];
    if (sVar1 != 1) {
      puVar4 = (undefined4 *)((uint)&local_1f0 | 4);
      uVar9 = *(undefined4 *)(param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 6);
      uVar6 = *(undefined4 *)(param_2 + 8);
      *puVar4 = *(undefined4 *)(param_2 + 2);
      puVar4[1] = uVar9;
      puVar4[2] = uVar5;
      puVar4[3] = uVar6;
      uVar9 = *(undefined4 *)(param_2 + 0xc);
      uVar5 = *(undefined4 *)(param_2 + 0xe);
      uVar6 = *(undefined4 *)(param_2 + 0x10);
      puVar4[4] = *(undefined4 *)(param_2 + 10);
      puVar4[5] = uVar9;
      puVar4[6] = uVar5;
      puVar4[7] = uVar6;
      local_1f0._2_2_ = param_2[1];
    }
    else {
      FUN_015e8ad4((uint)&local_1f0 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
    }
    local_1f0 = CONCAT22(local_1f0._2_2_,(ushort)(sVar1 == 1));
    sVar1 = param_2[0x12];
    if (sVar1 != 1) {
      puVar4 = (undefined4 *)((uint)&local_c8 | 4);
      uVar9 = *(undefined4 *)(param_2 + 0x16);
      uVar5 = *(undefined4 *)(param_2 + 0x18);
      uVar6 = *(undefined4 *)(param_2 + 0x1a);
      uVar7 = *(undefined4 *)(param_2 + 0x1c);
      uVar8 = *(undefined4 *)(param_2 + 0x1e);
      *puVar4 = *(undefined4 *)(param_2 + 0x14);
      puVar4[1] = uVar9;
      puVar4[2] = uVar5;
      puVar4[3] = uVar6;
      puVar4[4] = uVar7;
      puVar4[5] = uVar8;
      local_c8._2_2_ = param_2[0x13];
    }
    else {
      FUN_015e8ad4((uint)&local_c8 | 4,*(undefined4 *)(param_2 + 0x16),
                   *(undefined4 *)(param_2 + 0x18));
    }
    local_c8 = CONCAT22(local_c8._2_2_,(ushort)(sVar1 == 1));
    local_110 = local_1f0;
    uStack_10c = uStack_1ec;
    uStack_108 = uStack_1e8;
    uStack_104 = uStack_1e4;
    local_100 = local_1e0;
    uStack_fc = uStack_1dc;
    uStack_f8 = uStack_1d8;
    uStack_f4 = uStack_1d4;
    uStack_f0 = uStack_1d0;
    local_ec = local_c8;
    uStack_e8 = uStack_c4;
    uStack_e4 = uStack_c0;
    local_e0 = local_bc;
    uStack_dc = uStack_b8;
    uStack_d8 = uStack_b4;
    uStack_d4 = uStack_b0;
    uVar9 = *(undefined4 *)(param_2 + 0x72);
    sVar1 = param_2[0x71];
    sVar2 = param_2[0x70];
    local_d0 = (char)sVar3;
    FUN_0074a7b0(&local_c8,param_2 + 0x22);
    FUN_01bed4e2(&local_1f0,&local_110,0x44);
    FUN_01bed4e2(auStack_1ac,&local_c8,0x9c);
    FUN_01bed4e2(param_1,&local_1f0,0xe0);
    *(undefined4 *)(param_1 + 0x72) = uVar9;
    param_1[0x71] = sVar1;
    param_1[0x70] = sVar2;
  }
  return;
}

