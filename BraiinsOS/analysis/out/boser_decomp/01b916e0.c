// FUN_01b916e0 @ 01b916e0 size=3184 calls_out=4 calls_in=1
// strings: 

ulonglong FUN_01b916e0(int param_1,int *param_2,uint *param_3,uint *param_4,int param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  int *piVar21;
  undefined4 *puVar22;
  uint *puVar23;
  int iVar24;
  char *pcVar25;
  char *pcVar26;
  int iVar27;
  char *pcVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  bool bVar33;
  ulonglong uVar34;
  uint local_68;
  char *local_4c;
  uint local_44;
  int local_3c;
  uint local_2c;
  
  iVar10 = *(int *)(param_1 + 4);
  pcVar32 = *(char **)(param_1 + 0x10);
  if ((char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) <
      (char *)((int)param_4 + ((param_5 - iVar10) - (int)pcVar32))) {
    local_4c = (char *)((int)param_4 +
                       ((param_5 - iVar10) - (1 << (*(uint *)(param_1 + 0xb8) & 0xff))));
  }
  else {
    local_4c = pcVar32;
  }
  pcVar11 = *(char **)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_4c = pcVar32;
  }
  if (pcVar11 <= local_4c) {
    uVar34 = FUN_01b8f3c4();
    return uVar34;
  }
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 0xc0);
  iVar14 = *(int *)(param_1 + 100);
  pcVar32 = (char *)((int)param_4 + param_5);
  puVar15 = (uint *)(pcVar32 + -8);
  iVar30 = *(int *)(param_1 + 0xbc);
  pcVar16 = pcVar11 + iVar10;
  iVar17 = *(int *)(param_1 + 8);
  pcVar18 = local_4c + iVar17;
  pcVar19 = pcVar11 + iVar17;
  local_2c = *param_3;
  local_68 = param_3[1];
  puVar23 = param_4;
  do {
    if (puVar15 <= param_4) {
      *param_3 = local_2c;
      param_3[1] = local_68;
      return (ulonglong)(uint)((int)pcVar32 - (int)puVar23);
    }
    uVar9 = *param_4;
    uVar31 = param_4[1];
    if (param_6 == 6) {
      uVar20 = 0xbf9b0000;
LAB_01b91d78:
      uVar3 = uVar20 * uVar31 + uVar9 * -0x30e44324 +
              (int)((ulonglong)uVar20 * (ulonglong)uVar9 >> 0x20);
      uVar20 = (uint)((ulonglong)uVar20 * (ulonglong)uVar9) >> (0x40U - iVar30 & 0xff) |
               uVar3 << (iVar30 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar30 & 0xff);
    }
    else {
      if (param_6 == 7) {
        uVar20 = 0xbfa56300;
        goto LAB_01b91d78;
      }
      if (param_6 == 5) {
        uVar20 = 0xbb000000;
        goto LAB_01b91d78;
      }
      uVar20 = uVar9 * -0x61c8864f >> (0x20U - iVar30 & 0xff);
    }
    pcVar26 = *(char **)(iVar14 + uVar20 * 4);
    iVar6 = iVar10;
    if (pcVar26 < pcVar11) {
      iVar6 = iVar17;
    }
    iVar2 = -iVar13;
    uVar7 = iVar2 + 0x40;
    uVar3 = uVar31 * -0x485a9b9d + uVar9 * -0x30e44324 +
            (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
    uVar3 = (uint)((ulonglong)uVar9 * 0xb7a56463) >> (uVar7 & 0xff) |
            uVar3 << (iVar13 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar13 & 0xff);
    pcVar28 = *(char **)(iVar12 + uVar3 * 4);
    iVar27 = iVar10;
    if (pcVar28 < pcVar11) {
      iVar27 = iVar17;
    }
    iVar4 = (int)param_4 - iVar10;
    pcVar5 = (char *)((1 - local_2c) + iVar4);
    iVar24 = iVar17;
    if (pcVar11 <= pcVar5) {
      iVar24 = iVar10;
    }
    *(int *)(iVar12 + uVar3 * 4) = iVar4;
    *(int *)(iVar14 + uVar20 * 4) = iVar4;
    uVar20 = (1 - (int)local_4c) + iVar4;
    bVar33 = uVar20 == local_2c;
    if (uVar20 >= local_2c) {
      bVar33 = pcVar11 + (-1 - (int)pcVar5) == (char *)0x2;
    }
    if (((uVar20 < local_2c || pcVar11 + (-1 - (int)pcVar5) < (char *)0x2) || bVar33) ||
       (*(int *)((int)param_4 + 1) != *(int *)(pcVar5 + iVar24))) {
      puVar29 = param_4;
      if ((local_4c < pcVar28) &&
         (pcVar5 = pcVar28 + iVar27,
         *(uint *)(pcVar5 + 4) == uVar31 && *(uint *)(pcVar28 + iVar27) == uVar9)) {
        if (pcVar28 < pcVar11) {
          pcVar25 = pcVar18;
          pcVar26 = pcVar19;
        }
        else {
          pcVar25 = pcVar16;
          pcVar26 = pcVar32;
        }
        local_3c = FUN_01b8ef9c(param_4 + 2,pcVar5 + 8,pcVar32,pcVar26,pcVar16);
        local_3c = local_3c + 8;
        local_44 = iVar4 - (int)pcVar28;
        while (puVar23 < puVar29 && pcVar25 < pcVar5) {
          pcVar5 = pcVar5 + -1;
          if (*(char *)((int)puVar29 + -1) != *pcVar5) break;
          local_3c = local_3c + 1;
          puVar29 = (uint *)((int)puVar29 + -1);
        }
        uVar9 = (int)puVar29 - (int)puVar23;
        iVar6 = local_44 + 3;
        if (pcVar32 + -0x20 < puVar29) {
          FUN_01b8edc8(param_2[3],puVar23,puVar29);
        }
        else {
          FUN_01b8ece8(param_2[3],puVar23);
          if (0x10 < uVar9) {
            iVar27 = param_2[3];
            FUN_01b8ece8(iVar27 + 0x10,puVar23 + 4);
            if (0x10 < (int)(uVar9 - 0x10)) {
              uVar31 = iVar27 + 0x20;
              do {
                FUN_01b8ece8(uVar31,puVar23 + 8);
                FUN_01b8ece8(uVar31 + 0x10,puVar23 + 0xc);
                uVar31 = uVar31 + 0x20;
                puVar23 = puVar23 + 8;
              } while (uVar31 < iVar27 + uVar9);
            }
          }
        }
        param_2[3] = param_2[3] + uVar9;
        if (0xffff < uVar9) {
          param_2[9] = 1;
          param_2[10] = param_2[1] - *param_2 >> 3;
        }
        piVar21 = (int *)param_2[1];
LAB_01b91f0c:
        *(short *)(piVar21 + 1) = (short)uVar9;
        *piVar21 = iVar6;
        if (0xffff < local_3c - 3U) {
          param_2[9] = 2;
          param_2[10] = (int)piVar21 - *param_2 >> 3;
        }
        *(short *)((int)piVar21 + 6) = (short)(local_3c - 3U);
        goto LAB_01b91ab4;
      }
      if ((local_4c < pcVar26) &&
         (pcVar28 = pcVar26 + iVar6, *param_4 == *(uint *)(pcVar26 + iVar6))) {
        uVar9 = *(uint *)((int)param_4 + 1);
        iVar27 = *(int *)((int)param_4 + 5);
        uVar31 = iVar27 * -0x485a9b9d + uVar9 * -0x30e44324 +
                 (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
        uVar31 = (uint)((ulonglong)uVar9 * 0xb7a56463) >> (uVar7 & 0xff) |
                 uVar31 << (0x20 - uVar7 & 0xff) | uVar31 >> (iVar2 + 0x20U & 0xff);
        pcVar5 = *(char **)(iVar12 + uVar31 * 4);
        iVar6 = iVar10;
        if (pcVar5 < pcVar11) {
          iVar6 = iVar17;
        }
        *(int *)(iVar12 + uVar31 * 4) = iVar4 + 1;
        if ((local_4c < pcVar5) &&
           (pcVar25 = pcVar5 + iVar6,
           iVar27 == *(int *)(pcVar25 + 4) && uVar9 == *(uint *)(pcVar5 + iVar6))) {
          if (pcVar5 < pcVar11) {
            pcVar28 = pcVar18;
            pcVar26 = pcVar19;
          }
          else {
            pcVar28 = pcVar16;
            pcVar26 = pcVar32;
          }
          local_3c = FUN_01b8ef9c((char *)((int)param_4 + 9),pcVar25 + 8,pcVar32,pcVar26,pcVar16);
          local_3c = local_3c + 8;
          local_44 = (iVar4 + 1) - (int)pcVar5;
          puVar29 = (uint *)((int)param_4 + 1);
          while (puVar23 < puVar29 && pcVar28 < pcVar25) {
            pcVar25 = pcVar25 + -1;
            if (*(char *)((int)puVar29 + -1) != *pcVar25) break;
            local_3c = local_3c + 1;
            puVar29 = (uint *)((int)puVar29 + -1);
          }
        }
        else {
          if (pcVar26 < pcVar11) {
            pcVar25 = pcVar18;
            pcVar5 = pcVar19;
          }
          else {
            pcVar25 = pcVar16;
            pcVar5 = pcVar32;
          }
          local_3c = FUN_01b8ef9c(param_4 + 1,pcVar28 + 4,pcVar32,pcVar5,pcVar16);
          local_3c = local_3c + 4;
          local_44 = iVar4 - (int)pcVar26;
          while (puVar23 < puVar29 && pcVar25 < pcVar28) {
            pcVar28 = pcVar28 + -1;
            if (*(char *)((int)puVar29 + -1) != *pcVar28) break;
            local_3c = local_3c + 1;
            puVar29 = (uint *)((int)puVar29 + -1);
          }
        }
        uVar9 = (int)puVar29 - (int)puVar23;
        iVar6 = local_44 + 3;
        if (pcVar32 + -0x20 < puVar29) {
          FUN_01b8edc8(param_2[3],puVar23,puVar29);
        }
        else {
          FUN_01b8ece8(param_2[3],puVar23);
          if (0x10 < uVar9) {
            iVar27 = param_2[3];
            FUN_01b8ece8(iVar27 + 0x10,puVar23 + 4);
            if (0x10 < (int)(uVar9 - 0x10)) {
              uVar31 = iVar27 + 0x20;
              do {
                FUN_01b8ece8(uVar31,puVar23 + 8);
                FUN_01b8ece8(uVar31 + 0x10,puVar23 + 0xc);
                uVar31 = uVar31 + 0x20;
                puVar23 = puVar23 + 8;
              } while (uVar31 < iVar27 + uVar9);
            }
          }
        }
        param_2[3] = param_2[3] + uVar9;
        piVar21 = (int *)param_2[1];
        if (0xffff < uVar9) {
          param_2[9] = 1;
          param_2[10] = (int)piVar21 - *param_2 >> 3;
        }
        goto LAB_01b91f0c;
      }
      param_4 = (uint *)((int)param_4 + ((int)param_4 - (int)puVar23 >> 8) + 1);
      local_44 = local_2c;
      local_2c = local_68;
    }
    else {
      puVar29 = (uint *)((int)param_4 + 1);
      pcVar26 = pcVar32;
      if (pcVar5 < pcVar11) {
        pcVar26 = pcVar19;
      }
      uVar9 = (int)puVar29 - (int)puVar23;
      iVar6 = FUN_01b8ef9c((char *)((int)param_4 + 5),pcVar5 + iVar24 + 4,pcVar32,pcVar26,pcVar16);
      local_3c = iVar6 + 4;
      if (pcVar32 + -0x20 < puVar29) {
        FUN_01b8edc8(param_2[3],puVar23,puVar29);
      }
      else {
        FUN_01b8ece8(param_2[3],puVar23);
        if (0x10 < uVar9) {
          iVar27 = param_2[3];
          FUN_01b8ece8(iVar27 + 0x10,puVar23 + 4);
          if (0x10 < (int)(uVar9 - 0x10)) {
            uVar31 = iVar27 + 0x20;
            do {
              FUN_01b8ece8(uVar31,puVar23 + 8);
              FUN_01b8ece8(uVar31 + 0x10,puVar23 + 0xc);
              uVar31 = uVar31 + 0x20;
              puVar23 = puVar23 + 8;
            } while (uVar31 < iVar27 + uVar9);
          }
        }
      }
      param_2[3] = param_2[3] + uVar9;
      if (0xffff < uVar9) {
        param_2[9] = 1;
        param_2[10] = param_2[1] - *param_2 >> 3;
      }
      piVar21 = (int *)param_2[1];
      *(short *)(piVar21 + 1) = (short)uVar9;
      *piVar21 = 1;
      if (0xffff < iVar6 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)piVar21 - *param_2 >> 3;
      }
      local_44 = local_2c;
      *(short *)((int)piVar21 + 6) = (short)(iVar6 + 1U);
      local_2c = local_68;
LAB_01b91ab4:
      param_2[1] = (int)(piVar21 + 2);
      param_4 = (uint *)((int)puVar29 + local_3c);
      if (param_4 <= puVar15) {
        iVar4 = iVar4 + 2;
        uVar9 = *(uint *)(iVar10 + iVar4);
        iVar27 = *(int *)(iVar10 + iVar4 + 4);
        iVar6 = uVar9 * -0x30e44324;
        uVar31 = iVar27 * -0x485a9b9d + iVar6 + (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
        *(int *)(iVar12 + ((uint)((ulonglong)uVar9 * 0xb7a56463) >> (uVar7 & 0xff) |
                           uVar31 << (0x20 - uVar7 & 0xff) | uVar31 >> (iVar2 + 0x20U & 0xff)) * 4)
             = iVar4;
        lVar1 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
        uVar31 = *(int *)((int)param_4 + 2) * -0x485a9b9d +
                 *(uint *)((int)param_4 + -2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        *(char **)(iVar12 + ((uint)lVar1 >> (uVar7 & 0xff) | uVar31 << (0x20 - uVar7 & 0xff) |
                            uVar31 >> (iVar2 + 0x20U & 0xff)) * 4) =
             (char *)((int)param_4 + (-2 - iVar10));
        if (param_6 == 6) {
          uVar31 = 0xbf9b0000;
LAB_01b9221c:
          uVar20 = uVar31 * iVar27 + iVar6 + (int)((ulonglong)uVar31 * (ulonglong)uVar9 >> 0x20);
          uVar9 = (uint)((ulonglong)uVar31 * (ulonglong)uVar9) >> (0x40U - iVar30 & 0xff) |
                  uVar20 << (iVar30 - 0x20U & 0xff);
LAB_01b9223c:
          uVar9 = uVar9 | uVar20 >> (0x20U - iVar30 & 0xff);
        }
        else {
          if (param_6 == 7) {
            uVar20 = iVar27 * -0x405a9d00 + iVar6 + (int)((ulonglong)uVar9 * 0xbfa56300 >> 0x20);
            uVar9 = (uint)((ulonglong)uVar9 * 0xbfa56300) >> (0x40U - iVar30 & 0xff) |
                    uVar20 << (iVar30 - 0x20U & 0xff);
            goto LAB_01b9223c;
          }
          if (param_6 == 5) {
            uVar31 = 0xbb000000;
            goto LAB_01b9221c;
          }
          uVar9 = (uint)(*(int *)(iVar10 + iVar4) * -0x61c8864f) >> (0x20U - iVar30 & 0xff);
        }
        *(int *)(iVar14 + uVar9 * 4) = iVar4;
        if (param_6 == 6) {
          uVar9 = *(uint *)((int)param_4 + -1);
          iVar6 = *(int *)((int)param_4 + 3);
          uVar31 = 0xbf9b0000;
LAB_01b92280:
          uVar20 = uVar31 * iVar6 + uVar9 * -0x30e44324 +
                   (int)((ulonglong)uVar31 * (ulonglong)uVar9 >> 0x20);
          uVar9 = (uint)((ulonglong)uVar31 * (ulonglong)uVar9) >> (0x40U - iVar30 & 0xff) |
                  uVar20 << (iVar30 - 0x20U & 0xff) | uVar20 >> (0x20U - iVar30 & 0xff);
        }
        else {
          if (param_6 == 7) {
            uVar9 = *(uint *)((int)param_4 + -1);
            iVar6 = *(int *)((int)param_4 + 3);
            uVar31 = 0xbfa56300;
            goto LAB_01b92280;
          }
          if (param_6 == 5) {
            uVar9 = *(uint *)((int)param_4 + -1);
            uVar31 = 0xbb000000;
            iVar6 = *(int *)((int)param_4 + 3);
            goto LAB_01b92280;
          }
          uVar9 = (uint)(*(int *)((int)param_4 + -1) * -0x61c8864f) >> (0x20U - iVar30 & 0xff);
        }
        *(char **)(iVar14 + uVar9 * 4) = (char *)((int)param_4 + (-1 - iVar10));
        do {
          uVar9 = local_2c;
          iVar6 = (int)param_4 - iVar10;
          pcVar26 = (char *)(iVar6 - local_2c);
          if (pcVar26 < pcVar11) {
            iVar27 = iVar17;
          }
          else {
            iVar27 = iVar10;
          }
          uVar31 = iVar6 - (int)local_4c;
          bVar33 = uVar31 == local_2c;
          if (uVar31 >= local_2c) {
            bVar33 = pcVar11 + ((local_2c - 1) - iVar6) == (char *)0x2;
          }
          if (((uVar31 < local_2c || pcVar11 + ((local_2c - 1) - iVar6) < (char *)0x2) || bVar33) ||
             (*param_4 != *(uint *)(pcVar26 + iVar27))) break;
          if (pcVar26 < pcVar11) {
            pcVar28 = pcVar19;
          }
          else {
            pcVar28 = pcVar32;
          }
          iVar27 = FUN_01b8ef9c(param_4 + 1,(uint *)((int)(pcVar26 + iVar27) + 4),pcVar32,pcVar28,
                                pcVar16);
          if (pcVar32 + -0x20 < param_4) {
            FUN_01b8edc8(param_2[3],param_4,param_4);
          }
          else {
            FUN_01b8ece8(param_2[3],param_4);
          }
          puVar22 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar22 + 1) = 0;
          *puVar22 = 1;
          if (0xffff < iVar27 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar22 - *param_2 >> 3;
          }
          *(short *)((int)puVar22 + 6) = (short)(iVar27 + 1U);
          param_2[1] = (int)(puVar22 + 2);
          uVar20 = *param_4;
          uVar31 = param_4[1];
          if (param_6 == 6) {
            uVar3 = 0xbf9b0000;
LAB_01b92318:
            uVar8 = uVar3 * uVar31 + uVar20 * -0x30e44324 +
                    (int)((ulonglong)uVar3 * (ulonglong)uVar20 >> 0x20);
            uVar3 = (uint)((ulonglong)uVar3 * (ulonglong)uVar20) >> (0x40U - iVar30 & 0xff) |
                    uVar8 << (iVar30 - 0x20U & 0xff) | uVar8 >> (0x20U - iVar30 & 0xff);
          }
          else {
            if (param_6 == 7) {
              uVar3 = 0xbfa56300;
              goto LAB_01b92318;
            }
            if (param_6 == 5) {
              uVar3 = uVar31 * -0x45000000 + uVar20 * -0x30e44324 +
                      (int)((ulonglong)uVar20 * 0xbb000000 >> 0x20);
              uVar3 = (uint)((ulonglong)uVar20 * 0xbb000000) >> (0x40U - iVar30 & 0xff) |
                      uVar3 << (iVar30 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar30 & 0xff);
            }
            else {
              uVar3 = uVar20 * -0x61c8864f >> (0x20U - iVar30 & 0xff);
            }
          }
          param_4 = (uint *)((int)param_4 + iVar27 + 4);
          *(int *)(iVar14 + uVar3 * 4) = iVar6;
          uVar31 = uVar31 * -0x485a9b9d + uVar20 * -0x30e44324 +
                   (int)((ulonglong)uVar20 * 0xb7a56463 >> 0x20);
          *(int *)(iVar12 + ((uint)((ulonglong)uVar20 * 0xb7a56463) >> (uVar7 & 0xff) |
                             uVar31 << (0x20 - uVar7 & 0xff) | uVar31 >> (iVar2 + 0x20U & 0xff)) * 4
                  ) = iVar6;
          local_2c = local_44;
          local_44 = uVar9;
        } while (param_4 <= puVar15);
      }
      puVar23 = param_4;
    }
    local_68 = local_2c;
    local_2c = local_44;
  } while( true );
}

