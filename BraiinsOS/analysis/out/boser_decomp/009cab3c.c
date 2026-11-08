// FUN_009cab3c @ 009cab3c size=888 calls_out=9 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_009cab3c(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  ushort *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  bool bVar20;
  uint local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_f0;
  uint local_ec;
  int local_e8;
  undefined1 auStack_e0 [176];
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar5 = FUN_00ab28a0();
    uVar19 = 0;
    puVar15 = (ushort *)(param_2 + 0x81a);
    uVar1 = *puVar15;
    *(undefined4 *)(iVar5 + 0x790) = 0;
    local_1a8 = 0;
    puVar9 = (ushort *)(iVar5 + 0x81a);
    *puVar9 = 0;
    if (uVar1 != 0) {
      puVar18 = (undefined4 *)(param_2 + 0x79c);
      do {
        FUN_006666fc(&local_f0,puVar18[-1],*puVar18);
        FUN_009cafc0(&local_1a0,param_2);
        uVar16 = (uint)*puVar9;
        if (10 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                       &DAT_01d305b8);
        }
        *puVar9 = *puVar9 + 1;
        puVar18 = puVar18 + 3;
        uVar19 = uVar19 + 1;
        piVar11 = (int *)(iVar5 + 0x794 + uVar16 * 0xc);
        *piVar11 = local_f0;
        piVar11[1] = local_ec;
        piVar11[2] = local_e8;
        FUN_01bed4e2(uVar16 * 0xb0 + iVar5,&local_1a0,0xb0);
        param_2 = param_2 + 0xb0;
      } while (uVar19 < *puVar15);
      local_1a8 = uVar19;
    }
    *param_1 = iVar5;
    param_1[1] = 0;
    param_1[2] = local_1a8;
  }
  else {
    FUN_009cab3c(&local_f0,*(undefined4 *)(param_2 + 0x820));
    uVar19 = local_ec;
    if (local_f0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    iVar5 = thunk_FUN_01be5118(0x850);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x850);
    }
    puVar15 = (ushort *)(iVar5 + 0x81a);
    *puVar15 = 0;
    *(undefined4 *)(iVar5 + 0x790) = 0;
    *(int *)(iVar5 + 0x820) = local_f0;
    bVar20 = 0xfffffffe < local_ec;
    local_ec = local_ec + 1;
    if (bVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d305e8);
    }
    *(int *)(local_f0 + 0x790) = iVar5;
    *(undefined2 *)(local_f0 + 0x818) = 0;
    puVar9 = (ushort *)(param_2 + 0x81a);
    local_f0 = iVar5;
    if (*puVar9 != 0) {
      iVar6 = param_2 + 0x824;
      puVar18 = (undefined4 *)(param_2 + 0x79c);
      uVar16 = 0;
      iVar17 = local_e8;
      do {
        FUN_006666fc(&local_1a0,puVar18[-1],*puVar18);
        FUN_009cafc0(auStack_e0,param_2);
        FUN_009cab3c(&local_30,*(undefined4 *)(iVar6 + uVar16 * 4),param_3 + -1);
        iVar4 = local_28;
        uVar3 = local_198;
        uVar2 = local_19c;
        uVar12 = local_1a0;
        if (local_30 == 0) {
          iVar7 = FUN_00ab28a0();
          uVar10 = 0;
          *(undefined4 *)(iVar7 + 0x790) = 0;
          *(undefined2 *)(iVar7 + 0x81a) = 0;
        }
        else {
          uVar10 = local_2c;
          iVar7 = local_30;
        }
        if (uVar10 != uVar19) {
          uVar12 = 0x30;
          puVar14 = &DAT_01d305c8;
          pcVar8 = &DAT_00533a41;
LAB_009cae6c:
          local_e8 = iVar17;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar8,uVar12,puVar14);
        }
        uVar10 = (uint)*puVar15;
        if (10 < uVar10) {
          uVar12 = 0x20;
          pcVar8 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
          puVar14 = &DAT_01d305d8;
          goto LAB_009cae6c;
        }
        uVar1 = (ushort)(uVar10 + 1);
        *puVar15 = uVar1;
        puVar18 = puVar18 + 3;
        uVar16 = uVar16 + 1;
        puVar13 = (undefined4 *)(iVar5 + 0x794 + uVar10 * 0xc);
        *puVar13 = uVar12;
        puVar13[1] = uVar2;
        puVar13[2] = uVar3;
        FUN_01bed4e2(uVar10 * 0xb0 + iVar5,auStack_e0,0xb0);
        param_2 = param_2 + 0xb0;
        ((int *)(iVar5 + 0x820))[uVar10 + 1] = iVar7;
        *(ushort *)(iVar7 + 0x818) = uVar1;
        *(int *)(iVar7 + 0x790) = iVar5;
        iVar17 = iVar4 + iVar17 + 1;
      } while (uVar16 < *puVar9);
      local_e8 = iVar17;
    }
    *param_1 = local_f0;
    param_1[1] = local_ec;
    param_1[2] = local_e8;
  }
  return;
}

