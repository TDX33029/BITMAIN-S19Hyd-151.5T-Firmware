// FUN_00e58354 @ 00e58354 size=3252 calls_out=12 calls_in=0
// strings: control_boards | chips_layoutvariant index 0 <= i < 6 | num_domains | num_per_hb | num_per_domain

int FUN_00e58354(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  
  piVar13 = (int *)*param_1;
  iVar9 = param_1[3];
  iVar6 = piVar13[2];
  iVar8 = *piVar13;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar9 + 1;
  if (iVar8 == iVar6) {
    FUN_00edff4c(piVar13,iVar6,1,1,1);
    iVar6 = piVar13[2];
  }
  iVar8 = iVar6 + 1;
  *(undefined1 *)(piVar13[1] + iVar6) = 0x5b;
  piVar13[2] = iVar8;
  if (param_3 == 0) {
    param_1[3] = iVar9;
  }
  else {
    iVar6 = param_3 * 0x34 + param_2;
    bVar4 = true;
    do {
      piVar13 = (int *)*param_1;
      if (bVar4) {
        iVar8 = piVar13[2];
        if (*piVar13 == iVar8) {
          FUN_00edff4c(piVar13,iVar8,1,1,1);
          iVar8 = piVar13[2];
        }
        iVar9 = iVar8 + 1;
        *(undefined1 *)(piVar13[1] + iVar8) = 10;
      }
      else {
        iVar8 = piVar13[2];
        if ((uint)(*piVar13 - iVar8) < 2) {
          FUN_00edff4c(piVar13,iVar8,2,1,1);
          iVar8 = piVar13[2];
        }
        iVar9 = iVar8 + 2;
        *(undefined2 *)(piVar13[1] + iVar8) = 0xa2c;
      }
      iVar8 = param_1[3];
      uVar14 = param_1[1];
      uVar11 = param_1[2];
      piVar13[2] = iVar9;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      else {
        do {
          if ((uint)(*piVar13 - iVar9) < uVar11) {
            FUN_00edff4c(piVar13,iVar9,uVar11,1,1);
            iVar9 = piVar13[2];
          }
          FUN_016dd1aa(piVar13[1] + iVar9,uVar14,uVar11);
          iVar9 = iVar9 + uVar11;
          iVar8 = iVar8 + -1;
          piVar13[2] = iVar9;
        } while (iVar8 != 0);
        iVar8 = param_1[3] + 1;
      }
      piVar13 = (int *)*param_1;
      *(undefined1 *)(param_1 + 4) = 0;
      iVar15 = *(int *)(param_2 + 0x14);
      iVar9 = piVar13[2];
      iVar7 = *piVar13;
      param_1[3] = iVar8;
      if (iVar7 == iVar9) {
        FUN_00edff4c(piVar13,iVar9,1,1,1);
        iVar9 = piVar13[2];
      }
      uVar1 = *(undefined1 *)(param_2 + 0x30);
      uVar2 = *(undefined1 *)(param_2 + 0x31);
      *(undefined1 *)(piVar13[1] + iVar9) = 0x7b;
      piVar13[2] = iVar9 + 1;
      local_40 = CONCAT22(local_40._2_2_,0x100);
      local_3c = param_1;
      iVar8 = FUN_00e5b230(&local_40,&DAT_00568d68,4);
      puVar3 = local_3c;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_40 == '\x01') {
LAB_00e58f84:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
      }
      piVar13 = (int *)*local_3c;
      iVar8 = piVar13[2];
      if ((uint)(*piVar13 - iVar8) < 2) {
        FUN_00edff4c(piVar13,iVar8,2,1,1);
        iVar8 = piVar13[2];
      }
      piVar13[2] = iVar8 + 2;
      *(undefined2 *)(piVar13[1] + iVar8) = 0x203a;
      iVar8 = FUN_00ed010c(uVar1,uVar2,*puVar3);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar14 = *(undefined4 *)(param_2 + 8);
      uVar10 = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(puVar3 + 4) = 1;
      iVar8 = FUN_00e61e58(&local_40,"control_boards",0xe,uVar10,uVar14);
      if (iVar8 != 0) {
        return iVar8;
      }
      if (iVar15 == 0) {
        if ((local_40 & 0xff) != 0) goto LAB_00e58f64;
      }
      else {
        if ((local_40 & 0xff) != 0) goto LAB_00e58f64;
        puVar12 = *(undefined4 **)(param_2 + 0x10);
        iVar8 = FUN_00e5b230(&local_40,&DAT_0035b871,10);
        puVar3 = local_3c;
        if (iVar8 != 0) {
          return iVar8;
        }
        if ((char)local_40 == '\x01') goto LAB_00e58f84;
        piVar13 = (int *)*local_3c;
        iVar8 = piVar13[2];
        if ((uint)(*piVar13 - iVar8) < 2) {
          FUN_00edff4c(piVar13,iVar8,2,1,1);
          iVar8 = piVar13[2];
        }
        piVar13[2] = iVar8 + 2;
        *(undefined2 *)(piVar13[1] + iVar8) = 0x203a;
        piVar13 = (int *)*puVar3;
        iVar8 = puVar3[3];
        *(undefined1 *)(puVar3 + 4) = 0;
        iVar7 = iVar8 + 1;
        puVar3[3] = iVar7;
        iVar9 = piVar13[2];
        if (*piVar13 == iVar9) {
          FUN_00edff4c(piVar13,iVar9,1,1,1);
          iVar9 = piVar13[2];
        }
        puVar5 = puVar12 + iVar15 * 2;
        uVar14 = puVar3[1];
        uVar11 = puVar3[2];
        *(undefined1 *)(piVar13[1] + iVar9) = 0x5b;
        iVar9 = iVar9 + 1;
        piVar13[2] = iVar9;
        if (iVar7 == 0) {
          uVar10 = *puVar12;
          uVar16 = puVar12[1];
          if (*piVar13 == iVar9) {
            FUN_00edff4c(piVar13,iVar9,1,1,1);
            iVar9 = piVar13[2];
          }
          *(undefined1 *)(piVar13[1] + iVar9) = 10;
          iVar9 = iVar9 + 1;
          piVar13[2] = iVar9;
          if (*piVar13 == iVar9) {
            FUN_00edff4c(piVar13,iVar9,1,1,1);
            iVar9 = piVar13[2];
          }
          *(undefined1 *)(piVar13[1] + iVar9) = 0x22;
          piVar13[2] = iVar9 + 1;
          local_30 = CONCAT31(local_30._1_3_,4);
          FUN_00e57bb4(&local_30,piVar13,uVar10,uVar16);
          if ((char)local_30 != '\x04') {
LAB_00e58eb4:
            iVar6 = FUN_0157c4a0(local_30,local_2c);
            return iVar6;
          }
          iVar9 = piVar13[2];
          if (*piVar13 == iVar9) {
            FUN_00edff4c(piVar13,iVar9,1,1,1);
            iVar9 = piVar13[2];
          }
          *(undefined1 *)(piVar13[1] + iVar9) = 0x22;
          iVar9 = iVar9 + 1;
          piVar13[2] = iVar9;
          *(undefined1 *)(puVar3 + 4) = 1;
          if (iVar15 == 1) {
            iVar7 = *piVar13;
            puVar3[3] = iVar8;
            if (iVar7 == iVar9) {
              FUN_00edff4c(piVar13,iVar9,1,1,1);
              iVar7 = piVar13[2];
              iVar9 = iVar7;
            }
            else {
              iVar7 = piVar13[2];
            }
            iVar7 = iVar7 + 1;
            *(undefined1 *)(piVar13[1] + iVar9) = 10;
            piVar13[2] = iVar7;
            goto LAB_00e58aa4;
          }
          puVar12 = puVar12 + 2;
          do {
            uVar10 = *puVar12;
            uVar16 = puVar12[1];
            if ((uint)(*piVar13 - iVar9) < 2) {
              FUN_00edff4c(piVar13,iVar9,2,1,1);
              iVar7 = piVar13[2];
              iVar9 = iVar7;
            }
            else {
              iVar7 = piVar13[2];
            }
            iVar7 = iVar7 + 2;
            piVar13[2] = iVar7;
            *(undefined2 *)(piVar13[1] + iVar9) = 0xa2c;
            if (*piVar13 == iVar7) {
              FUN_00edff4c(piVar13,iVar7,1,1,1);
              iVar7 = piVar13[2];
            }
            *(undefined1 *)(piVar13[1] + iVar7) = 0x22;
            piVar13[2] = iVar7 + 1;
            local_30 = CONCAT31(local_30._1_3_,4);
            FUN_00e57bb4(&local_30,piVar13,uVar10,uVar16);
            if ((char)local_30 != '\x04') goto LAB_00e58eb4;
            iVar9 = piVar13[2];
            if (*piVar13 == iVar9) {
              FUN_00edff4c(piVar13,iVar9,1,1,1);
              iVar9 = piVar13[2];
            }
            puVar12 = puVar12 + 2;
            *(undefined1 *)(piVar13[1] + iVar9) = 0x22;
            iVar9 = iVar9 + 1;
            piVar13[2] = iVar9;
            *(undefined1 *)(puVar3 + 4) = 1;
          } while (puVar12 != puVar5);
        }
        else {
          bVar4 = true;
          do {
            uVar16 = *puVar12;
            uVar10 = puVar12[1];
            if (bVar4) {
              if (*piVar13 == iVar9) {
                FUN_00edff4c(piVar13,iVar9,1,1,1);
                iVar15 = piVar13[2];
                iVar9 = iVar15;
              }
              else {
                iVar15 = piVar13[2];
              }
              iVar15 = iVar15 + 1;
              *(undefined1 *)(piVar13[1] + iVar9) = 10;
            }
            else {
              if ((uint)(*piVar13 - iVar9) < 2) {
                FUN_00edff4c(piVar13,iVar9,2,1,1);
                iVar15 = piVar13[2];
                iVar9 = iVar15;
              }
              else {
                iVar15 = piVar13[2];
              }
              iVar15 = iVar15 + 2;
              *(undefined2 *)(piVar13[1] + iVar9) = 0xa2c;
            }
            puVar12 = puVar12 + 2;
            piVar13[2] = iVar15;
            iVar9 = iVar7;
            do {
              if ((uint)(*piVar13 - iVar15) < uVar11) {
                FUN_00edff4c(piVar13,iVar15,uVar11,1,1);
                iVar15 = piVar13[2];
              }
              FUN_016dd1aa(piVar13[1] + iVar15,uVar14,uVar11);
              iVar15 = iVar15 + uVar11;
              iVar9 = iVar9 + -1;
              piVar13[2] = iVar15;
            } while (iVar9 != 0);
            if (*piVar13 == iVar15) {
              FUN_00edff4c(piVar13,iVar15,1,1,1);
              iVar15 = piVar13[2];
            }
            *(undefined1 *)(piVar13[1] + iVar15) = 0x22;
            piVar13[2] = iVar15 + 1;
            local_30 = CONCAT31(local_30._1_3_,4);
            FUN_00e57bb4(&local_30,piVar13,uVar16,uVar10);
            if ((char)local_30 != '\x04') goto LAB_00e58eb4;
            iVar9 = piVar13[2];
            if (*piVar13 == iVar9) {
              FUN_00edff4c(piVar13,iVar9,1,1,1);
              iVar9 = piVar13[2];
            }
            *(undefined1 *)(piVar13[1] + iVar9) = 0x22;
            iVar9 = iVar9 + 1;
            piVar13[2] = iVar9;
            *(undefined1 *)(puVar3 + 4) = 1;
            bVar4 = false;
          } while (puVar12 != puVar5);
        }
        iVar7 = *piVar13;
        puVar3[3] = iVar8;
        if (iVar7 == iVar9) {
          FUN_00edff4c(piVar13,iVar9,1,1,1);
          iVar7 = piVar13[2];
          iVar9 = iVar7;
        }
        else {
          iVar7 = piVar13[2];
        }
        iVar7 = iVar7 + 1;
        *(undefined1 *)(piVar13[1] + iVar9) = 10;
        piVar13[2] = iVar7;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
LAB_00e58aa4:
          if ((uint)(*piVar13 - iVar7) < uVar11) {
            FUN_00edff4c(piVar13,iVar7,uVar11,1,1);
            iVar7 = piVar13[2];
          }
          FUN_016dd1aa(piVar13[1] + iVar7,uVar14,uVar11);
          iVar7 = iVar7 + uVar11;
          piVar13[2] = iVar7;
        }
        if (*piVar13 == iVar7) {
          FUN_00edff4c(piVar13,iVar7,1,1,1);
          iVar7 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar7) = 0x5d;
        piVar13[2] = iVar7 + 1;
        *(undefined1 *)(puVar3 + 4) = 1;
      }
      iVar8 = FUN_00e5b230(&local_40,"chips_layoutvariant index 0 <= i < 6",0xc);
      puVar3 = local_3c;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_40 == '\x01') goto LAB_00e58f84;
      piVar13 = (int *)*local_3c;
      iVar8 = piVar13[2];
      if ((uint)(*piVar13 - iVar8) < 2) {
        FUN_00edff4c(piVar13,iVar8,2,1,1);
        iVar8 = piVar13[2];
      }
      piVar13[2] = iVar8 + 2;
      *(undefined2 *)(piVar13[1] + iVar8) = 0x203a;
      piVar13 = (int *)*puVar3;
      iVar8 = piVar13[2];
      iVar9 = *piVar13;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[3] = puVar3[3] + 1;
      if (iVar9 == iVar8) {
        FUN_00edff4c(piVar13,iVar8,1,1,1);
        iVar8 = piVar13[2];
      }
      uVar14 = *(undefined4 *)(param_2 + 0x1c);
      uVar10 = *(undefined4 *)(param_2 + 0x20);
      local_34 = puVar3;
      *(undefined1 *)(piVar13[1] + iVar8) = 0x7b;
      piVar13[2] = iVar8 + 1;
      local_38 = CONCAT22(local_38._2_2_,0x100);
      iVar8 = FUN_00e5b0a0(&local_38,&DAT_00568d68,4,uVar14,uVar10);
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_38 != '\0') {
LAB_00e58f64:
        local_30 = 10;
        iVar6 = FUN_0157c50c(&local_30,0,0);
        return iVar6;
      }
      iVar8 = FUN_00e5fe5c(&local_38,"num_domains",0xb,*(undefined4 *)(param_2 + 0x24));
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_38 != '\0') goto LAB_00e58f64;
      iVar8 = FUN_00e5fe5c(&local_38,"num_per_hb",10,*(undefined4 *)(param_2 + 0x28));
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_38 != '\0') goto LAB_00e58f64;
      iVar8 = FUN_00e5fe5c(&local_38,"num_per_domain",0xe,*(undefined4 *)(param_2 + 0x2c));
      if (iVar8 != 0) {
        return iVar8;
      }
      param_2 = param_2 + 0x34;
      local_30 = local_38;
      local_2c = local_34;
      FUN_00e5c7e0(&local_30);
      local_30 = local_40;
      *(undefined1 *)(puVar3 + 4) = 1;
      local_2c = local_3c;
      FUN_00e5c7e0(&local_30);
      bVar4 = false;
      *(undefined1 *)(param_1 + 4) = 1;
    } while (param_2 != iVar6);
    piVar13 = (int *)*param_1;
    iVar9 = piVar13[2];
    iVar6 = param_1[3] + -1;
    iVar8 = *piVar13;
    param_1[3] = iVar6;
    if (iVar8 == iVar9) {
      FUN_00edff4c(piVar13,iVar9,1,1,1);
      iVar9 = piVar13[2];
    }
    iVar8 = iVar9 + 1;
    uVar14 = param_1[1];
    uVar11 = param_1[2];
    *(undefined1 *)(piVar13[1] + iVar9) = 10;
    piVar13[2] = iVar8;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if ((uint)(*piVar13 - iVar8) < uVar11) {
        FUN_00edff4c(piVar13,iVar8,uVar11,1,1);
        iVar8 = piVar13[2];
      }
      FUN_016dd1aa(piVar13[1] + iVar8,uVar14,uVar11);
      iVar8 = iVar8 + uVar11;
      piVar13[2] = iVar8;
    }
  }
  if (*piVar13 == iVar8) {
    FUN_00edff4c(piVar13,iVar8,1,1,1);
    iVar8 = piVar13[2];
  }
  *(undefined1 *)(piVar13[1] + iVar8) = 0x5d;
  piVar13[2] = iVar8 + 1;
  return 0;
}

