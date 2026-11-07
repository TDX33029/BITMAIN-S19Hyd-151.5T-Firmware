// FUN_01ae6b6c @ 01ae6b6c size=1260 calls_out=3 calls_in=1
// strings: 

uint FUN_01ae6b6c(char *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint *in_r12;
  uint *extraout_r12;
  uint *extraout_r12_00;
  ulonglong uVar16;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  char local_30;
  byte local_2f;
  int local_2c;
  uint local_28;
  
  if (param_3 == 0) {
    uVar6 = 0x27;
  }
  else {
    if (param_4 == (uint *)0x0) {
      local_40 = 0;
      local_44 = 0;
    }
    else {
      bVar1 = param_1[1];
      cVar2 = *param_1;
      puVar15 = (uint *)0x0;
      iVar14 = *(int *)(param_5 + 8);
      iVar5 = *(int *)(param_1 + 4);
      puVar7 = *(uint **)(param_1 + 8);
      local_44 = 0;
      local_40 = 0;
LAB_01ae6bc4:
      do {
        iVar14 = iVar14 + -1;
        if (iVar14 == -1) {
          return 0x13;
        }
        *(int *)(param_5 + 8) = iVar14;
        if (param_4 <= puVar15) {
          return 0;
        }
        if ((~*(byte *)(param_3 + (int)puVar15) & 0x1f) == 0) {
          return 0;
        }
        if (param_4 <= (uint *)((int)puVar15 + 1U)) {
          return 0;
        }
        bVar3 = *(byte *)(param_3 + (int)((int)puVar15 + 1U));
        puVar9 = (uint *)((int)puVar15 + 2);
        local_38 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          if (3 < local_38 - 0x81) {
            return 0;
          }
          puVar12 = &switchD_01ae6ca8::switchdataD_01ae6cac;
          puVar10 = (uint *)(&switchD_01ae6ca8::switchdataD_01ae6cac)[local_38 - 0x81];
          switch(local_38) {
          case 0x81:
            if (param_4 <= puVar9) {
              return 0;
            }
            if ((uint)(int)(char)*(byte *)(param_3 + (int)puVar9) < 0x80000000) {
              return 0;
            }
            local_38 = (uint)*(byte *)(param_3 + (int)puVar9);
            puVar9 = (uint *)((int)puVar15 + 3);
            goto LAB_01ae6c10;
          case 0x82:
            if (param_4 > puVar9) {
              puVar10 = (uint *)((int)puVar15 + 3);
            }
            if (param_4 <= puVar9 || param_4 <= puVar10) {
              return 0;
            }
            if (*(char *)(param_3 + (int)puVar9) == '\0') {
              return 0;
            }
            local_38 = (uint)CONCAT11(*(char *)(param_3 + (int)puVar9),
                                      *(undefined1 *)(param_3 + (int)puVar10));
            puVar9 = puVar15 + 1;
            break;
          case 0x83:
            if (param_4 <= puVar9) {
              return 0;
            }
            puVar10 = (uint *)((int)puVar15 + 3);
            if (param_4 > puVar10) {
              puVar12 = puVar15 + 1;
            }
            if (param_4 <= puVar10 || param_4 <= puVar12) {
              return 0;
            }
            if (*(byte *)(param_3 + (int)puVar9) == 0) {
              return 0;
            }
            local_38 = (uint)*(byte *)(param_3 + (int)puVar10) << 8 |
                       (uint)*(byte *)(param_3 + (int)puVar9) << 0x10 |
                       (uint)*(byte *)(param_3 + (int)puVar12);
            puVar9 = (uint *)((int)puVar15 + 5);
            break;
          case 0x84:
            if (param_4 > puVar9) {
              puVar10 = (uint *)((int)puVar15 + 3);
            }
            if (param_4 <= puVar9 || param_4 <= puVar10) {
              return 0;
            }
            puVar13 = puVar15 + 1;
            puVar12 = param_2;
            if (param_4 > puVar13) {
              puVar12 = (uint *)((int)puVar15 + 5);
              in_r12 = param_2;
            }
            param_2 = in_r12;
            if (param_4 <= puVar13 || param_4 <= puVar12) {
              return 0;
            }
            if (*(byte *)(param_3 + (int)puVar9) == 0) {
              return 0;
            }
            local_38 = (uint)*(byte *)(param_3 + (int)puVar10) << 0x10 |
                       (uint)*(byte *)(param_3 + (int)puVar9) << 0x18 |
                       (uint)*(byte *)(param_3 + (int)puVar13) << 8 |
                       (uint)*(byte *)(param_3 + (int)puVar12);
            puVar9 = (uint *)((int)puVar15 + 6);
          }
          if (0xfffe < local_38) {
            return 0;
          }
        }
LAB_01ae6c10:
        if (*(byte *)(param_3 + (int)puVar15) != 0x30) {
          return 0;
        }
        puVar15 = (uint *)(local_38 + (int)puVar9);
        if (puVar15 < puVar9) {
          return 0;
        }
        if (param_4 < puVar15) {
          return 0;
        }
        local_34 = 0;
        local_3c = param_3 + (int)puVar9;
        FUN_01ae6550(&local_30,&local_3c);
        if (local_30 == '\x04') {
          return (uint)local_2f;
        }
        if (local_34 != local_38) {
          return 0;
        }
        in_r12 = extraout_r12;
        if (cVar2 != local_30) {
LAB_01ae6c84:
          if (puVar15 == param_4) break;
          goto LAB_01ae6bc4;
        }
        if (cVar2 == '\x03') {
          if ((uint)bVar1 == (uint)local_2f) {
            return 0x17;
          }
          goto LAB_01ae6c84;
        }
        if (cVar2 == '\0') {
          uVar16 = FUN_01ae7098(iVar5,puVar7,2,local_2c,local_28);
          in_r12 = extraout_r12_00;
LAB_01ae6f48:
          uVar6 = (uint)(uVar16 >> 0x20);
          if (param_2 == (uint *)0x0) {
            if ((uVar16 & 1) != 0) {
              return uVar6;
            }
            goto LAB_01ae6f6c;
          }
          if ((uVar16 & 1) != 0) {
            return uVar6;
          }
          if ((uVar16 & 0x100000000) != 0) {
            return 0x17;
          }
        }
        else {
          if (cVar2 != '\x01') {
            if (puVar7 == (uint *)0x10) {
              if (local_28 == 8) {
LAB_01ae6f30:
                uVar6 = 0;
LAB_01ae6f34:
                uVar16 = (ulonglong)uVar6 << 0x20;
              }
              else {
                if (local_28 == 0x20) goto LAB_01ae6e44;
                uVar16 = 0xb00000001;
              }
            }
            else {
              uVar16 = 1;
              if (puVar7 == (uint *)0x4) {
                if (local_28 == 8) {
LAB_01ae6e44:
                  if ((local_28 & 0xfffffffe) < local_28 >> 1) {
                    puVar11 = &DAT_01d30150;
                    puVar8 = &DAT_01d30160;
LAB_01ae703c:
                    /* WARNING: Subroutine does not return */
                    FUN_013073dc(&DAT_00533467,0x2b,&local_30,puVar11,puVar8);
                  }
                  uVar16 = 1;
                  if ((local_28 & 0xfffffffe) == local_28) {
                    puVar9 = (uint *)(local_28 >> 1);
                    bVar4 = false;
                    in_r12 = (uint *)0x0;
                    do {
                      if (puVar7 == in_r12) {
                        puVar11 = &DAT_01d30354;
                        puVar8 = &DAT_01d30384;
                        goto LAB_01ae703c;
                      }
                      if (puVar9 == in_r12) {
                        puVar11 = &DAT_01d30354;
                        puVar8 = &DAT_01d30394;
                        goto LAB_01ae703c;
                      }
                      if (puVar9 == in_r12) {
                        puVar11 = &DAT_01d30354;
                        puVar8 = &DAT_01d303a4;
                        goto LAB_01ae703c;
                      }
                      bVar3 = *(byte *)(local_2c + (int)puVar9 + (int)in_r12);
                      uVar6 = (uint)bVar3;
                      if (((LZCOUNT(uVar6 ^ 0xff) +
                           LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                    bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                  bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                                   0x800000)) - 0x18U & 0xff) != 8) {
LAB_01ae6f44:
                        uVar16 = 0xb00000001;
                        goto LAB_01ae6f48;
                      }
                      if (bVar4) {
                        if (uVar6 != 0) goto LAB_01ae6f44;
LAB_01ae6f00:
                        bVar4 = true;
                      }
                      else {
                        if (uVar6 != 0xff) goto LAB_01ae6f00;
                        bVar4 = false;
                      }
                      if ((bVar3 & (*(byte *)(local_2c + (int)in_r12) ^
                                   *(byte *)(iVar5 + (int)in_r12))) != 0) goto LAB_01ae6f30;
                      in_r12 = (uint *)((int)in_r12 + 1);
                    } while (puVar7 != in_r12);
                    uVar6 = 1;
                    goto LAB_01ae6f34;
                  }
                }
                else {
                  uVar16 = 0xb00000001;
                  if (local_28 == 0x20) goto LAB_01ae6f30;
                }
              }
            }
            goto LAB_01ae6f48;
          }
          uVar6 = 0;
          if (param_2 != (uint *)0x0) {
            return 0x17;
          }
LAB_01ae6f6c:
          local_44 = uVar6 | local_44;
          local_40 = uVar6 ^ 1 | local_40;
        }
      } while (puVar15 != param_4);
    }
    uVar6 = 0x17;
    if ((local_44 & 1) != 0) {
      uVar6 = 0x27;
    }
    if ((local_40 & 1) == 0) {
      uVar6 = 0x27;
    }
  }
  return uVar6;
}

