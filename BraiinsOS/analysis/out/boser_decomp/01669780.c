// FUN_01669780 @ 01669780 size=6360 calls_out=23 calls_in=2
// strings: $schema | https://json-schema.org/draft/ | http://json-schema.org/draft- | https://json-schema.org/draft/ | https://json-schema.org/draft/ | http://json-schema.org/draft-

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01669780(undefined4 *param_1,int *param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                 undefined1 *param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *local_144;
  int *local_13c;
  int *local_134;
  int *local_12c;
  int *local_128;
  uint local_124 [3];
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  uint local_104;
  int *local_100;
  int *piStack_fc;
  int *piStack_f8;
  int *local_f4;
  int *piStack_f0;
  int *local_ec;
  int *local_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  int *piStack_a0;
  int *local_9c;
  int *local_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *piStack_50;
  int *local_4c;
  int *piStack_48;
  int *piStack_44;
  int *local_40;
  int *local_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  uint local_2c;
  
  iVar10 = *param_2;
  uVar14 = FUN_013437d0(*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 0x10),0,
                        *(undefined4 *)(iVar10 + 0x1c));
  if ((((int)((ulonglong)uVar14 >> 0x20) == 3) &&
      (iVar1 = thunk_FUN_01bed842((int)uVar14,"urn",3), iVar1 == 0)) || (*param_4 != '\x05'))
  goto LAB_0166afc4;
  local_12c = (int *)(iVar10 + 0x14);
  uVar3 = *(uint *)(param_4 + 0xc);
  iVar1 = *(int *)(param_4 + 4);
  if (uVar3 < 3) {
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    local_124[0] = (uint)(iVar1 != 0);
    local_118 = *(undefined4 *)(param_4 + 8);
    local_110 = 0;
    local_124[1] = 0;
    local_124[2] = iVar1;
    local_114 = local_124[0];
    local_10c = iVar1;
    local_108 = local_118;
    local_104 = uVar3;
LAB_01669880:
    while( true ) {
      uVar14 = FUN_01a41998(local_124);
      pbVar4 = (byte *)((ulonglong)uVar14 >> 0x20);
      iVar1 = (int)uVar14;
      if (iVar1 == 0) break;
      if (*(int *)(iVar1 + 8) != 4) goto LAB_016698dc;
      uVar3 = **(uint **)(iVar1 + 4);
      bVar13 = uVar3 == 0x66657224;
      if (bVar13) {
        uVar3 = (uint)*pbVar4;
      }
      if (bVar13 && uVar3 == 3) {
        piVar7 = *(int **)(pbVar4 + 0xc);
        piVar8 = *(int **)(pbVar4 + 8);
        if (&DAT_0000001d < piVar7) {
          iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",piVar8,0x1e);
          if (iVar1 != 0) goto LAB_01669940;
LAB_016699b8:
          *param_9 = 1;
        }
        else {
          if (piVar7 == (int *)&DAT_0000001d) {
LAB_01669940:
            iVar1 = thunk_FUN_01bed842("http://json-schema.org/draft-",piVar8,0x1d);
            if (iVar1 == 0) goto LAB_016699b8;
          }
          if ((0x1d < *(uint *)(iVar10 + 0x10)) &&
             (iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",
                                         *(undefined4 *)(iVar10 + 0xc),0x1e), iVar1 == 0))
          goto LAB_016699b8;
          if (piVar7 == (int *)&DAT_00000001) {
            if (((char)*piVar8 != '#') &&
               (iVar1 = FUN_0166b2d4(param_6,iVar10,piVar8,1), iVar1 != 0)) {
LAB_01669a80:
              if ((char)*piVar8 != '#') goto LAB_01669c58;
              uVar14 = FUN_01675564(piVar8,piVar7);
              FUN_0166b578(&local_60,param_3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),iVar10,
                           param_7,param_10);
              piVar7 = local_58;
              if (local_60 != (int *)0x8000000a) goto LAB_0166aa14;
              if (local_5c != (int *)0x0) {
                local_b0 = local_58;
                FUN_0166b99c(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11);
                if (local_60 != (int *)0x8000000a) {
                  param_1[1] = local_5c;
                  param_1[2] = local_58;
                  param_1[3] = local_54;
                  param_1[4] = piStack_50;
                  param_1[5] = local_4c;
                  param_1[6] = piStack_48;
                  param_1[7] = piStack_44;
                  param_1[8] = local_40;
                  param_1[9] = local_3c;
                  param_1[10] = piStack_38;
                  param_1[0xb] = piStack_34;
                  param_1[0xc] = piStack_30;
                  param_1[0xd] = local_2c;
                  *param_1 = local_60;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar10 = *piVar7;
                    bVar13 = (bool)hasExclusiveAccess(piVar7);
                  } while (!bVar13);
                  *piVar7 = iVar10 + -1;
                  goto LAB_0166b050;
                }
                DataMemoryBarrier(0xb);
                do {
                  iVar1 = *piVar7;
                  bVar13 = (bool)hasExclusiveAccess(piVar7);
                } while (!bVar13);
                *piVar7 = iVar1 + -1;
                goto LAB_01669c40;
              }
            }
          }
          else {
            iVar1 = FUN_0166b2d4(param_6,iVar10,piVar8,piVar7);
            if (iVar1 != 0) {
              if (piVar7 != (int *)0x0) goto LAB_01669a80;
LAB_01669c58:
              piVar9 = *(int **)(iVar10 + 0x18);
              if (*(int **)(iVar10 + 0x20) != (int *)0x0) {
                piVar9 = *(int **)(iVar10 + 0x20);
              }
              if (piVar9 != *(int **)(iVar10 + 0x10)) {
                FUN_006666fc(&local_d8,*(undefined4 *)(iVar10 + 0xc));
                local_cc = *local_12c;
                uStack_c8 = *(undefined4 *)(iVar10 + 0x18);
                uStack_c4 = *(undefined4 *)(iVar10 + 0x1c);
                local_c0 = *(undefined4 *)(iVar10 + 0x20);
                uStack_bc = *(undefined4 *)(iVar10 + 0x24);
                uStack_b8 = *(undefined4 *)(iVar10 + 0x28);
                uStack_b4 = *(undefined4 *)(iVar10 + 0x2c);
                FUN_01343738(&local_d8);
                FUN_0166b864(&local_60,piVar8,piVar7);
                uVar5 = local_d4;
                if (local_60 == (int *)0x0) {
                  piVar11 = (int *)0x0;
                  piVar9 = piVar8;
                  piVar12 = piVar7;
                }
                else {
                  local_150 = local_54;
                  piVar9 = local_60;
                  piVar11 = local_58;
                  piVar12 = local_5c;
                }
                local_80 = local_cc;
                uStack_7c = uStack_c8;
                uStack_78 = uStack_c4;
                local_74 = local_c0;
                uStack_70 = uStack_bc;
                uStack_6c = uStack_b8;
                uStack_68 = uStack_b4;
                local_84 = local_d0;
                local_88 = local_d4;
                FUN_0166e138(&local_60,param_7,&local_88,piVar9,piVar12);
                piVar9 = local_5c;
                if (local_60 == (int *)0x8000000a) {
                  FUN_006666fc(&local_b0,local_5c[3],local_5c[4]);
                  local_a4 = (int *)piVar9[5];
                  piStack_a0 = (int *)piVar9[6];
                  local_9c = (int *)piVar9[7];
                  local_98 = (int *)piVar9[8];
                  piStack_94 = (int *)piVar9[9];
                  piStack_90 = (int *)piVar9[10];
                  piStack_8c = (int *)piVar9[0xb];
                  DataMemoryBarrier(0xb);
                  do {
                    iVar1 = *piVar9;
                    bVar13 = (bool)hasExclusiveAccess(piVar9);
                  } while (!bVar13);
                  *piVar9 = iVar1 + -1;
                  if (iVar1 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_01670d04(piVar9);
                  }
                  if (piVar11 != (int *)0x0) {
                    iVar1 = FUN_01343a60(piVar11,local_150);
                    if (iVar1 == 0) {
                      FUN_016702b8(piVar11,local_150,param_8);
                      uVar14 = FUN_0167127c(*(undefined4 *)(param_8 + 4),
                                            *(undefined4 *)(param_8 + 8));
                      FUN_01675b40(&local_60,&local_b0,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20))
                      ;
                      FUN_019bb7e0(local_b0,local_ac);
                      local_b0 = local_60;
                      local_ac = local_5c;
                      local_a8 = local_58;
                      local_a4 = local_54;
                      piStack_a0 = piStack_50;
                      local_9c = local_4c;
                      local_98 = piStack_48;
                      piStack_94 = piStack_44;
                      piStack_90 = local_40;
                      piStack_8c = local_3c;
                      *(undefined4 *)(param_8 + 8) = 0;
                    }
                    else {
                      FUN_01675b40(&local_60,&local_b0,piVar11,local_150);
                      FUN_019bb7e0(local_b0,local_ac);
                      local_b0 = local_60;
                      local_ac = local_5c;
                      local_a8 = local_58;
                      local_a4 = local_54;
                      piStack_a0 = piStack_50;
                      local_9c = local_4c;
                      local_98 = piStack_48;
                      piStack_94 = piStack_44;
                      piStack_90 = local_40;
                      piStack_8c = local_3c;
                    }
                  }
                  local_100 = local_b0;
                  piStack_fc = local_ac;
                  piStack_f8 = local_a8;
                  local_f4 = local_a4;
                  piStack_f0 = piStack_a0;
                  local_ec = local_9c;
                  local_e8 = local_98;
                  piStack_e4 = piStack_94;
                  piStack_e0 = piStack_90;
                  piStack_dc = piStack_8c;
                  FUN_019bb7e0(local_d8,local_d4);
                  goto LAB_0166a048;
                }
                param_1[2] = local_58;
                param_1[3] = local_54;
                param_1[4] = piStack_50;
                param_1[5] = local_4c;
                param_1[6] = piStack_48;
                param_1[7] = piStack_44;
                param_1[8] = local_40;
                param_1[9] = local_3c;
                param_1[10] = piStack_38;
                param_1[0xb] = piStack_34;
                param_1[0xc] = piStack_30;
                param_1[0xd] = local_2c;
                goto LAB_0166affc;
              }
              local_b0 = *(int **)(iVar10 + 0xc);
              local_a8 = (int *)*local_12c;
              local_a4 = *(int **)(iVar10 + 0x18);
              piStack_a0 = *(int **)(iVar10 + 0x1c);
              local_9c = *(int **)(iVar10 + 0x20);
              local_98 = *(int **)(iVar10 + 0x24);
              piStack_94 = *(int **)(iVar10 + 0x28);
              piStack_90 = *(int **)(iVar10 + 0x2c);
              local_ac = *(int **)(iVar10 + 0x10);
              FUN_0166e138(&local_60,param_7,&local_b0,piVar8,piVar7);
              piVar9 = local_5c;
              if (local_60 != (int *)0x8000000a) goto LAB_0166acec;
              FUN_006666fc(&local_100,local_5c[3],local_5c[4]);
              local_f4 = (int *)piVar9[5];
              piStack_f0 = (int *)piVar9[6];
              local_ec = (int *)piVar9[7];
              local_e8 = (int *)piVar9[8];
              piStack_e4 = (int *)piVar9[9];
              piStack_e0 = (int *)piVar9[10];
              piStack_dc = (int *)piVar9[0xb];
              DataMemoryBarrier(0xb);
              do {
                iVar1 = *piVar9;
                bVar13 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar13);
              *piVar9 = iVar1 + -1;
              if (iVar1 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01670d04(piVar9);
              }
LAB_0166a048:
              uVar5 = 0;
              if ((int)piVar7 < 0) {
LAB_0166b06c:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar5,local_14c);
              }
              if (piVar7 == (int *)0x0) {
                piVar9 = (int *)0x0;
                local_14c = (int *)&DAT_00000001;
              }
              else {
                uVar5 = 1;
                local_14c = (int *)FUN_01298504(piVar7,1);
                if (local_14c == (int *)0x0) {
                  local_14c = piVar7;
                  goto LAB_0166b06c;
                }
                piVar9 = piVar7;
              }
              FUN_01bed4e2(local_14c,piVar8,piVar7);
              local_54 = local_100;
              piStack_50 = piStack_fc;
              local_4c = piStack_f8;
              piStack_48 = local_f4;
              piStack_44 = piStack_f0;
              local_40 = local_ec;
              local_3c = local_e8;
              piStack_38 = piStack_e4;
              piStack_34 = piStack_e0;
              piStack_30 = piStack_dc;
              local_2c = local_2c & 0xffffff00;
              local_60 = piVar9;
              local_5c = local_14c;
              local_58 = piVar7;
              FUN_0166f1d0(param_5,&local_60);
            }
          }
        }
      }
    }
    goto LAB_0166afc4;
  }
  pcVar2 = (char *)FUN_0196b3a8(iVar1,*(undefined4 *)(param_4 + 8),"$ref~!",4);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x03')) goto LAB_0166a3b8;
  piVar7 = *(int **)(pcVar2 + 0xc);
  piVar8 = *(int **)(pcVar2 + 8);
  if (&DAT_0000001d < piVar7) {
    iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",piVar8,0x1e);
    if (iVar1 != 0) goto LAB_0166a334;
LAB_0166a3ac:
    *param_9 = 1;
  }
  else {
    if (piVar7 == (int *)&DAT_0000001d) {
LAB_0166a334:
      iVar1 = thunk_FUN_01bed842("http://json-schema.org/draft-",piVar8,0x1d);
      if (iVar1 == 0) goto LAB_0166a3ac;
    }
    if ((0x1d < *(uint *)(iVar10 + 0x10)) &&
       (iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",*(undefined4 *)(iVar10 + 0xc),
                                   0x1e), iVar1 == 0)) goto LAB_0166a3ac;
    if (piVar7 == (int *)&DAT_00000001) {
      if (((char)*piVar8 != '#') && (iVar1 = FUN_0166b2d4(param_6,iVar10,piVar8,1), iVar1 != 0)) {
LAB_0166a4b8:
        if ((char)*piVar8 != '#') goto LAB_0166a6d0;
        uVar14 = FUN_01675564(piVar8,piVar7);
        FUN_0166b578(&local_60,param_3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),iVar10,param_7,
                     param_10);
        piVar7 = local_58;
        if (local_60 != (int *)0x8000000a) {
          param_1[3] = local_54;
          param_1[4] = piStack_50;
          param_1[5] = local_4c;
          param_1[6] = piStack_48;
          param_1[7] = piStack_44;
          goto LAB_0166a9a0;
        }
        if (local_5c != (int *)0x0) {
          local_b0 = local_58;
          FUN_0166b99c(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11);
          if (local_60 != (int *)0x8000000a) {
            param_1[1] = local_5c;
            param_1[2] = local_58;
            param_1[3] = local_54;
            param_1[4] = piStack_50;
            param_1[5] = local_4c;
            param_1[6] = piStack_48;
            param_1[7] = piStack_44;
            param_1[8] = local_40;
            param_1[9] = local_3c;
            param_1[10] = piStack_38;
            param_1[0xb] = piStack_34;
            param_1[0xc] = piStack_30;
            param_1[0xd] = local_2c;
            *param_1 = local_60;
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar7;
              bVar13 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar13);
            *piVar7 = iVar10 + -1;
            goto LAB_0166b050;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar7;
            bVar13 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar13);
          *piVar7 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670d04(piVar7);
          }
        }
      }
    }
    else {
      iVar1 = FUN_0166b2d4(param_6,iVar10,piVar8,piVar7);
      if (iVar1 != 0) {
        if (piVar7 != (int *)0x0) goto LAB_0166a4b8;
LAB_0166a6d0:
        piVar9 = *(int **)(iVar10 + 0x18);
        if (*(int **)(iVar10 + 0x20) != (int *)0x0) {
          piVar9 = *(int **)(iVar10 + 0x20);
        }
        if (piVar9 == *(int **)(iVar10 + 0x10)) {
          local_b0 = *(int **)(iVar10 + 0xc);
          local_a8 = (int *)*local_12c;
          local_a4 = *(int **)(iVar10 + 0x18);
          piStack_a0 = *(int **)(iVar10 + 0x1c);
          local_9c = *(int **)(iVar10 + 0x20);
          local_98 = *(int **)(iVar10 + 0x24);
          piStack_94 = *(int **)(iVar10 + 0x28);
          piStack_90 = *(int **)(iVar10 + 0x2c);
          local_ac = *(int **)(iVar10 + 0x10);
          FUN_0166e138(&local_60,param_7,&local_b0,piVar8,piVar7);
          if (local_60 != (int *)0x8000000a) {
            param_1[2] = local_58;
            param_1[3] = local_54;
            param_1[4] = piStack_50;
            param_1[5] = local_4c;
            param_1[6] = piStack_48;
            param_1[7] = piStack_44;
            param_1[8] = local_40;
            param_1[9] = local_3c;
            param_1[10] = piStack_38;
            param_1[0xb] = piStack_34;
            param_1[0xc] = piStack_30;
            param_1[0xd] = local_2c;
            *param_1 = local_60;
            param_1[1] = local_5c;
            return;
          }
          FUN_006666fc(&local_100,local_5c[3],local_5c[4]);
          local_f4 = (int *)local_5c[5];
          piStack_f0 = (int *)local_5c[6];
          local_ec = (int *)local_5c[7];
          local_e8 = (int *)local_5c[8];
          piStack_e4 = (int *)local_5c[9];
          piStack_e0 = (int *)local_5c[10];
          piStack_dc = (int *)local_5c[0xb];
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *local_5c;
            bVar13 = (bool)hasExclusiveAccess(local_5c);
          } while (!bVar13);
          *local_5c = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670d04(local_5c);
          }
        }
        else {
          FUN_006666fc(&local_d8,*(undefined4 *)(iVar10 + 0xc));
          local_cc = *local_12c;
          uStack_c8 = *(undefined4 *)(iVar10 + 0x18);
          uStack_c4 = *(undefined4 *)(iVar10 + 0x1c);
          local_c0 = *(undefined4 *)(iVar10 + 0x20);
          uStack_bc = *(undefined4 *)(iVar10 + 0x24);
          uStack_b8 = *(undefined4 *)(iVar10 + 0x28);
          uStack_b4 = *(undefined4 *)(iVar10 + 0x2c);
          FUN_01343738(&local_d8);
          FUN_0166b864(&local_60,piVar8,piVar7);
          uVar5 = local_d4;
          if (local_60 == (int *)0x0) {
            local_13c = (int *)0x0;
            piVar9 = piVar8;
            local_134 = piVar7;
          }
          else {
            local_134 = local_5c;
            local_13c = local_58;
            local_144 = local_54;
            piVar9 = local_60;
          }
          local_80 = local_cc;
          uStack_7c = uStack_c8;
          uStack_78 = uStack_c4;
          local_74 = local_c0;
          uStack_70 = uStack_bc;
          uStack_6c = uStack_b8;
          uStack_68 = uStack_b4;
          local_84 = local_d0;
          local_88 = local_d4;
          FUN_0166e138(&local_60,param_7,&local_88,piVar9,local_134);
          piVar9 = local_5c;
          if (local_60 != (int *)0x8000000a) {
            param_1[2] = local_58;
            param_1[3] = local_54;
            param_1[4] = piStack_50;
            param_1[5] = local_4c;
            param_1[6] = piStack_48;
            param_1[7] = piStack_44;
            param_1[8] = local_40;
            param_1[9] = local_3c;
            param_1[10] = piStack_38;
            param_1[0xb] = piStack_34;
            param_1[0xc] = piStack_30;
            param_1[0xd] = local_2c;
            *param_1 = local_60;
            param_1[1] = local_5c;
            goto LAB_0166b004;
          }
          FUN_006666fc(&local_b0,local_5c[3],local_5c[4]);
          local_a4 = (int *)piVar9[5];
          piStack_a0 = (int *)piVar9[6];
          local_9c = (int *)piVar9[7];
          local_98 = (int *)piVar9[8];
          piStack_94 = (int *)piVar9[9];
          piStack_90 = (int *)piVar9[10];
          piStack_8c = (int *)piVar9[0xb];
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar9;
            bVar13 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar13);
          *piVar9 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670d04(piVar9);
          }
          if (local_13c != (int *)0x0) {
            iVar1 = FUN_01343a60(local_13c,local_144);
            if (iVar1 == 0) {
              FUN_016702b8(local_13c,local_144,param_8);
              uVar14 = FUN_0167127c(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
              FUN_01675b40(&local_60,&local_b0,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
              FUN_019bb7e0(local_b0,local_ac);
              local_b0 = local_60;
              local_ac = local_5c;
              local_a8 = local_58;
              local_a4 = local_54;
              piStack_a0 = piStack_50;
              local_9c = local_4c;
              local_98 = piStack_48;
              piStack_94 = piStack_44;
              piStack_90 = local_40;
              piStack_8c = local_3c;
              *(undefined4 *)(param_8 + 8) = 0;
            }
            else {
              FUN_01675b40(&local_60,&local_b0,local_13c,local_144);
              FUN_019bb7e0(local_b0,local_ac);
              local_b0 = local_60;
              local_ac = local_5c;
              local_a8 = local_58;
              local_a4 = local_54;
              piStack_a0 = piStack_50;
              local_9c = local_4c;
              local_98 = piStack_48;
              piStack_94 = piStack_44;
              piStack_90 = local_40;
              piStack_8c = local_3c;
            }
          }
          local_100 = local_b0;
          piStack_fc = local_ac;
          piStack_f8 = local_a8;
          local_f4 = local_a4;
          piStack_f0 = piStack_a0;
          local_ec = local_9c;
          local_e8 = local_98;
          piStack_e4 = piStack_94;
          piStack_e0 = piStack_90;
          piStack_dc = piStack_8c;
          FUN_019bb7e0(local_d8,local_d4);
        }
        FUN_0166b924(&local_b0,piVar8,piVar7);
        local_54 = local_100;
        piStack_50 = piStack_fc;
        local_4c = piStack_f8;
        piStack_48 = local_f4;
        piStack_44 = piStack_f0;
        local_40 = local_ec;
        local_3c = local_e8;
        piStack_38 = piStack_e4;
        piStack_34 = piStack_e0;
        piStack_30 = piStack_dc;
        local_60 = local_b0;
        local_5c = local_ac;
        local_58 = local_a8;
        local_2c = local_2c & 0xffffff00;
        FUN_0166f1d0(param_5);
      }
    }
  }
