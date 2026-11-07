// FUN_0167075c @ 0167075c size=708 calls_out=4 calls_in=2
// strings: 

void FUN_0167075c(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_120 [20];
  int local_10c;
  int local_108;
  int local_f0;
  undefined4 local_ec;
  int local_e4;
  undefined4 local_e0;
  int local_d8;
  undefined4 local_d4;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  int iStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == 1) {
    if ((uint)param_2[0x17] < 2) {
      uVar1 = FUN_016dd1aa(auStack_120,param_2 + 2,0x68);
      uVar10 = thunk_FUN_016de0ee(uVar1,0x2c0);
      puVar6 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
      local_64 = 0x80000003;
      local_70 = 0x80000003;
      if ((char)puVar6[4] == '\0') {
        FUN_015f62e4(&local_b8);
        *puVar6 = local_b8;
        puVar6[1] = uStack_b4;
        puVar6[2] = uStack_b0;
        puVar6[3] = local_ac;
        *(undefined1 *)(puVar6 + 4) = 1;
      }
      uStack_48 = local_5c;
      uVar2 = *puVar6;
      *puVar6 = uVar2 + 1;
      puVar6[1] = puVar6[1] + (uint)(0xfffffffe < uVar2);
      local_ac = local_70;
      iStack_a8 = iStack_6c;
      local_a4 = iStack_68;
      uStack_a0 = local_64;
      uStack_9c = iStack_60;
      uStack_98 = local_5c;
      local_5c = local_70;
      uStack_58 = iStack_6c;
      uStack_54 = iStack_68;
      uStack_50 = local_64;
      uStack_4c = iStack_60;
      piVar3 = (int *)((uint)&local_40 | 4);
      iVar4 = param_2[3];
      iVar5 = param_2[4];
      iVar7 = param_2[5];
      iVar8 = param_2[6];
      iVar9 = 0;
      *piVar3 = param_2[2];
      piVar3[1] = iVar4;
      piVar3[2] = iVar5;
      piVar3[3] = iVar7;
      piVar3[4] = iVar8;
      local_b8 = param_2[9];
      uStack_b4 = param_2[10];
      uStack_b0 = param_2[0xb];
      iVar4 = param_2[0xc];
      iVar5 = param_2[0xd];
      while( true ) {
        if (local_108 * 0xc0 == iVar9) {
          local_88 = local_40;
          uStack_84 = uStack_3c;
          uStack_80 = uStack_38;
          uStack_7c = uStack_34;
          uStack_78 = uStack_30;
          uStack_74 = uStack_2c;
          local_a4 = local_70;
          uStack_a0 = iStack_6c;
          uStack_9c = iStack_68;
          uStack_98 = local_64;
          uStack_94 = iStack_60;
          uStack_90 = uStack_48;
          local_ac = iVar4;
          iStack_a8 = iVar5;
          local_70 = local_b8;
          iStack_6c = uStack_b4;
          iStack_68 = uStack_b0;
          local_64 = iVar4;
          iStack_60 = iVar5;
          if (0 < local_d8) {
            thunk_FUN_016d3fb4(local_d4);
          }
          if ((local_f0 != -0x7ffffffd) && (0 < local_f0)) {
            thunk_FUN_016d3fb4(local_ec);
          }
          if ((local_e4 != -0x7ffffffd) && (0 < local_e4)) {
            thunk_FUN_016d3fb4(local_e0);
          }
          param_1[2] = 0;
          param_1[3] = local_88;
          param_1[4] = uStack_84;
          param_1[5] = uStack_80;
          param_1[6] = uStack_7c;
          param_1[7] = uStack_78;
          param_1[8] = uStack_74;
          param_1[9] = local_10c;
          param_1[10] = local_108;
          param_1[0xb] = local_b8;
          param_1[0xc] = uStack_b4;
          param_1[0xd] = uStack_b0;
          param_1[0xe] = local_ac;
          param_1[0xf] = iStack_a8;
          param_1[0x10] = local_a4;
          param_1[0x11] = uStack_a0;
          param_1[0x12] = uStack_9c;
          param_1[0x13] = uStack_98;
          param_1[0x14] = uStack_94;
          param_1[0x15] = uStack_90;
          *(undefined2 *)(param_1 + 0x19) = 0;
          param_1[0x16] = 0;
          *param_1 = 4;
          return;
        }
        if (*(int *)(local_10c + iVar9) == 1) break;
        iVar9 = iVar9 + 0xc0;
      }
      iVar9 = local_10c + iVar9;
      local_70 = local_b8;
      iStack_6c = uStack_b4;
      iStack_68 = uStack_b0;
      local_64 = iVar4;
      iStack_60 = iVar5;
      if ((*(int *)(iVar9 + 0x88) != -0x7ffffffd) && (0 < *(int *)(iVar9 + 0x88))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0x8c));
      }
      *(undefined4 *)(iVar9 + 0x88) = 0x80000003;
      if ((*(int *)(iVar9 + 0x94) != -0x7ffffffd) && (0 < *(int *)(iVar9 + 0x94))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0x98));
      }
      *(undefined4 *)(iVar9 + 0x94) = 0x80000003;
      if ((*(int *)(iVar9 + 0xa0) != -0x7ffffffd) && (0 < *(int *)(iVar9 + 0xa0))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0xa4));
      }
      *(undefined4 *)(iVar9 + 0xa0) = 0x80000003;
      if ((*(int *)(iVar9 + 0xac) != -0x7ffffffd) && (0 < *(int *)(iVar9 + 0xac))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0xb0));
      }
      iVar4 = 6;
      *(undefined4 *)(iVar9 + 0xac) = 0x80000003;
      if (1 < *(uint *)(iVar9 + 0x5c)) {
        iVar4 = *(uint *)(iVar9 + 0x5c) - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x01670924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01670928 + *(int *)(&DAT_01670928 + iVar4 * 4)))();
      return;
    }
  }
  else if (*param_2 == 2) {
    FUN_016dd1aa(param_1 + 2,param_2 + 2,0x60);
    *param_1 = 4;
    return;
  }
  FUN_016dd1aa(param_1,param_2,0x70);
  return;
}

