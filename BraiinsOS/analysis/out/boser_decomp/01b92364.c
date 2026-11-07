// FUN_01b92364 @ 01b92364 size=11384 calls_out=5 calls_in=0
// strings: 

int FUN_01b92364(int param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  char *pcVar27;
  char *pcVar28;
  uint *puVar29;
  undefined4 *puVar30;
  uint uVar31;
  char *pcVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  char *pcVar43;
  uint uVar44;
  uint uVar45;
  uint *local_64;
  int local_50;
  int local_40;
  
  iVar22 = *(int *)(param_1 + 0x5c);
  iVar23 = *(int *)(param_1 + 0xc0);
  iVar24 = *(int *)(param_1 + 100);
  iVar25 = *(int *)(param_1 + 0xbc);
  iVar26 = *(int *)(param_1 + 4);
  iVar40 = *(int *)(param_1 + 200);
  uVar2 = FUN_01b8ee6c(param_1,(char *)((int)param_4 + (param_5 - iVar26)),
                       *(undefined4 *)(param_1 + 0xb8));
  pcVar27 = (char *)(iVar26 + uVar2);
  pcVar28 = (char *)((int)param_4 + param_5);
  puVar29 = (uint *)(pcVar28 + -8);
  local_50 = *param_3;
  local_40 = param_3[1];
  puVar30 = *(undefined4 **)(param_1 + 0xb4);
  iVar10 = puVar30[0x17];
  iVar11 = puVar30[0x19];
  iVar12 = puVar30[1];
  pcVar13 = (char *)(iVar12 + puVar30[3]);
  pcVar14 = (char *)*puVar30;
  iVar15 = (int)pcVar14 - iVar12;
  iVar16 = uVar2 - iVar15;
  uVar17 = puVar30[0x30];
  uVar31 = puVar30[0x2f];
  pcVar32 = pcVar14 + (int)((int)param_4 + (-(int)pcVar27 - (int)pcVar13));
  iVar18 = *(int *)(param_1 + 0xd8);
  local_64 = param_4;
  if (iVar40 == 6) {
    if (iVar18 != 0) {
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar17 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar10 + uVar19);
      }
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar31 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar11 + uVar19);
      }
    }
    if (pcVar32 == (char *)0x0) {
      local_64 = (uint *)((int)param_4 + 1);
    }
    while (local_64 < puVar29) {
      uVar19 = *local_64;
      uVar45 = local_64[1];
      uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
      uVar33 = uVar45 * -0x485a9b9d + uVar19 * -0x30e44324 +
               (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
      iVar18 = -iVar23;
      uVar20 = iVar18 + 0x40;
      uVar21 = (uint)((ulonglong)uVar19 * 0xbf9b0000);
      uVar3 = uVar45 * -0x40650000 + uVar19 * -0x30e44324 +
              (int)((ulonglong)uVar19 * 0xbf9b0000 >> 0x20);
      iVar40 = -iVar25;
      uVar36 = iVar40 + 0x40;
      uVar37 = -uVar17 + 0x38;
      uVar38 = uVar7 >> (uVar37 & 0xff) | uVar33 << (uVar17 - 0x18 & 0xff) |
               uVar33 >> (0x18 - uVar17 & 0xff);
      uVar41 = uVar21 >> (0x38 - uVar31 & 0xff) | uVar3 << (uVar31 - 0x18 & 0xff) |
               uVar3 >> (0x18 - uVar31 & 0xff);
      uVar34 = *(uint *)(iVar10 + (uVar38 >> 8) * 4);
      uVar44 = *(uint *)(iVar11 + (uVar41 >> 8) * 4);
      iVar4 = (int)local_64 - iVar26;
      uVar7 = uVar7 >> (uVar20 & 0xff) | uVar33 << (iVar23 - 0x20U & 0xff) |
              uVar33 >> (0x20U - iVar23 & 0xff);
      uVar33 = *(uint *)(iVar22 + uVar7 * 4);
      uVar3 = uVar21 >> (uVar36 & 0xff) | uVar3 << (iVar25 - 0x20U & 0xff) |
              uVar3 >> (0x20U - iVar25 & 0xff);
      uVar35 = *(uint *)(iVar24 + uVar3 * 4);
      uVar21 = (1 - local_50) + iVar4;
      if (uVar21 < uVar2) {
        piVar8 = (int *)(iVar12 + (iVar15 - uVar2) + uVar21);
      }
      else {
        piVar8 = (int *)(iVar26 + uVar21);
      }
      *(int *)(iVar24 + uVar3 * 4) = iVar4;
      *(int *)(iVar22 + uVar7 * 4) = iVar4;
      if (((uVar2 - 1) - uVar21 < 3) || (*piVar8 != *(int *)((int)local_64 + 1))) {
        if (uVar2 < uVar33) {
          pcVar32 = (char *)(iVar26 + uVar33);
          if (uVar45 != *(uint *)(pcVar32 + 4) || uVar19 != *(uint *)(iVar26 + uVar33))
          goto LAB_01b94214;
          iVar39 = (int)local_64 - (int)pcVar32;
          iVar42 = FUN_01b8eeb0(local_64 + 2,pcVar32 + 8,pcVar28);
          iVar42 = iVar42 + 8;
          for (; param_4 < local_64 && pcVar27 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar42 = iVar42 + 1;
          }
LAB_01b9406c:
          uVar19 = (int)local_64 - (int)param_4;
          if (pcVar28 + -0x20 < local_64) {
            FUN_01b8edc8(param_2[3],param_4,local_64);
          }
          else {
            FUN_01b8ece8(param_2[3],param_4);
            if (0x10 < uVar19) {
              iVar5 = param_2[3];
              FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar19 - 0x10)) {
                uVar7 = iVar5 + 0x20;
                do {
                  FUN_01b8ece8(uVar7,param_4 + 8);
                  FUN_01b8ece8(uVar7 + 0x10,param_4 + 0xc);
                  uVar7 = uVar7 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar7 < iVar5 + uVar19);
              }
            }
          }
          param_2[3] = param_2[3] + uVar19;
          piVar8 = (int *)param_2[1];
          if (0xffff < uVar19) {
            param_2[9] = 1;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)(piVar8 + 1) = (short)uVar19;
          *piVar8 = iVar39 + 3;
          if (0xffff < iVar42 - 3U) {
            param_2[9] = 2;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)((int)piVar8 + 6) = (short)(iVar42 - 3U);
          local_40 = local_50;
          goto LAB_01b93d28;
        }
        if (((((uVar38 ^ uVar34) & 0xff) == 0) &&
            (pcVar32 = (char *)(iVar12 + (uVar34 >> 8)), pcVar13 < pcVar32)) &&
           (uVar45 == *(uint *)(pcVar32 + 4) && uVar19 == *(uint *)(iVar12 + (uVar34 >> 8)))) {
          iVar42 = FUN_01b8ef9c(local_64 + 2,pcVar32 + 8,pcVar28,pcVar14,pcVar27);
          iVar42 = iVar42 + 8;
          iVar39 = ((iVar15 - uVar2) + iVar4) - (uVar34 >> 8);
          for (; param_4 < local_64 && pcVar13 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar42 = iVar42 + 1;
          }
          goto LAB_01b9406c;
        }
LAB_01b94214:
        if (uVar2 < uVar35) {
          pcVar32 = (char *)(iVar26 + uVar35);
          if (*(uint *)(iVar26 + uVar35) == *local_64) goto LAB_01b94238;
        }
        else if (((((uVar41 ^ uVar44) & 0xff) == 0) &&
                 (pcVar32 = (char *)(iVar12 + (uVar44 >> 8)), pcVar13 < pcVar32)) &&
                (*(uint *)(iVar12 + (uVar44 >> 8)) == *local_64)) {
          uVar35 = iVar16 + (uVar44 >> 8);
LAB_01b94238:
          uVar19 = *(uint *)((int)local_64 + 1);
          iVar39 = *(int *)((int)local_64 + 5);
          uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar21 = iVar39 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar3 = uVar7 >> (uVar37 & 0xff) | uVar21 << (0x20 - uVar37 & 0xff) |
                  uVar21 >> (-uVar17 + 0x18 & 0xff);
          uVar7 = uVar7 >> (uVar20 & 0xff) | uVar21 << (0x20 - uVar20 & 0xff) |
                  uVar21 >> (iVar18 + 0x20U & 0xff);
          uVar33 = *(uint *)(iVar10 + (uVar3 >> 8) * 4);
          uVar21 = *(uint *)(iVar22 + uVar7 * 4);
          *(int *)(iVar22 + uVar7 * 4) = iVar4 + 1;
          if (uVar2 < uVar21) {
            pcVar43 = (char *)(iVar26 + uVar21);
            if (!(iVar39 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar26 + uVar21)))
            goto LAB_01b94438;
            iVar42 = FUN_01b8eeb0((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28);
            iVar39 = ((int)local_64 + 1) - (int)pcVar43;
            iVar42 = iVar42 + 8;
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar27 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar42 = iVar42 + 1;
            }
          }
          else if (((((uVar3 ^ uVar33) & 0xff) == 0) &&
                   (pcVar43 = (char *)(iVar12 + (uVar33 >> 8)), pcVar13 < pcVar43)) &&
                  (iVar39 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar12 + (uVar33 >> 8))))
          {
            iVar42 = FUN_01b8ef9c((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28,pcVar14,pcVar27);
            iVar42 = iVar42 + 8;
            iVar39 = (((iVar15 + 1) - uVar2) + iVar4) - (uVar33 >> 8);
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar13 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar42 = iVar42 + 1;
            }
          }
          else {
LAB_01b94438:
            if (uVar35 < uVar2) {
              iVar42 = FUN_01b8ef9c(local_64 + 1,pcVar32 + 4,pcVar28,pcVar14,pcVar27);
              iVar42 = iVar42 + 4;
              iVar39 = iVar4 - uVar35;
              for (; param_4 < local_64 && pcVar13 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar42 = iVar42 + 1;
              }
            }
            else {
              iVar39 = (int)local_64 - (int)pcVar32;
              iVar42 = FUN_01b8eeb0(local_64 + 1,pcVar32 + 4,pcVar28);
              iVar42 = iVar42 + 4;
              for (; param_4 < local_64 && pcVar27 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar42 = iVar42 + 1;
              }
            }
          }
          goto LAB_01b9406c;
        }
        local_64 = (uint *)((int)local_64 + ((int)local_64 - (int)param_4 >> 8) + 1);
      }
      else {
        if (uVar21 < uVar2) {
          pcVar32 = pcVar14;
        }
        else {
          pcVar32 = pcVar28;
        }
        iVar39 = FUN_01b8ef9c((char *)((int)local_64 + 5),piVar8 + 1,pcVar28,pcVar32,pcVar27);
        local_64 = (uint *)((int)local_64 + 1);
        uVar19 = (int)local_64 - (int)param_4;
        iVar42 = iVar39 + 4;
        if (pcVar28 + -0x20 < local_64) {
          FUN_01b8edc8(param_2[3],param_4,local_64);
        }
        else {
          FUN_01b8ece8(param_2[3],param_4);
          if (0x10 < uVar19) {
            iVar5 = param_2[3];
            FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
            if (0x10 < (int)(uVar19 - 0x10)) {
              uVar7 = iVar5 + 0x20;
              do {
                FUN_01b8ece8(uVar7,param_4 + 8);
                iVar6 = uVar7 + 0x10;
                uVar7 = uVar7 + 0x20;
                FUN_01b8ece8(iVar6,param_4 + 0xc);
                param_4 = param_4 + 8;
              } while (uVar7 < iVar5 + uVar19);
            }
          }
        }
        param_2[3] = param_2[3] + uVar19;
        piVar8 = (int *)param_2[1];
        if (0xffff < uVar19) {
          param_2[9] = 1;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)(piVar8 + 1) = (short)uVar19;
        *piVar8 = 1;
        if (0xffff < iVar39 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)((int)piVar8 + 6) = (short)(iVar39 + 1U);
        iVar39 = local_50;
LAB_01b93d28:
        param_2[1] = (int)(piVar8 + 2);
        param_4 = (uint *)((int)local_64 + iVar42);
        local_50 = iVar39;
        if (param_4 <= puVar29) {
          iVar4 = iVar4 + 2;
          uVar19 = *(uint *)(iVar26 + iVar4);
          iVar42 = *(int *)(iVar26 + iVar4 + 4);
          uVar7 = iVar42 * -0x485a9b9d + uVar19 * -0x30e44324 +
                  (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          *(int *)(iVar22 + ((uint)((ulonglong)uVar19 * 0xb7a56463) >> (uVar20 & 0xff) |
                             uVar7 << (0x20 - uVar20 & 0xff) | uVar7 >> (iVar18 + 0x20U & 0xff)) * 4
                  ) = iVar4;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
          uVar7 = *(int *)((int)param_4 + 2) * -0x485a9b9d +
                  *(uint *)((int)param_4 + -2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar22 + ((uint)lVar1 >> (uVar20 & 0xff) | uVar7 << (0x20 - uVar20 & 0xff) |
                              uVar7 >> (iVar18 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-2 - iVar26));
          uVar7 = iVar42 * -0x40650000 + uVar19 * -0x30e44324 +
                  (int)((ulonglong)uVar19 * 0xbf9b0000 >> 0x20);
          *(int *)(iVar24 + ((uint)((ulonglong)uVar19 * 0xbf9b0000) >> (uVar36 & 0xff) |
                             uVar7 << (0x20 - uVar36 & 0xff) | uVar7 >> (iVar40 + 0x20U & 0xff)) * 4
                  ) = iVar4;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbf9b0000;
          uVar19 = *(int *)((int)param_4 + 3) * -0x40650000 +
                   *(uint *)((int)param_4 + -1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar24 + ((uint)lVar1 >> (uVar36 & 0xff) | uVar19 << (0x20 - uVar36 & 0xff) |
                              uVar19 >> (iVar40 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-1 - iVar26));
          while( true ) {
            iVar42 = iVar39;
            iVar4 = (int)param_4 - iVar26;
            uVar19 = iVar4 - local_40;
            if (uVar19 < uVar2) {
              puVar9 = (uint *)(iVar12 + (iVar15 - uVar2) + uVar19);
            }
            else {
              puVar9 = (uint *)(iVar26 + uVar19);
            }
            local_50 = iVar42;
            if ((((uVar2 - 1) + local_40) - iVar4 < 3) || (*puVar9 != *param_4)) goto LAB_01b93fd0;
            pcVar32 = pcVar28;
            if (uVar19 < uVar2) {
              pcVar32 = pcVar14;
            }
            iVar39 = FUN_01b8ef9c(param_4 + 1,puVar9 + 1,pcVar28,pcVar32,pcVar27);
            if (pcVar28 + -0x20 < param_4) {
              FUN_01b8edc8(param_2[3],param_4,param_4);
            }
            else {
              FUN_01b8ece8(param_2[3],param_4);
            }
            puVar30 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar30 + 1) = 0;
            *puVar30 = 1;
            if (0xffff < iVar39 + 1U) {
              param_2[9] = 2;
              param_2[10] = (int)puVar30 - *param_2 >> 3;
            }
            *(short *)((int)puVar30 + 6) = (short)(iVar39 + 1U);
            param_2[1] = (int)(puVar30 + 2);
            uVar7 = *param_4;
            uVar3 = param_4[1];
            param_4 = (uint *)((int)param_4 + iVar39 + 4);
            uVar19 = uVar3 * -0x40650000 + uVar7 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * 0xbf9b0000 >> 0x20);
            *(int *)(iVar24 + ((uint)((ulonglong)uVar7 * 0xbf9b0000) >> (uVar36 & 0xff) |
                               uVar19 << (0x20 - uVar36 & 0xff) | uVar19 >> (iVar40 + 0x20U & 0xff))
                              * 4) = iVar4;
            uVar19 = uVar3 * -0x485a9b9d + uVar7 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * 0xb7a56463 >> 0x20);
            *(int *)(iVar22 + ((uint)((ulonglong)uVar7 * 0xb7a56463) >> (uVar20 & 0xff) |
                               uVar19 << (0x20 - uVar20 & 0xff) | uVar19 >> (iVar18 + 0x20U & 0xff))
                              * 4) = iVar4;
            if (puVar29 < param_4) break;
            iVar39 = local_40;
            local_40 = iVar42;
          }
          local_50 = local_40;
          local_40 = iVar42;
        }
LAB_01b93fd0:
        local_64 = param_4;
      }
    }
  }
  else if (iVar40 == 7) {
    if (iVar18 != 0) {
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar17 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar10 + uVar19);
      }
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar31 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar11 + uVar19);
      }
    }
    if (pcVar32 == (char *)0x0) {
      local_64 = (uint *)((int)param_4 + 1);
    }
    while (local_64 < puVar29) {
      uVar19 = *local_64;
      uVar45 = local_64[1];
      uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
      uVar33 = uVar45 * -0x485a9b9d + uVar19 * -0x30e44324 +
               (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
      iVar18 = -iVar23;
      uVar20 = iVar18 + 0x40;
      uVar21 = (uint)((ulonglong)uVar19 * 0xbfa56300);
      uVar3 = uVar45 * -0x405a9d00 + uVar19 * -0x30e44324 +
              (int)((ulonglong)uVar19 * 0xbfa56300 >> 0x20);
      iVar40 = -iVar25;
      uVar36 = iVar40 + 0x40;
      uVar37 = -uVar17 + 0x38;
      uVar38 = uVar7 >> (uVar37 & 0xff) | uVar33 << (uVar17 - 0x18 & 0xff) |
               uVar33 >> (0x18 - uVar17 & 0xff);
      uVar41 = uVar21 >> (0x38 - uVar31 & 0xff) | uVar3 << (uVar31 - 0x18 & 0xff) |
               uVar3 >> (0x18 - uVar31 & 0xff);
      uVar34 = *(uint *)(iVar10 + (uVar38 >> 8) * 4);
      uVar44 = *(uint *)(iVar11 + (uVar41 >> 8) * 4);
      iVar4 = (int)local_64 - iVar26;
      uVar7 = uVar7 >> (uVar20 & 0xff) | uVar33 << (iVar23 - 0x20U & 0xff) |
              uVar33 >> (0x20U - iVar23 & 0xff);
      uVar33 = *(uint *)(iVar22 + uVar7 * 4);
      uVar3 = uVar21 >> (uVar36 & 0xff) | uVar3 << (iVar25 - 0x20U & 0xff) |
              uVar3 >> (0x20U - iVar25 & 0xff);
      uVar35 = *(uint *)(iVar24 + uVar3 * 4);
      uVar21 = (1 - local_50) + iVar4;
      if (uVar21 < uVar2) {
        piVar8 = (int *)(iVar12 + (iVar15 - uVar2) + uVar21);
      }
      else {
        piVar8 = (int *)(iVar26 + uVar21);
      }
      *(int *)(iVar24 + uVar3 * 4) = iVar4;
      *(int *)(iVar22 + uVar7 * 4) = iVar4;
      if (((uVar2 - 1) - uVar21 < 3) || (*piVar8 != *(int *)((int)local_64 + 1))) {
        if (uVar2 < uVar33) {
          pcVar32 = (char *)(iVar26 + uVar33);
          if (uVar45 != *(uint *)(pcVar32 + 4) || uVar19 != *(uint *)(iVar26 + uVar33))
          goto LAB_01b94cfc;
          iVar39 = (int)local_64 - (int)pcVar32;
          iVar42 = FUN_01b8eeb0(local_64 + 2,pcVar32 + 8,pcVar28);
          iVar42 = iVar42 + 8;
          for (; param_4 < local_64 && pcVar27 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar42 = iVar42 + 1;
          }
LAB_01b94b54:
          uVar19 = (int)local_64 - (int)param_4;
          if (pcVar28 + -0x20 < local_64) {
            FUN_01b8edc8(param_2[3],param_4,local_64);
          }
          else {
            FUN_01b8ece8(param_2[3],param_4);
            if (0x10 < uVar19) {
              iVar5 = param_2[3];
              FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar19 - 0x10)) {
                uVar7 = iVar5 + 0x20;
                do {
                  FUN_01b8ece8(uVar7,param_4 + 8);
                  FUN_01b8ece8(uVar7 + 0x10,param_4 + 0xc);
                  uVar7 = uVar7 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar7 < iVar5 + uVar19);
              }
            }
          }
          param_2[3] = param_2[3] + uVar19;
          piVar8 = (int *)param_2[1];
          if (0xffff < uVar19) {
            param_2[9] = 1;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)(piVar8 + 1) = (short)uVar19;
          *piVar8 = iVar39 + 3;
          if (0xffff < iVar42 - 3U) {
            param_2[9] = 2;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)((int)piVar8 + 6) = (short)(iVar42 - 3U);
          local_40 = local_50;
          goto LAB_01b94810;
        }
        if (((((uVar38 ^ uVar34) & 0xff) == 0) &&
            (pcVar32 = (char *)(iVar12 + (uVar34 >> 8)), pcVar13 < pcVar32)) &&
           (uVar45 == *(uint *)(pcVar32 + 4) && uVar19 == *(uint *)(iVar12 + (uVar34 >> 8)))) {
          iVar42 = FUN_01b8ef9c(local_64 + 2,pcVar32 + 8,pcVar28,pcVar14,pcVar27);
          iVar42 = iVar42 + 8;
          iVar39 = ((iVar15 - uVar2) + iVar4) - (uVar34 >> 8);
          for (; param_4 < local_64 && pcVar13 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar42 = iVar42 + 1;
          }
          goto LAB_01b94b54;
        }
LAB_01b94cfc:
        if (uVar2 < uVar35) {
          pcVar32 = (char *)(iVar26 + uVar35);
          if (*(uint *)(iVar26 + uVar35) == *local_64) goto LAB_01b94d20;
        }
        else if (((((uVar41 ^ uVar44) & 0xff) == 0) &&
                 (pcVar32 = (char *)(iVar12 + (uVar44 >> 8)), pcVar13 < pcVar32)) &&
                (*(uint *)(iVar12 + (uVar44 >> 8)) == *local_64)) {
          uVar35 = iVar16 + (uVar44 >> 8);
LAB_01b94d20:
          uVar19 = *(uint *)((int)local_64 + 1);
          iVar39 = *(int *)((int)local_64 + 5);
          uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar21 = iVar39 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar3 = uVar7 >> (uVar37 & 0xff) | uVar21 << (0x20 - uVar37 & 0xff) |
                  uVar21 >> (-uVar17 + 0x18 & 0xff);
          uVar7 = uVar7 >> (uVar20 & 0xff) | uVar21 << (0x20 - uVar20 & 0xff) |
                  uVar21 >> (iVar18 + 0x20U & 0xff);
          uVar33 = *(uint *)(iVar10 + (uVar3 >> 8) * 4);
          uVar21 = *(uint *)(iVar22 + uVar7 * 4);
          *(int *)(iVar22 + uVar7 * 4) = iVar4 + 1;
          if (uVar2 < uVar21) {
            pcVar43 = (char *)(iVar26 + uVar21);
            if (!(iVar39 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar26 + uVar21)))
            goto LAB_01b94f20;
            iVar42 = FUN_01b8eeb0((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28);
            iVar39 = ((int)local_64 + 1) - (int)pcVar43;
            iVar42 = iVar42 + 8;
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar27 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar42 = iVar42 + 1;
            }
          }
          else if (((((uVar3 ^ uVar33) & 0xff) == 0) &&
                   (pcVar43 = (char *)(iVar12 + (uVar33 >> 8)), pcVar13 < pcVar43)) &&
                  (iVar39 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar12 + (uVar33 >> 8))))
          {
            iVar42 = FUN_01b8ef9c((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28,pcVar14,pcVar27);
            iVar42 = iVar42 + 8;
            iVar39 = (((iVar15 + 1) - uVar2) + iVar4) - (uVar33 >> 8);
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar13 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar42 = iVar42 + 1;
            }
          }
          else {
LAB_01b94f20:
            if (uVar35 < uVar2) {
              iVar42 = FUN_01b8ef9c(local_64 + 1,pcVar32 + 4,pcVar28,pcVar14,pcVar27);
              iVar42 = iVar42 + 4;
              iVar39 = iVar4 - uVar35;
              for (; param_4 < local_64 && pcVar13 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar42 = iVar42 + 1;
              }
            }
            else {
              iVar39 = (int)local_64 - (int)pcVar32;
              iVar42 = FUN_01b8eeb0(local_64 + 1,pcVar32 + 4,pcVar28);
              iVar42 = iVar42 + 4;
              for (; param_4 < local_64 && pcVar27 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar42 = iVar42 + 1;
              }
            }
          }
          goto LAB_01b94b54;
        }
        local_64 = (uint *)((int)local_64 + ((int)local_64 - (int)param_4 >> 8) + 1);
      }
      else {
        if (uVar21 < uVar2) {
          pcVar32 = pcVar14;
        }
        else {
          pcVar32 = pcVar28;
        }
        iVar39 = FUN_01b8ef9c((char *)((int)local_64 + 5),piVar8 + 1,pcVar28,pcVar32,pcVar27);
        local_64 = (uint *)((int)local_64 + 1);
        uVar19 = (int)local_64 - (int)param_4;
        iVar42 = iVar39 + 4;
        if (pcVar28 + -0x20 < local_64) {
          FUN_01b8edc8(param_2[3],param_4,local_64);
        }
        else {
          FUN_01b8ece8(param_2[3],param_4);
          if (0x10 < uVar19) {
            iVar5 = param_2[3];
            FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
            if (0x10 < (int)(uVar19 - 0x10)) {
              uVar7 = iVar5 + 0x20;
              do {
                FUN_01b8ece8(uVar7,param_4 + 8);
                iVar6 = uVar7 + 0x10;
                uVar7 = uVar7 + 0x20;
                FUN_01b8ece8(iVar6,param_4 + 0xc);
                param_4 = param_4 + 8;
              } while (uVar7 < iVar5 + uVar19);
            }
          }
        }
        param_2[3] = param_2[3] + uVar19;
        piVar8 = (int *)param_2[1];
        if (0xffff < uVar19) {
          param_2[9] = 1;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)(piVar8 + 1) = (short)uVar19;
        *piVar8 = 1;
        if (0xffff < iVar39 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)((int)piVar8 + 6) = (short)(iVar39 + 1U);
        iVar39 = local_50;
LAB_01b94810:
        param_2[1] = (int)(piVar8 + 2);
        param_4 = (uint *)((int)local_64 + iVar42);
        local_50 = iVar39;
        if (param_4 <= puVar29) {
          iVar4 = iVar4 + 2;
          uVar19 = *(uint *)(iVar26 + iVar4);
          iVar42 = *(int *)(iVar26 + iVar4 + 4);
          uVar7 = iVar42 * -0x485a9b9d + uVar19 * -0x30e44324 +
                  (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          *(int *)(iVar22 + ((uint)((ulonglong)uVar19 * 0xb7a56463) >> (uVar20 & 0xff) |
                             uVar7 << (0x20 - uVar20 & 0xff) | uVar7 >> (iVar18 + 0x20U & 0xff)) * 4
                  ) = iVar4;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
          uVar7 = *(int *)((int)param_4 + 2) * -0x485a9b9d +
                  *(uint *)((int)param_4 + -2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar22 + ((uint)lVar1 >> (uVar20 & 0xff) | uVar7 << (0x20 - uVar20 & 0xff) |
                              uVar7 >> (iVar18 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-2 - iVar26));
          uVar7 = iVar42 * -0x405a9d00 + uVar19 * -0x30e44324 +
                  (int)((ulonglong)uVar19 * 0xbfa56300 >> 0x20);
          *(int *)(iVar24 + ((uint)((ulonglong)uVar19 * 0xbfa56300) >> (uVar36 & 0xff) |
                             uVar7 << (0x20 - uVar36 & 0xff) | uVar7 >> (iVar40 + 0x20U & 0xff)) * 4
                  ) = iVar4;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbfa56300;
          uVar19 = *(int *)((int)param_4 + 3) * -0x405a9d00 +
                   *(uint *)((int)param_4 + -1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar24 + ((uint)lVar1 >> (uVar36 & 0xff) | uVar19 << (0x20 - uVar36 & 0xff) |
                              uVar19 >> (iVar40 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-1 - iVar26));
          while( true ) {
            iVar42 = iVar39;
            iVar4 = (int)param_4 - iVar26;
            uVar19 = iVar4 - local_40;
            if (uVar19 < uVar2) {
              puVar9 = (uint *)(iVar12 + (iVar15 - uVar2) + uVar19);
            }
            else {
              puVar9 = (uint *)(iVar26 + uVar19);
            }
            local_50 = iVar42;
            if (((local_40 + (uVar2 - 1)) - iVar4 < 3) || (*puVar9 != *param_4)) goto LAB_01b94ab8;
            pcVar32 = pcVar28;
            if (uVar19 < uVar2) {
              pcVar32 = pcVar14;
            }
            iVar39 = FUN_01b8ef9c(param_4 + 1,puVar9 + 1,pcVar28,pcVar32,pcVar27);
            if (pcVar28 + -0x20 < param_4) {
              FUN_01b8edc8(param_2[3],param_4,param_4);
            }
            else {
              FUN_01b8ece8(param_2[3],param_4);
            }
            puVar30 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar30 + 1) = 0;
            *puVar30 = 1;
            if (0xffff < iVar39 + 1U) {
              param_2[9] = 2;
              param_2[10] = (int)puVar30 - *param_2 >> 3;
            }
            *(short *)((int)puVar30 + 6) = (short)(iVar39 + 1U);
            param_2[1] = (int)(puVar30 + 2);
            uVar7 = *param_4;
            uVar3 = param_4[1];
            param_4 = (uint *)((int)param_4 + iVar39 + 4);
            uVar19 = uVar3 * -0x405a9d00 + uVar7 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * 0xbfa56300 >> 0x20);
            *(int *)(iVar24 + ((uint)((ulonglong)uVar7 * 0xbfa56300) >> (uVar36 & 0xff) |
                               uVar19 << (0x20 - uVar36 & 0xff) | uVar19 >> (iVar40 + 0x20U & 0xff))
                              * 4) = iVar4;
            uVar19 = uVar3 * -0x485a9b9d + uVar7 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * 0xb7a56463 >> 0x20);
            *(int *)(iVar22 + ((uint)((ulonglong)uVar7 * 0xb7a56463) >> (uVar20 & 0xff) |
                               uVar19 << (0x20 - uVar20 & 0xff) | uVar19 >> (iVar18 + 0x20U & 0xff))
                              * 4) = iVar4;
            if (puVar29 < param_4) break;
            iVar39 = local_40;
            local_40 = iVar42;
          }
          local_50 = local_40;
          local_40 = iVar42;
        }
LAB_01b94ab8:
        local_64 = param_4;
      }
    }
  }
  else if (iVar40 == 5) {
    if (iVar18 != 0) {
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar17 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar10 + uVar19);
      }
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar31 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar11 + uVar19);
      }
    }
    if (pcVar32 == (char *)0x0) {
      local_64 = (uint *)((int)param_4 + 1);
    }
    while (local_64 < puVar29) {
      uVar19 = *local_64;
      uVar45 = local_64[1];
      uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
      uVar33 = uVar45 * -0x485a9b9d + uVar19 * -0x30e44324 +
               (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
      iVar18 = -iVar23;
      uVar20 = iVar18 + 0x40;
      uVar21 = (uint)((ulonglong)uVar19 * 0xbb000000);
      uVar3 = uVar45 * -0x45000000 + uVar19 * -0x30e44324 +
              (int)((ulonglong)uVar19 * 0xbb000000 >> 0x20);
      iVar40 = -iVar25;
      uVar36 = iVar40 + 0x40;
      uVar37 = -uVar17 + 0x38;
      uVar38 = uVar7 >> (uVar37 & 0xff) | uVar33 << (uVar17 - 0x18 & 0xff) |
               uVar33 >> (0x18 - uVar17 & 0xff);
      uVar41 = uVar21 >> (0x38 - uVar31 & 0xff) | uVar3 << (uVar31 - 0x18 & 0xff) |
               uVar3 >> (0x18 - uVar31 & 0xff);
      uVar34 = *(uint *)(iVar10 + (uVar38 >> 8) * 4);
      uVar44 = *(uint *)(iVar11 + (uVar41 >> 8) * 4);
      iVar4 = (int)local_64 - iVar26;
      uVar7 = uVar7 >> (uVar20 & 0xff) | uVar33 << (iVar23 - 0x20U & 0xff) |
              uVar33 >> (0x20U - iVar23 & 0xff);
      uVar33 = *(uint *)(iVar22 + uVar7 * 4);
      uVar3 = uVar21 >> (uVar36 & 0xff) | uVar3 << (iVar25 - 0x20U & 0xff) |
              uVar3 >> (0x20U - iVar25 & 0xff);
      uVar35 = *(uint *)(iVar24 + uVar3 * 4);
      uVar21 = (1 - local_50) + iVar4;
      if (uVar21 < uVar2) {
        piVar8 = (int *)(iVar12 + (iVar15 - uVar2) + uVar21);
      }
      else {
        piVar8 = (int *)(iVar26 + uVar21);
      }
      *(int *)(iVar24 + uVar3 * 4) = iVar4;
      *(int *)(iVar22 + uVar7 * 4) = iVar4;
      if (((uVar2 - 1) - uVar21 < 3) || (*piVar8 != *(int *)((int)local_64 + 1))) {
        if (uVar2 < uVar33) {
          pcVar32 = (char *)(iVar26 + uVar33);
          if (uVar45 != *(uint *)(pcVar32 + 4) || uVar19 != *(uint *)(iVar26 + uVar33))
          goto LAB_01b9372c;
          iVar39 = (int)local_64 - (int)pcVar32;
          iVar42 = FUN_01b8eeb0(local_64 + 2,pcVar32 + 8,pcVar28);
          iVar42 = iVar42 + 8;
          for (; param_4 < local_64 && pcVar27 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar42 = iVar42 + 1;
          }
LAB_01b93584:
          uVar19 = (int)local_64 - (int)param_4;
          if (pcVar28 + -0x20 < local_64) {
            FUN_01b8edc8(param_2[3],param_4,local_64);
          }
          else {
            FUN_01b8ece8(param_2[3],param_4);
            if (0x10 < uVar19) {
              iVar5 = param_2[3];
              FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar19 - 0x10)) {
                uVar7 = iVar5 + 0x20;
                do {
                  FUN_01b8ece8(uVar7,param_4 + 8);
                  FUN_01b8ece8(uVar7 + 0x10,param_4 + 0xc);
                  uVar7 = uVar7 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar7 < iVar5 + uVar19);
              }
            }
          }
          param_2[3] = param_2[3] + uVar19;
          piVar8 = (int *)param_2[1];
          if (0xffff < uVar19) {
            param_2[9] = 1;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)(piVar8 + 1) = (short)uVar19;
          *piVar8 = iVar39 + 3;
          if (0xffff < iVar42 - 3U) {
            param_2[9] = 2;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)((int)piVar8 + 6) = (short)(iVar42 - 3U);
          local_40 = local_50;
          goto LAB_01b93230;
        }
        if (((((uVar38 ^ uVar34) & 0xff) == 0) &&
            (pcVar32 = (char *)(iVar12 + (uVar34 >> 8)), pcVar13 < pcVar32)) &&
           (uVar45 == *(uint *)(pcVar32 + 4) && uVar19 == *(uint *)(iVar12 + (uVar34 >> 8)))) {
          iVar42 = FUN_01b8ef9c(local_64 + 2,pcVar32 + 8,pcVar28,pcVar14,pcVar27);
          iVar42 = iVar42 + 8;
          iVar39 = ((iVar15 - uVar2) + iVar4) - (uVar34 >> 8);
          for (; param_4 < local_64 && pcVar13 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar42 = iVar42 + 1;
          }
          goto LAB_01b93584;
        }
LAB_01b9372c:
        if (uVar2 < uVar35) {
          pcVar32 = (char *)(iVar26 + uVar35);
          if (*(uint *)(iVar26 + uVar35) == *local_64) goto LAB_01b93750;
        }
        else if (((((uVar41 ^ uVar44) & 0xff) == 0) &&
                 (pcVar32 = (char *)(iVar12 + (uVar44 >> 8)), pcVar13 < pcVar32)) &&
                (*(uint *)(iVar12 + (uVar44 >> 8)) == *local_64)) {
          uVar35 = iVar16 + (uVar44 >> 8);
LAB_01b93750:
          uVar19 = *(uint *)((int)local_64 + 1);
          iVar39 = *(int *)((int)local_64 + 5);
          uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar21 = iVar39 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar3 = uVar7 >> (uVar37 & 0xff) | uVar21 << (0x20 - uVar37 & 0xff) |
                  uVar21 >> (-uVar17 + 0x18 & 0xff);
          uVar7 = uVar7 >> (uVar20 & 0xff) | uVar21 << (0x20 - uVar20 & 0xff) |
                  uVar21 >> (iVar18 + 0x20U & 0xff);
          uVar33 = *(uint *)(iVar10 + (uVar3 >> 8) * 4);
          uVar21 = *(uint *)(iVar22 + uVar7 * 4);
          *(int *)(iVar22 + uVar7 * 4) = iVar4 + 1;
          if (uVar2 < uVar21) {
            pcVar43 = (char *)(iVar26 + uVar21);
            if (!(iVar39 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar26 + uVar21)))
            goto LAB_01b93950;
            iVar42 = FUN_01b8eeb0((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28);
            iVar39 = ((int)local_64 + 1) - (int)pcVar43;
            iVar42 = iVar42 + 8;
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar27 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar42 = iVar42 + 1;
            }
          }
          else if (((((uVar3 ^ uVar33) & 0xff) == 0) &&
                   (pcVar43 = (char *)(iVar12 + (uVar33 >> 8)), pcVar13 < pcVar43)) &&
                  (iVar39 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar12 + (uVar33 >> 8))))
          {
            iVar42 = FUN_01b8ef9c((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28,pcVar14,pcVar27);
            iVar42 = iVar42 + 8;
            iVar39 = (((iVar15 + 1) - uVar2) + iVar4) - (uVar33 >> 8);
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar13 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar42 = iVar42 + 1;
            }
          }
          else {
LAB_01b93950:
            if (uVar35 < uVar2) {
              iVar42 = FUN_01b8ef9c(local_64 + 1,pcVar32 + 4,pcVar28,pcVar14,pcVar27);
              iVar42 = iVar42 + 4;
              iVar39 = iVar4 - uVar35;
              for (; param_4 < local_64 && pcVar13 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar42 = iVar42 + 1;
              }
            }
            else {
              iVar39 = (int)local_64 - (int)pcVar32;
              iVar42 = FUN_01b8eeb0(local_64 + 1,pcVar32 + 4,pcVar28);
              iVar42 = iVar42 + 4;
              for (; param_4 < local_64 && pcVar27 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar42 = iVar42 + 1;
              }
            }
          }
          goto LAB_01b93584;
        }
        local_64 = (uint *)((int)local_64 + ((int)local_64 - (int)param_4 >> 8) + 1);
      }
      else {
        if (uVar21 < uVar2) {
          pcVar32 = pcVar14;
        }
        else {
          pcVar32 = pcVar28;
        }
        iVar39 = FUN_01b8ef9c((char *)((int)local_64 + 5),piVar8 + 1,pcVar28,pcVar32,pcVar27);
        local_64 = (uint *)((int)local_64 + 1);
        uVar19 = (int)local_64 - (int)param_4;
        iVar42 = iVar39 + 4;
        if (pcVar28 + -0x20 < local_64) {
          FUN_01b8edc8(param_2[3],param_4,local_64);
        }
        else {
          FUN_01b8ece8(param_2[3],param_4);
          if (0x10 < uVar19) {
            iVar5 = param_2[3];
            FUN_01b8ece8(iVar5 + 0x10,param_4 + 4);
            if (0x10 < (int)(uVar19 - 0x10)) {
              uVar7 = iVar5 + 0x20;
              do {
                FUN_01b8ece8(uVar7,param_4 + 8);
                iVar6 = uVar7 + 0x10;
                uVar7 = uVar7 + 0x20;
                FUN_01b8ece8(iVar6,param_4 + 0xc);
                param_4 = param_4 + 8;
              } while (uVar7 < iVar5 + uVar19);
            }
          }
        }
        param_2[3] = param_2[3] + uVar19;
        piVar8 = (int *)param_2[1];
        if (0xffff < uVar19) {
          param_2[9] = 1;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)(piVar8 + 1) = (short)uVar19;
        *piVar8 = 1;
        if (0xffff < iVar39 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)((int)piVar8 + 6) = (short)(iVar39 + 1U);
        iVar39 = local_50;
LAB_01b93230:
        param_2[1] = (int)(piVar8 + 2);
        param_4 = (uint *)((int)local_64 + iVar42);
        local_50 = iVar39;
        if (param_4 <= puVar29) {
          iVar4 = iVar4 + 2;
          uVar19 = *(uint *)(iVar26 + iVar4);
          iVar42 = *(int *)(iVar26 + iVar4 + 4);
          uVar7 = iVar42 * -0x485a9b9d + uVar19 * -0x30e44324 +
                  (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          *(int *)(iVar22 + ((uint)((ulonglong)uVar19 * 0xb7a56463) >> (uVar20 & 0xff) |
                             uVar7 << (0x20 - uVar20 & 0xff) | uVar7 >> (iVar18 + 0x20U & 0xff)) * 4
                  ) = iVar4;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
          uVar7 = *(int *)((int)param_4 + 2) * -0x485a9b9d +
                  *(uint *)((int)param_4 + -2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar22 + ((uint)lVar1 >> (uVar20 & 0xff) | uVar7 << (0x20 - uVar20 & 0xff) |
                              uVar7 >> (iVar18 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-2 - iVar26));
          uVar7 = iVar42 * -0x45000000 + uVar19 * -0x30e44324 +
                  (int)((ulonglong)uVar19 * 0xbb000000 >> 0x20);
          *(int *)(iVar24 + ((uint)((ulonglong)uVar19 * 0xbb000000) >> (uVar36 & 0xff) |
                             uVar7 << (0x20 - uVar36 & 0xff) | uVar7 >> (iVar40 + 0x20U & 0xff)) * 4
                  ) = iVar4;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbb000000;
          uVar19 = *(int *)((int)param_4 + 3) * -0x45000000 +
                   *(uint *)((int)param_4 + -1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar24 + ((uint)lVar1 >> (uVar36 & 0xff) | uVar19 << (0x20 - uVar36 & 0xff) |
                              uVar19 >> (iVar40 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-1 - iVar26));
          while( true ) {
            iVar42 = iVar39;
            iVar4 = (int)param_4 - iVar26;
            uVar19 = iVar4 - local_40;
            if (uVar19 < uVar2) {
              puVar9 = (uint *)(iVar12 + (iVar15 - uVar2) + uVar19);
            }
            else {
              puVar9 = (uint *)(iVar26 + uVar19);
            }
            local_50 = iVar42;
            if ((((uVar2 - 1) + local_40) - iVar4 < 3) || (*puVar9 != *param_4)) goto LAB_01b934d8;
            pcVar32 = pcVar28;
            if (uVar19 < uVar2) {
              pcVar32 = pcVar14;
            }
            iVar39 = FUN_01b8ef9c(param_4 + 1,puVar9 + 1,pcVar28,pcVar32,pcVar27);
            if (pcVar28 + -0x20 < param_4) {
              FUN_01b8edc8(param_2[3],param_4,param_4);
            }
            else {
              FUN_01b8ece8(param_2[3],param_4);
            }
            puVar30 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar30 + 1) = 0;
            *puVar30 = 1;
            if (0xffff < iVar39 + 1U) {
              param_2[9] = 2;
              param_2[10] = (int)puVar30 - *param_2 >> 3;
            }
            *(short *)((int)puVar30 + 6) = (short)(iVar39 + 1U);
            param_2[1] = (int)(puVar30 + 2);
            uVar7 = *param_4;
            uVar3 = param_4[1];
            param_4 = (uint *)((int)param_4 + iVar39 + 4);
            uVar19 = uVar3 * -0x45000000 + uVar7 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * 0xbb000000 >> 0x20);
            *(int *)(iVar24 + ((uint)((ulonglong)uVar7 * 0xbb000000) >> (uVar36 & 0xff) |
                               uVar19 << (0x20 - uVar36 & 0xff) | uVar19 >> (iVar40 + 0x20U & 0xff))
                              * 4) = iVar4;
            uVar19 = uVar3 * -0x485a9b9d + uVar7 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * 0xb7a56463 >> 0x20);
            *(int *)(iVar22 + ((uint)((ulonglong)uVar7 * 0xb7a56463) >> (uVar20 & 0xff) |
                               uVar19 << (0x20 - uVar20 & 0xff) | uVar19 >> (iVar18 + 0x20U & 0xff))
                              * 4) = iVar4;
            if (puVar29 < param_4) break;
            iVar39 = local_40;
            local_40 = iVar42;
          }
          local_50 = local_40;
          local_40 = iVar42;
        }
LAB_01b934d8:
        local_64 = param_4;
      }
    }
  }
  else {
    if (iVar18 != 0) {
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar17 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar10 + uVar19);
      }
      for (uVar19 = 0; uVar19 < (uint)(4 << (uVar31 & 0xff)); uVar19 = uVar19 + 0x40) {
        HintPreloadData(iVar11 + uVar19);
      }
    }
    if (pcVar32 == (char *)0x0) {
      local_64 = (uint *)((int)param_4 + 1);
    }
    while (local_64 < puVar29) {
      uVar33 = local_64[1];
      uVar3 = *local_64;
      uVar20 = (uint)((ulonglong)uVar3 * 0xb7a56463);
      uVar7 = uVar33 * -0x485a9b9d + uVar3 * -0x30e44324 +
              (int)((ulonglong)uVar3 * 0xb7a56463 >> 0x20);
      iVar18 = -iVar23;
      uVar34 = iVar18 + 0x40;
      uVar35 = 0x20 - iVar25;
      uVar36 = -uVar17 + 0x38;
      uVar37 = uVar20 >> (uVar36 & 0xff) | uVar7 << (uVar17 - 0x18 & 0xff) |
               uVar7 >> (0x18 - uVar17 & 0xff);
      uVar19 = uVar3 * -0x61c8864f >> (0x18 - uVar31 & 0xff);
      uVar41 = *(uint *)(iVar10 + (uVar37 >> 8) * 4);
      uVar45 = *(uint *)(iVar11 + (uVar19 >> 8) * 4);
      iVar40 = (int)local_64 - iVar26;
      uVar20 = uVar20 >> (uVar34 & 0xff) | uVar7 << (iVar23 - 0x20U & 0xff) |
               uVar7 >> (0x20U - iVar23 & 0xff);
      uVar38 = *(uint *)(iVar22 + uVar20 * 4);
      uVar7 = uVar3 * -0x61c8864f >> (uVar35 & 0xff);
      uVar44 = *(uint *)(iVar24 + uVar7 * 4);
      uVar21 = (1 - local_50) + iVar40;
      if (uVar21 < uVar2) {
        piVar8 = (int *)(iVar12 + (iVar15 - uVar2) + uVar21);
      }
      else {
        piVar8 = (int *)(iVar26 + uVar21);
      }
      *(int *)(iVar24 + uVar7 * 4) = iVar40;
      *(int *)(iVar22 + uVar20 * 4) = iVar40;
      if (((uVar2 - 1) - uVar21 < 3) || (*piVar8 != *(int *)((int)local_64 + 1))) {
        if (uVar2 < uVar38) {
          pcVar32 = (char *)(iVar26 + uVar38);
          if (uVar33 != *(uint *)(pcVar32 + 4) || uVar3 != *(uint *)(iVar26 + uVar38))
          goto LAB_01b92c3c;
          iVar4 = (int)local_64 - (int)pcVar32;
          iVar39 = FUN_01b8eeb0(local_64 + 2,pcVar32 + 8,pcVar28);
          iVar39 = iVar39 + 8;
          for (; param_4 < local_64 && pcVar27 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar39 = iVar39 + 1;
          }
LAB_01b92a90:
          uVar19 = (int)local_64 - (int)param_4;
          if (pcVar28 + -0x20 < local_64) {
            FUN_01b8edc8(param_2[3],param_4,local_64);
          }
          else {
            FUN_01b8ece8(param_2[3],param_4);
            if (0x10 < uVar19) {
              iVar42 = param_2[3];
              FUN_01b8ece8(iVar42 + 0x10,param_4 + 4);
              if (0x10 < (int)(uVar19 - 0x10)) {
                uVar7 = iVar42 + 0x20;
                do {
                  FUN_01b8ece8(uVar7,param_4 + 8);
                  FUN_01b8ece8(uVar7 + 0x10,param_4 + 0xc);
                  uVar7 = uVar7 + 0x20;
                  param_4 = param_4 + 8;
                } while (uVar7 < iVar42 + uVar19);
              }
            }
          }
          param_2[3] = param_2[3] + uVar19;
          piVar8 = (int *)param_2[1];
          if (0xffff < uVar19) {
            param_2[9] = 1;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)(piVar8 + 1) = (short)uVar19;
          *piVar8 = iVar4 + 3;
          if (0xffff < iVar39 - 3U) {
            param_2[9] = 2;
            param_2[10] = (int)piVar8 - *param_2 >> 3;
          }
          *(short *)((int)piVar8 + 6) = (short)(iVar39 - 3U);
          local_40 = local_50;
          goto LAB_01b927b8;
        }
        if (((((uVar37 ^ uVar41) & 0xff) == 0) &&
            (pcVar32 = (char *)(iVar12 + (uVar41 >> 8)), pcVar13 < pcVar32)) &&
           (uVar33 == *(uint *)(pcVar32 + 4) && uVar3 == *(uint *)(iVar12 + (uVar41 >> 8)))) {
          iVar39 = FUN_01b8ef9c(local_64 + 2,pcVar32 + 8,pcVar28,pcVar14,pcVar27);
          iVar39 = iVar39 + 8;
          iVar4 = ((iVar15 - uVar2) + iVar40) - (uVar41 >> 8);
          for (; param_4 < local_64 && pcVar13 < pcVar32; local_64 = (uint *)((int)local_64 + -1)) {
            pcVar32 = pcVar32 + -1;
            if (*(char *)((int)local_64 + -1) != *pcVar32) break;
            iVar39 = iVar39 + 1;
          }
          goto LAB_01b92a90;
        }
LAB_01b92c3c:
        if (uVar2 < uVar44) {
          pcVar32 = (char *)(iVar26 + uVar44);
          if (*(uint *)(iVar26 + uVar44) == *local_64) goto LAB_01b92c60;
        }
        else if (((((uVar19 ^ uVar45) & 0xff) == 0) &&
                 (pcVar32 = (char *)(iVar12 + (uVar45 >> 8)), pcVar13 < pcVar32)) &&
                (*(uint *)(iVar12 + (uVar45 >> 8)) == *local_64)) {
          uVar44 = iVar16 + (uVar45 >> 8);
LAB_01b92c60:
          uVar19 = *(uint *)((int)local_64 + 1);
          iVar4 = *(int *)((int)local_64 + 5);
          uVar7 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar20 = iVar4 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar3 = uVar7 >> (uVar36 & 0xff) | uVar20 << (0x20 - uVar36 & 0xff) |
                  uVar20 >> (-uVar17 + 0x18 & 0xff);
          uVar7 = uVar7 >> (uVar34 & 0xff) | uVar20 << (0x20 - uVar34 & 0xff) |
                  uVar20 >> (iVar18 + 0x20U & 0xff);
          uVar21 = *(uint *)(iVar10 + (uVar3 >> 8) * 4);
          uVar20 = *(uint *)(iVar22 + uVar7 * 4);
          *(int *)(iVar22 + uVar7 * 4) = iVar40 + 1;
          if (uVar2 < uVar20) {
            pcVar43 = (char *)(iVar26 + uVar20);
            if (!(iVar4 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar26 + uVar20)))
            goto LAB_01b92e58;
            iVar39 = FUN_01b8eeb0((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28);
            iVar4 = ((int)local_64 + 1) - (int)pcVar43;
            iVar39 = iVar39 + 8;
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar27 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar39 = iVar39 + 1;
            }
          }
          else if (((((uVar3 ^ uVar21) & 0xff) == 0) &&
                   (pcVar43 = (char *)(iVar12 + (uVar21 >> 8)), pcVar13 < pcVar43)) &&
                  (iVar4 == *(int *)(pcVar43 + 4) && uVar19 == *(uint *)(iVar12 + (uVar21 >> 8)))) {
            iVar39 = FUN_01b8ef9c((char *)((int)local_64 + 9),pcVar43 + 8,pcVar28,pcVar14,pcVar27);
            iVar39 = iVar39 + 8;
            iVar4 = (((iVar15 + 1) - uVar2) + iVar40) - (uVar21 >> 8);
            for (local_64 = (uint *)((int)local_64 + 1); param_4 < local_64 && pcVar13 < pcVar43;
                local_64 = (uint *)((int)local_64 + -1)) {
              pcVar43 = pcVar43 + -1;
              if (*(char *)((int)local_64 + -1) != *pcVar43) break;
              iVar39 = iVar39 + 1;
            }
          }
          else {
LAB_01b92e58:
            if (uVar44 < uVar2) {
              iVar39 = FUN_01b8ef9c(local_64 + 1,pcVar32 + 4,pcVar28,pcVar14,pcVar27);
              iVar39 = iVar39 + 4;
              iVar4 = iVar40 - uVar44;
              for (; param_4 < local_64 && pcVar13 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar39 = iVar39 + 1;
              }
            }
            else {
              iVar4 = (int)local_64 - (int)pcVar32;
              iVar39 = FUN_01b8eeb0(local_64 + 1,pcVar32 + 4,pcVar28);
              iVar39 = iVar39 + 4;
              for (; param_4 < local_64 && pcVar27 < pcVar32;
                  local_64 = (uint *)((int)local_64 + -1)) {
                pcVar32 = pcVar32 + -1;
                if (*(char *)((int)local_64 + -1) != *pcVar32) break;
                iVar39 = iVar39 + 1;
              }
            }
          }
          goto LAB_01b92a90;
        }
        local_64 = (uint *)((int)local_64 + ((int)local_64 - (int)param_4 >> 8) + 1);
      }
      else {
        pcVar32 = pcVar28;
        if (uVar21 < uVar2) {
          pcVar32 = pcVar14;
        }
        iVar4 = FUN_01b8ef9c((char *)((int)local_64 + 5),piVar8 + 1,pcVar28,pcVar32,pcVar27);
        local_64 = (uint *)((int)local_64 + 1);
        uVar19 = (int)local_64 - (int)param_4;
        iVar39 = iVar4 + 4;
        if (pcVar28 + -0x20 < local_64) {
          FUN_01b8edc8(param_2[3],param_4,local_64);
        }
        else {
          FUN_01b8ece8(param_2[3],param_4);
          if (0x10 < uVar19) {
            iVar42 = param_2[3];
            FUN_01b8ece8(iVar42 + 0x10,param_4 + 4);
            if (0x10 < (int)(uVar19 - 0x10)) {
              uVar7 = iVar42 + 0x20;
              do {
                FUN_01b8ece8(uVar7,param_4 + 8);
                iVar5 = uVar7 + 0x10;
                uVar7 = uVar7 + 0x20;
                FUN_01b8ece8(iVar5,param_4 + 0xc);
                param_4 = param_4 + 8;
              } while (uVar7 < iVar42 + uVar19);
            }
          }
        }
        param_2[3] = param_2[3] + uVar19;
        piVar8 = (int *)param_2[1];
        if (0xffff < uVar19) {
          param_2[9] = 1;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)(piVar8 + 1) = (short)uVar19;
        *piVar8 = 1;
        if (0xffff < iVar4 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)piVar8 - *param_2 >> 3;
        }
        *(short *)((int)piVar8 + 6) = (short)(iVar4 + 1U);
        iVar4 = local_50;
