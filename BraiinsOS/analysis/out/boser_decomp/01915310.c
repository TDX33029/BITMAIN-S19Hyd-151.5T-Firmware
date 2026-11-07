// FUN_01915310 @ 01915310 size=312 calls_out=6 calls_in=3
// strings: 

void FUN_01915310(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50 [2];
  undefined1 auStack_48 [36];
  
  iVar8 = param_3[1];
  FUN_01aeffc4(local_50,iVar8,param_3[2]);
  if (local_50[0] == 1) {
    FUN_01917d68(&local_70,auStack_48);
    puVar1 = (undefined4 *)((uint)&local_a0 | 4);
    *puVar1 = local_70;
    puVar1[1] = uStack_6c;
    puVar1[2] = uStack_68;
    puVar1[3] = uStack_64;
    puVar1[4] = local_60;
    puVar1[5] = uStack_5c;
    puVar1[6] = uStack_58;
    puVar1[7] = uStack_54;
    uVar3 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *param_1 = *puVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    uVar3 = puVar1[5];
    uVar5 = puVar1[6];
    uVar6 = puVar1[7];
    param_1[4] = puVar1[4];
    param_1[5] = uVar3;
    param_1[6] = uVar5;
    param_1[7] = uVar6;
    iVar2 = *param_3;
  }
  else {
    puVar1 = (undefined4 *)((uint)local_50 | 4);
    puVar4 = (undefined4 *)((uint)auStack_78 | 4);
    uVar3 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *puVar4 = *puVar1;
    puVar4[1] = uVar3;
    puVar4[2] = uVar5;
    puVar4[3] = uVar6;
    uVar3 = puVar1[5];
    uVar5 = puVar1[6];
    uVar6 = puVar1[7];
    uVar7 = puVar1[8];
    puVar4[4] = puVar1[4];
    puVar4[5] = uVar3;
    puVar4[6] = uVar5;
    puVar4[7] = uVar6;
    puVar4[8] = uVar7;
    local_a0 = *puVar4;
    uStack_9c = puVar4[1];
    uStack_98 = puVar4[2];
    uStack_94 = puVar4[3];
    local_90 = puVar4[4];
    uStack_8c = puVar4[5];
    uStack_88 = puVar4[6];
    uStack_84 = puVar4[7];
    uStack_80 = puVar4[8];
    FUN_01938c94(&local_c8);
    iVar2 = param_2[2];
    if (iVar2 == *param_2) {
      FUN_01ac589c(param_2);
    }
    puVar1 = (undefined4 *)(param_2[1] + iVar2 * 0x24);
    *puVar1 = local_c8;
    puVar1[1] = uStack_c4;
    puVar1[2] = uStack_c0;
    puVar1[3] = uStack_bc;
    puVar1[4] = local_b8;
    puVar1[5] = uStack_b4;
    puVar1[6] = uStack_b0;
    puVar1[7] = uStack_ac;
    puVar1[8] = uStack_a8;
    param_2[2] = iVar2 + 1;
    FUN_0193b978(&local_a0);
    iVar2 = *param_3;
    *param_1 = 0x80000029;
  }
  if (iVar2 == -0x80000000) {
    return;
  }
  FUN_0134bd64(iVar2,iVar8);
  return;
}

