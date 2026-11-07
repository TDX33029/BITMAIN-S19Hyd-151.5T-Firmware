// FUN_0070d58c @ 0070d58c size=1768 calls_out=12 calls_in=4
// strings: internal error: entered unreachable code

void FUN_0070d58c(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int unaff_r10;
  int *unaff_r11;
  bool bVar13;
  int local_a8;
  int *local_a4;
  int local_a0 [7];
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar2 = 0;
  do {
    bVar13 = iVar2 != -2;
    local_a0[iVar2 * -4] = 1;
    local_a0[iVar2 * -4 + 1] = 0;
    local_a0[iVar2 * -4 + 2] = 1;
    local_a0[iVar2 * -4 + 3] = 0;
    iVar2 = iVar2 + -1;
  } while (bVar13);
  local_68 = local_a0[0];
  local_64 = local_a0[1];
  local_60 = local_a0[2];
  local_5c = local_a0[3];
  local_58 = local_a0[4];
  uStack_54 = local_a0[5];
  local_50 = local_a0[6];
  uStack_4c = uStack_84;
  local_48 = local_80;
  uStack_44 = uStack_7c;
  uStack_40 = uStack_78;
  uStack_3c = uStack_74;
  piVar6 = (int *)(param_2 + 0x40);
  local_38 = 0;
  local_28 = 0;
  local_2c = 4;
  local_30 = 0;
  iVar2 = 0;
  iVar8 = 4;
  iVar11 = 0;
  local_a4 = param_3;
LAB_0070d604:
  do {
    piVar9 = (int *)piVar6[4];
    if (piVar9 < param_4) {
      iVar1 = thunk_FUN_01bed842(local_a4,piVar6[3],piVar9);
      iVar12 = local_2c;
      if (iVar1 == 0) {
        unaff_r11 = (int *)((int)param_4 - (int)piVar9);
        piVar3 = (int *)((int)local_a4 + (int)piVar9);
        piVar7 = local_a4;
        unaff_r10 = iVar2;
        if (iVar2 == 0) {
          if (unaff_r11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0,0,&DAT_01c06c74);
          }
          if ((int *)piVar6[10] != (int *)0x0) {
            piVar7 = (int *)0x0;
            do {
              if (*(char *)(piVar6[9] + (int)piVar7) == (char)*piVar3) {
                if ((char)piVar6[0x12] != '\0') {
                  if (local_68 == 0) {
                    uVar5 = local_5c;
                  }
                  else {
                    uVar5 = local_38;
                  }
                  if (iVar11 == local_30) {
                    FUN_01aa1b90(&local_30);
                    iVar8 = local_2c;
                  }
                  puVar4 = (undefined4 *)(iVar8 + iVar11 * 0x10);
                  *puVar4 = piVar6;
                  iVar11 = iVar11 + 1;
                  puVar4[3] = uVar5;
                  puVar4[1] = local_a4;
                  puVar4[2] = param_4;
                  local_28 = iVar11;
                }
                if ((int *)piVar6[0xd] <= piVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(piVar7,(int *)piVar6[0xd],&DAT_01c06c84);
                }
                piVar6 = (int *)((int)piVar7 * 0x4c + piVar6[0xc]);
                iVar2 = 0;
                param_4 = unaff_r11;
                local_a4 = piVar3;
                goto LAB_0070d604;
              }
              piVar7 = (int *)((int)piVar7 + 1);
            } while ((int *)piVar6[10] != piVar7);
          }
        }
        iVar2 = iVar11;
        if ((char)piVar6[0x12] != '\0') {
          bVar13 = piVar6[0xd] == 0;
          if (!bVar13) {
            piVar6 = (int *)(piVar6[0xd] * 0x4c + piVar6[0xc]);
            piVar7 = piVar6 + -0x13;
            bVar13 = piVar7 == (int *)0x0;
          }
          if (bVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c06c94);
          }
          if (*(char *)((int)piVar6 + -3) == '\x01') {
            if (param_4 != piVar9) {
              piVar9 = (int *)0x0;
              do {
                if (*(char *)((int)piVar3 + (int)piVar9) == '/') {
                  if (piVar6[-6] != 1) {
                    local_a8 = local_30;
                    piVar7 = (int *)(local_2c + iVar11 * 0x10);
                    iVar8 = local_2c + -8;
                    piVar9 = piVar7;
                    goto LAB_0070da04;
                  }
                  piVar6 = (int *)piVar6[-7];
                  FUN_015a6c0c(&local_68,1,0,piVar3,piVar9);
                  iVar2 = 0;
                  param_4 = (int *)((int)unaff_r11 - (int)piVar9);
                  local_a4 = (int *)((int)piVar3 + (int)piVar9);
                  goto LAB_0070d604;
                }
                piVar9 = (int *)((int)piVar9 + 1);
              } while (unaff_r11 != piVar9);
            }
            if (*piVar7 == 0) {
              local_a8 = local_30;
              piVar7 = (int *)(local_2c + iVar11 * 0x10);
              iVar8 = local_2c + -8;
              piVar9 = piVar7;
              while( true ) {
                piVar10 = piVar9 + -4;
                local_a4 = piVar7;
                if (iVar11 != 0) {
                  param_4 = *(int **)(iVar8 + iVar11 * 0x10);
                  iVar2 = iVar11 + -1;
                  piVar6 = (int *)*piVar10;
                  local_a4 = (int *)piVar9[-3];
                  local_28 = iVar2;
                }
                if (iVar11 == 0 || piVar6 == (int *)0x0) goto LAB_0070dad8;
                piVar7 = local_a4;
                if ((unaff_r11 <= param_4) &&
                   (piVar7 = (int *)thunk_FUN_01bed842(piVar3,(char *)((int)local_a4 +
                                                                      ((int)param_4 - (int)unaff_r11
                                                                      )),unaff_r11),
                   piVar7 == (int *)0x0)) break;
                iVar11 = iVar11 + -1;
                piVar9 = piVar10;
              }
              goto LAB_0070da9c;
            }
            FUN_015a6c0c(&local_68,1,0,piVar3,unaff_r11);
            FUN_0070ce68(&local_68,piVar7);
          }
          else {
            if (*(char *)((int)piVar6 + -3) != '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06cb4);
            }
            if (piVar6[-0x13] == 0) {
              local_a8 = local_30;
LAB_0070dad8:
              FUN_0132b958(local_a8,local_2c,4,0x10);
              if (local_68 == 0) {
                FUN_0134aee0(local_64,local_60,4,0x10);
              }
              piVar6 = (int *)0x0;
              goto LAB_0070db10;
            }
            FUN_0070d030(&local_68,piVar7);
            uVar5 = piVar6[-0xf];
            if (uVar5 < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(2,uVar5 - 1,uVar5,&DAT_01c06ca4);
            }
            FUN_015a6c0c(&local_68,piVar6[-0x10] + 2,uVar5 - 3,piVar3,unaff_r11);
          }
          piVar6 = piVar6 + -0x12;
LAB_0070db6c:
          local_a0[0] = local_68;
          local_a0[1] = local_64;
          local_a0[2] = local_60;
          local_a0[3] = local_5c;
          local_a0[4] = local_58;
          local_a0[5] = uStack_54;
          local_a0[6] = local_50;
          uStack_84 = uStack_4c;
          local_80 = local_48;
          uStack_7c = uStack_44;
          uStack_78 = uStack_40;
          uStack_74 = uStack_3c;
          uStack_70 = local_38;
          FUN_0132b958(local_30,local_2c,4,0x10);
          if (piVar6 != (int *)0x0) {
            param_1[1] = local_a0[0];
            param_1[2] = local_a0[1];
            param_1[3] = local_a0[2];
            param_1[4] = local_a0[3];
            param_1[5] = local_a0[4];
            param_1[6] = local_a0[5];
            param_1[7] = local_a0[6];
            param_1[8] = uStack_84;
            param_1[9] = local_80;
            param_1[10] = uStack_7c;
            param_1[0xb] = uStack_78;
            param_1[0xc] = uStack_74;
            param_1[0xd] = uStack_70;
          }
LAB_0070db10:
          *param_1 = piVar6;
          return;
        }
        local_a8 = local_30;
        piVar7 = (int *)(local_2c + iVar11 * 0x10);
        iVar8 = local_2c + -8;
        piVar9 = piVar7;
        while( true ) {
          piVar10 = piVar9 + -4;
          local_a4 = piVar7;
          if (iVar11 != 0) {
            param_4 = *(int **)(iVar8 + iVar11 * 0x10);
            iVar2 = iVar11 + -1;
            piVar6 = (int *)*piVar10;
            local_a4 = (int *)piVar9[-3];
            local_28 = iVar2;
          }
          if (iVar11 == 0 || piVar6 == (int *)0x0) goto LAB_0070dad8;
          piVar7 = local_a4;
          if ((unaff_r11 <= param_4) &&
             (piVar7 = (int *)thunk_FUN_01bed842(piVar3,(char *)((int)local_a4 +
                                                                ((int)param_4 - (int)unaff_r11)),
                                                 unaff_r11), piVar7 == (int *)0x0)) break;
          iVar11 = iVar11 + -1;
          piVar9 = piVar10;
        }
LAB_0070da9c:
        uVar5 = piVar10[3];
        iVar8 = iVar12;
        iVar11 = iVar2;
        if (local_68 == 0) {
          iVar2 = 1;
          if (uVar5 <= local_5c) {
            local_5c = uVar5;
          }
        }
        else {
          iVar2 = 1;
          local_38 = uVar5;
        }
      }
      else {
        unaff_r10 = iVar8 + -8;
        local_a8 = local_30;
        iVar12 = iVar11;
        piVar7 = (int *)(iVar8 + iVar11 * 0x10);
        while( true ) {
          if (iVar11 != 0) {
            piVar9 = *(int **)(unaff_r10 + iVar11 * 0x10);
            iVar12 = iVar11 + -1;
            piVar6 = (int *)piVar7[-4];
            unaff_r11 = (int *)piVar7[-3];
            local_28 = iVar12;
          }
          if (iVar11 == 0 || piVar6 == (int *)0x0) goto LAB_0070dad8;
          if ((param_4 <= piVar9) &&
             (iVar2 = thunk_FUN_01bed842(local_a4,(char *)((int)unaff_r11 +
                                                          ((int)piVar9 - (int)param_4)),param_4),
             iVar2 == 0)) break;
          iVar11 = iVar11 + -1;
          piVar7 = piVar7 + -4;
        }
        uVar5 = piVar7[-1];
        if (local_68 == 0) {
          iVar2 = 1;
          param_4 = piVar9;
          iVar11 = iVar12;
          local_a4 = unaff_r11;
          if (uVar5 <= local_5c) {
            local_5c = uVar5;
            goto LAB_0070d920;
          }
        }
        else {
          local_38 = uVar5;
LAB_0070d870:
          iVar2 = 1;
          param_4 = piVar9;
          iVar11 = iVar12;
          local_a4 = unaff_r11;
        }
      }
      goto LAB_0070d604;
    }
    if (((param_4 == piVar9) && (iVar2 = thunk_FUN_01bed842(local_a4,piVar6[3],param_4), iVar2 == 0)
        ) && (*piVar6 != 0)) {
      FUN_0070cf4c(&local_68,piVar6);
      piVar6 = piVar6 + 1;
      goto LAB_0070db6c;
    }
    local_a8 = local_30;
    iVar12 = unaff_r10;
    piVar7 = (int *)(iVar8 + iVar11 * 0x10);
    while( true ) {
      if (iVar11 != 0) {
        piVar9 = *(int **)(iVar8 + -8 + iVar11 * 0x10);
        iVar12 = iVar11 + -1;
        piVar6 = (int *)piVar7[-4];
        unaff_r11 = (int *)piVar7[-3];
        local_28 = iVar12;
      }
      if (iVar11 == 0 || piVar6 == (int *)0x0) goto LAB_0070dad8;
      if ((param_4 <= piVar9) &&
         (iVar2 = thunk_FUN_01bed842(local_a4,(char *)((int)unaff_r11 + ((int)piVar9 - (int)param_4)
                                                      ),param_4), iVar2 == 0)) break;
      iVar11 = iVar11 + -1;
      piVar7 = piVar7 + -4;
    }
    uVar5 = piVar7[-1];
    unaff_r10 = iVar12;
    if (local_68 != 0) {
      local_38 = uVar5;
      goto LAB_0070d870;
    }
    iVar2 = 1;
    param_4 = piVar9;
    iVar11 = iVar12;
    local_a4 = unaff_r11;
    if (uVar5 <= local_5c) {
      local_5c = uVar5;
LAB_0070d920:
      iVar2 = 1;
      param_4 = piVar9;
      iVar11 = iVar12;
      local_a4 = unaff_r11;
    }
  } while( true );
LAB_0070da04:
  piVar10 = piVar9 + -4;
  local_a4 = piVar7;
  if (iVar11 != 0) {
    param_4 = *(int **)(iVar8 + iVar11 * 0x10);
    iVar2 = iVar11 + -1;
    piVar6 = (int *)*piVar10;
    local_a4 = (int *)piVar9[-3];
    local_28 = iVar2;
  }
  if (iVar11 == 0 || piVar6 == (int *)0x0) goto LAB_0070dad8;
  piVar7 = local_a4;
  if ((unaff_r11 <= param_4) &&
     (piVar7 = (int *)thunk_FUN_01bed842(piVar3,(char *)((int)local_a4 +
                                                        ((int)param_4 - (int)unaff_r11)),unaff_r11),
     piVar7 == (int *)0x0)) goto LAB_0070da9c;
  iVar11 = iVar11 + -1;
  piVar9 = piVar10;
  goto LAB_0070da04;
}

