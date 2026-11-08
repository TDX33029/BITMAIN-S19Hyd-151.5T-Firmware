// FUN_00c5314c @ 00c5314c size=2560 calls_out=10 calls_in=0
// strings: 

void FUN_00c5314c(undefined4 param_1,int *param_2,int param_3,undefined1 param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined2 *puVar5;
  uint uVar6;
  int ****ppppiVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  int ****ppppiVar12;
  int ****ppppiVar13;
  int iVar14;
  bool bVar15;
  undefined1 local_11d;
  int local_11c;
  undefined4 local_118;
  int local_110;
  undefined2 *local_10c;
  undefined4 uStack_108;
  int local_104;
  undefined4 *local_100;
  undefined4 uStack_fc;
  int local_f8;
  undefined2 *local_f4;
  undefined4 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  int ****local_d8;
  code *local_d4;
  int ****local_d0;
  code *local_cc;
  int ****local_c8;
  code *local_c4;
  int ****local_c0;
  undefined4 *local_bc;
  int *local_b8;
  undefined4 *local_b4;
  undefined *local_b0;
  undefined4 *local_ac;
  int *local_a8;
  undefined4 *local_a4;
  undefined *local_a0;
  undefined4 *local_9c;
  int *local_98;
  undefined4 *local_94;
  undefined *local_90;
  undefined4 *local_8c;
  int ****local_88;
  undefined4 *local_84;
  undefined *local_80;
  undefined4 *local_7c;
  int *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 *local_6c;
  undefined8 *local_68;
  undefined4 *local_64;
  undefined *local_60;
  undefined4 *local_5c;
  int ****local_58;
  undefined4 *local_54;
  undefined *local_50;
  undefined4 *local_4c;
  undefined8 local_48;
  int ****local_40;
  code *local_3c;
  int ****local_38;
  int ****local_30;
  code *local_2c;
  int ****local_28;
  
  bVar15 = *(char *)(param_3 + 0x5c) != '\0';
  local_3c = (code *)0x0;
  if (bVar15) {
    local_3c = (code *)&DAT_0000000e;
  }
  local_40 = (int ****)&DAT_00354942;
  if (!bVar15) {
    local_40 = (int ****)&DAT_00000001;
  }
  local_c8 = (int ****)(param_2 + 0x47);
  local_d0 = (int ****)(param_2 + 0x46);
  local_d8 = (int ****)(param_2 + 0x49);
  local_bc = &DAT_0157d360;
  local_c4 = (code *)&LAB_00fb1efc;
  local_cc = (code *)&LAB_00fb1efc;
  local_d4 = (code *)&LAB_00fb1efc;
  local_11d = param_4;
  local_c0 = (int ****)&local_40;
  FUN_00600d2c(&local_11c,&DAT_00354950,&local_d8);
  FUN_00c53d70(&local_e8,param_2 + 0xe);
  if (param_2[0x20] == 7 && param_2[0x21] == 0) {
    local_2c = (code *)thunk_FUN_016d4a50(4);
    if (local_2c == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined4 *)local_2c = 0x656e6f6e;
    local_30 = (int ****)0x4;
    local_28 = (int ****)0x4;
  }
  else {
    FUN_00c53d70(&local_30);
  }
  if (param_2[0x26] == 7 && param_2[0x27] == 0) {
    pcVar4 = (code *)thunk_FUN_016d4a50(4);
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined4 *)pcVar4 = 0x656e6f6e;
    local_40 = (int ****)&DAT_00000004;
    local_38 = (int ****)&DAT_00000004;
    local_3c = pcVar4;
  }
  else {
    FUN_00c53d70(&local_40);
  }
  local_d0 = (int ****)&local_30;
  local_c4 = (code *)&DAT_006043a8;
  local_cc = (code *)&DAT_006043a8;
  local_d4 = (code *)&DAT_006043a8;
  local_d8 = (int ****)&local_e8;
  local_c8 = (int ****)&local_40;
  FUN_00600d2c(&local_f8,&DAT_0057e404,&local_d8);
  if (local_40 != (int ****)0x0) {
    thunk_FUN_016d3fb4(local_3c);
  }
  if (local_30 != (int ****)0x0) {
    thunk_FUN_016d3fb4(local_2c);
  }
  if ((int ***)local_e8 != (int ***)0x0) {
    thunk_FUN_016d3fb4(local_e8._4_4_);
  }
  local_110 = local_f8;
  local_10c = local_f4;
  uStack_108 = uStack_f0;
  if (param_2[0x2c] == 7 && param_2[0x2d] == 0) {
    local_100 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (local_100 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *local_100 = 0x656e6f6e;
    local_104 = 4;
    uStack_fc = 4;
  }
  else {
    FUN_00c53d70(&local_40);
    local_c8 = (int ****)(param_2 + 0x37);
    local_d0 = (int ****)(param_2 + 0x36);
    local_c4 = FUN_00a67694;
    local_cc = (code *)&LAB_00fb1efc;
    local_d4 = (code *)&DAT_006043a8;
    local_d8 = (int ****)&local_40;
    FUN_00600d2c(&local_104,&DAT_00354ab2,&local_d8);
    if (local_40 != (int ****)0x0) {
      thunk_FUN_016d3fb4(local_3c);
    }
  }
  if (*param_2 == 4 && param_2[1] == 0) {
    local_f4 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_f4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined1 *)(local_f4 + 1) = 0x61;
    *local_f4 = 0x2f6e;
    local_f8 = 3;
    uStack_f0 = 3;
  }
  else {
    local_40 = (int ****)param_2[8];
    local_3c = (code *)param_2[9];
    local_38 = (int ****)param_2[10];
    FUN_015f3c24(&local_d8,param_2 + 0x3e,&local_40);
    pcVar4 = local_cc;
    ppppiVar12 = local_d0;
    if (((uint)local_d8 & 1) != 0) {
      ppppiVar12 = (int ****)0x0;
      pcVar4 = (code *)0x0;
    }
    local_e8 = FUN_01846088(ppppiVar12,pcVar4,0xe10,0);
    lVar2 = (local_e8 & 0xffffffff) * 0xe10;
    ppppiVar7 = (int ****)lVar2;
    uVar8 = (uint)ppppiVar12 >> 2 | (int)pcVar4 << 0x1e;
    uVar6 = (int)ppppiVar12 - (int)ppppiVar7;
    local_2c = (code *)0x0;
    local_3c = (code *)0x0;
    local_30 = (int ****)(uVar6 * 0x8889 >> 0x15);
    local_40 = (int ****)
               ((uint)ppppiVar12 & 3 |
               ((uVar8 + ((uint)pcVar4 >> 2) + (uint)CARRY4(uVar8,(uint)pcVar4 >> 2)) % 0xf) * 4);
    pcVar1 = (code *)((int)(local_e8 >> 0x20) * 0xe10 + (int)((ulonglong)lVar2 >> 0x20) +
                     (uint)(ppppiVar12 < ppppiVar7));
    if (-((uint)pcVar4 >> 4) < (uint)(((uint)ppppiVar12 >> 4 | (int)pcVar4 << 0x1c) < 0xe1)) {
      if (pcVar4 == pcVar1 && (uint)(0x3b < uVar6) <= (uint)((int)pcVar4 - (int)pcVar1)) {
        local_d4 = FUN_00fac4cc;
        local_d8 = (int ****)&local_40;
        FUN_00600d2c(&local_f8,&DAT_00575652,&local_d8);
      }
      else {
        local_d8 = (int ****)&local_30;
        local_cc = FUN_00fac4cc;
        local_d4 = FUN_00fac4cc;
        local_d0 = (int ****)&local_40;
        FUN_00600d2c(&local_f8,&DAT_005820df,&local_d8);
      }
    }
    else {
      local_d8 = (int ****)&local_e8;
      local_d0 = (int ****)&local_30;
      local_c4 = FUN_00fac4cc;
      local_cc = FUN_00fac4cc;
      local_d4 = FUN_00fac4cc;
      local_c8 = (int ****)&local_40;
      FUN_00600d2c(&local_f8,&DAT_00580ce8,&local_d8);
    }
  }
  if ((int ****)param_2[0x44] == (int ****)&DAT_3b9aca00) {
    puVar5 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar5 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined1 *)(puVar5 + 1) = 0x61;
    *puVar5 = 0x2f6e;
    local_e8 = CONCAT44(puVar5,3);
    uStack_e0 = 3;
    ppppiVar12 = *(int *****)(param_3 + 0x50);
  }
  else {
    local_40 = (int ****)param_2[0x42];
    local_3c = (code *)param_2[0x43];
    local_38 = (int ****)param_2[0x44];
    FUN_015f3c24(&local_d8,param_2 + 0x3e,&local_40);
    pcVar4 = local_cc;
    ppppiVar12 = local_d0;
    if (((uint)local_d8 & 1) != 0) {
      ppppiVar12 = (int ****)0x0;
      pcVar4 = (code *)0x0;
    }
    local_48 = FUN_01846088(ppppiVar12,pcVar4,0xe10,0);
    lVar2 = (local_48 & 0xffffffff) * 0xe10;
    ppppiVar7 = (int ****)lVar2;
    uVar8 = (uint)ppppiVar12 >> 2 | (int)pcVar4 << 0x1e;
    uVar6 = (int)ppppiVar12 - (int)ppppiVar7;
    local_2c = (code *)0x0;
    local_3c = (code *)0x0;
    local_30 = (int ****)(uVar6 * 0x8889 >> 0x15);
    local_40 = (int ****)
               ((uint)ppppiVar12 & 3 |
               ((uVar8 + ((uint)pcVar4 >> 2) + (uint)CARRY4(uVar8,(uint)pcVar4 >> 2)) % 0xf) * 4);
    pcVar1 = (code *)((int)(local_48 >> 0x20) * 0xe10 + (int)((ulonglong)lVar2 >> 0x20) +
                     (uint)(ppppiVar12 < ppppiVar7));
    if (-((uint)pcVar4 >> 4) < (uint)(((uint)ppppiVar12 >> 4 | (int)pcVar4 << 0x1c) < 0xe1)) {
      if (pcVar4 == pcVar1 && (uint)(0x3b < uVar6) <= (uint)((int)pcVar4 - (int)pcVar1)) {
        local_d4 = FUN_00fac4cc;
        local_d8 = (int ****)&local_40;
        FUN_00600d2c(&local_e8,&DAT_00575652,&local_d8);
      }
      else {
        local_d8 = (int ****)&local_30;
        local_cc = FUN_00fac4cc;
        local_d4 = FUN_00fac4cc;
        local_d0 = (int ****)&local_40;
        FUN_00600d2c(&local_e8,&DAT_005820df,&local_d8);
      }
    }
    else {
      local_d0 = (int ****)&local_30;
      local_d8 = (int ****)&local_48;
      local_c4 = FUN_00fac4cc;
      local_cc = FUN_00fac4cc;
      local_d4 = FUN_00fac4cc;
      local_c8 = (int ****)&local_40;
      FUN_00600d2c(&local_e8,&DAT_00580ce8,&local_d8);
    }
    ppppiVar12 = *(int *****)(param_3 + 0x50);
  }
  if (ppppiVar12 == (int ****)0x0) {
    pcVar4 = (code *)thunk_FUN_016d4a50(0x18);
    if (pcVar4 == (code *)0x0) {
      iVar11 = 0x18;
      uVar9 = 1;
LAB_00c53800:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,iVar11);
    }
    FUN_016dd1aa(pcVar4,&DAT_00354988,0x18);
    local_28 = (int ****)&DAT_00000018;
    local_30 = (int ****)&DAT_00000018;
    local_2c = pcVar4;
  }
  else {
    uVar9 = 0;
    iVar11 = (int)ppppiVar12 * 0xc;
    if ((int ****)0xaaaaaaa < ppppiVar12) goto LAB_00c53800;
    iVar14 = *(int *)(param_3 + 0x4c);
    if (iVar11 == 0) {
      pcVar4 = (code *)&DAT_00000004;
      ppppiVar7 = (int ****)0x0;
    }
    else {
      pcVar4 = (code *)thunk_FUN_016d4a50(iVar11);
      ppppiVar7 = ppppiVar12;
      if (pcVar4 == (code *)0x0) {
        uVar9 = 4;
        goto LAB_00c53800;
      }
    }
    ppppiVar13 = (int ****)0x0;
    local_30 = ppppiVar7;
    local_2c = pcVar4;
    do {
      uVar8 = (uint)*(byte *)(iVar14 + (int)ppppiVar13);
      puVar10 = (&PTR_DAT_018b0e2c)[uVar8];
      local_d0 = (int ****)0x0;
      local_d4 = (code *)&DAT_00000001;
      local_d8 = (int ****)0x0;
      iVar11 = *(int *)(&DAT_0041eff0 + uVar8 * 4);
      FUN_00d653ec(&local_d8,0,iVar11,1,1);
      ppppiVar7 = local_d0;
      FUN_016dd1aa(local_d4 + (int)local_d0,puVar10,iVar11);
      pcVar1 = local_2c;
      ppppiVar13 = (int ****)((int)ppppiVar13 + 1);
      local_38 = (int ****)((int)ppppiVar7 + iVar11);
      local_40 = local_d8;
      local_3c = local_d4;
      *(int *****)pcVar4 = local_d8;
      *(code **)(pcVar4 + 4) = local_d4;
      *(int *****)(pcVar4 + 8) = local_38;
      pcVar4 = pcVar4 + 0xc;
    } while (ppppiVar12 != ppppiVar13);
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = ppppiVar12;
    FUN_00c4406c(&local_d8,local_2c,ppppiVar12,&DAT_0041950f,2);
    pcVar4 = pcVar1 + 4;
    local_30 = local_d8;
    local_2c = local_d4;
    local_28 = local_d0;
    for (; ppppiVar12 != (int ****)0x0; ppppiVar12 = (int ****)((int)ppppiVar12 + -1)) {
      if (*(int *)(pcVar4 + -4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)pcVar4);
      }
      pcVar4 = pcVar4 + 0xc;
    }
    if (local_40 != (int ****)0x0) {
      thunk_FUN_016d3fb4(pcVar1);
    }
  }
  local_48._4_4_ = FUN_00c53e84;
  local_48._0_4_ = (int ***)&local_11d;
  FUN_00600d2c(&local_d8,&DAT_00590e71,&local_48);
  local_40 = local_d8;
  local_3c = local_d4;
  local_58 = (int ****)&local_30;
  local_78 = &local_f8;
  local_38 = local_d0;
  local_60 = &DAT_01873850;
  local_98 = &local_104;
  local_70 = &DAT_01873848;
  local_80 = &DAT_01873840;
  local_a8 = &local_110;
  local_90 = &DAT_01873838;
  local_4c = &DAT_0157d360;
  local_50 = &DAT_0056a308;
  local_b0 = &DAT_01873828;
  local_b8 = &local_11c;
  local_54 = &DAT_006043a8;
  local_5c = &DAT_0157d360;
  local_64 = &DAT_006043a8;
  local_6c = &DAT_0157d360;
  local_74 = &DAT_006043a8;
  local_7c = &DAT_0157d360;
  local_84 = &DAT_006043a8;
  local_8c = &DAT_0157d360;
  local_94 = &DAT_006043a8;
  local_9c = &DAT_0157d360;
  local_a0 = &DAT_01873830;
  local_a4 = &DAT_006043a8;
  local_ac = &DAT_0157d360;
  local_b4 = &DAT_006043a8;
  local_bc = &DAT_0157d360;
  local_c0 = (int ****)&DAT_01873820;
  local_c4 = (code *)&DAT_0157d360;
  local_c8 = (int ****)&DAT_0056a308;
  local_cc = (code *)&DAT_0157d360;
  local_d0 = (int ****)&DAT_01873818;
  local_d4 = (code *)&DAT_0157d360;
  local_d8 = (int ****)&DAT_0056a308;
  local_88 = (int ****)&local_40;
  local_68 = &local_e8;
  FUN_00600d2c(param_1,&DAT_003549fc,&local_d8);
  if (local_40 != (int ****)0x0) {
    thunk_FUN_016d3fb4(local_3c);
  }
  uVar3 = local_e8;
  if (local_30 != (int ****)0x0) {
    thunk_FUN_016d3fb4(local_2c);
    uVar3 = local_e8;
  }
  local_e8._4_4_ = (undefined4)(uVar3 >> 0x20);
  local_e8._0_4_ = (int ***)uVar3;
  if ((int ***)local_e8 != (int ***)0x0) {
    thunk_FUN_016d3fb4(local_e8._4_4_);
    local_e8 = uVar3;
    uVar3 = local_e8;
  }
  local_e8 = uVar3;
  if (local_f8 != 0) {
    thunk_FUN_016d3fb4(local_f4);
  }
  if (local_104 != 0) {
    thunk_FUN_016d3fb4(local_100);
  }
  if (local_110 != 0) {
    thunk_FUN_016d3fb4(local_10c);
  }
  if (local_11c != 0) {
    thunk_FUN_016d3fb4(local_118);
  }
  return;
}

