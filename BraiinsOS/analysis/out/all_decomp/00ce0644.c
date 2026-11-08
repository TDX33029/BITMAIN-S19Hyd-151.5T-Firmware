// FUN_00ce0644 @ 00ce0644 size=424 calls_out=2 calls_in=3
// strings: 

void FUN_00ce0644(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 uVar26;
  uint local_74;
  
  uVar10 = 0;
  iVar25 = param_3 * 0x50;
  if (0x1999999 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar25 == 0) {
    local_74 = 8;
  }
  else {
    local_74 = thunk_FUN_016d4a50(iVar25);
    if (local_74 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar25);
    }
    if (param_3 != 0) {
      puVar5 = param_2 + param_3 * 0x14;
      iVar25 = 0;
      uVar10 = param_3;
      do {
        if (param_2 == puVar5) break;
        piVar23 = (int *)param_2[0x10];
        uVar10 = uVar10 - 1;
        uVar6 = param_2[0x11];
        do {
          iVar15 = *piVar23;
          bVar3 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar3);
        *piVar23 = iVar15 + 1;
        if (iVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xce07d8);
          (*pcVar1)();
        }
        uVar8 = param_2[8];
        uVar11 = param_2[9];
        uVar17 = param_2[10];
        uVar20 = param_2[0xb];
        uVar9 = param_2[0xc];
        uVar12 = param_2[0xd];
        uVar18 = param_2[0xe];
        uVar21 = param_2[0xf];
        uVar7 = param_2[1];
        uVar13 = param_2[2];
        uVar22 = param_2[3];
        uVar2 = *(undefined1 *)(param_2 + 0x12);
        uVar16 = param_2[5];
        puVar24 = (undefined4 *)(local_74 + iVar25 * 0x50);
        uVar19 = param_2[4];
        uVar4 = param_2[7];
        uVar14 = *param_2;
        uVar26 = param_2[6];
        param_2 = param_2 + 0x14;
        *puVar24 = uVar14;
        puVar24[1] = uVar7;
        puVar24[2] = uVar13;
        puVar24[3] = uVar22;
        puVar24[4] = uVar19;
        puVar24[5] = uVar16;
        puVar24[6] = uVar26;
        puVar24[7] = uVar4;
        puVar24[8] = uVar8;
        puVar24[9] = uVar11;
        puVar24[10] = uVar17;
        puVar24[0xb] = uVar20;
        puVar24[0xc] = uVar9;
        puVar24[0xd] = uVar12;
        puVar24[0xe] = uVar18;
        puVar24[0xf] = uVar21;
        *(undefined1 *)(puVar24 + 0x12) = uVar2;
        puVar24[0x10] = piVar23;
        puVar24[0x11] = uVar6;
        iVar25 = iVar25 + 1;
      } while (uVar10 != 0);
    }
    uVar10 = param_3;
  }
  param_1[1] = local_74;
  *param_1 = uVar10;
  param_1[2] = param_3;
  return;
}

