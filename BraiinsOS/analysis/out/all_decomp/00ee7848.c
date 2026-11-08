// FUN_00ee7848 @ 00ee7848 size=1264 calls_out=10 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | lDefaultError | SetGloba

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee7848(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_350;
  int local_34c;
  undefined4 *local_348;
  undefined1 auStack_320 [320];
  undefined4 *local_1e0;
  int local_1dc;
  undefined4 *puStack_1d8;
  undefined4 *local_1d4;
  int local_1d0;
  undefined4 *local_1cc;
  undefined4 *local_1c8;
  int local_148;
  undefined4 local_144;
  int local_d0;
  undefined4 local_cc;
  int local_c4;
  undefined4 local_c0;
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
  int local_2c;
  
  puVar8 = (undefined4 *)param_3[2];
  puVar10 = (undefined4 *)param_3[1];
  iVar12 = *param_3;
  local_350 = (undefined4 *)*param_2;
  local_34c = param_2[1];
  puVar6 = puVar10 + (int)puVar8 * 0x50;
  local_348 = (undefined4 *)param_2[2];
  puVar7 = puVar10;
  if (puVar8 != (undefined4 *)0x0) {
    iVar13 = (int)puVar8 * 0x140;
    puVar7 = puVar6;
    puVar11 = puVar10;
    do {
      FUN_016dd1aa(auStack_320,puVar11,0x140);
      FUN_016dd1aa(&local_1e0,puVar11,0x140);
      FUN_00ee7e10(&local_40,&local_1e0);
      puVar1 = local_40;
      iVar3 = local_3c;
      puVar9 = local_38;
      if (local_40 == (undefined4 *)&DAT_80000000) {
        local_a0 = local_3c;
        if (DAT_018d9130 < 4) {
          uVar2 = (uint)DAT_018da8b0;
          if (uVar2 - 1 < 2) {
LAB_00ee7974:
            if (uVar2 != 2) {
              DataMemoryBarrier(0xb);
              puVar8 = &DAT_018daa64;
              puVar9 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar9 = (undefined4 *)&DAT_018ae394;
              }
              pcVar5 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar5 = DAT_018daa74 + (puVar9[2] - 1 & 0xfffffff8) + 8;
              }
              iVar3 = (*(code *)puVar9[5])(pcVar5);
              if (iVar3 == 0) goto LAB_00ee7c40;
            }
            puVar4 = (undefined4 *)(DAT_018da8a8 + 0x1c);
            uVar2 = *(uint *)(DAT_018da8a8 + 0x20);
            puVar9 = puVar8;
            if (uVar2 != 0) {
              local_6c = *(undefined4 *)(DAT_018da8a8 + 0x28);
              local_78 = *puVar4;
              local_74 = *(undefined4 *)(DAT_018da8a8 + 0x20);
              local_70 = *(undefined4 *)(DAT_018da8a8 + 0x24);
              puVar9 = *(undefined4 **)(DAT_018da8a8 + 0x24);
              puVar7 = *(undefined4 **)(DAT_018da8a8 + 0x28);
              local_68 = 0;
              local_5c = 0x4b;
              local_60 = "json-unserializable item. skipping...";
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
            local_88 = &DAT_018abb78;
            local_44 = &local_a0;
            local_40 = (undefined4 *)&DAT_00000001;
            local_3c = 0;
            local_30 = &local_9c;
            DataMemoryBarrier(0xb);
            puVar8 = (undefined4 *)&DAT_018ae394;
            pcVar5 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar5 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar5 = DAT_018daa74 + (DAT_018daa78[2] - 1 & 0xfffffff8) + 8;
            }
            local_94 = puVar4;
            uStack_58 = *puVar4;
            uStack_54 = uVar2;
            puStack_50 = puVar9;
            local_4c = puVar7;
            local_2c = DAT_018da8a8;
            iVar3 = (*(code *)puVar8[10])(pcVar5,&local_40);
            if (iVar3 != 0) {
              (*(code *)puVar8[0xb])(pcVar5,&local_40);
            }
          }
          else if (uVar2 != 0) {
            uVar2 = FUN_0169ac90(&DAT_018da8a8);
            uVar2 = uVar2 & 0xff;
            if (uVar2 != 0) goto LAB_00ee7974;
          }
        }
LAB_00ee7c40:
        iVar3 = local_a0;
        FUN_005c3974(local_a0);
        thunk_FUN_016d3fb4(iVar3);
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      if (local_d0 != 0) {
        thunk_FUN_016d3fb4(local_cc);
      }
      if (local_c4 != 0) {
        thunk_FUN_016d3fb4(local_c0);
      }
      if (local_148 != 0) {
        thunk_FUN_016d3fb4(local_144);
      }
      if (puVar1 == (undefined4 *)&DAT_80000000) {
        local_40 = local_350;
        local_3c = local_34c;
        local_38 = local_348;
      }
      else {
        local_1c8 = (undefined4 *)0x0;
        local_1cc = puVar8;
        local_1d0 = iVar3;
        local_1e0 = local_350;
        local_1dc = local_34c;
        puStack_1d8 = local_348;
        local_1d4 = puVar1;
        if (local_348 == local_350) {
          FUN_01351a98(&local_1e0);
        }
        puVar8 = (undefined4 *)(local_1dc + (int)local_348 * 0x10);
        *puVar8 = local_1d4;
        puVar8[1] = local_1d0;
        puVar8[2] = local_1cc;
        puVar8[3] = local_1c8;
        local_40 = local_1e0;
        local_38 = (undefined4 *)((int)local_348 + 1);
        local_3c = local_1dc;
        puVar7 = local_348;
        puVar8 = local_1c8;
      }
      iVar13 = iVar13 + -0x140;
      local_350 = local_40;
      local_34c = local_3c;
      local_348 = local_38;
      puVar11 = puVar11 + 0x50;
    } while (iVar13 != 0);
    puVar7 = puVar6;
  }
  puVar8 = puVar7 + 0x48;
  *param_1 = local_350;
  param_1[1] = local_34c;
  param_1[2] = local_348;
  for (iVar13 = ((uint)((int)puVar6 - (int)puVar7) >> 6) * -0x33333333; iVar13 != 0;
      iVar13 = iVar13 + -1) {
    if (puVar8[-4] != 0) {
      thunk_FUN_016d3fb4(puVar8[-3]);
    }
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    if (puVar8[-0x22] != 0) {
      thunk_FUN_016d3fb4(puVar8[-0x21]);
    }
    puVar8 = puVar8 + 0x50;
  }
  if (iVar12 != 0) {
    thunk_FUN_016d3fb4(puVar10);
  }
  return;
}

