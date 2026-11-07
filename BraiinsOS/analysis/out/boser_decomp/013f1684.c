// FUN_013f1684 @ 013f1684 size=556 calls_out=4 calls_in=5
// strings: 

void FUN_013f1684(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *unaff_r10;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined2 local_e4;
  undefined2 local_e0;
  undefined2 local_dc;
  undefined2 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
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
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar7 = (undefined1 *)param_2[2];
  if (puVar7 == &DAT_3b9aca00) {
    uVar4 = FUN_013d4d7c();
    FUN_013e8704(&local_90,*param_2);
    uVar12 = FUN_01bed4e2(uVar4,&local_90,0x44);
  }
  else {
    sVar2 = *(short *)(param_2 + 6);
    local_d4 = *(undefined1 *)(param_2 + 0x16);
    if (sVar2 != 1) {
      puVar5 = (undefined4 *)((uint)&local_d0 | 4);
      uVar4 = param_2[8];
      uVar10 = param_2[9];
      uVar11 = param_2[10];
      *puVar5 = param_2[7];
      puVar5[1] = uVar4;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      uVar4 = param_2[0xc];
      uVar10 = param_2[0xd];
      uVar11 = param_2[0xe];
      puVar5[4] = param_2[0xb];
      puVar5[5] = uVar4;
      puVar5[6] = uVar10;
      puVar5[7] = uVar11;
      local_d0._2_2_ = *(undefined2 *)((int)param_2 + 0x1a);
    }
    else {
      FUN_015e8ad4((uint)&local_d0 | 4,param_2[8],param_2[9]);
    }
    local_d0 = CONCAT22(local_d0._2_2_,(ushort)(sVar2 == 1));
    sVar2 = *(short *)(param_2 + 0xf);
    if (sVar2 != 1) {
      puVar5 = (undefined4 *)((uint)&local_48 | 4);
      uVar4 = param_2[0x11];
      uVar10 = param_2[0x12];
      uVar11 = param_2[0x13];
      uVar8 = param_2[0x14];
      uVar9 = param_2[0x15];
      *puVar5 = param_2[0x10];
      puVar5[1] = uVar4;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      puVar5[4] = uVar8;
      puVar5[5] = uVar9;
      local_48._2_2_ = *(undefined2 *)((int)param_2 + 0x3e);
    }
    else {
      FUN_015e8ad4((uint)&local_48 | 4,param_2[0x11],param_2[0x12]);
    }
    local_48 = CONCAT22(local_48._2_2_,(ushort)(sVar2 == 1));
    local_90 = local_d0;
    uStack_8c = uStack_cc;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    local_80 = local_c0;
    local_7c = local_bc;
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    local_6c = local_48;
    local_68 = uStack_44;
    uStack_64 = uStack_40;
    local_60 = local_3c;
    uStack_5c = uStack_38;
    uStack_58 = uStack_34;
    uStack_54 = uStack_30;
    unaff_r10 = (int *)param_2[4];
    local_d8 = *(undefined2 *)((int)param_2 + 0x5e);
    local_dc = *(undefined2 *)(param_2 + 0x17);
    local_e4 = *(undefined2 *)((int)param_2 + 0x62);
    local_e0 = *(undefined2 *)(param_2 + 0x18);
    do {
      iVar6 = *unaff_r10;
      bVar3 = (bool)hasExclusiveAccess(unaff_r10);
    } while (!bVar3);
    *unaff_r10 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x13f18ac);
      (*pcVar1)();
    }
    uVar12 = CONCAT44(param_2[5],param_2[1]);
    uVar4 = *param_2;
    uStack_ac = local_48;
    local_a8 = uStack_44;
    uStack_a4 = uStack_40;
    uStack_a0 = local_3c;
    uStack_9c = uStack_38;
    uStack_98 = uStack_34;
    uStack_94 = uStack_30;
  }
  param_1[4] = unaff_r10;
  param_1[5] = (int)((ulonglong)uVar12 >> 0x20);
  *param_1 = uVar4;
  param_1[1] = (int)uVar12;
  param_1[2] = puVar7;
  uVar10 = param_2[0x1a];
  uVar11 = param_2[0x1b];
  uVar4 = param_2[0x1c];
  param_1[6] = local_d0;
  param_1[7] = uStack_cc;
  param_1[8] = uStack_c8;
  param_1[9] = uStack_c4;
  param_1[10] = local_c0;
  param_1[0xb] = local_bc;
  param_1[0xc] = uStack_b8;
  param_1[0xd] = uStack_b4;
  param_1[0xe] = uStack_b0;
  param_1[0xf] = uStack_ac;
  param_1[0x10] = local_a8;
  param_1[0x11] = uStack_a4;
  param_1[0x12] = uStack_a0;
  param_1[0x13] = uStack_9c;
  param_1[0x14] = uStack_98;
  param_1[0x15] = uStack_94;
  *(undefined2 *)((int)param_1 + 0x62) = local_e4;
  *(undefined2 *)(param_1 + 0x18) = local_e0;
  *(undefined2 *)((int)param_1 + 0x5e) = local_d8;
  *(undefined2 *)(param_1 + 0x17) = local_dc;
  param_1[0x1a] = uVar10;
  param_1[0x1b] = uVar11;
  param_1[0x1c] = uVar4;
  *(undefined1 *)(param_1 + 0x16) = local_d4;
  return;
}

