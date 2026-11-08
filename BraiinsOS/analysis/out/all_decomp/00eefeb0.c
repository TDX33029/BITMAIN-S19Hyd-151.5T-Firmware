// FUN_00eefeb0 @ 00eefeb0 size=1244 calls_out=10 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | lDefaultError | SetGloba

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eefeb0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined4 *local_1c0;
  int local_1bc;
  undefined4 *local_1b8;
  undefined1 auStack_190 [120];
  undefined4 *local_118;
  int local_114;
  undefined4 *puStack_110;
  undefined4 *local_10c;
  int local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  int local_d8;
  undefined4 local_d4;
  int local_cc;
  undefined4 local_c8;
  int local_a0;
  undefined4 **local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  char **local_8c;
  undefined *local_88;
  undefined4 *local_84;
  int **local_80;
  undefined *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  char *local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 *puStack_50;
  undefined4 *local_4c;
  undefined4 local_48;
  int *local_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 ***local_30;
  undefined4 *local_2c;
  
  puVar10 = (undefined4 *)param_3[2];
  puVar12 = (undefined4 *)param_3[1];
  iVar14 = *param_3;
  local_1c0 = (undefined4 *)*param_2;
  local_1bc = param_2[1];
  puVar7 = puVar12 + (int)puVar10 * 0x1e;
  local_1b8 = (undefined4 *)param_2[2];
  puVar8 = puVar12;
  if (puVar10 != (undefined4 *)0x0) {
    iVar15 = (int)puVar10 * 0x78;
    puVar8 = puVar7;
    puVar13 = puVar12;
    do {
      FUN_016dd1aa(auStack_190,puVar13,0x78);
      FUN_016dd1aa(&local_118,puVar13,0x78);
      FUN_00ef0460(&local_40,&local_118);
      puVar1 = local_40;
      iVar4 = local_3c;
      puVar5 = local_38;
      if (local_40 == (undefined4 *)&DAT_80000000) {
        local_a0 = local_3c;
        if (DAT_018d9130 < 4) {
          uVar2 = (uint)DAT_018da8b0;
          if (uVar2 - 1 < 2) {
LAB_00eeffe0:
            puVar10 = DAT_018da8a8;
            puVar5 = &DAT_018da884;
            if (uVar2 != 2) {
              DataMemoryBarrier(0xb);
              puVar5 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar5 = (undefined4 *)&DAT_018ae394;
              }
              pcVar6 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar6 = DAT_018daa74 + (puVar5[2] - 1 & 0xfffffff8) + 8;
              }
              uVar16 = (*(code *)puVar5[5])(pcVar6,DAT_018da8a8);
              puVar5 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
              if ((int)uVar16 == 0) goto LAB_00ef02a8;
            }
            puVar3 = DAT_018da8a8 + 7;
            uVar2 = DAT_018da8a8[8];
            puVar11 = DAT_018da8a8;
            if (uVar2 != 0) {
              local_6c = DAT_018da8a8[10];
              local_78 = *puVar3;
              local_74 = DAT_018da8a8[8];
              local_70 = DAT_018da8a8[9];
              puVar11 = (undefined4 *)DAT_018da8a8[9];
              puVar8 = (undefined4 *)DAT_018da8a8[10];
              local_68 = 0;
              local_5c = 0x4b;
              local_60 = "json-unserializable item. skipping...";
              puVar5 = DAT_018da8a8;
            }
            if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_80 = &local_44;
            local_84 = &uStack_58;
            local_8c = &local_60;
            local_90 = &local_78;
            local_9c = &local_90;
            local_48 = 1;
            local_98 = 2;
            local_7c = &DAT_0187c2b0;
            local_40 = (undefined4 *)&DAT_00000001;
            local_88 = &DAT_018abb78;
            local_44 = &local_a0;
            local_3c = 0;
            local_30 = &local_9c;
            DataMemoryBarrier(0xb);
            puVar10 = (undefined4 *)&DAT_018ae394;
            pcVar6 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar6 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar6 = DAT_018daa74 + (DAT_018daa78[2] - 1 & 0xfffffff8) + 8;
            }
            local_94 = puVar3;
            uStack_58 = *puVar3;
            uStack_54 = uVar2;
            puStack_50 = puVar11;
            local_4c = puVar8;
            local_2c = puVar5;
            iVar4 = (*(code *)puVar10[10])(pcVar6,&local_40);
            if (iVar4 != 0) {
              (*(code *)puVar10[0xb])(pcVar6,&local_40);
            }
          }
          else if (uVar2 != 0) {
            uVar2 = FUN_0169ac90(&DAT_018da8a8);
            uVar2 = uVar2 & 0xff;
            if (uVar2 != 0) goto LAB_00eeffe0;
          }
        }
LAB_00ef02a8:
        iVar4 = local_a0;
        FUN_005c3974(local_a0);
        thunk_FUN_016d3fb4(iVar4);
        puVar5 = puVar10;
      }
      puVar10 = puVar5;
      if (local_d8 != 0) {
        thunk_FUN_016d3fb4(local_d4);
      }
      if (local_cc != 0) {
        thunk_FUN_016d3fb4(local_c8);
      }
      if (puVar1 == (undefined4 *)&DAT_80000000) {
        local_40 = local_1c0;
        local_3c = local_1bc;
        local_38 = local_1b8;
      }
      else {
        local_100 = (undefined4 *)0x0;
        local_104 = puVar10;
        local_108 = iVar4;
        local_118 = local_1c0;
        local_114 = local_1bc;
        puStack_110 = local_1b8;
        local_10c = puVar1;
        if (local_1b8 == local_1c0) {
          FUN_01351a98(&local_118);
        }
        puVar10 = (undefined4 *)(local_114 + (int)local_1b8 * 0x10);
        *puVar10 = local_10c;
        puVar10[1] = local_108;
        puVar10[2] = local_104;
        puVar10[3] = local_100;
        local_40 = local_118;
        local_38 = (undefined4 *)((int)local_1b8 + 1);
        local_3c = local_114;
        puVar8 = local_1b8;
        puVar10 = local_100;
      }
      iVar15 = iVar15 + -0x78;
      local_1c0 = local_40;
      local_1bc = local_3c;
      local_1b8 = local_38;
      puVar13 = puVar13 + 0x1e;
    } while (iVar15 != 0);
    puVar8 = puVar7;
  }
  piVar9 = puVar8 + 0x10;
  *param_1 = local_1c0;
  param_1[1] = local_1bc;
  param_1[2] = local_1b8;
  for (iVar15 = ((uint)((int)puVar7 - (int)puVar8) >> 3) * -0x11111111; iVar15 != 0;
      iVar15 = iVar15 + -1) {
    if (*piVar9 != 0) {
      thunk_FUN_016d3fb4(piVar9[1]);
    }
    if (piVar9[3] != 0) {
      thunk_FUN_016d3fb4(piVar9[4]);
    }
    piVar9 = piVar9 + 0x1e;
  }
  if (iVar14 != 0) {
    thunk_FUN_016d3fb4(puVar12);
  }
  return;
}

