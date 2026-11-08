// FUN_00e689ec @ 00e689ec size=3576 calls_out=12 calls_in=1
// strings: temperatures | pcb_temperature_c | approximate_chip_temperature_c | sensor | Inlet | WaterOutlet

int FUN_00e689ec(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  undefined4 *local_4c;
  uint local_48;
  undefined4 *local_44;
  
  if (*param_1 != '\0') {
LAB_00e69678:
    local_48 = 10;
    iVar4 = FUN_0157c50c(&local_48,0,0);
    return iVar4;
  }
  iVar4 = FUN_00e5b230(param_1,"temperatures",0xc);
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*param_1 == '\x01') {
LAB_00e69748:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar16 = *(undefined4 **)(param_1 + 4);
  piVar9 = (int *)*puVar16;
  iVar4 = piVar9[2];
  if ((uint)(*piVar9 - iVar4) < 2) {
    FUN_00edff4c(piVar9,iVar4,2,1,1);
    iVar4 = piVar9[2];
  }
  piVar9[2] = iVar4 + 2;
  iVar6 = *param_2;
  *(undefined2 *)(piVar9[1] + iVar4) = 0x203a;
  if (iVar6 == -0x80000000) {
    piVar9 = (int *)*puVar16;
    iVar6 = piVar9[2];
    if ((uint)(*piVar9 - iVar6) < 4) {
      FUN_00edff4c(piVar9,iVar6,4,1,1);
      iVar6 = piVar9[2];
    }
    *(undefined4 *)(piVar9[1] + iVar6) = 0x6c6c756e;
    iVar6 = iVar6 + 4;
  }
  else {
    puVar12 = (undefined4 *)param_2[1];
    iVar6 = param_2[2];
    piVar9 = (int *)*puVar16;
    iVar11 = puVar16[3];
    *(undefined1 *)(puVar16 + 4) = 0;
    puVar16[3] = iVar11 + 1;
    iVar4 = piVar9[2];
    if (*piVar9 == iVar4) {
      FUN_00edff4c(piVar9,iVar4,1,1,1);
      iVar4 = piVar9[2];
    }
    *(undefined1 *)(piVar9[1] + iVar4) = 0x5b;
    iVar4 = iVar4 + 1;
    piVar9[2] = iVar4;
    if (iVar6 != 0) {
      bVar3 = true;
      puVar13 = puVar12;
      do {
        piVar9 = (int *)*puVar16;
        if (bVar3) {
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          iVar11 = iVar4 + 1;
          *(undefined1 *)(piVar9[1] + iVar4) = 10;
        }
        else {
          iVar4 = piVar9[2];
          if ((uint)(*piVar9 - iVar4) < 2) {
            FUN_00edff4c(piVar9,iVar4,2,1,1);
            iVar4 = piVar9[2];
          }
          iVar11 = iVar4 + 2;
          *(undefined2 *)(piVar9[1] + iVar4) = 0xa2c;
        }
        iVar4 = puVar16[3];
        uVar15 = puVar16[1];
        uVar10 = puVar16[2];
        piVar9[2] = iVar11;
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        else {
          do {
            if ((uint)(*piVar9 - iVar11) < uVar10) {
              FUN_00edff4c(piVar9,iVar11,uVar10,1,1);
              iVar11 = piVar9[2];
            }
            FUN_016dd1aa(piVar9[1] + iVar11,uVar15,uVar10);
            iVar11 = iVar11 + uVar10;
            iVar4 = iVar4 + -1;
            piVar9[2] = iVar11;
          } while (iVar4 != 0);
          iVar4 = puVar16[3] + 1;
        }
        piVar9 = (int *)*puVar16;
        iVar11 = piVar9[2];
        iVar7 = *piVar9;
        *(undefined1 *)(puVar16 + 4) = 0;
        puVar16[3] = iVar4;
        if (iVar7 == iVar11) {
          FUN_00edff4c(piVar9,iVar11,1,1,1);
          iVar11 = piVar9[2];
        }
        uVar17 = *(undefined8 *)(puVar13 + 4);
        *(undefined1 *)(piVar9[1] + iVar11) = 0x7b;
        piVar9[2] = iVar11 + 1;
        local_58 = CONCAT22(local_58._2_2_,0x100);
        local_54 = puVar16;
        iVar4 = FUN_00e685bc((int)uVar17,&local_58,"pcb_temperature_c",0x11);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar15 = *puVar13;
        uVar5 = puVar13[1];
        iVar4 = FUN_00e687a8((int)*(undefined8 *)(puVar13 + 2),&local_58,
                             "approximate_chip_temperature_c",0x1e);
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((char)local_58 != '\0') goto LAB_00e69678;
        iVar4 = FUN_00e5b230(&local_58,"sensor",6);
        puVar1 = local_54;
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((char)local_58 == '\x01') goto LAB_00e69748;
        piVar9 = (int *)*local_54;
        iVar4 = piVar9[2];
        if ((uint)(*piVar9 - iVar4) < 2) {
          uVar15 = 1;
          FUN_00edff4c(piVar9,iVar4,2,1,1,uVar5);
          iVar4 = piVar9[2];
        }
        piVar9[2] = iVar4 + 2;
        *(undefined2 *)(piVar9[1] + iVar4) = 0x203a;
        piVar9 = (int *)*puVar1;
        iVar4 = piVar9[2];
        iVar11 = *piVar9;
        *(undefined1 *)(puVar1 + 4) = 0;
        puVar1[3] = puVar1[3] + 1;
        if (iVar11 == iVar4) {
          uVar15 = 1;
          FUN_00edff4c(piVar9,iVar4,1,1,1,uVar5);
          iVar4 = piVar9[2];
        }
        local_4c = puVar1;
        *(undefined1 *)(piVar9[1] + iVar4) = 0x7b;
        piVar9[2] = iVar4 + 1;
        local_50 = CONCAT22(local_50._2_2_,0x100);
        iVar4 = FUN_00e5fe5c(&local_50,"id",2,puVar13[9],uVar15);
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((char)local_50 != '\0') goto LAB_00e69678;
        iVar4 = FUN_00e5b230(&local_50,&DAT_0056a668,8);
        puVar2 = local_4c;
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((char)local_50 == '\x01') goto LAB_00e69748;
        piVar9 = (int *)*local_4c;
        iVar4 = piVar9[2];
        if ((uint)(*piVar9 - iVar4) < 2) {
          FUN_00edff4c(piVar9,iVar4,2,1,1);
          iVar4 = piVar9[2];
        }
        piVar9[2] = iVar4 + 2;
        puVar14 = puVar13 + 0xc;
        *(undefined2 *)(piVar9[1] + iVar4) = 0x203a;
        piVar9 = (int *)*puVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(puVar13 + 10)) {
        case 0:
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          uVar15 = 5;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT31(local_48._1_3_,4);
          pcVar8 = "Inlet";
          break;
        case 1:
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          uVar15 = 6;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT31(local_48._1_3_,4);
          pcVar8 = "Outlet";
          break;
        case 2:
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          uVar15 = 0xc;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT31(local_48._1_3_,4);
          pcVar8 = "ControlBoard";
          break;
        case 3:
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          uVar15 = 10;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT31(local_48._1_3_,4);
          pcVar8 = "WaterInlet";
          break;
        case 4:
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          uVar15 = 0xb;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT31(local_48._1_3_,4);
          pcVar8 = "WaterOutlet";
          break;
        case 5:
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          uVar15 = 3;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT31(local_48._1_3_,4);
          pcVar8 = "Psu";
        }
        FUN_00e57bb4(&local_48,piVar9,pcVar8,uVar15);
        if ((char)local_48 == '\x04') {
          iVar4 = piVar9[2];
          if (*piVar9 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          *(undefined1 *)(piVar9[1] + iVar4) = 0x22;
          piVar9[2] = iVar4 + 1;
        }
        else {
          iVar4 = FUN_0157c4a0(local_48,local_44);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        *(undefined1 *)(puVar2 + 4) = 1;
        iVar4 = FUN_00e5b230(&local_50,"coordinates",0xb);
        puVar2 = local_4c;
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((char)local_50 == '\x01') goto LAB_00e69748;
        piVar9 = (int *)*local_4c;
        iVar4 = piVar9[2];
        if ((uint)(*piVar9 - iVar4) < 2) {
          FUN_00edff4c(piVar9,iVar4,2,1,1);
          iVar4 = piVar9[2];
        }
        piVar9[2] = iVar4 + 2;
        iVar11 = puVar13[6];
        *(undefined2 *)(piVar9[1] + iVar4) = 0x203a;
        if (iVar11 == 0) {
          piVar9 = (int *)*puVar2;
          iVar4 = piVar9[2];
          if ((uint)(*piVar9 - iVar4) < 4) {
            FUN_00edff4c(piVar9,iVar4,4,1,1);
            iVar4 = piVar9[2];
          }
          *(undefined4 *)(piVar9[1] + iVar4) = 0x6c6c756e;
          piVar9[2] = iVar4 + 4;
LAB_00e691c4:
          *(undefined1 *)(puVar2 + 4) = 1;
        }
        else {
          piVar9 = (int *)*puVar2;
          uVar15 = puVar13[7];
          iVar4 = piVar9[2];
          iVar11 = *piVar9;
          uVar5 = puVar13[8];
          *(undefined1 *)(puVar2 + 4) = 0;
          puVar2[3] = puVar2[3] + 1;
          if (iVar11 == iVar4) {
            FUN_00edff4c(piVar9,iVar4,1,1,1);
            iVar4 = piVar9[2];
          }
          local_44 = puVar2;
          *(undefined1 *)(piVar9[1] + iVar4) = 0x5b;
          piVar9[2] = iVar4 + 1;
          local_48 = CONCAT22(local_48._2_2_,0x100);
          FUN_00e5e244(uVar15,&local_48);
          FUN_00e5e244(uVar5,&local_48);
          puVar13 = local_44;
          if ((local_48 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf38);
          }
          if ((local_48 & 0xff00) == 0) goto LAB_00e691c4;
          piVar9 = (int *)*local_44;
          iVar4 = local_44[3] + -1;
          local_44[3] = iVar4;
          if (*(char *)(local_44 + 4) == '\0') {
            iVar11 = piVar9[2];
          }
          else {
            iVar7 = piVar9[2];
            if (*piVar9 == iVar7) {
              FUN_00edff4c(piVar9,iVar7,1,1,1);
              iVar7 = piVar9[2];
            }
            uVar15 = puVar13[1];
            uVar10 = puVar13[2];
            iVar11 = iVar7 + 1;
            *(undefined1 *)(piVar9[1] + iVar7) = 10;
            piVar9[2] = iVar11;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              if ((uint)(*piVar9 - iVar11) < uVar10) {
                FUN_00edff4c(piVar9,iVar11,uVar10,1,1);
                iVar11 = piVar9[2];
              }
              FUN_016dd1aa(piVar9[1] + iVar11,uVar15,uVar10);
              iVar11 = iVar11 + uVar10;
              piVar9[2] = iVar11;
            }
          }
          if (*piVar9 == iVar11) {
            FUN_00edff4c(piVar9,iVar11,1,1,1);
            iVar11 = piVar9[2];
          }
          *(undefined1 *)(piVar9[1] + iVar11) = 0x5d;
          piVar9[2] = iVar11 + 1;
          *(undefined1 *)(puVar2 + 4) = 1;
        }
        if (((local_50 & 0xff00) != 0) && ((local_50 & 1) == 0)) {
          piVar9 = (int *)*puVar2;
          iVar11 = piVar9[2];
          iVar4 = puVar2[3] + -1;
          iVar7 = *piVar9;
          puVar2[3] = iVar4;
          if (iVar7 == iVar11) {
            FUN_00edff4c(piVar9,iVar11,1,1,1);
            iVar11 = piVar9[2];
          }
          uVar15 = puVar2[1];
          iVar7 = iVar11 + 1;
          uVar10 = puVar2[2];
          *(undefined1 *)(piVar9[1] + iVar11) = 10;
          piVar9[2] = iVar7;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            if ((uint)(*piVar9 - iVar7) < uVar10) {
              FUN_00edff4c(piVar9,iVar7,uVar10,1,1);
              iVar7 = piVar9[2];
            }
            FUN_016dd1aa(piVar9[1] + iVar7,uVar15,uVar10);
            iVar7 = iVar7 + uVar10;
            piVar9[2] = iVar7;
          }
          if (*piVar9 == iVar7) {
            FUN_00edff4c(piVar9,iVar7,1,1,1);
            iVar7 = piVar9[2];
          }
          *(undefined1 *)(piVar9[1] + iVar7) = 0x7d;
          piVar9[2] = iVar7 + 1;
        }
        *(undefined1 *)(puVar1 + 4) = 1;
        if (((local_58 & 0xff00) != 0) && ((local_58 & 1) == 0)) {
          piVar9 = (int *)*puVar1;
          iVar11 = piVar9[2];
          iVar4 = puVar1[3] + -1;
          iVar7 = *piVar9;
          puVar1[3] = iVar4;
          if (iVar7 == iVar11) {
            FUN_00edff4c(piVar9,iVar11,1,1,1);
            iVar11 = piVar9[2];
          }
          iVar7 = iVar11 + 1;
          uVar15 = puVar1[1];
          uVar10 = puVar1[2];
          *(undefined1 *)(piVar9[1] + iVar11) = 10;
          piVar9[2] = iVar7;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            if ((uint)(*piVar9 - iVar7) < uVar10) {
              FUN_00edff4c(piVar9,iVar7,uVar10,1,1);
              iVar7 = piVar9[2];
            }
            FUN_016dd1aa(piVar9[1] + iVar7,uVar15,uVar10);
            iVar7 = iVar7 + uVar10;
            piVar9[2] = iVar7;
          }
          if (*piVar9 == iVar7) {
            FUN_00edff4c(piVar9,iVar7,1,1,1);
            iVar7 = piVar9[2];
          }
          *(undefined1 *)(piVar9[1] + iVar7) = 0x7d;
          piVar9[2] = iVar7 + 1;
        }
        bVar3 = false;
        *(undefined1 *)(puVar16 + 4) = 1;
        puVar13 = puVar14;
      } while (puVar14 != puVar12 + iVar6 * 0xc);
      piVar9 = (int *)*puVar16;
      iVar4 = puVar16[3] + -1;
      puVar16[3] = iVar4;
      FUN_00f1f6ac(piVar9,&DAT_0041950e,1);
      if (iVar4 != 0) {
        uVar15 = puVar16[1];
        uVar10 = puVar16[2];
        iVar6 = piVar9[2];
        do {
          if ((uint)(*piVar9 - iVar6) < uVar10) {
            FUN_00edff4c(piVar9,iVar6,uVar10,1,1);
            iVar6 = piVar9[2];
          }
          FUN_016dd1aa(piVar9[1] + iVar6,uVar15,uVar10);
          iVar6 = iVar6 + uVar10;
          iVar4 = iVar4 + -1;
          piVar9[2] = iVar6;
        } while (iVar4 != 0);
      }
      FUN_00f1f6ac(piVar9,&DAT_00418ec5,1);
      goto LAB_00e6965c;
    }
    iVar6 = *piVar9;
    puVar16[3] = iVar11;
    if (iVar6 == iVar4) {
      FUN_00edff4c(piVar9,iVar4,1,1,1);
      iVar6 = piVar9[2];
      iVar4 = iVar6;
    }
    else {
      iVar6 = piVar9[2];
    }
    iVar6 = iVar6 + 1;
    *(undefined1 *)(piVar9[1] + iVar4) = 0x5d;
  }
  piVar9[2] = iVar6;
LAB_00e6965c:
  *(undefined1 *)(puVar16 + 4) = 1;
  return 0;
}

