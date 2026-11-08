// FUN_012eba84 @ 012eba84 size=1152 calls_out=13 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012eba84(int *param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  int *local_60;
  int *local_5c;
  undefined1 *local_58;
  int *local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_40;
  int *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar18 = *param_1;
  puVar15 = (uint *)param_1[1];
  puVar17 = (undefined4 *)param_1[2];
  *param_1 = 0;
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce3c20);
  }
  FUN_01656cb0(&local_40,puVar15 + 0x10);
  piVar7 = local_3c;
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce3be0,&DAT_01ce3c10);
  }
  uVar19 = (uint)local_38 & 0xff;
  do {
    iVar10 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = iVar10 + 1;
  if (iVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x12ebee0);
    (*pcVar2)();
  }
  iVar10 = local_3c[4];
  if (iVar10 == local_3c[2]) {
    FUN_019ee178(local_3c + 2);
  }
  piVar5 = (int *)(piVar7[3] + iVar10 * 0xc);
  *piVar5 = (int)param_2;
  piVar5[1] = iVar18;
  piVar5[2] = 0;
  iVar6 = iVar10 + 1;
  piVar7[4] = iVar6;
  if (iVar10 == -1) {
    iVar6 = piVar7[7];
  }
  DataMemoryBarrier(0xb);
  *(bool *)(puVar15 + 0x18) = iVar10 == -1 && iVar6 == 0;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(piVar7,uVar19);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((1 < (puVar15[8] ^ *puVar15)) || (DataMemoryBarrier(0xb), (puVar15[8] & 1) != 0)) {
    piVar7 = param_2 + 5;
    if (*piVar7 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar7);
        if (bVar3) {
          *piVar7 = 1;
          goto LAB_012ebbac;
        }
      } while (*piVar7 == 0);
    }
    ClearExclusiveLocal();
LAB_012ebbac:
    DataMemoryBarrier(0xb);
  }
  piVar7 = (int *)*puVar17;
  param_2 = param_2 + 5;
  uVar19 = 0;
  piVar5 = (int *)puVar17[1];
  puVar8 = (undefined1 *)puVar17[2];
  while( true ) {
    iVar10 = *param_2;
    DataMemoryBarrier(0xb);
    if (iVar10 != 0) break;
    if (uVar19 == 0xb) goto LAB_012ebc38;
    if (uVar19 < 7) {
      uVar9 = 1;
      do {
        uVar1 = uVar9 >> (uVar19 & 0xff);
        uVar9 = uVar9 + 1;
        HintYield();
      } while (uVar1 == 0);
    }
    else {
      FUN_01bea67c();
    }
    uVar19 = uVar19 + 1;
  }
  goto LAB_012ebd04;
  while (iVar10 = *param_2, iVar10 == 0) {
LAB_012ebe18:
    bVar4 = (bool)hasExclusiveAccess(param_2);
    if (bVar4) {
      *param_2 = 1;
      goto LAB_012ebe38;
    }
  }
LAB_012ebe30:
  bVar3 = false;
  ClearExclusiveLocal();
LAB_012ebe38:
  DataMemoryBarrier(0xb);
  if ((!bVar3) && (1 < iVar10 - 1U)) {
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce3bc0);
    }
    return;
  }
  goto LAB_012ebd10;
LAB_012ebc38:
  iVar10 = *param_2;
  DataMemoryBarrier(0xb);
  if (iVar10 == 0) {
    if (puVar8 == &DAT_3b9aca00) {
      FUN_019b37f8();
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar3 = (int)((int)local_3c - ((int)piVar5 + (uint)(local_40 < piVar7))) < 0 ==
              (SBORROW4((int)local_3c,(int)piVar5) !=
              SBORROW4((int)local_3c - (int)piVar5,(uint)(local_40 < piVar7)));
      if (local_40 == piVar7 && local_3c == piVar5) {
        bVar3 = puVar8 <= local_38;
      }
      if (bVar3) {
        iVar10 = *param_2;
        if (iVar10 != 0) goto LAB_012ebe30;
        DataMemoryBarrier(0xb);
        bVar3 = true;
        goto LAB_012ebe18;
      }
      local_4c = local_3c;
      local_48 = local_38;
      local_50 = local_40;
      local_60 = piVar7;
      local_5c = piVar5;
      local_58 = puVar8;
      FUN_019ac248(&local_40,&local_60,&local_50);
      uVar12 = local_30;
      uVar11 = local_34;
      puVar16 = local_38;
      if (((uint)local_40 & 1) != 0) {
        puVar16 = (undefined1 *)0x0;
        uVar11 = 0;
        uVar12 = 0;
      }
      FUN_019b0ae4(puVar16,uVar11,uVar12);
    }
    goto LAB_012ebc38;
  }
LAB_012ebd04:
  if (iVar10 - 1U < 2) {
LAB_012ebd10:
    FUN_01656cb0(&local_40,puVar15 + 0x10);
    if (local_40 == (int *)&DAT_00000001) {
      local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
      local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce3be0,&DAT_01ce3c00);
    }
    iVar14 = local_3c[4];
    iVar6 = local_3c[3];
    iVar10 = iVar14 * 0xc;
    iVar13 = -1;
    do {
      if (iVar10 == 0) {
        local_40 = (int *)0x0;
        goto LAB_012ebd8c;
      }
      piVar7 = (int *)(iVar6 + 4);
      iVar10 = iVar10 + -0xc;
      iVar13 = iVar13 + 1;
      iVar6 = iVar6 + 0xc;
    } while (*piVar7 != iVar18);
    FUN_012e8fb8(&local_40,local_3c + 2,iVar13,&DAT_01ce3bf0);
    iVar14 = local_3c[4];
LAB_012ebd8c:
    piVar7 = local_40;
    uVar19 = 0;
    if (iVar14 == 0) {
      uVar19 = local_3c[7];
    }
    DataMemoryBarrier(0xb);
    if (iVar14 == 0) {
      uVar19 = (uint)(uVar19 == 0);
    }
    *(char *)(puVar15 + 0x18) = (char)uVar19;
    DataMemoryBarrier(0xb);
    FUN_00a97e8c(local_3c,(uint)local_38 & 0xff);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce3bd0);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar7;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01319d44(piVar7);
      return;
    }
  }
  return;
}

