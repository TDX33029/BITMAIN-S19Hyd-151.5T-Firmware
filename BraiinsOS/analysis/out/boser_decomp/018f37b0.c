// FUN_018f37b0 @ 018f37b0 size=492 calls_out=3 calls_in=1
// strings: 

void FUN_018f37b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,int param_7,undefined4 *param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *local_190 [17];
  undefined1 local_14c [52];
  undefined1 local_118 [4];
  undefined1 auStack_114 [64];
  uint local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_88 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_01bed93e(local_14c,0,0x30);
  uVar8 = 0x40;
  FUN_01bed4e2((uint)local_190 | 4,param_7,0x40);
  local_190[0] = param_8;
  if (*param_6 == 0) {
    FUN_01bed4e2(&local_68,param_7,0x20);
    FUN_01bed4e2(&uStack_48,param_7 + 0x20,0x20);
    local_d0 = local_68;
    uStack_cc = uStack_64;
    uStack_c8 = uStack_60;
    uStack_c4 = uStack_5c;
    uStack_c0 = uStack_58;
    local_bc = local_54;
    uStack_b8 = uStack_50;
    uStack_b4 = uStack_4c;
    uStack_b0 = uStack_48;
    uStack_ac = uStack_44;
    local_a8 = local_40;
    uStack_a4 = uStack_3c;
    uStack_a0 = uStack_38;
    uStack_9c = uStack_34;
    uStack_98 = uStack_30;
    uStack_94 = uStack_2c;
    local_118[0] = 1;
    puVar5 = (undefined1 *)((uint)local_118 | 1);
    FUN_01bed4e2(puVar5,&local_68,0x40);
    uVar2 = 0xd;
    puVar1 = &DAT_00521097;
  }
  else {
    FUN_01bed4e2((uint)&local_d0 | 3,param_6 + 1,0x44);
    local_118[0] = 0;
    FUN_01bed4e2((uint)local_118 | 1,&local_d0,0x47);
    if (0x40 < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_d4,0x40,&DAT_01d258e8);
    }
    puVar5 = auStack_114;
    uVar2 = 0x16;
    puVar1 = &DAT_005210a4;
    uVar8 = local_d4;
  }
  (**(code **)(param_8[1] + 0xc))
            (local_88,*param_8,local_14c,param_2,param_3,param_4,param_5,puVar1,uVar2,puVar5,uVar8);
  if (local_88[0] == -0x7fffffd7) {
    FUN_01bed4e2(param_1 + 1,local_190,0x74);
    *param_1 = 0;
  }
  else {
    puVar3 = (undefined4 *)((uint)local_88 | 4);
    uVar2 = puVar3[1];
    uVar6 = puVar3[2];
    param_1[3] = *puVar3;
    param_1[4] = uVar2;
    param_1[5] = uVar6;
    uVar2 = puVar3[4];
    uVar6 = puVar3[5];
    uVar7 = puVar3[6];
    param_1[6] = puVar3[3];
    param_1[7] = uVar2;
    param_1[8] = uVar6;
    param_1[9] = uVar7;
    *param_1 = 1;
    iVar4 = 0;
    param_1[2] = local_88[0];
    do {
      local_14c[iVar4] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x30);
  }
  return;
}