LAB_0166a3b8:
  pcVar2 = (char *)FUN_0196b3a8(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8),"$schema",
                                7);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x03')) goto LAB_0166afc4;
  piVar8 = *(int **)(pcVar2 + 0xc);
  piVar7 = *(int **)(pcVar2 + 8);
  if (&DAT_0000001d < piVar8) {
    iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",piVar7,0x1e);
    if (iVar1 == 0) goto LAB_0166afc4;
LAB_0166a418:
    iVar1 = thunk_FUN_01bed842("http://json-schema.org/draft-",piVar7,0x1d);
    if (iVar1 == 0) goto LAB_0166afc4;
  }
  else if (piVar8 == (int *)&DAT_0000001d) goto LAB_0166a418;
  if ((0x1d < *(uint *)(iVar10 + 0x10)) &&
     (iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",*(undefined4 *)(iVar10 + 0xc),0x1e
                                ), iVar1 == 0)) goto LAB_0166afc4;
  if (piVar8 == (int *)&DAT_00000001) {
    if ((char)*piVar7 == '#') goto LAB_0166afc4;
    iVar6 = *param_2;
    iVar1 = FUN_0166b2d4(param_6,iVar6,piVar7,1);
    if (iVar1 == 0) goto LAB_0166afc4;
LAB_0166a5d8:
    if ((char)*piVar7 == '#') {
      uVar14 = FUN_01675564(piVar7,piVar8);
      FUN_0166b578(&local_60,param_3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),iVar6,param_7,
                   param_10);
      piVar7 = local_58;
      if (local_60 != (int *)0x8000000a) {
        param_1[3] = local_54;
        param_1[4] = piStack_50;
        param_1[5] = local_4c;
        param_1[6] = piStack_48;
        param_1[7] = piStack_44;
LAB_0166a9a0:
        param_1[8] = local_40;
        param_1[9] = local_3c;
        param_1[10] = piStack_38;
        param_1[0xb] = piStack_34;
        param_1[0xc] = piStack_30;
        param_1[0xd] = local_2c;
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        return;
      }
      if (local_5c == (int *)0x0) goto LAB_0166afc4;
      local_b0 = local_58;
      FUN_0166b99c(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
      if (local_60 == (int *)0x8000000a) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar7;
          bVar13 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar13);
        *piVar7 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01670d04(piVar7);
        }
        goto LAB_0166afc4;
      }
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = piStack_50;
      param_1[5] = local_4c;
      param_1[6] = piStack_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      *param_1 = local_60;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar7;
        bVar13 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar13);
      *piVar7 = iVar10 + -1;
      goto LAB_0166b050;
    }
  }
  else {
    iVar6 = *param_2;
    iVar1 = FUN_0166b2d4(param_6,iVar6,piVar7,piVar8);
    if (iVar1 == 0) goto LAB_0166afc4;
    if (piVar8 != (int *)0x0) goto LAB_0166a5d8;
  }
  piVar9 = *(int **)(iVar10 + 0x18);
  if (*(int **)(iVar10 + 0x20) != (int *)0x0) {
    piVar9 = *(int **)(iVar10 + 0x20);
  }
  if (piVar9 == *(int **)(iVar10 + 0x10)) {
    local_b0 = *(int **)(iVar10 + 0xc);
    local_a8 = (int *)*local_12c;
    local_a4 = *(int **)(iVar10 + 0x18);
    piStack_a0 = *(int **)(iVar10 + 0x1c);
    local_9c = *(int **)(iVar10 + 0x20);
    local_98 = *(int **)(iVar10 + 0x24);
    piStack_94 = *(int **)(iVar10 + 0x28);
    piStack_90 = *(int **)(iVar10 + 0x2c);
    local_ac = *(int **)(iVar10 + 0x10);
    FUN_0166e138(&local_60,param_7,&local_b0,piVar7,piVar8);
    piVar9 = local_5c;
    if (local_60 != (int *)0x8000000a) {
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = piStack_50;
      param_1[5] = local_4c;
      param_1[6] = piStack_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      *param_1 = local_60;
      param_1[1] = local_5c;
      return;
    }
    FUN_006666fc(&local_100,local_5c[3],local_5c[4]);
    local_f4 = (int *)piVar9[5];
    piStack_f0 = (int *)piVar9[6];
    local_ec = (int *)piVar9[7];
    local_e8 = (int *)piVar9[8];
    piStack_e4 = (int *)piVar9[9];
    piStack_e0 = (int *)piVar9[10];
    piStack_dc = (int *)piVar9[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar9;
      bVar13 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar13);
    *piVar9 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar9);
    }
  }
  else {
    FUN_006666fc(&local_d8,*(undefined4 *)(iVar10 + 0xc));
    local_cc = *local_12c;
    uStack_c8 = *(undefined4 *)(iVar10 + 0x18);
    uStack_c4 = *(undefined4 *)(iVar10 + 0x1c);
    local_c0 = *(undefined4 *)(iVar10 + 0x20);
    uStack_bc = *(undefined4 *)(iVar10 + 0x24);
    uStack_b8 = *(undefined4 *)(iVar10 + 0x28);
    uStack_b4 = *(undefined4 *)(iVar10 + 0x2c);
    FUN_01343738(&local_d8);
    FUN_0166b864(&local_60,piVar7,piVar8);
    uVar5 = local_d4;
    if (local_60 == (int *)0x0) {
      local_128 = (int *)0x0;
      piVar9 = piVar7;
      piVar11 = piVar8;
    }
    else {
      local_128 = local_58;
      local_12c = local_54;
      piVar9 = local_60;
      piVar11 = local_5c;
    }
    local_80 = local_cc;
    uStack_7c = uStack_c8;
    uStack_78 = uStack_c4;
    local_74 = local_c0;
    uStack_70 = uStack_bc;
    uStack_6c = uStack_b8;
    uStack_68 = uStack_b4;
    local_84 = local_d0;
    local_88 = local_d4;
    FUN_0166e138(&local_60,param_7,&local_88,piVar9,piVar11);
    piVar9 = local_5c;
    if (local_60 != (int *)0x8000000a) {
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = piStack_50;
      param_1[5] = local_4c;
      param_1[6] = piStack_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      *param_1 = local_60;
LAB_0166b000:
      param_1[1] = local_5c;
LAB_0166b004:
      FUN_019bb7e0(local_d8,uVar5);
      return;
    }
    FUN_006666fc(&local_b0,local_5c[3],local_5c[4]);
    local_a4 = (int *)piVar9[5];
    piStack_a0 = (int *)piVar9[6];
    local_9c = (int *)piVar9[7];
    local_98 = (int *)piVar9[8];
    piStack_94 = (int *)piVar9[9];
    piStack_90 = (int *)piVar9[10];
    piStack_8c = (int *)piVar9[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar9;
      bVar13 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar13);
    *piVar9 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar9);
    }
    if (local_128 != (int *)0x0) {
      iVar10 = FUN_01343a60(local_128,local_12c);
      if (iVar10 == 0) {
        FUN_016702b8(local_128,local_12c,param_8);
        uVar14 = FUN_0167127c(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
        FUN_01675b40(&local_60,&local_b0,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        FUN_019bb7e0(local_b0,local_ac);
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = local_54;
        piStack_a0 = piStack_50;
        local_9c = local_4c;
        local_98 = piStack_48;
        piStack_94 = piStack_44;
        piStack_90 = local_40;
        piStack_8c = local_3c;
        *(undefined4 *)(param_8 + 8) = 0;
      }
      else {
        FUN_01675b40(&local_60,&local_b0,local_128,local_12c);
        FUN_019bb7e0(local_b0,local_ac);
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = local_54;
        piStack_a0 = piStack_50;
        local_9c = local_4c;
        local_98 = piStack_48;
        piStack_94 = piStack_44;
        piStack_90 = local_40;
        piStack_8c = local_3c;
      }
    }
    local_100 = local_b0;
    piStack_fc = local_ac;
    piStack_f8 = local_a8;
    local_f4 = local_a4;
    piStack_f0 = piStack_a0;
    local_ec = local_9c;
    local_e8 = local_98;
    piStack_e4 = piStack_94;
    piStack_e0 = piStack_90;
    piStack_dc = piStack_8c;
    FUN_019bb7e0(local_d8,local_d4);
  }
  FUN_0166b924(&local_b0,piVar7,piVar8);
  local_54 = local_100;
  piStack_50 = piStack_fc;
  local_4c = piStack_f8;
  piStack_48 = local_f4;
  piStack_44 = piStack_f0;
  local_40 = local_ec;
  local_3c = local_e8;
  piStack_38 = piStack_e4;
  piStack_34 = piStack_e0;
  piStack_30 = piStack_dc;
  local_60 = local_b0;
  local_5c = local_ac;
  local_58 = local_a8;
  local_2c = CONCAT31(local_2c._1_3_,1);
  FUN_0166f1d0(param_5);
LAB_0166afc4:
  *param_1 = 0x8000000a;
  return;
LAB_016698dc:
  if (*(int *)(iVar1 + 8) != 7) goto LAB_01669880;
  uVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),"$schema",7);
  bVar13 = uVar3 != 0;
  if (!bVar13) {
    uVar3 = (uint)*pbVar4;
  }
  if (bVar13 || uVar3 != 3) goto LAB_01669880;
  piVar7 = *(int **)(pbVar4 + 0xc);
  piVar8 = *(int **)(pbVar4 + 8);
  if (&DAT_0000001d < piVar7) {
    iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",piVar8,0x1e);
    if (iVar1 == 0) goto LAB_01669880;
LAB_016699e4:
    iVar1 = thunk_FUN_01bed842("http://json-schema.org/draft-",piVar8,0x1d);
    if (iVar1 == 0) goto LAB_01669880;
  }
  else if (piVar7 == (int *)&DAT_0000001d) goto LAB_016699e4;
  if ((0x1d < *(uint *)(iVar10 + 0x10)) &&
     (iVar1 = thunk_FUN_01bed842("https://json-schema.org/draft/",*(undefined4 *)(iVar10 + 0xc),0x1e
                                ), iVar1 == 0)) goto LAB_01669880;
  if (piVar7 == (int *)&DAT_00000001) {
    if (((char)*piVar8 == '#') || (iVar1 = FUN_0166b2d4(param_6,iVar10,piVar8,1), iVar1 == 0))
    goto LAB_01669880;
  }
  else {
    iVar1 = FUN_0166b2d4(param_6,iVar10,piVar8,piVar7);
    if (iVar1 == 0) goto LAB_01669880;
    if (piVar7 == (int *)0x0) goto LAB_01669d1c;
  }
  if ((char)*piVar8 == '#') {
    uVar14 = FUN_01675564(piVar8,piVar7);
    FUN_0166b578(&local_60,param_3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),iVar10,param_7,
                 param_10);
    piVar7 = local_58;
    if (local_60 != (int *)0x8000000a) {
LAB_0166aa14:
      param_1[3] = local_54;
      param_1[4] = piStack_50;
      param_1[5] = local_4c;
      param_1[6] = piStack_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      return;
    }
    if (local_5c == (int *)0x0) goto LAB_01669880;
    local_b0 = local_58;
    FUN_0166b99c(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11);
    if (local_60 == (int *)0x8000000a) {
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar7;
        bVar13 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar13);
      *piVar7 = iVar1 + -1;
