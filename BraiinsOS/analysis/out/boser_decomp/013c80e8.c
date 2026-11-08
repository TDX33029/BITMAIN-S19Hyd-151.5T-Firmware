// FUN_013c80e8 @ 013c80e8 size=1200 calls_out=15 calls_in=4
// strings: 

int FUN_013c80e8(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  longlong lVar23;
  uint local_a0;
  uint *local_88;
  int local_80;
  uint local_7c;
  uint *local_78;
  uint local_74;
  int local_70;
  int local_6c;
  undefined2 local_68 [2];
  uint local_64;
  
  uVar18 = 0;
  if (*(short *)(param_1 + 0x24) == 1) {
    uVar15 = *(uint *)(param_1 + 0x30);
  }
  else {
    uVar15 = (uint)*(ushort *)(param_1 + 0x26);
  }
  bVar20 = 0x3ffffffe < uVar15;
  bVar19 = uVar15 == 0x3fffffff;
  uVar11 = uVar15 * 4;
  if (uVar15 < 0x40000000) {
    bVar20 = 0x7ffffffb < uVar11;
    bVar19 = uVar11 == 0x7ffffffc;
    local_80 = param_3;
  }
  if (!(bVar20 && !bVar19)) {
    uVar13 = 0;
    iVar1 = *(int *)(param_2[3] + 8);
    if (uVar11 == 0) {
      puVar2 = (uint *)&SUB_00000004;
      local_7c = 0;
    }
    else {
      uVar18 = 4;
      puVar2 = (uint *)FUN_01298504(uVar11,4);
      local_7c = uVar15;
      if (puVar2 == (uint *)0x0) goto LAB_013c8124;
    }
    local_6c = (uVar15 & 0xff) << 8;
    local_74 = 0;
    local_78 = puVar2;
    local_70 = param_1;
    while( true ) {
      uVar21 = FUN_013c7a64(&local_70);
      puVar10 = local_78;
      uVar15 = (uint)(uVar21 >> 0x20);
      if ((int)uVar21 == 0) break;
      if (0x3fffffffff < uVar21) {
        local_68[0] = 0xc;
        local_64 = uVar15;
        iVar3 = FUN_013e649c(local_68);
LAB_013c8438:
        puVar10 = local_78;
        goto LAB_013c843c;
      }
      uVar11 = param_2[5];
      if (uVar13 == local_7c) {
        FUN_019ee1a8(&local_7c);
        puVar2 = local_78;
      }
      puVar2[uVar13] = uVar11;
      uVar13 = uVar13 + 1;
      local_74 = uVar13;
      iVar3 = FUN_013e1c64(param_2,uVar15);
      if (iVar3 != 0) goto LAB_013c8438;
      uVar11 = param_2[5];
      iVar3 = FUN_013d79b4(param_2[3],param_2[4],uVar11,(int)uVar21,uVar15);
      if (iVar3 != 0) goto LAB_013c8438;
      param_2[5] = uVar11 + uVar15;
    }
    if (uVar13 != 0) {
      uVar15 = param_2[5];
      puVar4 = local_78 + uVar13;
      puVar2 = local_78;
      do {
        uVar11 = param_2[3];
        uVar12 = param_2[5];
        puVar16 = puVar2 + 1;
        uVar22 = FUN_013e1bd8(uVar11,uVar12,*puVar2,uVar15);
        uVar13 = (uint)((ulonglong)uVar22 >> 0x20);
        local_88 = (uint *)param_2[1];
        uVar8 = param_2[2];
        if (uVar8 != 0) {
          iVar3 = uVar8 << 4;
          puVar14 = local_88;
          do {
            if ((puVar14[3] == uVar13) &&
               (iVar5 = thunk_FUN_01bed842(puVar14[2],(int)uVar22,uVar13), iVar5 == 0)) {
              uVar13 = *puVar14;
              if (0xffff < uVar13) {
                uVar18 = 0x35;
                puVar9 = &DAT_01cf2f08;
                puVar7 = &DAT_004749aa;
                goto LAB_013c8510;
              }
              if (local_80 != 0) goto LAB_013c83c0;
              if (uVar13 >> 0xe == 0) {
                uVar17 = *puVar2;
                uVar12 = 0;
                uVar6 = *(uint *)(uVar11 + 8);
                param_2[5] = uVar17;
                puVar2 = local_88;
                uVar15 = uVar8;
                if (uVar17 <= uVar6) {
                  *(uint *)(uVar11 + 8) = uVar17;
                }
                goto LAB_013c8484;
              }
              break;
            }
            puVar14 = puVar14 + 4;
            iVar3 = iVar3 + -0x10;
          } while (iVar3 != 0);
        }
        uVar13 = *puVar2;
        if ((uVar13 | uVar15) >> 0x10 != 0) {
          bVar19 = uVar13 >> 0x10 == 0;
          puVar7 = &UNK_004749df;
          puVar9 = &UNK_01cf2f18;
          if (bVar19) {
            puVar7 = &DAT_00474a0d;
            puVar9 = &DAT_01cf2f28;
          }
          uVar18 = 0x2c;
          if (!bVar19) {
            uVar18 = 0x2e;
          }
LAB_013c8510:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(puVar7,uVar18,puVar9);
        }
        if (uVar15 < uVar13) {
          uVar18 = 0x1e;
          puVar7 = &DAT_004ea212;
          puVar9 = &DAT_01cf2f38;
          goto LAB_013c8510;
        }
        if (uVar12 < 0x3fff) {
          lVar23 = FUN_013e1bd8(uVar11,uVar12,uVar13,uVar15);
          uVar11 = (uint)((ulonglong)lVar23 >> 0x20);
          uVar18 = 0;
          if (lVar23 < 0) {
LAB_013c8590:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar18,local_a0);
          }
          if (uVar11 == 0) {
            uVar12 = 0;
            local_a0 = 1;
          }
          else {
            uVar18 = 1;
            local_a0 = FUN_01298504(uVar11,1);
            if (local_a0 == 0) {
              local_a0 = uVar11;
              goto LAB_013c8590;
            }
            uVar12 = uVar11;
          }
          FUN_01bed4e2(local_a0,(int)lVar23,uVar11);
          if (uVar8 == *param_2) {
            FUN_013e62c4(param_2);
            local_88 = (uint *)param_2[1];
          }
          param_2[2] = uVar8 + 1;
          local_88 = local_88 + uVar8 * 4;
          *local_88 = uVar13;
          local_88[1] = uVar12;
          local_88[2] = local_a0;
          local_88[3] = uVar11;
        }
LAB_013c83c0:
        puVar2 = puVar16;
      } while (puVar16 != puVar4);
    }
    iVar3 = FUN_013e1c64(param_2,0);
    if (iVar3 == 0) {
      iVar3 = 0;
      uVar15 = *(int *)(param_2[3] + 8) - iVar1;
      if (0xff < uVar15) {
        local_68[0] = 8;
        local_64 = uVar15;
        iVar3 = FUN_013e649c(local_68);
      }
    }
LAB_013c843c:
    FUN_01af7af8(local_7c,puVar10,4,4);
    return iVar3;
  }
LAB_013c8124:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar18,uVar11);
LAB_013c8484:
  uVar15 = uVar15 - 1;
  if (uVar17 <= *puVar2) {
    FUN_019bb7e0(puVar2[1],puVar2[2]);
    if (uVar12 + 1 < uVar8) {
      puVar2 = puVar2 + 6;
      do {
        if (puVar2[-2] < uVar17) {
          uVar11 = puVar2[-1];
          uVar8 = *puVar2;
          uVar6 = puVar2[1];
          puVar4 = local_88 + uVar12 * 4;
          uVar12 = uVar12 + 1;
          *puVar4 = puVar2[-2];
          puVar4[1] = uVar11;
          puVar4[2] = uVar8;
          puVar4[3] = uVar6;
        }
        else {
          FUN_019bb7e0(puVar2[-1],*puVar2);
        }
        puVar2 = puVar2 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    param_2[2] = uVar12;
LAB_013c84a8:
    iVar3 = FUN_013e1dc0(param_2,uVar13 | 0xffffc000);
    goto LAB_013c843c;
  }
  puVar2 = puVar2 + 4;
  uVar12 = uVar12 + 1;
  if (uVar15 == 0) goto LAB_013c84a8;
  goto LAB_013c8484;
}

