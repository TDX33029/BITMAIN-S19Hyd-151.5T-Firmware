// FUN_00e5eb30 @ 00e5eb30 size=2368 calls_out=11 calls_in=1
// strings: detected_model | parse_errors | hashboard_infofan_config | pcb_version | bom_version | chip_type

int FUN_00e5eb30(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  piVar14 = (int *)*param_1;
  iVar11 = param_1[3];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar11 + 1;
  iVar5 = piVar14[2];
  if (*piVar14 == iVar5) {
    FUN_00edff4c(piVar14,iVar5,1,1,1);
    iVar5 = piVar14[2];
  }
  iVar16 = iVar5 + 1;
  *(undefined1 *)(piVar14[1] + iVar5) = 0x5b;
  piVar14[2] = iVar16;
  if (param_3 == 0) {
    param_1[3] = iVar11;
  }
  else {
    iVar5 = param_2 + param_3 * 0x7c;
    bVar4 = true;
    do {
      piVar14 = (int *)*param_1;
      if (bVar4) {
        iVar11 = piVar14[2];
        if (*piVar14 == iVar11) {
          FUN_00edff4c(piVar14,iVar11,1,1,1);
          iVar11 = piVar14[2];
        }
        iVar16 = iVar11 + 1;
        *(undefined1 *)(piVar14[1] + iVar11) = 10;
      }
      else {
        iVar11 = piVar14[2];
        if ((uint)(*piVar14 - iVar11) < 2) {
          FUN_00edff4c(piVar14,iVar11,2,1,1);
          iVar11 = piVar14[2];
        }
        iVar16 = iVar11 + 2;
        *(undefined2 *)(piVar14[1] + iVar11) = 0xa2c;
      }
      iVar11 = param_1[3];
      uVar17 = param_1[1];
      uVar12 = param_1[2];
      piVar14[2] = iVar16;
      if (iVar11 == 0) {
        iVar11 = 1;
      }
      else {
        do {
          if ((uint)(*piVar14 - iVar16) < uVar12) {
            FUN_00edff4c(piVar14,iVar16,uVar12,1,1);
            iVar16 = piVar14[2];
          }
          FUN_016dd1aa(piVar14[1] + iVar16,uVar17,uVar12);
          iVar16 = iVar16 + uVar12;
          iVar11 = iVar11 + -1;
          piVar14[2] = iVar16;
        } while (iVar11 != 0);
        iVar11 = param_1[3] + 1;
      }
      piVar14 = (int *)*param_1;
      iVar16 = piVar14[2];
      iVar7 = *piVar14;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[3] = iVar11;
      if (iVar7 == iVar16) {
        FUN_00edff4c(piVar14,iVar16,1,1,1);
        iVar16 = piVar14[2];
      }
      cVar1 = *(char *)(param_2 + 0x78);
      uVar2 = *(undefined1 *)(param_2 + 0x79);
      *(undefined1 *)(piVar14[1] + iVar16) = 0x7b;
      piVar14[2] = iVar16 + 1;
      local_40 = CONCAT22(local_40._2_2_,0x100);
      local_3c = param_1;
      iVar11 = FUN_00e5b230(&local_40,"detected_model",0xe);
      puVar3 = local_3c;
      if (iVar11 != 0) {
        return iVar11;
      }
      if ((char)local_40 == '\x01') {
LAB_00e5f3ec:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
      }
      piVar14 = (int *)*local_3c;
      iVar11 = piVar14[2];
      if ((uint)(*piVar14 - iVar11) < 2) {
        FUN_00edff4c(piVar14,iVar11,2,1,1);
        iVar11 = piVar14[2];
      }
      piVar14[2] = iVar11 + 2;
      *(undefined2 *)(piVar14[1] + iVar11) = 0x203a;
      piVar14 = (int *)*puVar3;
      if (cVar1 == '\x02') {
        iVar11 = piVar14[2];
        if ((uint)(*piVar14 - iVar11) < 4) {
          FUN_00edff4c(piVar14,iVar11,4,1,1);
          iVar11 = piVar14[2];
        }
        *(undefined4 *)(piVar14[1] + iVar11) = 0x6c6c756e;
        piVar14[2] = iVar11 + 4;
      }
      else {
        iVar11 = FUN_00ed010c(cVar1,uVar2);
        if (iVar11 != 0) {
          return iVar11;
        }
      }
      uVar17 = *(undefined4 *)(param_2 + 4);
      uVar15 = *(undefined4 *)(param_2 + 8);
      *(undefined1 *)(puVar3 + 4) = 1;
      iVar11 = FUN_00e61e58(&local_40,"parse_errors",0xc,uVar17,uVar15);
      if (iVar11 != 0) {
        return iVar11;
      }
      if ((char)local_40 != '\0') goto LAB_00e5f3cc;
      iVar11 = FUN_00e5b230(&local_40,"hashboard_infofan_config",0xe);
      puVar3 = local_3c;
      if (iVar11 != 0) {
        return iVar11;
      }
      if ((char)local_40 == '\x01') goto LAB_00e5f3ec;
      piVar14 = (int *)*local_3c;
      iVar11 = piVar14[2];
      if ((uint)(*piVar14 - iVar11) < 2) {
        FUN_00edff4c(piVar14,iVar11,2,1,1);
        iVar11 = piVar14[2];
      }
      piVar14[2] = iVar11 + 2;
      iVar16 = *(int *)(param_2 + 0xc);
      *(undefined2 *)(piVar14[1] + iVar11) = 0x203a;
      if (iVar16 == -0x80000000) {
        piVar14 = (int *)*puVar3;
        iVar11 = piVar14[2];
        if ((uint)(*piVar14 - iVar11) < 4) {
          FUN_00edff4c(piVar14,iVar11,4,1,1);
          iVar11 = piVar14[2];
        }
        *(undefined4 *)(piVar14[1] + iVar11) = 0x6c6c756e;
        piVar14[2] = iVar11 + 4;
      }
      else {
        iVar13 = *(int *)(param_2 + 0x30);
        piVar14 = (int *)*puVar3;
        iVar7 = *(int *)(param_2 + 0x74);
        iVar8 = *(int *)(param_2 + 0x60);
        *(undefined1 *)(puVar3 + 4) = 0;
        iVar9 = *piVar14;
        iVar6 = piVar14[2];
        puVar3[3] = puVar3[3] + 1;
        iVar10 = *(int *)(param_2 + 0x54);
        iVar11 = *(int *)(param_2 + 0x48);
        iVar16 = *(int *)(param_2 + 0x3c);
        if (iVar9 == iVar6) {
          FUN_00edff4c(piVar14,iVar6,1,1,1);
          iVar6 = piVar14[2];
        }
        local_34 = puVar3;
        *(undefined1 *)(piVar14[1] + iVar6) = 0x7b;
        piVar14[2] = iVar6 + 1;
        local_38 = CONCAT22(local_38._2_2_,0x100);
        if (iVar13 != -0x80000000) {
          iVar6 = FUN_00e5b468(&local_38,&DAT_00409140,0xd,(int *)(param_2 + 0x30));
          if (iVar6 != 0) {
            return iVar6;
          }
          if ((char)local_38 != '\0') goto LAB_00e5f3cc;
        }
        iVar6 = FUN_00e5b0a0(&local_38,"pcb_version",0xb,*(undefined4 *)(param_2 + 0x10),
                             *(undefined4 *)(param_2 + 0x14));
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((char)local_38 != '\0') {
LAB_00e5f3cc:
          local_30 = 10;
          iVar5 = FUN_0157c50c(&local_30,0,0);
          return iVar5;
        }
        iVar6 = FUN_00e5b0a0(&local_38,"bom_version",0xb,*(undefined4 *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x20));
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((char)local_38 != '\0') goto LAB_00e5f3cc;
        iVar6 = FUN_00e5b0a0(&local_38,"chip_type",9,*(undefined4 *)(param_2 + 0x28),
                             *(undefined4 *)(param_2 + 0x2c));
        if (iVar6 != 0) {
          return iVar6;
        }
        if (iVar16 != -0x80000000) {
          if ((char)local_38 != '\0') goto LAB_00e5f3cc;
          iVar16 = FUN_00e5b468(&local_38,"chip_info",9,(int *)(param_2 + 0x3c));
          if (iVar16 != 0) {
            return iVar16;
          }
        }
        if (iVar11 != -0x80000000) {
          if ((char)local_38 != '\0') goto LAB_00e5f3cc;
          iVar11 = FUN_00e5b468(&local_38,"frequency",9,(int *)(param_2 + 0x48));
          if (iVar11 != 0) {
            return iVar11;
          }
        }
        if (iVar10 != -0x80000000) {
          if ((char)local_38 != '\0') goto LAB_00e5f3cc;
          iVar11 = FUN_00e5b468(&local_38,"voltage",7,(int *)(param_2 + 0x54));
          if (iVar11 != 0) {
            return iVar11;
          }
        }
        if (iVar8 != -0x80000000) {
          if ((char)local_38 != '\0') goto LAB_00e5f3cc;
          iVar11 = FUN_00e5b468(&local_38,&DAT_0056aaa8,8,(int *)(param_2 + 0x60));
          if (iVar11 != 0) {
            return iVar11;
          }
        }
        if ((iVar7 != 0) && (iVar11 = FUN_00ed0a50(&local_38,param_2 + 0x6c), iVar11 != 0)) {
          return iVar11;
        }
        local_30 = local_38;
        local_2c = local_34;
        FUN_00e5c7e0(&local_30);
      }
      *(undefined1 *)(puVar3 + 4) = 1;
      if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
        piVar14 = (int *)*puVar3;
        iVar16 = piVar14[2];
        iVar11 = puVar3[3] + -1;
        iVar7 = *piVar14;
        puVar3[3] = iVar11;
        if (iVar7 == iVar16) {
          FUN_00edff4c(piVar14,iVar16,1,1,1);
          iVar16 = piVar14[2];
        }
        uVar12 = puVar3[2];
        iVar7 = iVar16 + 1;
        uVar17 = puVar3[1];
        *(undefined1 *)(piVar14[1] + iVar16) = 10;
        piVar14[2] = iVar7;
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if ((uint)(*piVar14 - iVar7) < uVar12) {
            FUN_00edff4c(piVar14,iVar7,uVar12,1,1);
            iVar7 = piVar14[2];
          }
          FUN_016dd1aa(piVar14[1] + iVar7,uVar17,uVar12);
          iVar7 = iVar7 + uVar12;
          piVar14[2] = iVar7;
        }
        if (*piVar14 == iVar7) {
          FUN_00edff4c(piVar14,iVar7,1,1,1);
          iVar7 = piVar14[2];
        }
        *(undefined1 *)(piVar14[1] + iVar7) = 0x7d;
        piVar14[2] = iVar7 + 1;
      }
      param_2 = param_2 + 0x7c;
      *(undefined1 *)(param_1 + 4) = 1;
      bVar4 = false;
    } while (param_2 != iVar5);
    piVar14 = (int *)*param_1;
    iVar11 = piVar14[2];
    iVar5 = param_1[3] + -1;
    iVar16 = *piVar14;
    param_1[3] = iVar5;
    if (iVar16 == iVar11) {
      FUN_00edff4c(piVar14,iVar11,1,1,1);
      iVar11 = piVar14[2];
    }
    iVar16 = iVar11 + 1;
    uVar17 = param_1[1];
    uVar12 = param_1[2];
    *(undefined1 *)(piVar14[1] + iVar11) = 10;
    piVar14[2] = iVar16;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if ((uint)(*piVar14 - iVar16) < uVar12) {
        FUN_00edff4c(piVar14,iVar16,uVar12,1,1);
        iVar16 = piVar14[2];
      }
      FUN_016dd1aa(piVar14[1] + iVar16,uVar17,uVar12);
      iVar16 = iVar16 + uVar12;
      piVar14[2] = iVar16;
    }
  }
  if (*piVar14 == iVar16) {
    FUN_00edff4c(piVar14,iVar16,1,1,1);
    iVar16 = piVar14[2];
  }
  *(undefined1 *)(piVar14[1] + iVar16) = 0x5d;
  piVar14[2] = iVar16 + 1;
  return 0;
}

