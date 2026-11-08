// FUN_00ef23f0 @ 00ef23f0 size=996 calls_out=9 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | lDefaultError | SetGloba

void FUN_00ef23f0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ***pppuVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 **ppuVar8;
  undefined4 ***unaff_r6;
  undefined4 ****ppppuVar9;
  int iVar10;
  int iVar11;
  undefined4 ***local_c0;
  undefined4 ****local_bc;
  undefined4 ***local_b8;
  undefined4 ***local_a0;
  undefined4 ****local_9c;
  undefined4 ***local_98;
  undefined4 ***local_94;
  undefined4 ****local_90;
  undefined4 ***local_8c;
  undefined4 ***local_88;
  undefined4 ****local_80;
  undefined4 ***local_7c;
  undefined4 local_78;
  undefined4 ***local_74;
  undefined4 ***local_70;
  undefined4 ****local_6c;
  undefined4 ***local_68;
  undefined4 **local_64;
  undefined4 *****local_60;
  undefined *local_5c;
  undefined4 **local_58;
  undefined4 **local_54;
  undefined4 **local_50;
  undefined4 **local_4c;
  undefined4 local_48;
  undefined4 ***local_44;
  undefined4 local_40;
  undefined4 **ppuStack_3c;
  undefined4 **ppuStack_38;
  undefined4 ****ppppuStack_34;
  undefined4 ***local_30;
  undefined4 local_2c;
  undefined4 ****local_28;
  
  iVar1 = *param_3;
  iVar2 = param_3[2];
  iVar11 = param_3[1];
  local_c0 = (undefined4 ***)*param_2;
  local_bc = (undefined4 ****)param_2[1];
  local_b8 = (undefined4 ***)param_2[2];
  if (iVar2 != 0) {
    iVar10 = 0;
    do {
      FUN_00ef28a4(&local_a0);
      ppppuVar9 = local_9c;
      pppuVar5 = local_a0;
      if (local_a0 == (undefined4 ***)&DAT_80000000) {
        local_80 = local_9c;
        if (DAT_018d9130 < 4) {
          uVar3 = (uint)DAT_018da8b0;
          if (uVar3 - 1 < 2) {
LAB_00ef24fc:
            if (uVar3 != 2) {
              DataMemoryBarrier(0xb);
              ppppuVar9 = (undefined4 ****)&DAT_018daa64;
              puVar7 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar7 = &DAT_018ae394;
              }
              pcVar6 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar6 = DAT_018daa74 + (*(int *)(puVar7 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar4 = (**(code **)(puVar7 + 0x14))(pcVar6);
              if (iVar4 == 0) goto LAB_00ef2744;
            }
            pppuVar5 = DAT_018da8a8 + 7;
            ppuVar8 = DAT_018da8a8[8];
            if (ppuVar8 != (undefined4 **)0x0) {
              local_54 = DAT_018da8a8[8];
              ppppuVar9 = (undefined4 ****)DAT_018da8a8[9];
              local_58 = *pppuVar5;
              local_50 = DAT_018da8a8[9];
              local_4c = DAT_018da8a8[10];
              unaff_r6 = (undefined4 ***)DAT_018da8a8[10];
              local_48 = 0;
              local_40 = 0x4b;
              local_44 = (undefined4 ***)0x35ab6b;
            }
            if (ppuVar8 < (undefined4 **)0x2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_60 = &local_28;
            local_64 = &ppuStack_3c;
            local_6c = &local_44;
            local_70 = &local_58;
            local_7c = &local_70;
            local_2c = 1;
            local_78 = 2;
            local_5c = &DAT_0187c2b0;
            local_9c = (undefined4 ****)0x0;
            local_68 = (undefined4 ***)&DAT_018abb78;
            local_28 = &local_80;
            local_90 = &local_7c;
            local_a0 = (undefined4 ***)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar6 = s_SetGloba_00414c05;
            puVar7 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar6 = DAT_018daa74, puVar7 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            local_8c = DAT_018da8a8;
            local_74 = pppuVar5;
            ppuStack_3c = *pppuVar5;
            ppuStack_38 = ppuVar8;
            ppppuStack_34 = ppppuVar9;
            local_30 = unaff_r6;
            iVar4 = (**(code **)(puVar7 + 0x28))(pcVar6,&local_a0);
            if (iVar4 != 0) {
              (**(code **)(puVar7 + 0x2c))(pcVar6,&local_a0);
            }
          }
          else if (uVar3 != 0) {
            uVar3 = FUN_0169ac90(&DAT_018da8a8);
            uVar3 = uVar3 & 0xff;
            if (uVar3 != 0) goto LAB_00ef24fc;
          }
        }
LAB_00ef2744:
        ppppuVar9 = local_80;
        FUN_005c3974(local_80);
        thunk_FUN_016d3fb4(ppppuVar9);
        local_70 = local_c0;
        local_6c = local_bc;
        local_68 = local_b8;
      }
      else {
        local_88 = (undefined4 ***)0x0;
        local_8c = local_98;
        local_a0 = local_c0;
        local_9c = local_bc;
        local_98 = local_b8;
        local_90 = ppppuVar9;
        local_94 = pppuVar5;
        if (local_b8 == local_c0) {
          FUN_01351a98(&local_a0);
        }
        ppppuVar9 = local_9c + (int)local_b8 * 4;
        *ppppuVar9 = local_94;
        ppppuVar9[1] = local_90;
        ppppuVar9[2] = local_8c;
        ppppuVar9[3] = local_88;
        local_6c = local_9c;
        local_70 = local_a0;
        local_68 = (undefined4 ***)((int)local_b8 + 1);
        unaff_r6 = local_b8;
      }
      iVar10 = iVar10 + -4;
      local_c0 = local_70;
      local_bc = local_6c;
      local_b8 = local_68;
    } while (iVar2 * -4 != iVar10);
  }
  *param_1 = local_c0;
  param_1[1] = local_bc;
  param_1[2] = local_b8;
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  return;
}

