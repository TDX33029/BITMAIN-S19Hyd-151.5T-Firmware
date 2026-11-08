// FUN_00e5c044 @ 00e5c044 size=1872 calls_out=10 calls_in=1
// strings: solutions | shares | hashes_time_meansvalid_jobsinvalid_jobsstale | hashesclientsuidshort_urlaliverunning

int FUN_00e5c044(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
LAB_00e5c20c:
    local_30 = 10;
    iVar4 = FUN_0157c50c(&local_30,0,0);
    return iVar4;
  }
  iVar4 = FUN_00e5b230(param_1);
  if (iVar4 == 0) {
    if (*param_1 == '\x01') {
LAB_00e5c71c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    puVar12 = *(undefined4 **)(param_1 + 4);
    piVar8 = (int *)*puVar12;
    iVar4 = piVar8[2];
    if ((uint)(*piVar8 - iVar4) < 2) {
      FUN_00edff4c(piVar8,iVar4,2,1,1);
      iVar4 = piVar8[2];
    }
    piVar8[2] = iVar4 + 2;
    *(undefined2 *)(piVar8[1] + iVar4) = 0x203a;
    piVar8 = (int *)*puVar12;
    iVar4 = piVar8[2];
    iVar7 = *piVar8;
    *(undefined1 *)(puVar12 + 4) = 0;
    puVar12[3] = puVar12[3] + 1;
    if (iVar7 == iVar4) {
      FUN_00edff4c(piVar8,iVar4,1,1,1);
      iVar4 = piVar8[2];
    }
    uVar9 = *param_4;
    uVar10 = param_4[1];
    *(undefined1 *)(piVar8[1] + iVar4) = 0x7b;
    piVar8[2] = iVar4 + 1;
    local_38 = CONCAT22(local_38._2_2_,0x100);
    local_34 = puVar12;
    iVar4 = FUN_00e5bdc8(&local_38,"solutions",9,0x7b,uVar9,uVar10);
    if (iVar4 == 0) {
      if ((char)local_38 != '\0') goto LAB_00e5c20c;
      iVar4 = FUN_00e5b230(&local_38,"shares",6);
      puVar1 = local_34;
      if (iVar4 == 0) {
        if ((char)local_38 != '\x01') {
          piVar8 = (int *)*local_34;
          iVar4 = piVar8[2];
          if ((uint)(*piVar8 - iVar4) < 2) {
            FUN_00edff4c(piVar8,iVar4,2,1,1);
            iVar4 = piVar8[2];
          }
          uVar9 = param_4[2];
          uVar10 = param_4[3];
          uVar14 = param_4[4];
          uVar15 = param_4[5];
          piVar8[2] = iVar4 + 2;
          *(undefined2 *)(piVar8[1] + iVar4) = 0x203a;
          FUN_00e57dec(*puVar1,0x203a,uVar9,uVar10,uVar14,uVar15);
          *(undefined1 *)(puVar1 + 4) = 1;
          iVar4 = FUN_00e5b230(&local_38,"hashes_time_meansvalid_jobsinvalid_jobsstale",0x11);
          puVar1 = local_34;
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((char)local_38 != '\x01') {
            FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
            if (param_4[6] == -0x80000000) {
              uVar9 = 4;
              piVar8 = (int *)*puVar1;
              puVar5 = &DAT_00567318;
            }
            else {
              iVar7 = param_4[7];
              iVar16 = param_4[8];
              piVar8 = (int *)*puVar1;
              iVar4 = puVar1[3];
              *(undefined1 *)(puVar1 + 4) = 0;
              puVar1[3] = iVar4 + 1;
              FUN_00f1f6ac(piVar8,&DAT_00418df9,1);
              if (iVar16 == 0) {
                puVar1[3] = iVar4;
              }
              else {
                iVar4 = iVar7 + iVar16 * 0x28;
                bVar3 = true;
                do {
                  piVar8 = (int *)*puVar1;
                  if (bVar3) {
                    uVar9 = 1;
                    puVar5 = &DAT_0041950e;
                  }
                  else {
                    uVar9 = 2;
                    puVar5 = &DAT_00414a81;
                  }
                  FUN_00f1f6ac(piVar8,puVar5,uVar9);
                  iVar16 = puVar1[3];
                  if (iVar16 == 0) {
                    iVar16 = 1;
                  }
                  else {
                    uVar9 = puVar1[1];
                    uVar13 = puVar1[2];
                    iVar11 = piVar8[2];
                    do {
                      if ((uint)(*piVar8 - iVar11) < uVar13) {
                        FUN_00edff4c(piVar8,iVar11,uVar13,1,1);
                        iVar11 = piVar8[2];
                      }
                      FUN_016dd1aa(piVar8[1] + iVar11,uVar9,uVar13);
                      iVar11 = iVar11 + uVar13;
                      iVar16 = iVar16 + -1;
                      piVar8[2] = iVar11;
                    } while (iVar16 != 0);
                    iVar16 = puVar1[3] + 1;
                  }
                  piVar8 = (int *)*puVar1;
                  iVar11 = piVar8[2];
                  iVar6 = *piVar8;
                  *(undefined1 *)(puVar1 + 4) = 0;
                  puVar1[3] = iVar16;
                  if (iVar6 == iVar11) {
                    FUN_00edff4c(piVar8,iVar11,1,1,1);
                    iVar11 = piVar8[2];
                  }
                  local_2c = puVar1;
                  *(undefined1 *)(piVar8[1] + iVar11) = 0x7b;
                  piVar8[2] = iVar11 + 1;
                  local_30 = CONCAT22(local_30._2_2_,0x100);
                  iVar16 = FUN_00e5b230(&local_30,&DAT_0056a968,8);
                  puVar2 = local_2c;
                  if (iVar16 != 0) {
                    return iVar16;
                  }
                  if ((char)local_30 == '\x01') goto LAB_00e5c71c;
                  piVar8 = (int *)*local_2c;
                  iVar16 = piVar8[2];
                  if ((uint)(*piVar8 - iVar16) < 2) {
                    FUN_00edff4c(piVar8,iVar16,2,1,1);
                    iVar16 = piVar8[2];
                  }
                  piVar8[2] = iVar16 + 2;
                  *(undefined2 *)(piVar8[1] + iVar16) = 0x203a;
                  iVar16 = FUN_00e953fc(*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar7 + 0x1c),
                                        *(undefined4 *)(iVar7 + 0x20),puVar2);
                  if (iVar16 != 0) {
                    return iVar16;
                  }
                  *(undefined1 *)(puVar2 + 4) = 1;
                  iVar16 = FUN_00e5b230(&local_30,"hashesclientsuidshort_urlaliverunning",6);
                  puVar2 = local_2c;
                  if (iVar16 != 0) {
                    return iVar16;
                  }
                  if ((char)local_30 == '\x01') goto LAB_00e5c71c;
                  piVar8 = (int *)*local_2c;
                  iVar16 = piVar8[2];
                  if ((uint)(*piVar8 - iVar16) < 2) {
                    FUN_00edff4c(piVar8,iVar16,2,1,1);
                    iVar16 = piVar8[2];
                  }
                  piVar8[2] = iVar16 + 2;
                  *(undefined2 *)(piVar8[1] + iVar16) = 0x203a;
                  iVar16 = FUN_00efde8c(iVar7,puVar2);
                  if (iVar16 != 0) {
                    return iVar16;
                  }
                  *(undefined1 *)(puVar2 + 4) = 1;
                  if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
                    piVar8 = (int *)*puVar2;
                    iVar16 = puVar2[3] + -1;
                    puVar2[3] = iVar16;
                    FUN_00f1f6ac(piVar8,&DAT_0041950e,1);
                    if (iVar16 != 0) {
                      uVar9 = puVar2[1];
                      uVar13 = puVar2[2];
                      iVar11 = piVar8[2];
                      do {
                        if ((uint)(*piVar8 - iVar11) < uVar13) {
                          FUN_00edff4c(piVar8,iVar11,uVar13,1,1);
                          iVar11 = piVar8[2];
                        }
                        FUN_016dd1aa(piVar8[1] + iVar11,uVar9,uVar13);
                        iVar11 = iVar11 + uVar13;
                        iVar16 = iVar16 + -1;
                        piVar8[2] = iVar11;
                      } while (iVar16 != 0);
                    }
                    FUN_00f1f6ac(piVar8,"}",1);
                  }
                  iVar7 = iVar7 + 0x28;
                  bVar3 = false;
                  *(undefined1 *)(puVar1 + 4) = 1;
                } while (iVar7 != iVar4);
                piVar8 = (int *)*puVar1;
                iVar4 = puVar1[3] + -1;
                puVar1[3] = iVar4;
                FUN_00f1f6ac(piVar8,&DAT_0041950e,1);
                if (iVar4 != 0) {
                  uVar9 = puVar1[1];
                  uVar13 = puVar1[2];
                  iVar7 = piVar8[2];
                  do {
                    if ((uint)(*piVar8 - iVar7) < uVar13) {
                      FUN_00edff4c(piVar8,iVar7,uVar13,1,1);
                      iVar7 = piVar8[2];
                    }
                    FUN_016dd1aa(piVar8[1] + iVar7,uVar9,uVar13);
                    iVar7 = iVar7 + uVar13;
                    iVar4 = iVar4 + -1;
                    piVar8[2] = iVar7;
                  } while (iVar4 != 0);
                }
              }
              puVar5 = &DAT_00418ec5;
              uVar9 = 1;
            }
            FUN_00f1f6ac(piVar8,puVar5,uVar9);
            *(undefined1 *)(puVar1 + 4) = 1;
            if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
              piVar8 = (int *)*puVar1;
              iVar4 = puVar1[3] + -1;
              puVar1[3] = iVar4;
              FUN_00f1f6ac(piVar8,&DAT_0041950e,1);
              if (iVar4 != 0) {
                uVar9 = puVar1[1];
                uVar13 = puVar1[2];
                iVar7 = piVar8[2];
                do {
                  if ((uint)(*piVar8 - iVar7) < uVar13) {
                    FUN_00edff4c(piVar8,iVar7,uVar13,1,1);
                    iVar7 = piVar8[2];
                  }
                  FUN_016dd1aa(piVar8[1] + iVar7,uVar9,uVar13);
                  iVar7 = iVar7 + uVar13;
                  iVar4 = iVar4 + -1;
                  piVar8[2] = iVar7;
                } while (iVar4 != 0);
              }
              FUN_00f1f6ac(piVar8,"}",1);
            }
            *(undefined1 *)(puVar12 + 4) = 1;
            return 0;
          }
        }
        goto LAB_00e5c71c;
      }
    }
  }
  return iVar4;
}

