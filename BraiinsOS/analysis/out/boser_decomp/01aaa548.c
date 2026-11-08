// FUN_01aaa548 @ 01aaa548 size=500 calls_out=2 calls_in=76
// strings: 

void FUN_01aaa548(undefined8 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 local_78;
  undefined4 local_74;
  int local_68;
  int *local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint *local_54;
  undefined *local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined1 local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  int **local_28;
  code *local_24;
  
  puVar6 = DAT_01d50f84;
  puVar9 = DAT_01d50f80;
  uVar7 = 0;
  DataMemoryBarrier(0xb);
  local_74 = 0;
  local_78 = 1;
  puVar3 = (undefined4 *)&UNK_01d2ee94;
  local_68 = param_2;
  local_64 = param_3;
  if ((DAT_01d51af4 == 2) && (puVar3 = &DAT_01d50f7c, DAT_01d50f7c != 0)) {
    local_60 = (**(code **)(DAT_01d50f84 + 0x1c))
                         ((int)DAT_01d50f80 + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8,
                          &local_78);
    do {
      uVar5 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar5 + 1;
    uVar7 = 1;
    if (0x7fffffff < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1aaa5f8);
      (*pcVar1)();
    }
  }
  else {
    puVar9 = (uint *)puVar3[1];
    if (DAT_01d51af4 != 2) {
      puVar6 = &DAT_01d2e6fc;
    }
    local_60 = (**(code **)(puVar6 + 0x1c))(puVar9,&local_78);
  }
  local_58 = uVar7;
  local_54 = puVar9;
  local_50 = puVar6;
  local_48 = param_2;
  if (DAT_01d51ae9 == '\0') {
    uVar7 = 0xd;
    puVar6 = &DAT_005312cd;
    if (param_3[1] != 0) {
      iVar4 = param_3[1] * 0xc;
      piVar8 = (int *)(*param_3 + 4);
      do {
        if ((*piVar8 != 0) && (*(int *)(piVar8[-1] + 8) == *(int *)(param_3[2] + 8))) {
          puVar6 = *(undefined **)(param_2 + 0x14);
          uVar7 = *(undefined4 *)(param_2 + 0x18);
          break;
        }
        piVar8 = piVar8 + 3;
        iVar4 = iVar4 + -0xc;
      } while (iVar4 != 0);
    }
    local_40 = *(undefined4 *)(param_2 + 0xc);
    local_3c = *(undefined4 *)(param_2 + 0x10);
    local_24 = FUN_01aa9cf8;
    local_28 = &local_38;
    local_30 = &local_40;
    local_34 = 0;
    local_2c = &LAB_018a13b8;
    local_38 = param_3;
    FUN_01aa9d3c(&local_60,puVar6,uVar7,5 - *(int *)(param_2 + 8),&DAT_005a5b8c,&local_30);
  }
  *param_1 = local_60;
  *(undefined4 *)(param_1 + 1) = local_58;
  *(uint **)((int)param_1 + 0xc) = local_54;
  *(undefined **)(param_1 + 2) = local_50;
  *(undefined4 *)((int)param_1 + 0x14) = uStack_4c;
  *(int *)(param_1 + 3) = local_48;
  *(undefined4 *)((int)param_1 + 0x1c) = uStack_44;
  return;
}

