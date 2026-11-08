// FUN_01008c48 @ 01008c48 size=3400 calls_out=13 calls_in=2
// strings: assertion failed: base.has_scheme()base should not have fragmentwhen base has a rootless path and no authority; reference should either have scheme; be empty or start with '#'underflow occurred in path resolution

void FUN_01008c48(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  uint unaff_r7;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_64;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined8 local_34;
  char *local_2c;
  int local_28;
  
  puVar16 = (uint *)param_2[2];
  uVar19 = puVar16[2];
  if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: base.has_scheme()base should not have fragmentwhen base has a rootless path and no authority, reference should either have scheme, be empty or start with \'#\'underflow occurred in path resolution"
                 ,0x23,&DAT_018820b4);
  }
  uVar6 = puVar16[1];
  uVar17 = param_2[1];
  uVar2 = puVar16[3];
  if (puVar16[3] == 0) {
    uVar2 = uVar6;
  }
  if (uVar2 != uVar17) {
    *param_1 = 0x80000000;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if ((char)puVar16[6] == '\x04') {
    unaff_r7 = *puVar16;
    uVar2 = *param_2;
    if (uVar6 < unaff_r7) goto LAB_01008d00;
    if (unaff_r7 != 0) {
      if (unaff_r7 < uVar17) {
        if (*(char *)(uVar2 + unaff_r7) < -0x40) goto LAB_01008d00;
      }
      else if (unaff_r7 != uVar17) goto LAB_01008d00;
    }
    if (uVar6 != 0) {
      if (uVar6 < uVar17) {
        if (*(char *)(uVar2 + uVar6) < -0x40) goto LAB_01008d00;
      }
      else if (uVar6 != uVar17) {
LAB_01008d00:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(uVar2,uVar17,unaff_r7,uVar6,&DAT_018821a4);
      }
    }
    if (((uVar6 == unaff_r7) || (*(char *)(uVar2 + unaff_r7) != '/')) &&
       (*(int *)(param_3[2] + 8) == 0)) {
      cVar1 = '\0';
      if (param_3[1] != 0) {
        cVar1 = *(char *)*param_3;
      }
      if (param_3[1] != 0 && cVar1 != '#') {
        *param_1 = 0x80000000;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
    }
  }
  puVar8 = (uint *)param_3[2];
  uVar2 = puVar8[2];
  if (uVar2 == 0) {
    local_50 = 0;
    cVar1 = (char)puVar8[6];
    if (cVar1 == '\x04') goto LAB_01008e34;
LAB_01008dbc:
    uVar13 = uVar2 + 3;
    uVar10 = *puVar8;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    if (uVar2 == 0) {
      uVar13 = 2;
    }
    if (uVar10 < uVar13) goto LAB_01008e6c;
    unaff_r7 = puVar8[5];
    if (uVar13 != 0) {
      if (uVar13 < uVar4) {
        if (*(char *)(uVar3 + uVar13) < -0x40) goto LAB_01008e6c;
      }
      else if (uVar13 != uVar4) goto LAB_01008e6c;
    }
    if (uVar10 != 0) {
      if (uVar10 < uVar4) {
        if (*(char *)(uVar3 + uVar10) < -0x40) goto LAB_01008e6c;
      }
      else if (uVar10 != uVar4) {
LAB_01008e6c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(uVar3,uVar4,uVar13,uVar10,&DAT_018821a4);
      }
    }
    local_70 = unaff_r7 - uVar13;
    local_74 = puVar8[4] - uVar13;
    local_6c = (uint)*(uint3 *)((int)puVar8 + 0x19);
    local_58 = uVar10 - uVar13;
    local_78 = uVar3 + uVar13;
  }
  else {
    local_50 = *param_3;
    uVar3 = param_3[1];
    if (uVar2 < uVar3) {
      if (*(char *)(local_50 + uVar2) < -0x40) goto LAB_01008d88;
    }
    else if (uVar2 != uVar3) {
LAB_01008d88:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_50,uVar3,0,uVar2,&DAT_018821a4);
    }
    cVar1 = (char)puVar8[6];
    if (cVar1 != '\x04') goto LAB_01008dbc;
LAB_01008e34:
    uVar3 = *param_3;
    uVar4 = param_3[1];
    cVar1 = '\x04';
    uVar10 = *puVar8;
  }
  uVar13 = puVar8[1];
  if (uVar13 < uVar10) goto LAB_01008f0c;
  if (uVar10 != 0) {
    if (uVar10 < uVar4) {
      if (*(char *)(uVar3 + uVar10) < -0x40) goto LAB_01008f0c;
    }
    else if (uVar10 != uVar4) goto LAB_01008f0c;
  }
  if (uVar13 != 0) {
    if (uVar13 < uVar4) {
      if (*(char *)(uVar3 + uVar13) < -0x40) goto LAB_01008f0c;
    }
    else if (uVar13 != uVar4) {
LAB_01008f0c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(uVar3,uVar4,uVar10,uVar13,&DAT_018821a4);
    }
  }
  uVar9 = puVar8[3];
  local_4c = 0;
  if (uVar9 == 0) {
    local_48 = 0;
    uVar9 = uVar13;
  }
  else {
    uVar5 = uVar13 + 1;
    if (uVar9 < uVar5) goto LAB_01008fa0;
    if (uVar5 != 0) {
      if (uVar5 < uVar4) {
        if (*(char *)(uVar3 + uVar5) < -0x40) goto LAB_01008fa0;
      }
      else if (uVar5 != uVar4) goto LAB_01008fa0;
    }
    if (uVar9 < uVar4) {
      if (*(char *)(uVar3 + uVar9) < -0x40) goto LAB_01008fa0;
    }
    else if (uVar9 != uVar4) {
LAB_01008fa0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac();
    }
    unaff_r7 = uVar9 - uVar5;
    local_48 = uVar3 + uVar5;
    local_54 = unaff_r7;
  }
  if (uVar9 != uVar4) {
    uVar9 = uVar9 + 1;
    if ((uVar4 < uVar9) || ((uVar9 != 0 && uVar9 < uVar4 && (*(char *)(uVar3 + uVar9) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac();
    }
    unaff_r7 = uVar4 - uVar9;
    local_4c = uVar3 + uVar9;
  }
  uVar20 = CONCAT44(local_54,local_48);
  iVar15 = uVar13 - uVar10;
  pcVar11 = (char *)(uVar3 + uVar10);
  uVar22 = CONCAT44(iVar15,pcVar11);
  if (local_50 == 0) {
    if (cVar1 == '\x04') {
      if (iVar15 == 0) {
        uVar2 = *puVar16;
        uVar19 = *param_2;
        if (uVar6 < uVar2) goto LAB_010091bc;
        if (uVar2 != 0) {
          if (uVar2 < uVar17) {
            if (*(char *)(uVar19 + uVar2) < -0x40) goto LAB_010091bc;
          }
          else if (uVar2 != uVar17) goto LAB_010091bc;
        }
        if (uVar6 != 0) {
          if (uVar6 < uVar17) {
            if (*(char *)(uVar19 + uVar6) < -0x40) goto LAB_010091bc;
          }
          else if (uVar6 != uVar17) {
LAB_010091bc:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(uVar19,uVar17,uVar2,uVar6,&DAT_018821a4);
          }
        }
        pcVar11 = (char *)0x0;
        uVar22 = CONCAT44(uVar6 - uVar2,uVar19 + uVar2);
        if (local_48 == 0) {
          uVar20 = FUN_0100bcb0(param_2);
          pcVar11 = (char *)0x0;
          uVar22 = CONCAT44(uVar6 - uVar2,uVar19 + uVar2);
        }
      }
      else {
        if (*pcVar11 != '/') {
          uVar2 = *puVar16;
          uVar19 = *param_2;
          if (uVar6 < uVar2) goto LAB_010091bc;
          if (uVar2 != 0) {
            if (uVar2 < uVar17) {
              if (*(char *)(uVar19 + uVar2) < -0x40) goto LAB_010091bc;
            }
            else if (uVar2 != uVar17) goto LAB_010091bc;
          }
          if (uVar6 == 0) {
LAB_010091d4:
            uVar3 = uVar6 - uVar2;
            puVar18 = &DAT_00418645;
            if (uVar6 != uVar2) {
              puVar18 = (undefined1 *)(uVar19 + uVar2);
            }
            uVar6 = uVar3;
            if (uVar3 < 2) {
              uVar6 = 1;
            }
            uVar22 = CONCAT44(uVar6,puVar18);
            uVar4 = uVar6;
            do {
              uVar21 = FUN_00fb737c(0x2f,puVar18,uVar4);
              uVar4 = (uint)(uVar21 >> 0x20);
              if ((uVar21 & 1) == 0) break;
              if ((uVar4 < uVar6) && (puVar18[uVar4] == '/')) {
                uVar10 = uVar4 + 1;
                if (uVar10 < uVar3) {
                  if ((char)((undefined1 *)(uVar19 + uVar2))[uVar10] < -0x40) goto LAB_01009264;
                }
                else if (uVar6 != uVar10) {
LAB_01009264:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac(puVar18,uVar6,uVar10,uVar6,&DAT_01882074);
                }
                cVar1 = FUN_01008b30(puVar18 + uVar10,uVar6 - uVar10);
                if (cVar1 != '\x01') {
                  local_2c = (char *)((uint)local_2c & 0xffffff00);
                  local_34._0_4_ = 0;
                  local_34._4_4_ = uVar4;
                  uVar22 = FUN_010099fc(&local_34,puVar18,uVar6);
                }
                uVar20 = CONCAT44(local_54,local_48);
                goto LAB_010092d8;
              }
            } while (uVar4 <= uVar6);
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01882064);
          }
          if (uVar6 < uVar17) {
            if (-0x41 < *(char *)(uVar19 + uVar6)) goto LAB_010091d4;
          }
          else if (uVar6 == uVar17) goto LAB_010091d4;
          goto LAB_010091bc;
        }
        pcVar11 = (char *)0x0;
        uVar20 = CONCAT44(local_54,local_48);
      }
LAB_010092d8:
      cVar1 = (char)puVar16[6];
      if (cVar1 == '\x04') {
        uVar19 = puVar16[2];
        cVar1 = '\x04';
        local_50 = *param_2;
      }
      else {
        uVar19 = puVar16[2];
        uVar3 = *puVar16;
        uVar6 = uVar19 + 3;
        uVar2 = *param_2;
        if (uVar19 == 0) {
          uVar6 = 2;
        }
        if (uVar3 < uVar6) goto LAB_01009668;
        if (uVar6 != 0) {
          if (uVar6 < uVar17) {
            if (*(char *)(uVar2 + uVar6) < -0x40) goto LAB_01009668;
          }
          else if (uVar6 != uVar17) goto LAB_01009668;
        }
        if (uVar3 != 0) {
          if (uVar3 < uVar17) {
            if (*(char *)(uVar2 + uVar3) < -0x40) goto LAB_01009668;
          }
          else if (uVar3 != uVar17) {
LAB_01009668:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(uVar2,uVar17,uVar6,uVar3,&DAT_018821a4);
          }
        }
        local_6c = (uint)*(uint3 *)((int)puVar16 + 0x19);
        local_70 = puVar16[5] - uVar6;
        local_58 = uVar3 - uVar6;
        local_74 = puVar16[4] - uVar6;
        local_78 = uVar2 + uVar6;
        local_50 = *param_2;
      }
      if (uVar19 != 0) {
        uVar2 = uVar19;
        local_64 = iVar15;
        if (uVar17 <= uVar19) goto LAB_01009310;
        goto LAB_01009098;
      }
      uVar2 = 0;
      local_64 = iVar15;
    }
    else {
      pcVar11 = (char *)0x0;
      local_50 = *param_2;
      uVar2 = uVar19;
      if (uVar19 < uVar17) {
LAB_01009098:
        if (*(char *)(local_50 + uVar2) < -0x40) {
LAB_01009978:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_50,uVar17,0,uVar2,&DAT_018821a4);
        }
      }
      else {
LAB_01009310:
        uVar2 = uVar19;
        if (uVar19 != uVar17) goto LAB_01009978;
        uVar2 = uVar17;
      }
    }
  }
  else {
    pcVar11 = (char *)0x0;
    local_64 = iVar15;
  }
  uVar19 = (uint)((ulonglong)uVar22 >> 0x20);
  local_54 = (uint)((ulonglong)uVar20 >> 0x20);
  iVar14 = (int)uVar20;
  iVar15 = unaff_r7 + 2;
  if (pcVar11 == (char *)0x0) {
    local_64 = 0;
  }
  if (local_4c == 0) {
    iVar15 = 1;
  }
  local_40 = iVar15 + uVar2 + uVar19 + local_64;
  if (iVar14 != 0) {
    local_40 = local_54 + local_40 + 1;
  }
  if (cVar1 != '\x04') {
    local_40 = local_58 + local_40 + 2;
  }
  if ((int)local_40 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_40);
  }
  if (local_40 == 0) {
    local_40 = 0;
    local_3c = 1;
    local_38 = 0;
    if (uVar2 != 0) goto LAB_01009830;
  }
  else {
    local_3c = thunk_FUN_016d4a50(local_40);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_40);
    }
    local_38 = 0;
    if (local_40 < uVar2) {
LAB_01009830:
      local_38 = 0;
      FUN_010e02bc(&local_40,0,uVar2);
    }
  }
  uVar3 = local_38;
  uVar17 = local_3c;
  uVar6 = local_40;
  FUN_016dd1aa(local_3c + local_38,local_50,uVar2);
  uVar3 = uVar3 + uVar2;
  local_38 = uVar3;
  if (uVar6 == uVar3) {
    FUN_010e02bc(&local_40,uVar6,1);
    uVar17 = local_3c;
  }
  uVar2 = uVar3 + 1;
  *(undefined1 *)(uVar17 + local_38) = 0x3a;
  local_38 = uVar2;
  if (cVar1 == '\x04') {
    if (uVar19 != 0) goto LAB_010094a4;
LAB_010094fc:
    uVar2 = local_38;
    if (local_40 - local_38 < uVar19) {
      FUN_010e02bc(&local_40,local_38,uVar19);
    }
    uVar6 = local_38;
    FUN_016dd1aa(local_3c + local_38,(char *)uVar22,uVar19);
    uVar19 = uVar6 + uVar19;
  }
  else {
    if (local_40 - uVar2 < 2) {
      FUN_010e02bc(&local_40,uVar2,2);
    }
    iVar15 = local_38 + 2;
    *(undefined2 *)(local_3c + local_38) = 0x2f2f;
    local_38 = iVar15;
    if (local_40 - iVar15 < local_58) {
      FUN_010e02bc(&local_40,iVar15,local_58);
    }
    uVar2 = local_38;
    FUN_016dd1aa(local_3c + local_38,local_78,local_58);
    local_38 = uVar2 + local_58;
    local_50 = iVar15 + local_74;
    local_58 = iVar15 + local_70;
    if (uVar19 == 0) goto LAB_010094fc;
LAB_010094a4:
    uVar2 = local_38;
    if (*(char *)uVar22 != '/') goto LAB_010094fc;
    uVar7 = 2;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = &DAT_00000001;
      uVar7 = 1;
    }
    local_2c = pcVar11;
    local_28 = local_64;
    local_34 = uVar22;
    FUN_01008488(&local_40,local_38,&local_34,uVar7);
    uVar19 = local_38;
  }
  local_38 = uVar19;
  if (cVar1 == '\x04') {
    if (uVar2 != 0) {
      if (uVar2 < uVar19) {
        if (*(char *)(local_3c + uVar2) < -0x40) goto LAB_0100955c;
      }
      else if (uVar19 != uVar2) {
LAB_0100955c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_3c,uVar19,uVar2,uVar19,&DAT_01882094);
      }
    }
    if ((1 < uVar19 - uVar2) && (*(short *)(local_3c + uVar2) == 0x2f2f)) {
      if (uVar2 != 0) {
        if (uVar2 < uVar19) {
          if ((char)*(short *)(local_3c + uVar2) < -0x40) goto LAB_01009624;
        }
        else if (uVar19 != uVar2) {
LAB_01009624:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004186db,0x2c,&DAT_018820a4);
        }
      }
      if (local_40 - uVar19 < 2) {
        FUN_010e02bc(&local_40,uVar19,2);
      }
      puVar12 = (undefined2 *)(local_3c + uVar2);
      FUN_016dd52c(puVar12 + 1,puVar12,uVar19 - uVar2);
      local_38 = uVar19 + 2;
      *puVar12 = 0x2e2f;
    }
  }
  uVar19 = local_38;
  if (iVar14 == 0) {
    uVar6 = 0;
    uVar17 = local_38;
  }
  else {
    if (local_40 == local_38) {
      FUN_010e02bc(&local_40,local_38,1);
    }
    iVar15 = uVar19 + 1;
    *(undefined1 *)(local_3c + local_38) = 0x3f;
    local_38 = iVar15;
    if (local_40 - iVar15 < local_54) {
      FUN_010e02bc(&local_40,iVar15,local_54);
    }
    uVar6 = local_38;
    FUN_016dd1aa(local_3c + local_38,iVar14,local_54);
    uVar6 = uVar6 + local_54;
    uVar17 = uVar6;
  }
  local_38 = uVar17;
  if (local_4c != 0) {
    if (local_40 == uVar17) {
      FUN_010e02bc(&local_40,uVar17,1);
    }
    iVar15 = uVar17 + 1;
    *(undefined1 *)(local_3c + local_38) = 0x23;
    local_38 = iVar15;
    if (local_40 - iVar15 < unaff_r7) {
      FUN_010e02bc(&local_40,iVar15,unaff_r7);
    }
    uVar17 = local_38;
    FUN_016dd1aa(local_3c + local_38,local_4c,unaff_r7);
    local_38 = uVar17 + unaff_r7;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = uVar2;
  param_1[4] = uVar19;
  param_1[5] = uVar3;
  *(char *)(param_1 + 9) = cVar1;
  param_1[7] = local_50;
  *(short *)((int)param_1 + 0x25) = (short)local_6c;
  param_1[8] = local_58;
  param_1[6] = uVar6;
  *(char *)((int)param_1 + 0x27) = (char)(local_6c >> 0x10);
  return;
}

