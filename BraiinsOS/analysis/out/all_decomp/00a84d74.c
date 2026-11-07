// FUN_00a84d74 @ 00a84d74 size=752 calls_out=3 calls_in=1
// strings: 

void FUN_00a84d74(uint *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  int local_74;
  uint local_70;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar14 = *(int *)(param_2 + 0x1c) +
           *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0xc) + *(int *)(param_2 + 4);
  iVar15 = uVar14 * 0x60;
  if (0x1555555 < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar26 = 0;
  if (iVar15 == 0) {
    local_70 = 8;
    uVar14 = 0;
  }
  else {
    local_70 = thunk_FUN_016d4a50(iVar15);
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar15);
    }
  }
  iVar15 = 0;
  local_30 = uVar14;
  local_2c = local_70;
  do {
    do {
      if (iVar15 == 0x20) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = uVar26;
        return;
      }
      piVar11 = (int *)(param_2 + iVar15);
      iVar15 = iVar15 + 8;
      uVar14 = piVar11[1];
      local_28 = uVar26;
      if (local_30 - uVar26 < uVar14) {
        local_74 = *piVar11;
        FUN_00a8a86c(&local_30,uVar26,uVar14,8,0x60);
        local_70 = local_2c;
        goto LAB_00a84e50;
      }
    } while (uVar14 == 0);
    local_74 = *(int *)(param_2 + -8 + iVar15);
LAB_00a84e50:
    uVar25 = 0;
    uVar26 = local_28;
    do {
      puVar28 = (undefined4 *)(local_74 + uVar25 * 0x60);
      piVar11 = (int *)puVar28[0x14];
      do {
        iVar7 = *piVar11;
        bVar6 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar6);
      *piVar11 = iVar7 + 1;
      if (iVar7 < 0) {
LAB_00a85060:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xa85060);
        (*pcVar1)();
      }
      uVar8 = puVar28[0xf];
      uVar9 = puVar28[0x10];
      uVar10 = puVar28[0x11];
      uVar2 = *(undefined1 *)(puVar28 + 0x16);
      uVar3 = *(undefined1 *)((int)puVar28 + 0x57);
      uVar4 = *(undefined1 *)((int)puVar28 + 0x56);
      uVar22 = puVar28[0xe];
      uVar29 = (**(code **)(puVar28[9] + 0xc))(puVar28[8]);
      piVar12 = (int *)puVar28[10];
      do {
        iVar7 = *piVar12;
        bVar6 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar6);
      *piVar12 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00a85060;
      piVar13 = (int *)puVar28[0xc];
      uVar23 = puVar28[0xb];
      do {
        iVar7 = *piVar13;
        bVar6 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar6);
      *piVar13 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00a85060;
      uVar16 = puVar28[1];
      uVar25 = uVar25 + 1;
      uVar17 = puVar28[2];
      uVar18 = puVar28[4];
      uVar19 = puVar28[0x13];
      uVar5 = *(undefined2 *)(puVar28 + 0x15);
      uVar20 = puVar28[6];
      uVar21 = puVar28[0xd];
      uVar24 = puVar28[0x12];
      puVar27 = (undefined4 *)(local_70 + uVar26 * 0x60);
      *puVar27 = *puVar28;
      puVar27[0x12] = uVar24;
      puVar27[5] = puVar28[5];
      puVar27[6] = uVar20;
      *(undefined8 *)(puVar27 + 8) = uVar29;
      puVar27[10] = piVar12;
      puVar27[0xb] = uVar23;
      puVar27[0xd] = uVar21;
      puVar27[0xf] = uVar8;
      puVar27[0x10] = uVar9;
      puVar27[0x11] = uVar10;
      *(undefined1 *)((int)puVar27 + 0x56) = uVar4;
      *(undefined2 *)(puVar27 + 0x15) = uVar5;
      *(undefined1 *)((int)puVar27 + 0x57) = uVar3;
      puVar27[1] = uVar16;
      puVar27[2] = uVar17;
      *(undefined1 *)(puVar27 + 0x16) = uVar2;
      puVar27[0x14] = piVar11;
      puVar27[4] = uVar18;
      puVar27[0xc] = piVar13;
      puVar27[0xe] = uVar22;
      puVar27[0x13] = uVar19;
      uVar26 = uVar26 + 1;
    } while (uVar25 != uVar14);
  } while( true );
}

