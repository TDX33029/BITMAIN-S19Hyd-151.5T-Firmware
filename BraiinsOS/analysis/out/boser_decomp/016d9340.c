// FUN_016d9340 @ 016d9340 size=992 calls_out=6 calls_in=1
// strings: alnum | blank | digit | graph | print | xdigitinvalid escape sequence

void FUN_016d9340(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *unaff_r5;
  int *piVar5;
  uint *unaff_r7;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int local_5c;
  int local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_54 = FUN_016d4a28(param_2);
  if (local_54 != 0x5b) {
    FUN_016f4e14(&local_54,&DAT_0056d0b8,&DAT_01d0a008);
LAB_016d969c:
    uVar6 = 4;
    goto LAB_016d96c8;
  }
  iVar1 = *param_2;
  unaff_r7 = &local_50;
  unaff_r5 = (uint *)(iVar1 + 0x50);
  local_50 = *unaff_r5;
  uStack_4c = *(undefined4 *)(iVar1 + 0x54);
  uStack_48 = *(undefined4 *)(iVar1 + 0x58);
  iVar2 = FUN_016d4fe8(param_2);
  if ((((iVar2 != 0) && (iVar2 = FUN_016d4a28(param_2), iVar2 == 0x3a)) &&
      (iVar2 = FUN_016d4fe8(param_2), iVar2 != 0)) &&
     ((local_5c = FUN_016d4a28(param_2), local_5c != 0x5e ||
      (iVar2 = FUN_016d4fe8(param_2), iVar2 != 0)))) {
    uVar7 = *unaff_r5;
    do {
      iVar2 = FUN_016d4a28(param_2);
      if (iVar2 == 0x3a) break;
      iVar2 = FUN_016d4fe8(param_2);
    } while (iVar2 != 0);
    uVar4 = param_2[2];
    uVar8 = *unaff_r5;
    if (uVar8 != uVar4) {
      iVar2 = param_2[1];
      if (uVar8 < uVar7) goto LAB_016d9708;
      if (uVar7 != 0) {
        if (uVar7 < uVar4) {
          if (*(char *)(iVar2 + uVar7) < -0x40) goto LAB_016d9708;
        }
        else if (uVar7 != uVar4) goto LAB_016d9708;
      }
      if ((uVar8 != 0) && ((uVar4 <= uVar8 || (*(char *)(iVar2 + uVar8) < -0x40)))) {
LAB_016d9708:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar2,uVar4,uVar7,uVar8,&DAT_01d09ff8);
      }
      iVar3 = FUN_016d99b0(param_2,&DAT_004cfe06,2);
      if (iVar3 != 0) {
        piVar5 = (int *)(iVar2 + uVar7);
        iVar2 = uVar8 - uVar7;
        if (iVar2 == 4) {
          if (*piVar5 == 0x64726f77) {
            uVar6 = 0xc;
            goto LAB_016d96c8;
          }
        }
        else if (iVar2 == 6) {
          iVar2 = thunk_FUN_01bed842(piVar5,"xdigitinvalid escape sequence",6);
          if (iVar2 == 0) {
            uVar6 = 0xd;
            goto LAB_016d96c8;
          }
        }
        else if (iVar2 == 5) {
          iVar2 = thunk_FUN_01bed842(piVar5,"alnum",5);
          if (iVar2 == 0) {
            uVar6 = 0;
          }
          else {
            iVar2 = thunk_FUN_01bed842(piVar5,&DAT_004e8573,5);
            if (iVar2 == 0) {
              uVar6 = 1;
            }
            else {
              iVar2 = thunk_FUN_01bed842(piVar5,&DAT_004ea233,5);
              if (iVar2 == 0) {
                uVar6 = 2;
              }
              else {
                iVar2 = thunk_FUN_01bed842(piVar5,"blank",5);
                if (iVar2 == 0) {
                  uVar6 = 3;
                }
                else {
                  uVar6 = 5;
                  iVar2 = thunk_FUN_01bed842(piVar5,&DAT_004e93ea,5);
                  if (iVar2 == 0) goto LAB_016d969c;
                  iVar2 = thunk_FUN_01bed842(piVar5,"digit",5);
                  if (iVar2 != 0) {
                    iVar2 = thunk_FUN_01bed842(piVar5,"graph",5);
                    if (iVar2 == 0) {
                      uVar6 = 6;
                    }
                    else {
                      iVar2 = thunk_FUN_01bed842(piVar5,"l",5);
                      if (iVar2 == 0) {
                        uVar6 = 7;
                      }
                      else {
                        iVar2 = thunk_FUN_01bed842(piVar5,"print",5);
                        if (iVar2 == 0) {
                          uVar6 = 8;
                        }
                        else {
                          iVar2 = thunk_FUN_01bed842(piVar5,&DAT_004e966d,5);
                          if (iVar2 == 0) {
                            uVar6 = 9;
                          }
                          else {
                            iVar2 = thunk_FUN_01bed842(piVar5,"s",5);
                            if (iVar2 == 0) {
                              uVar6 = 10;
                            }
                            else {
                              iVar2 = thunk_FUN_01bed842(piVar5,"u",5);
                              if (iVar2 != 0) goto LAB_016d9410;
                              uVar6 = 0xb;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_016d96c8:
          local_34 = *unaff_r5;
          uStack_30 = unaff_r5[1];
          uStack_2c = unaff_r5[2];
          uVar7 = unaff_r7[1];
          uVar4 = unaff_r7[2];
          *param_1 = *unaff_r7;
          param_1[1] = uVar7;
          param_1[2] = uVar4;
          param_1[3] = local_34;
          param_1[4] = uStack_30;
          param_1[5] = uStack_2c;
          *(undefined1 *)(param_1 + 6) = uVar6;
          uVar6 = local_5c == 0x5e;
          goto LAB_016d9414;
        }
      }
    }
  }
LAB_016d9410:
  uVar6 = 2;
  *unaff_r5 = local_50;
  *(undefined4 *)(iVar1 + 0x54) = uStack_4c;
  *(undefined4 *)(iVar1 + 0x58) = uStack_48;
LAB_016d9414:
  *(undefined1 *)((int)param_1 + 0x19) = uVar6;
  return;
}

