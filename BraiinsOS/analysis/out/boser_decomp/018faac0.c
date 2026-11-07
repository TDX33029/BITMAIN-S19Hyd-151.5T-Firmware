// FUN_018faac0 @ 018faac0 size=944 calls_out=9 calls_in=2
// strings: no kx groups configuredAwsLcRsEdDSAParameters

void FUN_018faac0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  uint *puVar5;
  uint *puVar4;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  short *psVar10;
  short sVar11;
  char *pcVar12;
  short *psVar13;
  char *pcVar14;
  short *psVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  int *piVar23;
  int *piVar24;
  int local_58;
  char *local_54;
  int local_50;
  char *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  code *local_30;
  char **local_2c;
  code *local_28;
  
  piVar17 = (int *)*param_2;
  if (piVar17[4] != 0) {
    iVar6 = param_4 << 2;
    puVar4 = (uint *)piVar17[3];
    do {
      puVar5 = puVar4 + 2;
      if (param_4 != 0) {
        sVar11 = 4;
        if ((*puVar4 & 1) != 0) {
          sVar11 = 5;
        }
        iVar16 = iVar6;
        puVar19 = param_3;
        do {
          if (*(short *)*puVar19 == sVar11) {
            iVar16 = piVar17[7];
            if (iVar16 != 0) {
              pcVar7 = (char *)thunk_FUN_01be5118(2);
              if (pcVar7 == (char *)0x0) {
                uVar20 = 2;
                goto LAB_018fae64;
              }
              iVar18 = 0;
              puVar21 = (undefined4 *)piVar17[6];
              local_58 = 2;
              puVar19 = puVar21 + iVar16 * 2;
              local_50 = 0;
              local_54 = pcVar7;
              goto LAB_018fabd4;
            }
            iVar6 = thunk_FUN_01be5118(0x17);
            if (iVar6 == 0) {
              uVar20 = 0x17;
              goto LAB_018fae64;
            }
            FUN_01bed4e2(iVar6,"no kx groups configuredAwsLcRsEdDSAParameters",0x17);
            param_1[2] = &DAT_80000020;
            param_1[3] = 0x17;
            param_1[4] = iVar6;
            param_1[5] = 0x17;
            *param_1 = 0x80000003;
            goto LAB_018fae00;
          }
          puVar19 = puVar19 + 1;
          iVar16 = iVar16 + -4;
        } while (iVar16 != 0);
      }
      puVar4 = puVar5;
    } while (puVar5 != (uint *)piVar17[3] + piVar17[4] * 2);
  }
  iVar6 = thunk_FUN_01be5118(0x22);
  if (iVar6 == 0) {
    uVar20 = 0x22;
LAB_018fae64:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar20);
  }
  FUN_01bed4e2(iVar6,&DAT_00522138,0x22);
  param_1[2] = &DAT_80000020;
  param_1[3] = 0x22;
  param_1[4] = iVar6;
  param_1[5] = 0x22;
  *param_1 = 0x80000003;
  goto LAB_018fae00;
LAB_018fabd4:
  do {
    if (puVar21 == puVar19) goto LAB_018fac4c;
    (**(code **)(puVar21[1] + 0x1c))(*puVar21);
    puVar21 = puVar21 + 2;
    uVar8 = FUN_0190abbc();
    uVar8 = (uVar8 & 0xff00) - 0x100;
    iVar16 = 0;
    if (uVar8 != 0) {
      uVar8 = 1;
    }
    do {
      if (iVar18 == iVar16) {
        if (iVar18 == local_58) {
          FUN_018faa08(&local_58);
          pcVar7 = local_54;
        }
        pcVar7[iVar18] = (char)uVar8;
        iVar18 = iVar18 + 1;
        local_50 = iVar18;
        break;
      }
      pbVar1 = (byte *)(pcVar7 + iVar16);
      iVar16 = iVar16 + 1;
    } while (*pbVar1 != uVar8);
  } while (iVar18 != 2);
  iVar18 = 2;
LAB_018fac4c:
  pcVar7 = local_54;
  if (piVar17[4] == 0) {
LAB_018faccc:
    psVar13 = (short *)0x0;
    psVar15 = (short *)0x0;
    do {
      psVar10 = (short *)*param_3;
      if (*psVar10 == 4) {
        psVar13 = psVar10;
      }
      else if (*psVar10 == 5) {
        psVar15 = psVar10;
      }
      iVar6 = iVar6 + -4;
      param_3 = param_3 + 1;
    } while (iVar6 != 0);
    uVar20 = param_2[1];
    uVar22 = param_2[2];
    *param_1 = 0x80000002;
    param_1[0x11] = psVar13;
    param_1[0x12] = psVar15;
    param_1[0x13] = piVar17;
    param_1[0x14] = uVar20;
    param_1[0x15] = uVar22;
    FUN_019bb7e0(local_58,local_54);
    return;
  }
  piVar9 = (int *)piVar17[3];
  piVar23 = piVar9 + piVar17[4] * 2;
LAB_018fac64:
  iVar16 = *piVar9;
  piVar24 = piVar9 + 1;
  piVar9 = piVar9 + 2;
  local_48 = iVar16 + 1;
  local_4c = "\x01";
  if (iVar16 == 0) {
    local_4c = (char *)(*piVar24 + 0x30);
  }
  for (pcVar12 = local_4c; pcVar12 != local_4c + local_48; pcVar12 = pcVar12 + 1) {
    pcVar14 = local_54;
    iVar16 = iVar18;
    while (iVar16 != 0) {
      cVar2 = *pcVar14;
      iVar16 = iVar16 + -1;
      pcVar14 = pcVar14 + 1;
      if (cVar2 == *pcVar12) {
        if (piVar9 == piVar23) goto LAB_018faccc;
        goto LAB_018fac64;
      }
    }
  }
  local_44 = *(undefined4 *)(*piVar24 + 0x28);
  local_2c = &local_4c;
  local_34 = &local_44;
  local_28 = FUN_018e9418;
  local_30 = FUN_01908ba8;
  FUN_00664898(&local_40,&DAT_0052215a,&local_34);
  param_1[3] = local_40;
  param_1[4] = uStack_3c;
  param_1[5] = uStack_38;
  *param_1 = 0x80000003;
  param_1[2] = &DAT_80000020;
  FUN_019bb7e0(local_58,pcVar7);
LAB_018fae00:
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(*param_2);
  }
  piVar17 = (int *)param_2[1];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_2[1],param_2[2]);
  }
  return;
}