LAB_01b927b8:
        param_2[1] = (int)(piVar8 + 2);
        param_4 = (uint *)((int)local_64 + iVar39);
        local_50 = iVar4;
        if (param_4 <= puVar29) {
          iVar40 = iVar40 + 2;
          lVar1 = (ulonglong)*(uint *)(iVar26 + iVar40) * 0xb7a56463;
          uVar19 = *(int *)(iVar26 + iVar40 + 4) * -0x485a9b9d +
                   *(uint *)(iVar26 + iVar40) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          iVar39 = *(int *)((int)param_4 + 2);
          *(int *)(iVar22 + ((uint)lVar1 >> (uVar34 & 0xff) | uVar19 << (0x20 - uVar34 & 0xff) |
                            uVar19 >> (iVar18 + 0x20U & 0xff)) * 4) = iVar40;
          lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
          uVar19 = iVar39 * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          *(char **)(iVar22 + ((uint)lVar1 >> (uVar34 & 0xff) | uVar19 << (0x20 - uVar34 & 0xff) |
                              uVar19 >> (iVar18 + 0x20U & 0xff)) * 4) =
               (char *)((int)param_4 + (-2 - iVar26));
          *(int *)(iVar24 + ((uint)(*(int *)(iVar26 + iVar40) * -0x61c8864f) >> (uVar35 & 0xff)) * 4
                  ) = iVar40;
          *(int *)(iVar24 + ((uint)(*(int *)((int)param_4 + -1) * -0x61c8864f) >> (uVar35 & 0xff)) *
                            4) = ((int)param_4 + -1) - iVar26;
          while( true ) {
            iVar39 = iVar4;
            iVar40 = (int)param_4 - iVar26;
            uVar19 = iVar40 - local_40;
            if (uVar19 < uVar2) {
              puVar9 = (uint *)(iVar12 + (iVar15 - uVar2) + uVar19);
            }
            else {
              puVar9 = (uint *)(iVar26 + uVar19);
            }
            local_50 = iVar39;
            if ((((uVar2 - 1) + local_40) - iVar40 < 3) || (*puVar9 != *param_4)) goto LAB_01b92a10;
            pcVar32 = pcVar28;
            if (uVar19 < uVar2) {
              pcVar32 = pcVar14;
            }
            iVar4 = FUN_01b8ef9c(param_4 + 1,puVar9 + 1,pcVar28,pcVar32,pcVar27);
            if (pcVar28 + -0x20 < param_4) {
              FUN_01b8edc8(param_2[3],param_4,param_4);
            }
            else {
              FUN_01b8ece8(param_2[3],param_4);
            }
            puVar30 = (undefined4 *)param_2[1];
            *(undefined2 *)(puVar30 + 1) = 0;
            *puVar30 = 1;
            if (0xffff < iVar4 + 1U) {
              param_2[9] = 2;
              param_2[10] = (int)puVar30 - *param_2 >> 3;
            }
            *(short *)((int)puVar30 + 6) = (short)(iVar4 + 1U);
            param_2[1] = (int)(puVar30 + 2);
            uVar19 = param_4[1];
            *(int *)(iVar24 + (*param_4 * -0x61c8864f >> (uVar35 & 0xff)) * 4) = iVar40;
            uVar7 = *param_4;
            param_4 = (uint *)((int)param_4 + iVar4 + 4);
            lVar1 = (ulonglong)uVar7 * 0xb7a56463;
            uVar19 = uVar19 * -0x485a9b9d + uVar7 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            *(int *)(iVar22 + ((uint)lVar1 >> (uVar34 & 0xff) | uVar19 << (0x20 - uVar34 & 0xff) |
                              uVar19 >> (iVar18 + 0x20U & 0xff)) * 4) = iVar40;
            if (puVar29 < param_4) break;
            iVar4 = local_40;
            local_40 = iVar39;
          }
          local_50 = local_40;
          local_40 = iVar39;
        }
LAB_01b92a10:
        local_64 = param_4;
      }
    }
  }
  *param_3 = local_50;
  param_3[1] = local_40;
  return (int)pcVar28 - (int)param_4;
}

