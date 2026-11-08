// FUN_00e69cfc @ 00e69cfc size=1616 calls_out=8 calls_in=1
// strings: fansgothL | target_speed_ratio

int FUN_00e69cfc(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30 [3];
  
  if (*param_1 != '\0') {
LAB_00e6a178:
    local_30[0] = 10;
    iVar3 = FUN_0157c50c(local_30,0,0);
    return iVar3;
  }
  iVar3 = FUN_00e5b230(param_1,"fansgothL",4);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar11 = *(undefined4 **)(param_1 + 4);
  piVar7 = (int *)*puVar11;
  iVar3 = piVar7[2];
  if ((uint)(*piVar7 - iVar3) < 2) {
    FUN_00edff4c(piVar7,iVar3,2,1,1);
    iVar3 = piVar7[2];
  }
  piVar7[2] = iVar3 + 2;
  iVar6 = *param_2;
  *(undefined2 *)(piVar7[1] + iVar3) = 0x203a;
  if (iVar6 == -0x80000000) {
    piVar7 = (int *)*puVar11;
    iVar6 = piVar7[2];
    if ((uint)(*piVar7 - iVar6) < 4) {
      FUN_00edff4c(piVar7,iVar6,4,1,1);
      iVar6 = piVar7[2];
    }
    *(undefined4 *)(piVar7[1] + iVar6) = 0x6c6c756e;
    iVar6 = iVar6 + 4;
  }
  else {
    piVar7 = (int *)*puVar11;
    *(undefined1 *)(puVar11 + 4) = 0;
    iVar9 = puVar11[3];
    puVar12 = (undefined4 *)param_2[1];
    iVar13 = param_2[2];
    iVar3 = piVar7[2];
    iVar6 = *piVar7;
    puVar11[3] = iVar9 + 1;
    if (iVar6 == iVar3) {
      FUN_00edff4c(piVar7,iVar3,1,1,1);
      iVar3 = piVar7[2];
    }
    *(undefined1 *)(piVar7[1] + iVar3) = 0x5b;
    iVar3 = iVar3 + 1;
    piVar7[2] = iVar3;
    if (iVar13 == 0) {
      iVar6 = *piVar7;
      puVar11[3] = iVar9;
      if (iVar6 == iVar3) {
        FUN_00edff4c(piVar7,iVar3,1,1,1);
        iVar6 = piVar7[2];
        iVar3 = iVar6;
      }
      else {
        iVar6 = piVar7[2];
      }
      iVar6 = iVar6 + 1;
      *(undefined1 *)(piVar7[1] + iVar3) = 0x5d;
    }
    else {
      puVar4 = puVar12 + iVar13 * 8;
      bVar2 = true;
      do {
        piVar7 = (int *)*puVar11;
        if (bVar2) {
          iVar3 = piVar7[2];
          if (*piVar7 == iVar3) {
            FUN_00edff4c(piVar7,iVar3,1,1,1);
            iVar3 = piVar7[2];
          }
          iVar6 = iVar3 + 1;
          *(undefined1 *)(piVar7[1] + iVar3) = 10;
        }
        else {
          iVar3 = piVar7[2];
          if ((uint)(*piVar7 - iVar3) < 2) {
            FUN_00edff4c(piVar7,iVar3,2,1,1);
            iVar3 = piVar7[2];
          }
          iVar6 = iVar3 + 2;
          *(undefined2 *)(piVar7[1] + iVar3) = 0xa2c;
        }
        iVar3 = puVar11[3];
        uVar10 = puVar11[1];
        uVar8 = puVar11[2];
        piVar7[2] = iVar6;
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          do {
            if ((uint)(*piVar7 - iVar6) < uVar8) {
              FUN_00edff4c(piVar7,iVar6,uVar8,1,1);
              iVar6 = piVar7[2];
            }
            FUN_016dd1aa(piVar7[1] + iVar6,uVar10,uVar8);
            iVar6 = iVar6 + uVar8;
            iVar3 = iVar3 + -1;
            piVar7[2] = iVar6;
          } while (iVar3 != 0);
          iVar3 = puVar11[3] + 1;
        }
        piVar7 = (int *)*puVar11;
        iVar6 = piVar7[2];
        iVar9 = *piVar7;
        *(undefined1 *)(puVar11 + 4) = 0;
        puVar11[3] = iVar3;
        if (iVar9 == iVar6) {
          FUN_00edff4c(piVar7,iVar6,1,1,1);
          iVar6 = piVar7[2];
        }
        *(undefined1 *)(piVar7[1] + iVar6) = 0x7b;
        piVar7[2] = iVar6 + 1;
        local_38 = CONCAT22(local_38._2_2_,0x100);
        local_34 = puVar11;
        iVar3 = FUN_00e5b0a0(&local_38,&DAT_0056a088,8,puVar12[5],puVar12[6]);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar10 = *puVar12;
        uVar5 = puVar12[1];
        iVar3 = FUN_00e687a8((int)*(undefined8 *)(puVar12 + 2),&local_38,"target_speed_ratio",0x12);
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((char)local_38 == '\x01') goto LAB_00e6a178;
        iVar3 = FUN_00e5b648(&local_38,"rpm",3,puVar12[7],uVar10,uVar5);
        puVar1 = local_34;
        if (iVar3 != 0) {
          return iVar3;
        }
        if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
          piVar7 = (int *)*local_34;
          iVar3 = local_34[3] + -1;
          local_34[3] = iVar3;
          if (*(char *)(local_34 + 4) == '\0') {
            iVar6 = piVar7[2];
          }
          else {
            iVar9 = piVar7[2];
            if (*piVar7 == iVar9) {
              FUN_00edff4c(piVar7,iVar9,1,1,1);
              iVar9 = piVar7[2];
            }
            uVar10 = puVar1[1];
            iVar6 = iVar9 + 1;
            uVar8 = puVar1[2];
            *(undefined1 *)(piVar7[1] + iVar9) = 10;
            piVar7[2] = iVar6;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              if ((uint)(*piVar7 - iVar6) < uVar8) {
                FUN_00edff4c(piVar7,iVar6,uVar8,1,1);
                iVar6 = piVar7[2];
              }
              FUN_016dd1aa(piVar7[1] + iVar6,uVar10,uVar8);
              iVar6 = iVar6 + uVar8;
              piVar7[2] = iVar6;
            }
          }
          if (*piVar7 == iVar6) {
            FUN_00edff4c(piVar7,iVar6,1,1,1);
            iVar6 = piVar7[2];
          }
          *(undefined1 *)(piVar7[1] + iVar6) = 0x7d;
          piVar7[2] = iVar6 + 1;
        }
        puVar12 = puVar12 + 8;
        *(undefined1 *)(puVar11 + 4) = 1;
        bVar2 = false;
      } while (puVar12 != puVar4);
      piVar7 = (int *)*puVar11;
      iVar9 = piVar7[2];
      iVar3 = puVar11[3] + -1;
      iVar6 = *piVar7;
      puVar11[3] = iVar3;
      if (iVar6 == iVar9) {
        FUN_00edff4c(piVar7,iVar9,1,1,1);
        iVar9 = piVar7[2];
      }
      iVar6 = iVar9 + 1;
      uVar10 = puVar11[1];
      uVar8 = puVar11[2];
      *(undefined1 *)(piVar7[1] + iVar9) = 10;
      piVar7[2] = iVar6;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if ((uint)(*piVar7 - iVar6) < uVar8) {
          FUN_00edff4c(piVar7,iVar6,uVar8,1,1);
          iVar6 = piVar7[2];
        }
        FUN_016dd1aa(piVar7[1] + iVar6,uVar10,uVar8);
        iVar6 = iVar6 + uVar8;
        piVar7[2] = iVar6;
      }
      if (*piVar7 == iVar6) {
        FUN_00edff4c(piVar7,iVar6,1,1,1);
        iVar6 = piVar7[2];
      }
      *(undefined1 *)(piVar7[1] + iVar6) = 0x5d;
      iVar6 = iVar6 + 1;
    }
  }
  piVar7[2] = iVar6;
  *(undefined1 *)(puVar11 + 4) = 1;
  return 0;
}

