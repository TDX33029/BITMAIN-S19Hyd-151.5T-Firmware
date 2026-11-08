// FUN_007b28ac @ 007b28ac size=1292 calls_out=12 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | event open/bosminer/bosminer/src/client/stratum_v2/connectors/noise.rs:150 | SetGloba | Couldnt encode stratum-v2 frame

void FUN_007b28ac(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint ***pppuVar6;
  uint uVar7;
  code *pcVar8;
  uint ***extraout_r2;
  uint ***extraout_r2_00;
  uint ***extraout_r3;
  uint ***extraout_r3_00;
  uint ***extraout_r3_01;
  uint ***extraout_r3_02;
  uint ***extraout_r3_03;
  uint ***pppuVar9;
  undefined *puVar10;
  char *pcVar11;
  uint **ppuVar12;
  uint **ppuVar13;
  undefined4 unaff_r10;
  undefined4 ****unaff_r11;
  uint ***local_c8;
  uint ***local_c4;
  uint **local_bc;
  uint ***local_b8;
  uint ***local_b4;
  uint ***local_b0;
  uint ***local_ac;
  uint ***local_a8;
  undefined4 ***local_a0;
  char **local_9c;
  undefined *local_98;
  undefined4 ****local_94;
  uint ***local_90;
  undefined *local_8c;
  uint **local_88;
  uint ***local_84;
  uint ***local_80;
  undefined4 local_7c;
  undefined4 local_78;
  char *local_70;
  undefined4 local_6c;
  uint ***local_68;
  uint ***pppuStack_64;
  undefined4 uStack_60;
  undefined4 ****ppppuStack_5c;
  undefined4 local_58;
  undefined4 ***local_54;
  int local_50 [3];
  int *local_44;
  uint **local_40;
  uint ***local_3c;
  uint ***local_38;
  undefined4 uStack_34;
  undefined4 ****local_30;
  int local_2c;
  
  local_44 = (int *)&DAT_00000001;
  local_50[0] = 1;
  local_50[2] = 0;
  local_50[1] = 0;
  local_a0 = (undefined4 ***)*param_3;
  local_9c = (char **)param_3[1];
  local_98 = (undefined *)param_3[2];
  local_94 = (undefined4 ****)param_3[3];
  local_90 = (uint ***)param_3[4];
  FUN_0161e6ac(&local_40,&local_a0,local_50);
  ppuVar12 = (uint **)&DAT_8000000d;
  if (local_40 != (uint **)&DAT_80000008) {
    local_68 = local_3c;
    pppuStack_64 = local_38;
    uStack_60 = uStack_34;
    ppppuStack_5c = local_30;
    ppuVar12 = local_40;
  }
  if (local_a0 != (undefined4 ***)0x0) {
    thunk_FUN_016d3fb4(local_9c);
  }
  if (ppuVar12 == (uint **)&DAT_8000000d) {
    if (*(int *)(param_2 + 0x80) == 2) {
      FUN_00f5fb8c(param_2 + 0xd0,local_50);
      *param_1 = &DAT_8000000d;
      return;
    }
    FUN_0110f9a0(&local_40,param_2 + 0x10,local_50);
    if (local_40 == (uint **)0x80000002) goto LAB_007b2aa0;
    local_c4 = local_38;
    local_c8 = local_3c;
    pppuVar9 = extraout_r3_00;
    ppuVar12 = local_40;
  }
  else {
    local_3c = local_68;
    local_38 = pppuStack_64;
    uStack_34 = uStack_60;
    local_30 = ppppuStack_5c;
    local_9c = (char **)&DAT_0185c0a4;
    local_a0 = &local_88;
    local_80 = (uint ***)0x0;
    local_88 = (uint **)0x0;
    local_94 = (undefined4 ****)0x0;
    local_84 = (uint ***)&DAT_00000001;
    local_98 = &DAT_60000020;
    local_40 = ppuVar12;
    iVar4 = FUN_01621f9c(&local_40,&local_a0);
    ppuVar12 = local_88;
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_b0,
                   &DAT_0185c0cc,&DAT_018af130);
    }
    local_b0 = local_84;
    local_ac = local_80;
    FUN_007825fc(&local_40);
    piVar3 = local_44;
    local_c4 = local_ac;
    local_c8 = local_b0;
    if (((uint)local_44 & 1) == 0) {
      piVar5 = local_44 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        pppuVar9 = (uint ***)(iVar4 + -1);
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = (int)pppuVar9;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (*local_44 != 0) {
          thunk_FUN_016d3fb4(local_44[1]);
        }
        goto LAB_007b2a94;
      }
    }
    else {
      pppuVar9 = extraout_r3;
      if (local_50[2] + ((uint)local_44 >> 5) != 0) {
        piVar3 = (int *)(local_50[0] - ((uint)local_44 >> 5));
LAB_007b2a94:
        thunk_FUN_016d3fb4(piVar3);
        pppuVar9 = extraout_r3_01;
      }
    }
    if (ppuVar12 == (uint **)0x80000002) {
LAB_007b2aa0:
      *param_1 = &DAT_8000000d;
      return;
    }
  }
  local_b4 = local_c4;
  local_b8 = local_c8;
  local_bc = ppuVar12;
  if ((DAT_018d9130 < 4) && (DAT_018d938c != '\0')) {
    puVar10 = &DAT_018ae394;
    pcVar11 = s_SetGloba_00414c05;
    if (DAT_018d938c == '\x01') {
LAB_007b2b30:
      DataMemoryBarrier(0xb);
      if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar4 = (**(code **)(puVar10 + 0x14))(pcVar11,DAT_018d9384);
      local_c4 = extraout_r2_00;
      pppuVar9 = extraout_r3_03;
      if (iVar4 == 0) goto LAB_007b2c08;
    }
    else if (DAT_018d938c != '\x02') {
      cVar2 = FUN_0169ac90(&DAT_018d9384);
      if (cVar2 == '\0') goto LAB_007b2c08;
      local_c4 = extraout_r2;
      pppuVar9 = extraout_r3_02;
      if (cVar2 != '\x02') goto LAB_007b2b30;
    }
    local_2c = DAT_018d9384;
    pppuVar6 = *(uint ****)(DAT_018d9384 + 0x20);
    if (pppuVar6 != (uint ***)0x0) {
      unaff_r10 = *(undefined4 *)(DAT_018d9384 + 0x24);
      unaff_r11 = *(undefined4 *****)(DAT_018d9384 + 0x28);
      local_c4 = (uint ***)(DAT_018d9384 + 0x1c);
      pppuVar9 = (uint ***)*local_c4;
      local_7c = *(undefined4 *)(DAT_018d9384 + 0x28);
      local_84 = *(uint ****)(DAT_018d9384 + 0x20);
      local_80 = *(uint ****)(DAT_018d9384 + 0x24);
      local_88 = *local_c4;
      local_78 = 0;
      local_6c = 0x3f;
      local_70 = "Couldnt encode stratum-v2 frame";
    }
    if (pppuVar6 < &SUB_00000002) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185d53c);
    }
    local_90 = (uint ***)&local_54;
    local_94 = &local_68;
    local_9c = &local_70;
    local_a0 = &local_88;
    local_ac = (uint ***)&SUB_00000002;
    local_54 = &local_bc;
    local_30 = &local_b0;
    local_58 = 1;
    local_8c = &DAT_0185d47c;
    local_98 = &DAT_018abb78;
    local_3c = (uint ***)0x0;
    local_40 = (uint **)0x1;
    DataMemoryBarrier(0xb);
    pcVar11 = s_SetGloba_00414c05;
    puVar10 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0))
    {
      pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_b0 = (uint ***)&local_a0;
    local_a8 = local_c4;
    local_68 = pppuVar9;
    pppuStack_64 = pppuVar6;
    uStack_60 = unaff_r10;
    ppppuStack_5c = unaff_r11;
    iVar4 = (**(code **)(puVar10 + 0x28))(pcVar11,&local_40);
    if (iVar4 != 0) {
      (**(code **)(puVar10 + 0x2c))(pcVar11,&local_40);
    }
  }
LAB_007b2c08:
  pppuVar9 = local_b4;
  uVar7 = 2;
  if ((int)local_bc < 0) {
    uVar7 = (uint)local_bc ^ 0x80000000;
  }
  if (uVar7 == 0) {
    if ((char)local_b8 != '\x03') goto LAB_007b2c78;
    ppuVar12 = *local_b4;
    ppuVar13 = local_b4[1];
    pcVar8 = (code *)*ppuVar13;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(ppuVar12);
    }
    if (ppuVar13[1] != (uint *)0x0) {
      thunk_FUN_016d3fb4(ppuVar12);
    }
  }
  else {
    if (uVar7 == 1 || local_bc == (uint **)0x0) goto LAB_007b2c78;
    pppuVar9 = local_b8;
  }
  thunk_FUN_016d3fb4(pppuVar9);
LAB_007b2c78:
  *(undefined2 *)(param_1 + 1) = 0x1401;
  *param_1 = &DAT_80000008;
  return;
}

