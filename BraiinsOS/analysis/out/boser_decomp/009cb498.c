// FUN_009cb498 @ 009cb498 size=828 calls_out=8 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_009cb498(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  uint local_68;
  undefined4 *local_60;
  uint local_5c;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    puVar5 = (undefined4 *)FUN_00ab2960();
    uVar13 = 0;
    uVar1 = *(ushort *)(param_2 + 0x10e);
    *puVar5 = 0;
    local_68 = 0;
    puVar11 = (ushort *)((int)puVar5 + 0x10e);
    *puVar11 = 0;
    if (uVar1 != 0) {
      puVar15 = (undefined4 *)(param_2 + 0x90);
      do {
        FUN_006666fc(&local_60,puVar15[-0x22],puVar15[-0x21]);
        FUN_01318534(&local_50,puVar15[-1],*puVar15);
        uVar14 = (uint)*puVar11;
        if (10 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                       &DAT_01d305b8);
        }
        *puVar11 = *puVar11 + 1;
        uVar13 = uVar13 + 1;
        puVar6 = puVar5 + uVar14 * 3 + 1;
        puVar15 = puVar15 + 3;
        *puVar6 = local_60;
        puVar6[1] = local_5c;
        puVar6[2] = local_58;
        puVar6 = puVar5 + uVar14 * 3 + 0x22;
        *puVar6 = local_50;
        puVar6[1] = local_4c;
        puVar6[2] = local_48;
      } while (uVar13 < *(ushort *)(param_2 + 0x10e));
      local_68 = uVar13;
    }
    *param_1 = puVar5;
    param_1[1] = 0;
    param_1[2] = local_68;
  }
  else {
    FUN_009cb498(&local_60,*(undefined4 *)(param_2 + 0x110));
    uVar13 = local_5c;
    if (local_60 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0x140);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x140);
    }
    *puVar5 = 0;
    puVar11 = (ushort *)((int)puVar5 + 0x10e);
    *puVar11 = 0;
    puVar5[0x44] = local_60;
    bVar17 = 0xfffffffe < local_5c;
    local_5c = local_5c + 1;
    if (bVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d305e8);
    }
    *local_60 = puVar5;
    *(undefined2 *)(local_60 + 0x43) = 0;
    local_60 = puVar5;
    if (*(ushort *)(param_2 + 0x10e) != 0) {
      puVar15 = (undefined4 *)(param_2 + 0x8c);
      uVar14 = 0;
      iVar16 = local_58;
      do {
        FUN_006666fc(&local_50,puVar15[-0x21],puVar15[-0x20]);
        FUN_01318534(&local_40,*puVar15,puVar15[1]);
        FUN_009cb498(&local_30,*(undefined4 *)(param_2 + 0x114 + uVar14 * 4),param_3 + -1);
        iVar4 = local_28;
        uVar3 = local_48;
        uVar2 = local_4c;
        uVar9 = local_50;
        if (local_30 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)FUN_00ab2960();
          uVar8 = 0;
          *puVar6 = 0;
          *(undefined2 *)((int)puVar6 + 0x10e) = 0;
        }
        else {
          puVar6 = local_30;
          uVar8 = local_2c;
        }
        if (uVar8 != uVar13) {
          uVar9 = 0x30;
          puVar10 = &DAT_01d305c8;
          pcVar7 = &DAT_00533a41;
LAB_009cb78c:
          local_58 = iVar16;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar7,uVar9,puVar10);
        }
        uVar8 = (uint)*puVar11;
        if (10 < uVar8) {
          uVar9 = 0x20;
          pcVar7 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
          puVar10 = &DAT_01d305d8;
          goto LAB_009cb78c;
        }
        uVar1 = (ushort)(uVar8 + 1);
        *puVar11 = uVar1;
        puVar15 = puVar15 + 3;
        uVar14 = uVar14 + 1;
        puVar12 = puVar5 + uVar8 * 3 + 1;
        *puVar12 = uVar9;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        puVar12 = puVar5 + uVar8 * 3 + 0x22;
        *puVar12 = local_40;
        puVar12[1] = uStack_3c;
        puVar12[2] = uStack_38;
        (puVar5 + 0x44)[uVar8 + 1] = puVar6;
        *puVar6 = puVar5;
        *(ushort *)(puVar6 + 0x43) = uVar1;
        iVar16 = iVar4 + iVar16 + 1;
      } while (uVar14 < *(ushort *)(param_2 + 0x10e));
      local_58 = iVar16;
    }
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
  }
  return;
}

