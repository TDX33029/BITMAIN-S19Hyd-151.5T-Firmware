// FUN_012ec574 @ 012ec574 size=1132 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012ec574(int *param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
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
  puVar16 = (undefined4 *)param_1[2];
  *param_1 = 0;
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce3c20);
  }
  FUN_01656cb0(&local_40);
  piVar13 = local_3c;
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce3c50,&DAT_01ce3c10);
  }
  uVar17 = (uint)local_38 & 0xff;
  do {
    iVar8 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = iVar8 + 1;
  if (iVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x12ec9bc);
    (*pcVar2)();
  }
  iVar8 = local_3c[4];
  if (iVar8 == local_3c[2]) {
    FUN_019ee178(local_3c + 2);
  }
  piVar5 = (int *)(piVar13[3] + iVar8 * 0xc);
  *piVar5 = (int)param_2;
  piVar5[1] = iVar18;
  piVar5[2] = 0;
  iVar6 = iVar8 + 1;
  piVar13[4] = iVar6;
  if (iVar8 == -1) {
    iVar6 = piVar13[7];
  }
  DataMemoryBarrier(0xb);
  *(bool *)(puVar15 + 0x24) = iVar8 == -1 && iVar6 == 0;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(piVar13,uVar17);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (((puVar15[8] & ~puVar15[0x12]) != *puVar15) ||
     (DataMemoryBarrier(0xb), (puVar15[0x12] & puVar15[8]) != 0)) {
    piVar13 = param_2 + 5;
    if (*piVar13 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar13);
        if (bVar3) {
          *piVar13 = 1;
          goto LAB_012ec698;
        }
      } while (*piVar13 == 0);
    }
    ClearExclusiveLocal();
LAB_012ec698:
    DataMemoryBarrier(0xb);
  }
  param_2 = param_2 + 5;
  piVar13 = (int *)*puVar16;
  piVar5 = (int *)puVar16[1];
  puVar19 = (undefined1 *)puVar16[2];
  uVar17 = 0;
  while( true ) {
    iVar8 = *param_2;
    DataMemoryBarrier(0xb);
    if (iVar8 != 0) break;
    if (uVar17 == 0xb) {
      goto LAB_012ec70c;
    }
    if (uVar17 < 7) {
      uVar7 = 1;
      do {
        uVar1 = uVar7 >> (uVar17 & 0xff);
        uVar7 = uVar7 + 1;
        HintYield();
      } while (uVar1 == 0);
    }
    else {
      FUN_01bea67c();
    }
    uVar17 = uVar17 + 1;
  }
  goto LAB_012ec7e0;
  while (iVar8 = *param_2, iVar8 == 0) {
LAB_012ec8f4:
    bVar4 = (bool)hasExclusiveAccess(param_2);
    if (bVar4) {
      *param_2 = 1;
      goto LAB_012ec914;
    }
  }
LAB_012ec90c:
  bVar3 = false;
  ClearExclusiveLocal();
LAB_012ec914:
  DataMemoryBarrier(0xb);
  if ((!bVar3) && (1 < iVar8 - 1U)) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce3c30);
    }
    return;
  }
  goto LAB_012ec7ec;
LAB_012ec70c:
  iVar8 = *param_2;
  DataMemoryBarrier(0xb);
  if (iVar8 == 0) {
    if (puVar19 == &DAT_3b9aca00) {
      FUN_019b37f8();
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar3 = (int)((int)local_3c - ((int)piVar5 + (uint)(local_40 < piVar13))) < 0 ==
              (SBORROW4((int)local_3c,(int)piVar5) !=
              SBORROW4((int)local_3c - (int)piVar5,(uint)(local_40 < piVar13)));
      if (local_40 == piVar13 && local_3c == piVar5) {
        bVar3 = puVar19 <= local_38;
      }
      if (bVar3) {
        iVar8 = *param_2;
        if (iVar8 != 0) goto LAB_012ec90c;
        DataMemoryBarrier(0xb);
        bVar3 = true;
        goto LAB_012ec8f4;
      }
      local_4c = local_3c;
      local_48 = local_38;
      local_50 = local_40;
      local_60 = piVar13;
      local_5c = piVar5;
      local_58 = puVar19;
      FUN_019ac248(&local_40,&local_60,&local_50);
      uVar10 = local_30;
      uVar9 = local_34;
      puVar14 = local_38;
      if (((uint)local_40 & 1) != 0) {
        puVar14 = (undefined1 *)0x0;
        uVar9 = 0;
        uVar10 = 0;
      }
      FUN_019b0ae4(puVar14,uVar9,uVar10);
    }
    goto LAB_012ec70c;
  }
LAB_012ec7e0:
  if (iVar8 - 1U < 2) {
LAB_012ec7ec:
    FUN_01656cb0(&local_40,puVar15 + 0x1c);
    if (local_40 == (int *)&DAT_00000001) {
      local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
      local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce3c50,&DAT_01ce3c00);
    }
    iVar12 = local_3c[4];
    iVar6 = local_3c[3];
    iVar8 = iVar12 * 0xc;
    iVar11 = -1;
    do {
      if (iVar8 == 0) {
        local_40 = (int *)0x0;
        goto LAB_012ec868;
      }
      piVar13 = (int *)(iVar6 + 4);
      iVar8 = iVar8 + -0xc;
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 0xc;
    } while (*piVar13 != iVar18);
    FUN_012e8fb8(&local_40,local_3c + 2,iVar11,&DAT_01ce3bf0);
    iVar12 = local_3c[4];
LAB_012ec868:
    piVar13 = local_40;
    uVar17 = 0;
    if (iVar12 == 0) {
      uVar17 = local_3c[7];
    }
    DataMemoryBarrier(0xb);
    if (iVar12 == 0) {
      uVar17 = (uint)(uVar17 == 0);
    }
    *(char *)(puVar15 + 0x24) = (char)uVar17;
    DataMemoryBarrier(0xb);
    FUN_00a97e8c(local_3c,(uint)local_38 & 0xff);
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce3c40);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01319d44(piVar13);
      return;
    }
  }
  return;
}

