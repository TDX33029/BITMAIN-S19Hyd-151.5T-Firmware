// FUN_00ee6550 @ 00ee6550 size=1224 calls_out=10 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | lDefaultError | SetGloba

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee6550(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_250;
  undefined4 *local_24c;
  undefined4 *local_248;
  undefined1 auStack_220 [192];
  undefined4 *local_160;
  undefined4 *local_15c;
  undefined4 *puStack_158;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 *local_14c;
  undefined4 local_148;
  int local_d0;
  undefined4 local_cc;
  int local_c4;
  undefined4 local_c0;
  undefined4 *local_a0;
  undefined4 **local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  char **local_8c;
  undefined *local_88;
  undefined4 *local_84;
  undefined4 ***local_80;
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
  undefined4 **local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 ***local_30;
  int local_2c;
  
  puVar7 = (undefined4 *)param_3[2];
  iVar10 = *param_3;
  iVar12 = param_3[1];
  local_250 = (undefined4 *)*param_2;
  puVar8 = (undefined4 *)param_2[1];
  iVar6 = iVar12 + (int)puVar7 * 0xc0;
  local_248 = (undefined4 *)param_2[2];
  iVar11 = iVar12;
  local_24c = puVar8;
  if (puVar7 != (undefined4 *)0x0) {
    iVar11 = (int)puVar7 * 0xc0;
    iVar13 = iVar12;
    do {
      FUN_016dd1aa(auStack_220,iVar13,0xc0);
      FUN_016dd1aa(&local_160,iVar13,0xc0);
      FUN_00ee6aec(&local_40,&local_160);
      puVar1 = local_40;
      puVar9 = local_3c;
      puVar4 = local_38;
      if (local_40 == (undefined4 *)&DAT_80000000) {
        local_a0 = local_3c;
        if (DAT_018d9130 < 4) {
          uVar2 = (uint)DAT_018da8b0;
          if (uVar2 - 1 < 2) {
LAB_00ee6684:
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
              if (iVar3 == 0) goto LAB_00ee6938;
            }
            puVar4 = (undefined4 *)(DAT_018da8a8 + 0x1c);
            uVar2 = *(uint *)(DAT_018da8a8 + 0x20);
            puVar9 = puVar8;
            if (uVar2 != 0) {
              local_70 = *(undefined4 *)(DAT_018da8a8 + 0x24);
              local_6c = *(undefined4 *)(DAT_018da8a8 + 0x28);
              local_78 = *puVar4;
              local_74 = *(undefined4 *)(DAT_018da8a8 + 0x20);
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
            local_3c = (undefined4 *)0x0;
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
            if (uVar2 != 0) goto LAB_00ee6684;
          }
        }
LAB_00ee6938:
        puVar9 = local_a0;
        FUN_005c3974(local_a0);
        thunk_FUN_016d3fb4(puVar9);
        puVar4 = puVar8;
      }
      puVar8 = puVar4;
      if (local_d0 != 0) {
        thunk_FUN_016d3fb4(local_cc);
      }
      if (local_c4 != 0) {
        thunk_FUN_016d3fb4(local_c0);
      }
      if (puVar1 == (undefined4 *)&DAT_80000000) {
        local_40 = local_250;
        local_3c = local_24c;
        local_38 = local_248;
      }
      else {
        local_148 = 0;
        local_14c = puVar8;
        local_150 = puVar9;
        local_160 = local_250;
        local_15c = local_24c;
        puStack_158 = local_248;
        local_154 = puVar1;
        if (local_248 == local_250) {
          FUN_01351a98(&local_160);
        }
        puVar7 = local_15c + (int)local_248 * 4;
        *puVar7 = local_154;
        puVar7[1] = local_150;
        puVar7[2] = local_14c;
        puVar7[3] = local_148;
        local_40 = local_160;
        local_38 = (undefined4 *)((int)local_248 + 1);
        local_3c = local_15c;
        puVar7 = local_248;
        puVar8 = local_14c;
      }
      iVar11 = iVar11 + -0xc0;
      local_250 = local_40;
      local_24c = local_3c;
      local_248 = local_38;
      iVar13 = iVar13 + 0xc0;
    } while (iVar11 != 0);
    iVar11 = iVar6;
  }
  puVar7 = (undefined4 *)(iVar11 + 0xa0);
  *param_1 = local_250;
  param_1[1] = local_24c;
  param_1[2] = local_248;
  for (iVar11 = ((uint)(iVar6 - iVar11) >> 6) * -0x55555555; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (puVar7[-4] != 0) {
      thunk_FUN_016d3fb4(puVar7[-3]);
    }
    if (puVar7[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar7);
    }
    puVar7 = puVar7 + 0x30;
  }
  if (iVar10 != 0) {
    thunk_FUN_016d3fb4(iVar12);
  }
  return;
}

