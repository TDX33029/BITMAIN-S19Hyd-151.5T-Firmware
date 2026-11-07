// FUN_00ab72bc @ 00ab72bc size=724 calls_out=5 calls_in=1
// strings: 

void FUN_00ab72bc(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  
  uVar14 = param_2[3];
  if (uVar14 == 0) {
    uVar25 = 0;
    uVar15 = 0;
LAB_00ab7368:
    if (uVar15 < uVar14) {
      uVar21 = *(undefined4 *)(param_3 + 4);
      uVar22 = *param_2;
      uVar19 = param_2[1];
      uVar1 = param_2[2];
      iVar9 = *(int *)(param_3 + 8);
      uVar18 = uVar14;
      if (uVar14 < uVar25) {
        uVar18 = uVar25;
      }
      do {
        iVar23 = (uVar1 + uVar15) * 0x2c + uVar19;
        uVar26 = uVar15;
        while( true ) {
          uVar3 = uVar22;
          if (uVar1 + uVar26 < uVar22) {
            uVar3 = 0;
          }
          puVar24 = (undefined4 *)(uVar3 * -0x2c + iVar23);
          if ((puVar24[2] != iVar9) || (iVar2 = thunk_FUN_01bed842(puVar24[1],uVar21), iVar2 != 0))
          break;
          uVar26 = uVar26 + 1;
          iVar23 = iVar23 + 0x2c;
          if (uVar14 <= uVar26) {
            uVar15 = uVar15 + 1;
            if (uVar15 < uVar14) {
              uVar15 = uVar14;
            }
            goto LAB_00ab74a0;
          }
        }
        if (uVar25 == uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_0056c0e8,0x20,&DAT_01d20e1c);
        }
        if (uVar14 <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_0056c748,0x20,&DAT_01d20e2c);
        }
        uVar3 = uVar1 + uVar25;
        uVar15 = uVar3 - uVar22;
        if (uVar3 < uVar22) {
          uVar15 = uVar3;
        }
        puVar4 = (undefined4 *)(uVar15 * 0x2c + uVar19);
        uVar5 = *puVar4;
        uVar7 = puVar4[1];
        uVar10 = puVar4[2];
        uVar12 = puVar4[3];
        uVar16 = puVar4[4];
        uVar6 = puVar4[5];
        uVar8 = puVar4[6];
        uVar11 = puVar4[7];
        uVar13 = puVar4[8];
        uVar17 = puVar4[9];
        uVar20 = puVar4[10];
        FUN_01bed864(puVar4,puVar24,0x2c);
        uVar25 = uVar25 + 1;
        uVar15 = uVar26 + 1;
        *puVar24 = uVar5;
        puVar24[1] = uVar7;
        puVar24[2] = uVar10;
        puVar24[3] = uVar12;
        puVar24[4] = uVar16;
        puVar24[5] = uVar6;
        puVar24[6] = uVar8;
        puVar24[7] = uVar11;
        puVar24[8] = uVar13;
        puVar24[9] = uVar17;
        puVar24[10] = uVar20;
      } while (uVar15 < uVar14);
    }
LAB_00ab74a0:
    if ((uVar15 != uVar25) && (uVar25 < uVar14)) {
      uVar1 = *param_2;
      uVar18 = param_2[1];
      uVar19 = param_2[2];
      param_2[3] = uVar25;
      uVar15 = uVar19 - uVar1;
      if (uVar19 < uVar1) {
        uVar15 = uVar19;
      }
      uVar1 = uVar1 - uVar15;
      iVar9 = uVar14 - uVar1;
      if (uVar14 < uVar1) {
        iVar9 = 0;
      }
      uVar19 = uVar14;
      if (uVar1 < uVar14) {
        uVar19 = uVar1;
      }
      if (uVar1 < uVar25) {
        uVar18 = (uVar25 - uVar19) * 0x2c + uVar18;
        iVar9 = iVar9 - (uVar25 - uVar19);
      }
      else {
        FUN_009d085c(uVar25 * 0x2c + uVar15 * 0x2c + uVar18,uVar19 - uVar25);
      }
      FUN_009d085c(uVar18,iVar9);
      if (uVar25 != uVar14) {
        *param_1 = 0x80000000;
        return;
      }
    }
  }
  else {
    uVar15 = *param_2;
    uVar25 = 0;
    uVar18 = param_2[2];
    iVar9 = uVar18 * 0x2c + param_2[1];
    uVar21 = *(undefined4 *)(param_3 + 4);
    iVar23 = *(int *)(param_3 + 8);
    do {
      uVar1 = uVar15;
      if (uVar18 + uVar25 < uVar15) {
        uVar1 = 0;
      }
      iVar2 = uVar1 * -0x2c + iVar9;
      if ((*(int *)(iVar2 + 8) == iVar23) &&
         (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar2 + 4),uVar21,iVar23), iVar2 == 0)) {
        uVar15 = uVar25 + 1;
        goto LAB_00ab7368;
      }
      iVar9 = iVar9 + 0x2c;
      uVar25 = uVar25 + 1;
    } while (uVar14 != uVar25);
  }
  FUN_006666fc(param_1,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  return;
}

