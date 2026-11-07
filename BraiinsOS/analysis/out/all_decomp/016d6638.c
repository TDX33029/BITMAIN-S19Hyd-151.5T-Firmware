// FUN_016d6638 @ 016d6638 size=802 calls_out=9 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_016d6638(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint local_2048;
  int local_2040;
  int local_2038;
  char local_202d [4095];
  char acStack_102e [4098];
  char acStack_2c [8];
  
  if (param_1 == 0) {
    puVar6 = (undefined4 *)FUN_016d2bc8();
    *puVar6 = 0x16;
  }
  else {
    uVar3 = FUN_016dd92c(param_1,0x1001);
    if (uVar3 == 0) {
      puVar6 = (undefined4 *)FUN_016d2bc8();
      *puVar6 = 2;
    }
    else {
      if (uVar3 < 0x1000) {
        pcVar12 = (char *)(0x1000 - uVar3);
        pcVar11 = acStack_102e + 2;
        uVar10 = 0;
        pcVar15 = local_202d + 1;
        cVar1 = '\0';
        local_2038 = 0;
        local_2040 = 0;
        FUN_016dd1aa(pcVar11 + (int)pcVar12,param_1,uVar3 + 1);
LAB_016d6788:
        for (; acStack_102e[(int)(pcVar12 + 2)] == '/';
            pcVar12 = pcVar12 + ((int)pcVar13 - (int)(pcVar11 + (int)pcVar13))) {
          pcVar13 = pcVar12 + 1;
          local_202d[1] = '/';
          if ((acStack_102e[(int)(pcVar12 + 3)] == '/') && (acStack_102e[(int)(pcVar12 + 4)] != '/')
             ) {
            uVar10 = 2;
            local_202d[2] = 0x2f;
            cVar1 = '\0';
            local_2038 = 0;
          }
          else {
            uVar10 = 1;
            cVar1 = '\0';
            local_2038 = 0;
          }
LAB_016d682a:
          pcVar14 = pcVar11 + (int)pcVar13;
          do {
            pcVar12 = pcVar14;
            pcVar14 = pcVar12 + 1;
          } while (*pcVar12 == '/');
        }
        pcVar14 = pcVar11 + (int)pcVar12;
        iVar4 = FUN_016dd7b6(pcVar14,0x2f);
        iVar4 = iVar4 - (int)pcVar14;
        if (cVar1 == '\0' && iVar4 == 0) {
          local_202d[uVar10 + 1] = '\0';
          if (local_202d[1] != '/') {
            iVar4 = FUN_016e0042(pcVar11,0x1001);
            if (iVar4 == 0) {
              return 0;
            }
            uVar3 = FUN_016dd8a2(pcVar11);
            local_2048 = 0;
            while (local_2038 != 0) {
              pcVar12 = pcVar11 + uVar3;
              do {
                if (uVar3 < 2) break;
                pcVar12 = pcVar12 + -1;
                uVar3 = uVar3 - 1;
              } while (*pcVar12 != '/');
              if (local_2048 + 2 < uVar10) {
                local_2048 = local_2048 + 3;
                local_2038 = local_2038 + -1;
              }
              else {
                local_2048 = local_2048 + 2;
                local_2038 = local_2038 + -1;
              }
            }
            uVar9 = uVar3;
            if ((local_2048 != uVar10) && (acStack_102e[uVar3 + 1] != '/')) {
              uVar9 = uVar3 + 1;
              acStack_102e[uVar3 + 2] = '/';
            }
            if (0xfff < (uVar10 - local_2048) + 1 + uVar9) goto LAB_016d6944;
            pcVar12 = local_202d + 1;
            uVar10 = (uVar10 - local_2048) + uVar9;
            FUN_016dd52c(pcVar12 + uVar9,pcVar12 + local_2048);
            FUN_016dd1aa(pcVar12,pcVar11,uVar9);
          }
          if (param_2 == 0) {
            uVar7 = FUN_016dd83e(local_202d + 1);
            return uVar7;
          }
          uVar7 = FUN_016dd1aa(param_2,local_202d + 1,uVar10 + 1);
          return uVar7;
        }
        if (iVar4 == 1) {
          if (acStack_102e[(int)(pcVar12 + 2)] == '.') {
            pcVar13 = pcVar12 + 1;
            goto LAB_016d682a;
          }
          if (uVar10 != 0) goto LAB_016d67b4;
          pcVar13 = pcVar12 + 1;
          FUN_016dd1aa(pcVar15,pcVar14,1);
          local_202d[2] = 0;
          local_2048 = 1;
          bVar2 = false;
          pcVar14 = pcVar15;
LAB_016d6744:
          pcVar12 = (char *)FUN_016e0272(pcVar15,pcVar11,pcVar13);
          if (pcVar12 == pcVar13) goto LAB_016d6944;
          if (pcVar12 == (char *)0x0) {
            puVar6 = (undefined4 *)FUN_016d2bc8();
            *puVar6 = 2;
            return 0;
          }
          if (-1 < (int)pcVar12) {
            local_2040 = local_2040 + 1;
            if (local_2040 == 0x28) {
              puVar6 = (undefined4 *)FUN_016d2bc8();
              *puVar6 = 0x28;
              return 0;
            }
            if (acStack_102e[(int)(pcVar12 + 1)] == '/') {
              pcVar14 = pcVar11 + (int)pcVar13;
              while (*pcVar14 == '/') {
                pcVar13 = pcVar13 + 1;
                pcVar14 = pcVar14 + 1;
              }
            }
            pcVar12 = pcVar13 + -(int)pcVar12;
            FUN_016dd52c(pcVar11 + (int)pcVar12,pcVar11);
            goto LAB_016d6788;
          }
          piVar5 = (int *)FUN_016d2bc8();
          if (*piVar5 != 0x16) {
            return 0;
          }
          if (!bVar2) {
            if (iVar4 != 0) {
              uVar10 = local_2048;
            }
            cVar1 = acStack_102e[(int)(pcVar13 + 2)];
            goto LAB_016d682a;
          }
        }
        else {
          if (uVar10 == 0) {
LAB_016d670a:
            iVar8 = iVar4;
          }
          else {
LAB_016d67b4:
            if (local_202d[uVar10] == '/') goto LAB_016d670a;
            if (pcVar12 == (char *)0x0) goto LAB_016d6944;
            acStack_102e[(int)(pcVar12 + 1)] = '/';
            iVar8 = iVar4 + 1;
            pcVar12 = pcVar12 + -1;
          }
          local_2048 = uVar10 + iVar8;
          if (0xfff < local_2048) goto LAB_016d6944;
          pcVar14 = pcVar15 + uVar10;
          pcVar13 = pcVar12 + iVar8;
          FUN_016dd1aa(pcVar14,pcVar11 + (int)pcVar12);
          bVar2 = false;
          local_202d[local_2048 + 1] = '\0';
          if (((iVar4 != 2) || (acStack_102e[(int)pcVar13] != '.')) ||
             (acStack_102e[(int)(pcVar13 + 1)] != '.')) goto LAB_016d6744;
          if (uVar10 <= (uint)(local_2038 * 3)) {
            local_2038 = local_2038 + 1;
            uVar10 = local_2048;
            goto LAB_016d682a;
          }
          if (cVar1 != '\0') {
            bVar2 = true;
            goto LAB_016d6744;
          }
        }
        while (uVar10 != 0) {
          pcVar14 = pcVar14 + -1;
          if (*pcVar14 == '/') {
            uVar3 = uVar10;
            if ((uVar10 == 1) || (uVar3 = uVar10 - 1, uVar10 != 2)) {
              cVar1 = '\0';
              uVar10 = uVar3;
            }
            else {
              cVar1 = '\0';
              if (local_202d[1] != '/') {
                uVar10 = 1;
              }
            }
            goto LAB_016d682a;
          }
          uVar10 = uVar10 - 1;
        }
        cVar1 = '\0';
        goto LAB_016d682a;
      }
LAB_016d6944:
      puVar6 = (undefined4 *)FUN_016d2bc8();
      *puVar6 = 0x24;
    }
  }
  return 0;
}

