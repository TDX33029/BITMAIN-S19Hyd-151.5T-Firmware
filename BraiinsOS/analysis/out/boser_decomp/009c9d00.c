// FUN_009c9d00 @ 009c9d00 size=880 calls_out=9 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_009c9d00(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  bool bVar20;
  uint local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_88;
  uint local_84;
  int local_80;
  undefined1 auStack_78 [72];
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar5 = FUN_00ab2840();
    uVar18 = 0;
    puVar13 = (ushort *)(param_2 + 0x3a2);
    uVar1 = *puVar13;
    *(undefined4 *)(iVar5 + 0x318) = 0;
    local_d8 = 0;
    puVar19 = (ushort *)(iVar5 + 0x3a2);
    *puVar19 = 0;
    if (uVar1 != 0) {
      puVar16 = (undefined4 *)(param_2 + 0x324);
      do {
        FUN_006666fc(&local_88,puVar16[-1],*puVar16);
        FUN_009ca17c(&local_d0,param_2);
        uVar15 = (uint)*puVar19;
        if (10 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                       &DAT_01d305b8);
        }
        *puVar19 = *puVar19 + 1;
        piVar9 = (int *)(iVar5 + 0x31c + uVar15 * 0xc);
        puVar16 = puVar16 + 3;
        *piVar9 = local_88;
        piVar9[1] = local_84;
        piVar9[2] = local_80;
        uVar18 = uVar18 + 1;
        FUN_01bed4e2(iVar5 + uVar15 * 0x48,&local_d0,0x48);
        param_2 = param_2 + 0x48;
      } while (uVar18 < *puVar13);
      local_d8 = uVar18;
    }
    *param_1 = iVar5;
    param_1[1] = 0;
    param_1[2] = local_d8;
  }
  else {
    FUN_009c9d00(&local_88,*(undefined4 *)(param_2 + 0x3a8));
    uVar18 = local_84;
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    iVar5 = thunk_FUN_01be5118(0x3d8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x3d8);
    }
    puVar13 = (ushort *)(iVar5 + 0x3a2);
    *puVar13 = 0;
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(int *)(iVar5 + 0x3a8) = local_88;
    bVar20 = 0xfffffffe < local_84;
    local_84 = local_84 + 1;
    if (bVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d305e8);
    }
    *(int *)(local_88 + 0x318) = iVar5;
    *(undefined2 *)(local_88 + 0x3a0) = 0;
    local_88 = iVar5;
    if (*(ushort *)(param_2 + 0x3a2) != 0) {
      puVar16 = (undefined4 *)(param_2 + 0x324);
      iVar14 = 0;
      uVar15 = 0;
      iVar17 = local_80;
      do {
        FUN_006666fc(&local_d0,puVar16[-1],*puVar16);
        FUN_009ca17c(auStack_78,param_2 + iVar14);
        FUN_009c9d00(&local_30,*(undefined4 *)(param_2 + uVar15 * 4 + 0x3ac),param_3 + -1);
        iVar4 = local_28;
        uVar3 = local_c8;
        uVar2 = local_cc;
        uVar10 = local_d0;
        if (local_30 == 0) {
          iVar6 = FUN_00ab2840();
          uVar7 = 0;
          *(undefined4 *)(iVar6 + 0x318) = 0;
          *(undefined2 *)(iVar6 + 0x3a2) = 0;
        }
        else {
          uVar7 = local_2c;
          iVar6 = local_30;
        }
        if (uVar7 != uVar18) {
          uVar10 = 0x30;
          puVar12 = &DAT_01d305c8;
          pcVar8 = &DAT_00533a41;
LAB_009ca028:
          local_80 = iVar17;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar8,uVar10,puVar12);
        }
        uVar7 = (uint)*puVar13;
        if (10 < uVar7) {
          uVar10 = 0x20;
          pcVar8 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
          puVar12 = &DAT_01d305d8;
          goto LAB_009ca028;
        }
        uVar1 = (ushort)(uVar7 + 1);
        *puVar13 = uVar1;
        puVar16 = puVar16 + 3;
        puVar11 = (undefined4 *)(iVar5 + 0x31c + uVar7 * 0xc);
        *puVar11 = uVar10;
        uVar15 = uVar15 + 1;
        puVar11[1] = uVar2;
        puVar11[2] = uVar3;
        FUN_01bed4e2(iVar5 + uVar7 * 0x48,auStack_78,0x48);
        iVar14 = iVar14 + 0x48;
        ((int *)(iVar5 + 0x3a8))[uVar7 + 1] = iVar6;
        *(ushort *)(iVar6 + 0x3a0) = uVar1;
        iVar17 = iVar4 + iVar17 + 1;
        *(int *)(iVar6 + 0x318) = iVar5;
      } while (uVar15 < *(ushort *)(param_2 + 0x3a2));
      local_80 = iVar17;
    }
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = local_80;
  }
  return;
}

