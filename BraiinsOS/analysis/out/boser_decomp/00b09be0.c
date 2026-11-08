// FUN_00b09be0 @ 00b09be0 size=876 calls_out=13 calls_in=3
// strings: 

void FUN_00b09be0(uint *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  undefined4 *puStack_2f4;
  uint uStack_2f0;
  uint local_2ec;
  uint local_2e8;
  uint uStack_2e4;
  undefined1 auStack_2e0 [16];
  undefined4 local_2d0;
  int local_2cc;
  uint local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2b0;
  int local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  undefined4 uStack_298;
  int local_294;
  undefined1 auStack_290 [204];
  int local_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [200];
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  char local_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  int local_80;
  undefined4 local_7c;
  int local_74;
  undefined4 local_70;
  int local_68;
  undefined4 local_64;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  int local_38 [5];
  
  uVar10 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar7 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)puVar7[4] == '\0') {
    FUN_019ae6ac(&local_f0);
    *puVar7 = local_f0;
    puVar7[1] = uStack_ec;
    puVar7[2] = uStack_e8;
    puVar7[3] = uStack_e4;
    *(undefined1 *)(puVar7 + 4) = 1;
  }
  local_310 = *puVar7;
  uStack_30c = puVar7[1];
  uStack_308 = puVar7[2];
  uStack_304 = puVar7[3];
  *puVar7 = local_310 + 1;
  puVar7[1] = uStack_30c + (0xfffffffe < local_310);
  local_2f8 = 0;
  local_300 = 0;
  local_2fc = 8;
  puStack_2f4 = &DAT_0056d238;
  uStack_2f0 = 0;
  local_2ec = 0;
  local_2e8 = 0;
  if (param_3 != 0) {
    puVar1 = param_2 + param_3 * 2;
    do {
      (**(code **)(param_2[1] + 0xc))(auStack_2e0,*param_2);
      uVar5 = local_2c8;
      iVar3 = local_2cc;
      uVar6 = local_2d0;
      if ((local_2c0 != 0) && (iVar4 = local_2c0 * 4 + 4, local_2c0 + iVar4 != -5)) {
        thunk_FUN_01be4678(local_2c4 - iVar4);
      }
      local_2a4 = uVar5 * 0xd8 + iVar3;
      if (local_2e8 != 0) {
        uVar5 = uVar5 - (uVar5 >> 1);
      }
      local_2a8 = uVar6;
      local_2ac = iVar3;
      local_2b0 = iVar3;
      if (local_2ec < uVar5) {
        FUN_0126f4d0(&puStack_2f4,uVar5,local_2fc,local_2f8);
      }
      if (local_300 - local_2f8 < uVar5) {
        uVar2 = local_2ec + local_2e8;
        if (0x97b424 < uVar2) {
          uVar2 = 0x97b425;
        }
        if ((uVar2 - local_2f8 <= uVar5) ||
           (iVar3 = FUN_01a54c4c(&local_300,local_2f8,uVar2 - local_2f8,0xd8), iVar3 != -0x7fffffff)
           ) {
          FUN_01a54c38(&local_300,local_2f8,uVar5,0xd8);
        }
      }
      iVar3 = local_2a4;
      param_2 = param_2 + 2;
      local_2a0 = local_2b0;
      local_29c = local_2ac;
      uStack_298 = local_2a8;
      local_294 = local_2a4;
      iVar4 = local_2ac;
      while (iVar4 != iVar3) {
        iVar9 = *(int *)(iVar4 + 0xcc);
        if (iVar9 == -0x80000000) {
          iVar4 = iVar4 + 0xd8;
          break;
        }
        uVar6 = *(undefined4 *)(iVar4 + 0xd0);
        uVar8 = *(undefined4 *)(iVar4 + 0xd4);
        FUN_01bed4e2((uint)&local_f0 | 4,iVar4,200);
        FUN_01bed4e2(auStack_290,&local_f0,0xcc);
        local_1c4 = iVar9;
        local_1c0 = uVar6;
        uStack_1bc = uVar8;
        FUN_01bed4e2(auStack_1b8,(uint)auStack_290 | 4,200);
        FUN_012773e0(&local_f0,&local_310,&local_1c4,auStack_1b8);
        iVar4 = iVar4 + 0xd8;
        if (local_38[0] != -0x80000000) {
          FUN_019bb7e0(local_50,local_4c);
          FUN_019bb7e0(local_44,local_40);
          FUN_00db4764(auStack_c0);
          if ((char)local_f0 != '\x06') {
            FUN_00db4764(&local_f0);
          }
          if (local_d8[0] != '\x06') {
            FUN_00db4764(local_d8);
          }
          FUN_006a41c0(local_38);
          if (local_80 != -0x80000000) {
            FUN_019bb7e0(local_80,local_7c);
          }
          if (local_74 != -0x80000000) {
            FUN_019bb7e0(local_74,local_70);
          }
          if (local_68 != -0x80000000) {
            FUN_019bb7e0(local_68,local_64);
          }
          if (local_5c != -0x80000000) {
            FUN_019bb7e0(local_5c,local_58);
          }
          FUN_009637d8(auStack_a8);
        }
      }
      local_29c = iVar4;
      FUN_009635e4(&local_2a0);
    } while (param_2 != puVar1);
  }
  *param_1 = local_310;
  param_1[1] = uStack_30c;
  param_1[2] = uStack_308;
  param_1[3] = uStack_304;
  param_1[4] = local_300;
  param_1[5] = local_2fc;
  param_1[6] = local_2f8;
  param_1[7] = (uint)puStack_2f4;
  param_1[8] = uStack_2f0;
  param_1[9] = local_2ec;
  param_1[10] = local_2e8;
  param_1[0xb] = uStack_2e4;
  return;
}