LAB_01669c40:
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670d04(piVar7);
      }
      goto LAB_01669880;
    }
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = local_54;
    param_1[4] = piStack_50;
    param_1[5] = local_4c;
    param_1[6] = piStack_48;
    param_1[7] = piStack_44;
    param_1[8] = local_40;
    param_1[9] = local_3c;
    param_1[10] = piStack_38;
    param_1[0xb] = piStack_34;
    param_1[0xc] = piStack_30;
    param_1[0xd] = local_2c;
    *param_1 = local_60;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar7;
      bVar13 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar13);
    *piVar7 = iVar10 + -1;
LAB_0166b050:
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar7);
    }
    return;
  }
LAB_01669d1c:
  piVar9 = *(int **)(iVar10 + 0x18);
  if (*(int **)(iVar10 + 0x20) != (int *)0x0) {
    piVar9 = *(int **)(iVar10 + 0x20);
  }
  if (piVar9 == *(int **)(iVar10 + 0x10)) {
    local_b0 = *(int **)(iVar10 + 0xc);
    local_a8 = (int *)*local_12c;
    local_a4 = *(int **)(iVar10 + 0x18);
    piStack_a0 = *(int **)(iVar10 + 0x1c);
    local_9c = *(int **)(iVar10 + 0x20);
    local_98 = *(int **)(iVar10 + 0x24);
    piStack_94 = *(int **)(iVar10 + 0x28);
    piStack_90 = *(int **)(iVar10 + 0x2c);
    local_ac = *(int **)(iVar10 + 0x10);
    FUN_0166e138(&local_60,param_7,&local_b0,piVar8,piVar7);
    piVar9 = local_5c;
    if (local_60 != (int *)0x8000000a) {
LAB_0166acec:
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = piStack_50;
      param_1[5] = local_4c;
      param_1[6] = piStack_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      *param_1 = local_60;
      param_1[1] = local_5c;
      return;
    }
    FUN_006666fc(&local_100,local_5c[3],local_5c[4]);
    local_f4 = (int *)piVar9[5];
    piStack_f0 = (int *)piVar9[6];
    local_ec = (int *)piVar9[7];
    local_e8 = (int *)piVar9[8];
    piStack_e4 = (int *)piVar9[9];
    piStack_e0 = (int *)piVar9[10];
    piStack_dc = (int *)piVar9[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar9;
      bVar13 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar13);
    *piVar9 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar9);
    }
  }
  else {
    FUN_006666fc(&local_d8,*(undefined4 *)(iVar10 + 0xc));
    local_cc = *local_12c;
    uStack_c8 = *(undefined4 *)(iVar10 + 0x18);
    uStack_c4 = *(undefined4 *)(iVar10 + 0x1c);
    local_c0 = *(undefined4 *)(iVar10 + 0x20);
    uStack_bc = *(undefined4 *)(iVar10 + 0x24);
    uStack_b8 = *(undefined4 *)(iVar10 + 0x28);
    uStack_b4 = *(undefined4 *)(iVar10 + 0x2c);
    FUN_01343738(&local_d8);
    FUN_0166b864(&local_60,piVar8,piVar7);
    uVar5 = local_d4;
    if (local_60 == (int *)0x0) {
      local_150 = (int *)0x0;
      piVar9 = piVar8;
      piVar11 = piVar7;
    }
    else {
      local_150 = local_58;
      local_154 = local_54;
      piVar9 = local_60;
      piVar11 = local_5c;
    }
    local_80 = local_cc;
    uStack_7c = uStack_c8;
    uStack_78 = uStack_c4;
    local_74 = local_c0;
    uStack_70 = uStack_bc;
    uStack_6c = uStack_b8;
    uStack_68 = uStack_b4;
    local_84 = local_d0;
    local_88 = local_d4;
    FUN_0166e138(&local_60,param_7,&local_88,piVar9,piVar11);
    piVar9 = local_5c;
    if (local_60 != (int *)0x8000000a) {
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = piStack_50;
      param_1[5] = local_4c;
      param_1[6] = piStack_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
LAB_0166affc:
      *param_1 = local_60;
      goto LAB_0166b000;
    }
    FUN_006666fc(&local_b0,local_5c[3],local_5c[4]);
    local_a4 = (int *)piVar9[5];
    piStack_a0 = (int *)piVar9[6];
    local_9c = (int *)piVar9[7];
    local_98 = (int *)piVar9[8];
    piStack_94 = (int *)piVar9[9];
    piStack_90 = (int *)piVar9[10];
    piStack_8c = (int *)piVar9[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar9;
      bVar13 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar13);
    *piVar9 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar9);
    }
    if (local_150 != (int *)0x0) {
      iVar1 = FUN_01343a60(local_150,local_154);
      if (iVar1 == 0) {
        FUN_016702b8(local_150,local_154,param_8);
        uVar14 = FUN_0167127c(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
        FUN_01675b40(&local_60,&local_b0,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        FUN_019bb7e0(local_b0,local_ac);
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = local_54;
        piStack_a0 = piStack_50;
        local_9c = local_4c;
        local_98 = piStack_48;
        piStack_94 = piStack_44;
        piStack_90 = local_40;
        piStack_8c = local_3c;
        *(undefined4 *)(param_8 + 8) = 0;
      }
      else {
        FUN_01675b40(&local_60,&local_b0,local_150,local_154);
        FUN_019bb7e0(local_b0,local_ac);
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = local_54;
        piStack_a0 = piStack_50;
        local_9c = local_4c;
        local_98 = piStack_48;
        piStack_94 = piStack_44;
        piStack_90 = local_40;
        piStack_8c = local_3c;
      }
    }
    local_100 = local_b0;
    piStack_fc = local_ac;
    piStack_f8 = local_a8;
    local_f4 = local_a4;
    piStack_f0 = piStack_a0;
    local_ec = local_9c;
    local_e8 = local_98;
    piStack_e4 = piStack_94;
    piStack_e0 = piStack_90;
    piStack_dc = piStack_8c;
    FUN_019bb7e0(local_d8,local_d4);
  }
  FUN_0166b924(&local_b0,piVar8,piVar7);
  local_54 = local_100;
  piStack_50 = piStack_fc;
  local_4c = piStack_f8;
  piStack_48 = local_f4;
  piStack_44 = piStack_f0;
  local_40 = local_ec;
  local_3c = local_e8;
  piStack_38 = piStack_e4;
  piStack_34 = piStack_e0;
  piStack_30 = piStack_dc;
  local_60 = local_b0;
  local_5c = local_ac;
  local_58 = local_a8;
  local_2c = CONCAT31(local_2c._1_3_,1);
  FUN_0166f1d0(param_5);
  goto LAB_01669880;
}

