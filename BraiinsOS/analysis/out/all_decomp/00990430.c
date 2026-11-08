// FUN_00990430 @ 00990430 size=724 calls_out=3 calls_in=1
// strings: 

void FUN_00990430(uint *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
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
  uint uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  uint local_74;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar16 = *(int *)(param_2 + 0x1c) +
           *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0xc) + *(int *)(param_2 + 4);
  iVar17 = uVar16 * 0x60;
  if (0x1555555 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar25 = 0;
  if (iVar17 == 0) {
    local_74 = 8;
    uVar16 = 0;
  }
  else {
    local_74 = thunk_FUN_016d4a50(iVar17);
    if (local_74 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar17);
    }
  }
  iVar17 = 0;
  local_30 = uVar16;
  local_2c = local_74;
LAB_009904c8:
  if (iVar17 == 0x20) {
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar25;
    return;
  }
  piVar7 = (int *)(param_2 + iVar17);
  iVar13 = *piVar7;
  iVar17 = iVar17 + 8;
  uVar16 = piVar7[1];
  local_28 = uVar25;
  if (uVar16 <= local_30 - uVar25) goto code_r0x009904f8;
  FUN_00995818(&local_30,uVar25,uVar16,8,0x60);
  local_74 = local_2c;
  goto LAB_00990500;
code_r0x009904f8:
  if (uVar16 != 0) {
LAB_00990500:
    uVar29 = 0;
    uVar26 = local_28;
    do {
      puVar28 = (undefined4 *)(iVar13 + uVar29 * 0x60);
      piVar7 = (int *)puVar28[0x14];
      do {
        iVar8 = *piVar7;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_00990700:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x990700);
        (*pcVar1)();
      }
      uVar9 = puVar28[0x11];
      uVar2 = *(undefined1 *)(puVar28 + 0x16);
      uVar3 = *(undefined1 *)((int)puVar28 + 0x57);
      uVar4 = *(undefined1 *)((int)puVar28 + 0x56);
      uVar21 = puVar28[0xe];
      uVar18 = puVar28[0xf];
      uVar19 = puVar28[0x10];
      uVar31 = (**(code **)(puVar28[9] + 0xc))(puVar28[8]);
      piVar14 = (int *)puVar28[10];
      do {
        iVar8 = *piVar14;
        bVar6 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar6);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00990700;
      uVar30 = puVar28[0xb];
      piVar15 = (int *)puVar28[0xc];
      do {
        iVar8 = *piVar15;
        bVar6 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar6);
      *piVar15 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00990700;
      uVar22 = puVar28[1];
      uVar29 = uVar29 + 1;
      uVar10 = puVar28[4];
      uVar23 = puVar28[2];
      uVar11 = puVar28[0x13];
      uVar25 = uVar26 + 1;
      uVar5 = *(undefined2 *)(puVar28 + 0x15);
      uVar24 = puVar28[0xd];
      uVar20 = puVar28[0x12];
      uVar12 = puVar28[6];
      puVar27 = (undefined4 *)(local_74 + uVar26 * 0x60);
      *puVar27 = *puVar28;
      puVar27[0x12] = uVar20;
      uVar20 = puVar28[5];
      puVar27[6] = uVar12;
      puVar27[0xb] = uVar30;
      puVar27[0xd] = uVar24;
      puVar27[0xe] = uVar21;
      puVar27[0xf] = uVar18;
      puVar27[9] = (int)((ulonglong)uVar31 >> 0x20);
      puVar27[0x10] = uVar19;
      puVar27[0x11] = uVar9;
      *(undefined1 *)((int)puVar27 + 0x56) = uVar4;
      *(undefined2 *)(puVar27 + 0x15) = uVar5;
      *(undefined1 *)((int)puVar27 + 0x57) = uVar3;
      puVar27[1] = uVar22;
      puVar27[2] = uVar23;
      *(undefined1 *)(puVar27 + 0x16) = uVar2;
      puVar27[0x14] = piVar7;
      puVar27[4] = uVar10;
      puVar27[5] = uVar20;
      puVar27[8] = (int)uVar31;
      puVar27[10] = piVar14;
      puVar27[0xc] = piVar15;
      puVar27[0x13] = uVar11;
      uVar26 = uVar25;
    } while (uVar29 != uVar16);
  }
  goto LAB_009904c8;
}

