// FUN_0079e850 @ 0079e850 size=1544 calls_out=11 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | event open/bosminer/bosminer/src/client/stratum_v2/connectors/noise.rs:165bosminer::client::stratum_v2::connectors::noiseopen/bosminer/bosminer/src/client/stratum_v2/connectors/noise.rs | Couldnt decode stratum-v2 frame | Couldnt decode stratum-v2 frame

void FUN_0079e850(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int *****pppppiVar5;
  uint uVar6;
  int ***pppiVar7;
  int *****extraout_r2;
  int *****extraout_r2_00;
  int *****extraout_r2_01;
  int *****extraout_r2_02;
  int *****pppppiVar8;
  int *****extraout_r2_03;
  int *****extraout_r2_04;
  int *****extraout_r2_05;
  char *pcVar9;
  int ****ppppiVar10;
  int *****pppppiVar11;
  int *****pppppiVar12;
  int ****ppppiVar13;
  int *****unaff_r10;
  int *****unaff_r11;
  int *****local_a8;
  int *****local_a4;
  int *****local_a0;
  int *****local_9c;
  undefined4 local_98;
  int *****local_94;
  int *****local_90;
  int *****local_8c;
  int *****local_88;
  int *****local_84;
  undefined4 local_80;
  int ****local_7c;
  undefined4 local_78;
  int *****local_74;
  int *****local_70;
  int *****local_6c;
  int *****local_68;
  int *****local_64;
  int *****local_60;
  int *****local_5c;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  int *****local_40;
  int *****local_3c;
  int *****pppppiStack_38;
  int *****local_34;
  int *****local_30;
  int *****local_2c;
  
  if (*(int *)(param_2 + 0x70) == 2) {
    FUN_01620eb0(&local_70,param_2 + 0x98);
    pppppiVar8 = extraout_r2;
    if (local_70 == (int *****)&DAT_00000001) {
LAB_0079e9b8:
      unaff_r10 = (int *****)&local_6c;
      local_40 = local_6c;
      local_3c = local_68;
      pppppiStack_38 = local_64;
      local_34 = local_60;
      local_30 = local_5c;
      local_58 = (int *****)&local_90;
      local_88 = (int *****)0x0;
      local_90 = (int *****)0x0;
      local_4c = (int *****)0x0;
      local_8c = (int *****)&DAT_00000001;
      local_50 = (int *****)&DAT_60000020;
      local_54 = (int *****)&DAT_0185c0a4;
      iVar4 = FUN_01621f9c(&local_40,&local_58);
      pppppiVar11 = local_88;
      pppppiVar5 = local_8c;
      pppppiVar12 = local_90;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_9c,
                     &DAT_0185c0cc,&DAT_018af130);
      }
      FUN_007825fc(unaff_r10);
      pppppiVar8 = extraout_r2_02;
    }
    else {
LAB_0079eb30:
      pppppiVar12 = local_68;
      pppppiVar11 = local_60;
      pppppiVar5 = local_64;
      if (local_6c != (int *****)0x80000001) {
        param_1[1] = local_6c;
        param_1[2] = local_68;
        param_1[3] = local_64;
        param_1[4] = local_60;
        param_1[5] = local_5c;
        *param_1 = 0;
        return;
      }
    }
  }
  else {
    FUN_0110ff28(&local_40);
    pppppiVar8 = extraout_r2_00;
    pppppiVar12 = local_3c;
    pppppiVar11 = local_34;
    pppppiVar5 = pppppiStack_38;
    if (local_40 == (int *****)0x0) {
      if (local_3c == (int *****)0x0) goto LAB_0079eac4;
      local_8c = pppppiStack_38;
      local_84 = local_30;
      local_90 = local_3c;
      local_88 = local_34;
      FUN_01620eb0(&local_40,param_2 + 0x98,&local_90);
      pppppiVar12 = local_84;
      if (local_40 == (int *****)0x0) {
        if (local_3c != (int *****)&DAT_80000000) {
          local_58 = local_3c;
          local_54 = pppppiStack_38;
          local_50 = local_34;
          local_4c = local_30;
          local_48 = local_2c;
          if (((uint)local_84 & 1) == 0) {
            pppppiVar8 = local_84 + 4;
            DataMemoryBarrier(0xb);
            do {
              ppppiVar10 = *pppppiVar8;
              bVar1 = (bool)hasExclusiveAccess(pppppiVar8);
            } while (!bVar1);
            *pppppiVar8 = (int ****)((int)ppppiVar10 + -1);
            if (ppppiVar10 == (int ****)0x1) {
              DataMemoryBarrier(0xb);
              if (*local_84 != (int ****)0x0) {
                thunk_FUN_016d3fb4(local_84[1]);
              }
              goto LAB_0079eb1c;
            }
          }
          else if ((undefined1 *)((int)local_88 + ((uint)local_84 >> 5)) != (undefined1 *)0x0) {
            pppppiVar12 = (int *****)((int)local_90 - ((uint)local_84 >> 5));
LAB_0079eb1c:
            thunk_FUN_016d3fb4(pppppiVar12);
          }
          local_6c = local_58;
          local_68 = local_54;
          local_64 = local_50;
          local_60 = local_4c;
          local_5c = local_48;
          pppppiVar8 = local_54;
          goto LAB_0079eb30;
        }
        if (((uint)local_84 & 1) == 0) {
          pppppiVar5 = local_84 + 4;
          DataMemoryBarrier(0xb);
          do {
            pppppiVar8 = (int *****)*pppppiVar5;
            bVar1 = (bool)hasExclusiveAccess(pppppiVar5);
          } while (!bVar1);
          *pppppiVar5 = (int ****)((int)pppppiVar8 + -1);
          if (pppppiVar8 == (int *****)&DAT_00000001) {
            DataMemoryBarrier(0xb);
            if (*local_84 != (int ****)0x0) {
              thunk_FUN_016d3fb4(local_84[1]);
            }
            goto LAB_0079eac0;
          }
        }
        else {
          pppppiVar8 = extraout_r2_01;
          if ((undefined1 *)((int)local_88 + ((uint)local_84 >> 5)) != (undefined1 *)0x0) {
            pppppiVar12 = (int *****)((int)local_90 - ((uint)local_84 >> 5));
LAB_0079eac0:
            thunk_FUN_016d3fb4(pppppiVar12);
            pppppiVar8 = extraout_r2_03;
          }
        }
LAB_0079eac4:
        local_6c = (int *****)&DAT_80000000;
        goto LAB_0079eb30;
      }
      local_58 = local_3c;
      local_54 = pppppiStack_38;
      local_50 = local_34;
      local_4c = local_30;
      local_48 = local_2c;
      if (((uint)local_84 & 1) == 0) {
        pppppiVar8 = local_84 + 4;
        DataMemoryBarrier(0xb);
        do {
          ppppiVar10 = *pppppiVar8;
          bVar1 = (bool)hasExclusiveAccess(pppppiVar8);
        } while (!bVar1);
        *pppppiVar8 = (int ****)((int)ppppiVar10 + -1);
        if (ppppiVar10 == (int ****)0x1) {
          DataMemoryBarrier(0xb);
          if (*local_84 != (int ****)0x0) {
            thunk_FUN_016d3fb4(local_84[1]);
          }
          goto LAB_0079e9a4;
        }
      }
      else if ((undefined1 *)((int)local_88 + ((uint)local_84 >> 5)) != (undefined1 *)0x0) {
        pppppiVar12 = (int *****)((int)local_90 - ((uint)local_84 >> 5));
LAB_0079e9a4:
        thunk_FUN_016d3fb4(pppppiVar12);
      }
      local_6c = local_58;
      local_68 = local_54;
      local_64 = local_50;
      local_60 = local_4c;
      local_5c = local_48;
      goto LAB_0079e9b8;
    }
  }
  local_a8 = pppppiVar12;
  local_a4 = pppppiVar5;
  local_a0 = pppppiVar11;
  if ((DAT_018d9130 < 4) && (pppppiVar12 = (int *****)&DAT_018d936c, DAT_018d9380 != '\0')) {
    if (DAT_018d9380 == '\x01') {
LAB_0079ebbc:
      DataMemoryBarrier(0xb);
      pcVar9 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar4 = (**(code **)(puVar2 + 0x14))(pcVar9,DAT_018d9378);
      pppppiVar8 = extraout_r2_05;
      if (iVar4 == 0) goto LAB_0079ec8c;
    }
    else if (DAT_018d9380 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d9378);
      if (cVar3 == '\0') goto LAB_0079ec8c;
      pppppiVar8 = extraout_r2_04;
      if (cVar3 != '\x02') goto LAB_0079ebbc;
    }
    local_2c = DAT_018d9378;
    pppppiVar5 = (int *****)DAT_018d9378[8];
    if (pppppiVar5 != (int *****)0x0) {
      pppppiVar8 = DAT_018d9378 + 7;
      pppppiVar12 = (int *****)*pppppiVar8;
      unaff_r10 = (int *****)DAT_018d9378[9];
      unaff_r11 = (int *****)DAT_018d9378[10];
      local_90 = (int *****)*pppppiVar8;
      local_8c = (int *****)DAT_018d9378[8];
      local_88 = (int *****)DAT_018d9378[9];
      local_84 = (int *****)DAT_018d9378[10];
      local_80 = 0;
      local_78 = 0x3f;
      local_7c = (int ****)0x341cdc;
    }
    if (pppppiVar5 < &SUB_00000002) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185d46c);
    }
    local_60 = (int *****)&local_74;
    local_64 = (int *****)&local_58;
    local_6c = &local_7c;
    local_70 = (int *****)&local_90;
    local_9c = (int *****)&local_70;
    local_98 = 2;
    local_74 = (int *****)&local_a8;
    local_30 = (int *****)&local_9c;
    local_48 = (int *****)&DAT_00000001;
    local_5c = (int *****)&DAT_0185d47c;
    local_68 = (int *****)&DAT_018abb78;
    local_3c = (int *****)0x0;
    local_40 = (int *****)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar9 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_94 = pppppiVar8;
    local_58 = pppppiVar12;
    local_54 = pppppiVar5;
    local_50 = unaff_r10;
    local_4c = unaff_r11;
    iVar4 = (**(code **)(puVar2 + 0x28))(pcVar9,&local_40);
    if (iVar4 != 0) {
      (**(code **)(puVar2 + 0x2c))(pcVar9,&local_40);
    }
  }
LAB_0079ec8c:
  pppppiVar8 = local_a0;
  uVar6 = 2;
  if ((int)local_a8 < 0) {
    uVar6 = (uint)local_a8 ^ 0x80000000;
  }
  if (uVar6 == 0) {
    if ((char)local_a4 != '\x03') goto LAB_0079ecfc;
    ppppiVar10 = *local_a0;
    ppppiVar13 = local_a0[1];
    pppiVar7 = *ppppiVar13;
    if (pppiVar7 != (int ***)0x0) {
      (*(code *)pppiVar7)(ppppiVar10);
    }
    if (ppppiVar13[1] != (int ***)0x0) {
      thunk_FUN_016d3fb4(ppppiVar10);
    }
  }
  else {
    if (uVar6 == 1 || local_a8 == (int *****)0x0) goto LAB_0079ecfc;
    pppppiVar8 = local_a4;
  }
  thunk_FUN_016d3fb4(pppppiVar8);
LAB_0079ecfc:
  *(undefined2 *)(param_1 + 2) = 0x1501;
  param_1[1] = &DAT_80000008;
  *param_1 = 1;
  return;
}

