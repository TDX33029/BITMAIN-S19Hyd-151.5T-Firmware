// FUN_009831c8 @ 009831c8 size=1172 calls_out=9 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_009831c8(int *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_37c;
  int local_374;
  int local_370;
  uint local_36c;
  uint local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined1 auStack_350 [376];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int local_1c4;
  uint local_1c0;
  int local_1bc;
  undefined1 auStack_1b8 [376];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar12 = (undefined4 *)(param_2 + 0x10e4);
  if (param_3 == 0) {
    iVar6 = FUN_00ab2940();
    uVar17 = 0;
    sVar1 = *(short *)(param_2 + 0x1162);
    *(undefined4 *)(iVar6 + 0x10d8) = 0;
    local_368 = 0;
    *(undefined2 *)(iVar6 + 0x1162) = 0;
    local_36c = 0;
    local_370 = iVar6;
    if (sVar1 != 0) {
      iVar11 = param_2;
      do {
        FUN_006666fc(&local_360,puVar12[-1],*puVar12);
        FUN_009828b0(auStack_350,iVar11);
        if (*(int *)(iVar11 + 0x178) == -0x80000000) {
          local_30 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_30,*(undefined4 *)(iVar11 + 0x17c),*(undefined4 *)(iVar11 + 0x180));
        }
        FUN_01bed4e2(auStack_1b8,auStack_350,0x178);
        uStack_40 = local_30;
        uStack_3c = uStack_2c;
        uStack_38 = uStack_28;
        uVar15 = (uint)*(ushort *)(iVar6 + 0x1162);
        if (10 < uVar15) {
          local_368 = uVar17;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                       &DAT_01d305b8);
        }
        *(ushort *)(iVar6 + 0x1162) = *(ushort *)(iVar6 + 0x1162) + 1;
        puVar12 = puVar12 + 3;
        puVar8 = (undefined4 *)(iVar6 + 0x10dc + uVar15 * 0xc);
        uVar17 = uVar17 + 1;
        *puVar8 = local_360;
        puVar8[1] = local_35c;
        puVar8[2] = local_358;
        FUN_01bed4e2(uVar15 * 0x188 + iVar6,auStack_1b8,0x188);
        iVar11 = iVar11 + 0x188;
      } while (uVar17 < *(ushort *)(param_2 + 0x1162));
      local_368 = uVar17;
    }
    *param_1 = local_370;
    param_1[1] = local_36c;
    param_1[2] = local_368;
  }
  else {
    FUN_009831c8(&local_370,*(undefined4 *)(param_2 + 0x1168));
    uVar17 = local_36c;
    if (local_370 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    iVar6 = thunk_FUN_01be5118(0x1198);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x1198);
    }
    *(undefined2 *)(iVar6 + 0x1162) = 0;
    *(int *)(iVar6 + 0x1168) = local_370;
    bVar19 = 0xfffffffe < local_36c;
    local_36c = local_36c + 1;
    *(undefined4 *)(iVar6 + 0x10d8) = 0;
    if (bVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d305e8);
    }
    *(undefined2 *)(local_370 + 0x1160) = 0;
    *(int *)(local_370 + 0x10d8) = iVar6;
    local_370 = iVar6;
    if (*(ushort *)(param_2 + 0x1162) != 0) {
      local_37c = local_368;
      iVar16 = 0x10e0;
      iVar18 = 0;
      iVar11 = 0x116c;
      uVar15 = 0;
      local_374 = 0x10e4;
      do {
        FUN_006666fc(&local_360,*(undefined4 *)(param_2 + iVar16),
                     *(undefined4 *)(param_2 + local_374));
        iVar13 = param_2 + iVar18;
        FUN_009828b0(auStack_1b8,iVar13);
        if (*(int *)(iVar13 + 0x178) == -0x80000000) {
          local_30 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_30,*(undefined4 *)(iVar13 + 0x17c),*(undefined4 *)(iVar13 + 0x180));
        }
        FUN_01bed4e2(auStack_350,auStack_1b8,0x178);
        uStack_1d8 = local_30;
        uStack_1d4 = uStack_2c;
        uStack_1d0 = uStack_28;
        FUN_009831c8(&local_1c4,*(undefined4 *)(param_2 + iVar11),param_3 + -1);
        iVar5 = local_1bc;
        uVar14 = local_1c0;
        iVar13 = local_1c4;
        uVar4 = local_358;
        uVar3 = local_35c;
        uVar9 = local_360;
        FUN_01bed4e2(auStack_1b8,auStack_350,0x188);
        if (iVar13 == 0) {
          iVar13 = FUN_00ab2940();
          uVar14 = 0;
          *(undefined4 *)(iVar13 + 0x10d8) = 0;
          *(undefined2 *)(iVar13 + 0x1162) = 0;
        }
        if (uVar14 != uVar17) {
          uVar9 = 0x30;
          puVar10 = &DAT_01d305c8;
          pcVar7 = &DAT_00533a41;
LAB_00983610:
          local_368 = local_37c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar7,uVar9,puVar10);
        }
        uVar14 = (uint)*(ushort *)(iVar6 + 0x1162);
        if (10 < uVar14) {
          uVar9 = 0x20;
          pcVar7 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
          puVar10 = &DAT_01d305d8;
          goto LAB_00983610;
        }
        uVar2 = (undefined2)(uVar14 + 1);
        *(undefined2 *)(iVar6 + 0x1162) = uVar2;
        uVar15 = uVar15 + 1;
        puVar12 = (undefined4 *)(iVar6 + 0x10dc + uVar14 * 0xc);
        *puVar12 = uVar9;
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        FUN_01bed4e2(uVar14 * 0x188 + iVar6,auStack_1b8,0x188);
        iVar16 = iVar16 + 0xc;
        ((int *)(iVar6 + 0x1168))[uVar14 + 1] = iVar13;
        iVar18 = iVar18 + 0x188;
        *(int *)(iVar13 + 0x10d8) = iVar6;
        local_37c = iVar5 + local_37c + 1;
        iVar11 = iVar11 + 4;
        *(undefined2 *)(iVar13 + 0x1160) = uVar2;
        local_374 = local_374 + 0xc;
      } while (uVar15 < *(ushort *)(param_2 + 0x1162));
      local_368 = local_37c;
    }
    *param_1 = local_370;
    param_1[1] = local_36c;
    param_1[2] = local_368;
  }
  return;
}

