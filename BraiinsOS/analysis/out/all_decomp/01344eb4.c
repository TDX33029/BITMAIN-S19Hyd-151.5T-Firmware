// FUN_01344eb4 @ 01344eb4 size=7776 calls_out=25 calls_in=2
// strings: $schema | https://json-schema.org/draft/ | http://json-schema.org/draft- | https://json-schema.org/draft/ | https://json-schema.org/draft/ | http://json-schema.org/draft-

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01344eb4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                 undefined1 *param_9,undefined4 param_10,undefined4 param_11)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  bool bVar22;
  undefined8 uVar23;
  int *local_15c;
  int *local_154;
  int *local_150;
  int *local_13c;
  int *local_138;
  int *local_124;
  int *local_120;
  int *piStack_11c;
  int *piStack_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  uint local_100;
  int *local_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *local_ec;
  int *piStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int local_d8;
  int *local_d4;
  int *local_d0;
  int **local_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
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
  int *local_88;
  int *local_84;
  int **local_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *piStack_44;
  int *local_40;
  int *local_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  uint local_2c;
  
  local_124 = (int *)*param_2;
  uVar10 = local_124[7];
  local_13c = (int *)local_124[3];
  uVar17 = local_124[4];
  if (uVar10 != 0) {
    if (uVar10 < uVar17) {
      if (*(char *)((int)local_13c + uVar10) < -0x40) goto LAB_01344ef4;
    }
    else if (uVar10 != uVar17) {
LAB_01344ef4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_13c,uVar17,0,uVar10,&DAT_018821a4);
    }
    if ((uVar10 == 3) && (iVar3 = thunk_FUN_016dd50a(local_13c,"urn",3), iVar3 == 0))
    goto LAB_01346be8;
  }
  if (*param_4 != '\x05') {
LAB_01346be8:
    *param_1 = 0x8000000a;
    return;
  }
  piVar15 = local_124 + 5;
  uVar10 = *(uint *)(param_4 + 0xc);
  piVar11 = *(int **)(param_4 + 4);
  if (uVar10 < 3) {
    if (piVar11 == (int *)0x0) {
      uVar10 = 0;
    }
    local_114 = *(int **)(param_4 + 8);
    local_120 = (int *)(uint)(piVar11 != (int *)0x0);
    piStack_11c = (int *)0x0;
    local_10c = (int *)0x0;
    piStack_118 = piVar11;
    local_110 = local_120;
    local_108 = piVar11;
    local_104 = local_114;
    local_100 = uVar10;
LAB_0134501c:
    uVar23 = FUN_00f45584(&local_120);
    pbVar8 = (byte *)((ulonglong)uVar23 >> 0x20);
    iVar3 = (int)uVar23;
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 8) == 7) goto LAB_01345000;
      if (*(int *)(iVar3 + 8) == 4) {
        uVar10 = **(uint **)(iVar3 + 4);
        bVar22 = uVar10 == 0x66657224;
        if (bVar22) {
          uVar10 = (uint)*pbVar8;
        }
        if (bVar22 && uVar10 == 3) {
          piVar11 = *(int **)(pbVar8 + 8);
          piVar18 = *(int **)(pbVar8 + 0xc);
          if (piVar18 < &DAT_0000001e) {
            if (piVar18 == (int *)&DAT_0000001d) {
LAB_01345154:
              iVar3 = thunk_FUN_016dd50a("http://json-schema.org/draft-",piVar11,0x1d);
              if (iVar3 == 0) goto LAB_013451d8;
            }
            if ((0x1d < (uint)local_124[4]) &&
               (iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",local_124[3],0x1e),
               iVar3 == 0)) goto LAB_013451d8;
            if (piVar18 == (int *)&DAT_00000001) {
              if ((char)*piVar11 == '#') goto LAB_0134501c;
              local_154 = (int *)thunk_FUN_016d4a50(1);
              uVar5 = 1;
              piVar13 = (int *)&DAT_00000001;
              if (local_154 == (int *)0x0) goto LAB_01346d50;
              piVar13 = (int *)&DAT_00000001;
            }
            else {
              uVar5 = 0;
              piVar13 = local_154;
              if ((int)piVar18 < 0) {
LAB_01346d50:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar5,piVar13);
              }
              if (piVar18 == (int *)0x0) {
                piVar13 = (int *)0x0;
                local_154 = (int *)&DAT_00000001;
              }
              else {
                local_154 = (int *)thunk_FUN_016d4a50(piVar18);
                if (local_154 == (int *)0x0) {
                  uVar5 = 1;
                  piVar13 = piVar18;
                  goto LAB_01346d50;
                }
                piVar13 = piVar18;
              }
            }
            FUN_016dd1aa(local_154,piVar11,piVar18);
            local_60 = piVar13;
            local_5c = local_154;
            local_58 = piVar18;
            local_54 = local_124 + 2;
            iVar3 = FUN_01356d8c(param_6,&local_60);
            if (iVar3 == 0) {
              if ((piVar18 == (int *)0x0) || ((char)*piVar11 != '#')) {
                piVar13 = (int *)local_124[6];
                if ((int *)local_124[8] != (int *)0x0) {
                  piVar13 = (int *)local_124[8];
                }
                if (piVar13 == (int *)local_124[4]) {
                  local_b0 = (int *)local_124[3];
                  local_a8 = (int *)*piVar15;
                  local_a4 = (int *)local_124[6];
                  piStack_a0 = (int *)local_124[7];
                  local_9c = (int *)local_124[8];
                  local_98 = (int *)local_124[9];
                  piStack_94 = (int *)local_124[10];
                  piStack_90 = (int *)local_124[0xb];
                  local_ac = (int *)local_124[4];
                  FUN_0134ef4c(&local_60,param_7,&local_b0,piVar11,piVar18);
                  piVar21 = local_5c;
                  if (local_60 != (int *)0x8000000a) {
                    param_1[2] = local_58;
                    param_1[3] = local_54;
                    param_1[4] = local_50;
                    param_1[5] = local_4c;
                    param_1[6] = local_48;
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
                  FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
                  piVar19 = local_58;
                  piVar4 = local_5c;
                  piVar13 = local_60;
                  local_f8 = (int *)piVar21[5];
                  piStack_f4 = (int *)piVar21[6];
                  piStack_f0 = (int *)piVar21[7];
                  local_ec = (int *)piVar21[8];
                  piStack_e8 = (int *)piVar21[9];
                  piStack_e4 = (int *)piVar21[10];
                  piStack_e0 = (int *)piVar21[0xb];
                  DataMemoryBarrier(0xb);
                  do {
                    iVar3 = *piVar21;
                    bVar22 = (bool)hasExclusiveAccess(piVar21);
                  } while (!bVar22);
                  *piVar21 = iVar3 + -1;
                  if (iVar3 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_013532e4(piVar21);
                  }
                }
                else {
                  FUN_00602a1c(&local_d8,local_124[3]);
                  local_cc = (int **)*piVar15;
                  iStack_c8 = local_124[6];
                  iStack_c4 = local_124[7];
                  local_c0 = local_124[8];
                  iStack_bc = local_124[9];
                  iStack_b8 = local_124[10];
                  iStack_b4 = local_124[0xb];
                  FUN_0100baa8(&local_d8);
                  FUN_01347584(&local_60,piVar11,piVar18);
                  piVar13 = local_d4;
                  if (local_60 == (int *)0x0) {
                    piVar19 = (int *)0x0;
                    piVar4 = piVar11;
                    piVar21 = piVar18;
                  }
                  else {
                    local_15c = local_54;
                    piVar4 = local_60;
                    piVar19 = local_58;
                    piVar21 = local_5c;
                  }
                  local_80 = local_cc;
                  iStack_7c = iStack_c8;
                  iStack_78 = iStack_c4;
                  local_74 = local_c0;
                  iStack_70 = iStack_bc;
                  iStack_6c = iStack_b8;
                  iStack_68 = iStack_b4;
                  local_84 = local_d0;
                  local_88 = local_d4;
                  FUN_0134ef4c(&local_60,param_7,&local_88,piVar4,piVar21);
                  piVar4 = local_5c;
                  if (local_60 != (int *)0x8000000a) {
                    param_1[2] = local_58;
                    param_1[3] = local_54;
                    param_1[4] = local_50;
                    param_1[5] = local_4c;
                    param_1[6] = local_48;
                    param_1[7] = piStack_44;
                    param_1[8] = local_40;
                    param_1[9] = local_3c;
                    param_1[10] = piStack_38;
                    param_1[0xb] = piStack_34;
                    param_1[0xc] = piStack_30;
                    param_1[0xd] = local_2c;
                    *param_1 = local_60;
                    param_1[1] = local_5c;
                    goto LAB_01346c50;
                  }
                  FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
                  local_b0 = local_60;
                  local_ac = local_5c;
                  local_a8 = local_58;
                  FUN_016dd52c(&local_a4,piVar4 + 5,0x1c);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar3 = *piVar4;
                    bVar22 = (bool)hasExclusiveAccess(piVar4);
                  } while (!bVar22);
                  *piVar4 = iVar3 + -1;
                  if (iVar3 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_013532e4(piVar4);
                  }
                  if (piVar19 != (int *)0x0) {
                    iVar3 = FUN_01009aa0("",piVar19,local_15c);
                    if (iVar3 == 0) {
                      FUN_01357e28(piVar19,local_15c,param_8);
                      uVar23 = FUN_01357100(*(undefined4 *)(param_8 + 4),
                                            *(undefined4 *)(param_8 + 8));
                      local_88 = local_ac;
                      local_84 = local_a8;
                      local_80 = &local_a4;
                      FUN_0100bb14(&local_60,&local_88,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20))
                      ;
                      local_54 = local_a4;
                      local_50 = piStack_a0;
                      local_4c = local_9c;
                      local_48 = local_98;
                      piStack_44 = piStack_94;
                      local_40 = piStack_90;
                      local_3c = piStack_8c;
                      if (local_b0 != (int *)0x0) {
                        thunk_FUN_016d3fb4(local_ac);
                      }
                      local_b0 = local_60;
                      local_ac = local_5c;
                      local_a8 = local_58;
                      local_a4 = local_54;
                      piStack_a0 = local_50;
                      local_9c = local_4c;
                      local_98 = local_48;
                      piStack_94 = piStack_44;
                      piStack_90 = local_40;
                      piStack_8c = local_3c;
                      *(undefined4 *)(param_8 + 8) = 0;
                    }
                    else {
                      local_88 = local_ac;
                      local_84 = local_a8;
                      local_80 = &local_a4;
                      FUN_0100bb14(&local_60,&local_88,piVar19,local_15c);
                      local_54 = local_a4;
                      local_50 = piStack_a0;
                      local_4c = local_9c;
                      local_48 = local_98;
                      piStack_44 = piStack_94;
                      local_40 = piStack_90;
                      local_3c = piStack_8c;
                      if (local_b0 != (int *)0x0) {
                        thunk_FUN_016d3fb4(local_ac);
                      }
                      local_b0 = local_60;
                      local_ac = local_5c;
                      local_a8 = local_58;
                      local_a4 = local_54;
                      piStack_a0 = local_50;
                      local_9c = local_4c;
                      local_98 = local_48;
                      piStack_94 = piStack_44;
                      piStack_90 = local_40;
                      piStack_8c = local_3c;
                    }
                  }
                  piVar19 = local_a8;
                  piVar4 = local_ac;
                  piVar13 = local_b0;
                  local_f8 = local_a4;
                  piStack_f4 = piStack_a0;
                  piStack_f0 = local_9c;
                  local_ec = local_98;
                  piStack_e8 = piStack_94;
                  piStack_e4 = piStack_90;
                  piStack_e0 = piStack_8c;
                  if (local_d8 != 0) {
                    thunk_FUN_016d3fb4(local_d4);
                  }
                }
                FUN_01351b58(&local_b0,piVar18,1,1);
                piVar2 = local_a8;
                piVar21 = local_ac;
                if (local_b0 == (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_ac,local_a8);
                }
                FUN_016dd1aa(local_a8,piVar11,piVar18);
                local_48 = local_f8;
                piStack_44 = piStack_f4;
                local_40 = piStack_f0;
                local_3c = local_ec;
                piStack_38 = piStack_e8;
                piStack_34 = piStack_e4;
                piStack_30 = piStack_e0;
                local_2c = local_2c & 0xffffff00;
                local_60 = piVar21;
                local_5c = piVar2;
                local_58 = piVar18;
                local_54 = piVar13;
                local_50 = piVar4;
                local_4c = piVar19;
                FUN_01355ffc(param_5,&local_60);
              }
              else {
                uVar23 = FUN_01353340(piVar11,piVar18);
                FUN_013470e8(&local_60,param_3,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                             local_124,param_7,param_10);
                piVar11 = local_58;
                if (local_60 != (int *)0x8000000a) goto LAB_01346884;
                if (local_5c != (int *)0x0) {
                  local_b0 = local_58;
                  FUN_01347604(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11);
                  if (local_60 != (int *)0x8000000a) {
                    *param_1 = local_60;
                    param_1[1] = local_5c;
                    param_1[2] = local_58;
                    param_1[3] = local_54;
                    param_1[4] = local_50;
                    param_1[5] = local_4c;
                    param_1[6] = local_48;
                    param_1[7] = piStack_44;
                    param_1[8] = local_40;
                    param_1[9] = local_3c;
                    param_1[10] = piStack_38;
                    param_1[0xb] = piStack_34;
                    param_1[0xc] = piStack_30;
                    param_1[0xd] = local_2c;
                    DataMemoryBarrier(0xb);
                    do {
                      iVar3 = *piVar11;
                      bVar22 = (bool)hasExclusiveAccess(piVar11);
                    } while (!bVar22);
                    *piVar11 = iVar3 + -1;
                    goto LAB_01346cd4;
                  }
                  DataMemoryBarrier(0xb);
                  do {
                    iVar3 = *piVar11;
                    bVar22 = (bool)hasExclusiveAccess(piVar11);
                  } while (!bVar22);
                  *piVar11 = iVar3 + -1;
                  goto LAB_013455b0;
                }
              }
            }
            goto LAB_0134501c;
          }
          iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",piVar11,0x1e);
          if (iVar3 != 0) goto LAB_01345154;
LAB_013451d8:
          *param_9 = 1;
        }
      }
      goto LAB_0134501c;
    }
    goto LAB_01346be8;
  }
  if (piVar11 == (int *)0x0) goto LAB_01346be8;
  iVar3 = *(int *)(param_4 + 8);
  while( true ) {
    uVar1 = *(ushort *)((int)piVar11 + 0x192);
    piVar18 = piVar11 + 0x43;
    uVar10 = 0xffffffff;
    iVar16 = (uint)uVar1 * 0xc;
    do {
      if (iVar16 == 0) {
        uVar10 = (uint)uVar1;
        goto LAB_01345ce8;
      }
      uVar14 = piVar18[2];
      uVar9 = uVar14;
      if (3 < uVar14) {
        uVar9 = 4;
      }
      iVar6 = FUN_016dd50a("$ref~!",piVar18[1],uVar9);
      if (iVar6 == 0) {
        iVar6 = 4 - uVar14;
      }
      iVar16 = iVar16 + -0xc;
      uVar10 = uVar10 + 1;
      piVar18 = piVar18 + 3;
    } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
    if (0 < iVar6 == iVar6 < 0) break;
LAB_01345ce8:
    if (iVar3 == 0) goto LAB_01345dd4;
    iVar3 = iVar3 + -1;
    piVar11 = (int *)piVar11[uVar10 + 0x66];
  }
  piVar11 = piVar11 + uVar10 * 6;
  if ((char)*piVar11 != '\x03') goto LAB_01345dd4;
  piVar18 = (int *)piVar11[2];
  piVar11 = (int *)piVar11[3];
  if (&DAT_0000001d < piVar11) {
    iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",piVar18,0x1e);
    if (iVar3 != 0) goto LAB_01345d54;
  }
  else {
    if (piVar11 == (int *)&DAT_0000001d) {
LAB_01345d54:
      iVar3 = thunk_FUN_016dd50a("http://json-schema.org/draft-",piVar18,0x1d);
      if (iVar3 == 0) goto LAB_01345dc8;
    }
    if ((uVar17 < 0x1e) ||
       (iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",local_13c,0x1e), iVar3 != 0)) {
      if (piVar11 == (int *)&DAT_00000001) {
        if (((char)*piVar18 == '#') ||
           (iVar3 = FUN_01347050(param_6,local_124,piVar18,1), iVar3 == 0)) goto LAB_01345dd4;
LAB_01345f94:
        if ((char)*piVar18 == '#') {
          uVar23 = FUN_01353340(piVar18,piVar11);
          FUN_013470e8(&local_60,param_3,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_124,
                       param_7,param_10);
          piVar11 = local_58;
          if (local_60 != (int *)0x8000000a) {
            param_1[3] = local_54;
            param_1[4] = local_50;
            param_1[5] = local_4c;
            param_1[6] = local_48;
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
          if (local_5c != (int *)0x0) {
            local_b0 = local_58;
            FUN_01347604(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11);
            if (local_60 != (int *)0x8000000a) {
              *param_1 = local_60;
              param_1[1] = local_5c;
              param_1[2] = local_58;
              param_1[3] = local_54;
              param_1[4] = local_50;
              param_1[5] = local_4c;
              param_1[6] = local_48;
              param_1[7] = piStack_44;
              param_1[8] = local_40;
              param_1[9] = local_3c;
              param_1[10] = piStack_38;
              param_1[0xb] = piStack_34;
              param_1[0xc] = piStack_30;
              param_1[0xd] = local_2c;
              DataMemoryBarrier(0xb);
              do {
                iVar3 = *piVar11;
                bVar22 = (bool)hasExclusiveAccess(piVar11);
              } while (!bVar22);
              *piVar11 = iVar3 + -1;
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_013532e4(piVar11);
                return;
              }
              return;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar11;
              bVar22 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar22);
            *piVar11 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013532e4(piVar11);
            }
          }
          goto LAB_01345dd4;
        }
      }
      else {
        iVar3 = FUN_01347050(param_6,local_124,piVar18,piVar11);
        if (iVar3 == 0) goto LAB_01345dd4;
        if (piVar11 != (int *)0x0) goto LAB_01345f94;
      }
      local_ac = (int *)local_124[4];
      piVar13 = (int *)local_124[6];
      if ((int *)local_124[8] != (int *)0x0) {
        piVar13 = (int *)local_124[8];
      }
      if (piVar13 == local_ac) {
        local_b0 = (int *)local_124[3];
        local_a8 = (int *)*piVar15;
        local_a4 = (int *)local_124[6];
        piStack_a0 = (int *)local_124[7];
        local_9c = (int *)local_124[8];
        local_98 = (int *)local_124[9];
        piStack_94 = (int *)local_124[10];
        piStack_90 = (int *)local_124[0xb];
        FUN_0134ef4c(&local_60,param_7,&local_b0,piVar18,piVar11);
        piVar19 = local_5c;
        if (local_60 != (int *)0x8000000a) {
          param_1[2] = local_58;
          param_1[3] = local_54;
          param_1[4] = local_50;
          param_1[5] = local_4c;
          param_1[6] = local_48;
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
        FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
        piVar4 = local_58;
        piVar13 = local_5c;
        local_120 = (int *)piVar19[5];
        piStack_11c = (int *)piVar19[6];
        piStack_118 = (int *)piVar19[7];
        local_114 = (int *)piVar19[8];
        local_110 = (int *)piVar19[9];
        local_10c = (int *)piVar19[10];
        local_108 = (int *)piVar19[0xb];
        local_138 = local_60;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar19;
          bVar22 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar22);
        *piVar19 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(piVar19);
        }
      }
      else {
        FUN_00602a1c(&local_d8,local_124[3]);
        local_cc = (int **)*piVar15;
        iStack_c8 = local_124[6];
        iStack_c4 = local_124[7];
        local_c0 = local_124[8];
        iStack_bc = local_124[9];
        iStack_b8 = local_124[10];
        iStack_b4 = local_124[0xb];
        FUN_0100baa8(&local_d8);
        FUN_01347584(&local_60,piVar18,piVar11);
        piVar13 = local_d4;
        if (local_60 == (int *)0x0) {
          local_138 = (int *)0x0;
          piVar4 = piVar18;
          piVar19 = piVar11;
        }
        else {
          local_138 = local_58;
          local_13c = local_54;
          piVar4 = local_60;
          piVar19 = local_5c;
        }
        local_80 = local_cc;
        iStack_7c = iStack_c8;
        iStack_78 = iStack_c4;
        local_74 = local_c0;
        iStack_70 = iStack_bc;
        iStack_6c = iStack_b8;
        iStack_68 = iStack_b4;
        local_84 = local_d0;
        local_88 = local_d4;
        FUN_0134ef4c(&local_60,param_7,&local_88,piVar4,piVar19);
        piVar4 = local_5c;
        if (local_60 != (int *)0x8000000a) {
          param_1[2] = local_58;
          param_1[3] = local_54;
          param_1[4] = local_50;
          param_1[5] = local_4c;
          param_1[6] = local_48;
          param_1[7] = piStack_44;
          param_1[8] = local_40;
          param_1[9] = local_3c;
          param_1[10] = piStack_38;
          param_1[0xb] = piStack_34;
          param_1[0xc] = piStack_30;
          param_1[0xd] = local_2c;
          *param_1 = local_60;
          param_1[1] = local_5c;
          if (local_d8 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(piVar13);
          return;
        }
        FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        FUN_016dd52c(&local_a4,piVar4 + 5,0x1c);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar22 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar22);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(piVar4);
        }
        if (local_138 != (int *)0x0) {
          iVar3 = FUN_01009aa0("",local_138,local_13c);
          if (iVar3 == 0) {
            FUN_01357e28(local_138,local_13c,param_8);
            uVar23 = FUN_01357100(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
            local_88 = local_ac;
            local_84 = local_a8;
            local_80 = &local_a4;
            FUN_0100bb14(&local_60,&local_88,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
            local_54 = local_a4;
            local_50 = piStack_a0;
            local_4c = local_9c;
            local_48 = local_98;
            piStack_44 = piStack_94;
            local_40 = piStack_90;
            local_3c = piStack_8c;
            if (local_b0 != (int *)0x0) {
              thunk_FUN_016d3fb4(local_ac);
            }
            local_b0 = local_60;
            local_ac = local_5c;
            local_a8 = local_58;
            local_a4 = local_54;
            piStack_a0 = local_50;
            local_9c = local_4c;
            local_98 = local_48;
            piStack_94 = piStack_44;
            piStack_90 = local_40;
            piStack_8c = local_3c;
            *(undefined4 *)(param_8 + 8) = 0;
          }
          else {
            local_88 = local_ac;
            local_84 = local_a8;
            local_80 = &local_a4;
            FUN_0100bb14(&local_60,&local_88,local_138,local_13c);
            local_54 = local_a4;
            local_50 = piStack_a0;
            local_4c = local_9c;
            local_48 = local_98;
            piStack_44 = piStack_94;
            local_40 = piStack_90;
            local_3c = piStack_8c;
            if (local_b0 != (int *)0x0) {
              thunk_FUN_016d3fb4(local_ac);
            }
            local_b0 = local_60;
            local_ac = local_5c;
            local_a8 = local_58;
            local_a4 = local_54;
            piStack_a0 = local_50;
            local_9c = local_4c;
            local_98 = local_48;
            piStack_94 = piStack_44;
            piStack_90 = local_40;
            piStack_8c = local_3c;
          }
        }
        piVar4 = local_a8;
        piVar13 = local_ac;
        local_138 = local_b0;
        local_120 = local_a4;
        piStack_11c = piStack_a0;
        piStack_118 = local_9c;
        local_114 = local_98;
        local_110 = piStack_94;
        local_10c = piStack_90;
        local_108 = piStack_8c;
        if (local_d8 != 0) {
          thunk_FUN_016d3fb4(local_d4);
        }
      }
      FUN_01351b58(&local_60,piVar11,1,1);
      piVar19 = local_5c;
      if (local_60 == (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_5c,local_58);
      }
      FUN_016dd1aa(local_58,piVar18,piVar11);
      local_54 = local_138;
      local_48 = local_120;
      piStack_44 = piStack_11c;
      local_40 = piStack_118;
      local_3c = local_114;
      piStack_38 = local_110;
      piStack_34 = local_10c;
      piStack_30 = local_108;
      local_2c = local_2c & 0xffffff00;
      local_5c = local_58;
      local_60 = piVar19;
      local_58 = piVar11;
      local_50 = piVar13;
      local_4c = piVar4;
      FUN_01355ffc(param_5,&local_60);
      goto LAB_01345dd4;
    }
  }
LAB_01345dc8:
  *param_9 = 1;
LAB_01345dd4:
  iVar3 = *(int *)(param_4 + 4);
  if (iVar3 == 0) goto LAB_01346be8;
  iVar16 = *(int *)(param_4 + 8);
  while( true ) {
    uVar1 = *(ushort *)(iVar3 + 0x192);
    iVar12 = iVar3 + 0x10c;
    uVar10 = 0xffffffff;
    iVar6 = (uint)uVar1 * 0xc;
    do {
      if (iVar6 == 0) {
        uVar10 = (uint)uVar1;
        goto LAB_01345e80;
      }
      uVar9 = *(uint *)(iVar12 + 8);
      uVar17 = uVar9;
      if (6 < uVar9) {
        uVar17 = 7;
      }
      iVar7 = FUN_016dd50a("$schema",*(undefined4 *)(iVar12 + 4),uVar17);
      if (iVar7 == 0) {
        iVar7 = 7 - uVar9;
      }
      iVar6 = iVar6 + -0xc;
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 0xc;
    } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
    if (0 < iVar7 == iVar7 < 0) break;
LAB_01345e80:
    if (iVar16 == 0) goto LAB_01346be8;
    iVar16 = iVar16 + -1;
    iVar3 = *(int *)(iVar3 + uVar10 * 4 + 0x198);
  }
  pcVar20 = (char *)(iVar3 + uVar10 * 0x18);
  if (*pcVar20 != '\x03') goto LAB_01346be8;
  piVar11 = *(int **)(pcVar20 + 0xc);
  piVar18 = *(int **)(pcVar20 + 8);
  if (&DAT_0000001d < piVar11) {
    iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",piVar18,0x1e);
    if (iVar3 == 0) goto LAB_01346be8;
LAB_01345eec:
    iVar3 = thunk_FUN_016dd50a("http://json-schema.org/draft-",piVar18,0x1d);
    if (iVar3 == 0) goto LAB_01346be8;
  }
  else if (piVar11 == (int *)&DAT_0000001d) goto LAB_01345eec;
  if ((0x1d < (uint)local_124[4]) &&
     (iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",local_124[3],0x1e), iVar3 == 0))
  goto LAB_01346be8;
  if (piVar11 == (int *)&DAT_00000001) {
    if (((char)*piVar18 == '#') || (iVar3 = FUN_01347050(param_6,local_124,piVar18,1), iVar3 == 0))
    goto LAB_01346be8;
LAB_013460c0:
    if ((char)*piVar18 == '#') {
      uVar23 = FUN_01353340(piVar18,piVar11);
      FUN_013470e8(&local_60,param_3,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_124,param_7,
                   param_10);
      piVar11 = local_58;
      if (local_60 != (int *)0x8000000a) {
        param_1[3] = local_54;
        param_1[4] = local_50;
        param_1[5] = local_4c;
        param_1[6] = local_48;
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
      if (local_5c != (int *)0x0) {
        local_b0 = local_58;
        FUN_01347604(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11);
        if (local_60 == (int *)0x8000000a) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar11;
            bVar22 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar22);
          *piVar11 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_013532e4(piVar11);
          }
          goto LAB_01346be8;
        }
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        param_1[3] = local_54;
        param_1[4] = local_50;
        param_1[5] = local_4c;
        param_1[6] = local_48;
        param_1[7] = piStack_44;
        param_1[8] = local_40;
        param_1[9] = local_3c;
        param_1[10] = piStack_38;
        param_1[0xb] = piStack_34;
        param_1[0xc] = piStack_30;
        param_1[0xd] = local_2c;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar11;
          bVar22 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar22);
        *piVar11 = iVar3 + -1;
        goto LAB_01346cd4;
      }
      goto LAB_01346be8;
    }
  }
  else {
    iVar3 = FUN_01347050(param_6,local_124,piVar18,piVar11);
    if (iVar3 == 0) goto LAB_01346be8;
    if (piVar11 != (int *)0x0) goto LAB_013460c0;
  }
  piVar13 = (int *)local_124[6];
  if ((int *)local_124[8] != (int *)0x0) {
    piVar13 = (int *)local_124[8];
  }
  if (piVar13 == (int *)local_124[4]) {
    local_b0 = (int *)local_124[3];
    local_a8 = (int *)*piVar15;
    local_a4 = (int *)local_124[6];
    piStack_a0 = (int *)local_124[7];
    local_9c = (int *)local_124[8];
    local_98 = (int *)local_124[9];
    piStack_94 = (int *)local_124[10];
    piStack_90 = (int *)local_124[0xb];
    local_ac = (int *)local_124[4];
    FUN_0134ef4c(&local_60,param_7,&local_b0,piVar18,piVar11);
    piVar4 = local_5c;
    if (local_60 != (int *)0x8000000a) {
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = local_50;
      param_1[5] = local_4c;
      param_1[6] = local_48;
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
    FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
    piVar13 = local_58;
    piVar15 = local_5c;
    local_120 = (int *)piVar4[5];
    piStack_11c = (int *)piVar4[6];
    piStack_118 = (int *)piVar4[7];
    local_114 = (int *)piVar4[8];
    local_110 = (int *)piVar4[9];
    local_10c = (int *)piVar4[10];
    local_108 = (int *)piVar4[0xb];
    local_124 = local_60;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar22 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar22);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar4);
    }
  }
  else {
    FUN_00602a1c(&local_d8,local_124[3]);
    local_cc = (int **)*piVar15;
    iStack_c8 = local_124[6];
    iStack_c4 = local_124[7];
    local_c0 = local_124[8];
    iStack_bc = local_124[9];
    iStack_b8 = local_124[10];
    iStack_b4 = local_124[0xb];
    FUN_0100baa8(&local_d8);
    FUN_01347584(&local_60,piVar18,piVar11);
    piVar15 = local_d4;
    if (local_60 == (int *)0x0) {
      piVar4 = (int *)0x0;
      piVar13 = piVar18;
      piVar19 = piVar11;
    }
    else {
      local_124 = local_54;
      piVar13 = local_60;
      piVar4 = local_58;
      piVar19 = local_5c;
    }
    local_80 = local_cc;
    iStack_7c = iStack_c8;
    iStack_78 = iStack_c4;
    local_74 = local_c0;
    iStack_70 = iStack_bc;
    iStack_6c = iStack_b8;
    iStack_68 = iStack_b4;
    local_84 = local_d0;
    local_88 = local_d4;
    FUN_0134ef4c(&local_60,param_7,&local_88,piVar13,piVar19);
    piVar13 = local_5c;
    if (local_60 != (int *)0x8000000a) {
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = local_50;
      param_1[5] = local_4c;
      param_1[6] = local_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      *param_1 = local_60;
      param_1[1] = local_5c;
      if (local_d8 == 0) {
        return;
      }
      thunk_FUN_016d3fb4(piVar15);
      return;
    }
    FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
    local_a4 = (int *)piVar13[5];
    piStack_a0 = (int *)piVar13[6];
    local_9c = (int *)piVar13[7];
    local_98 = (int *)piVar13[8];
    piStack_94 = (int *)piVar13[9];
    piStack_90 = (int *)piVar13[10];
    piStack_8c = (int *)piVar13[0xb];
    local_b0 = local_60;
    local_ac = local_5c;
    local_a8 = local_58;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar13;
      bVar22 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar22);
    *piVar13 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar13);
    }
    if (piVar4 != (int *)0x0) {
      iVar3 = FUN_01009aa0("",piVar4,local_124);
      if (iVar3 == 0) {
        FUN_01357e28(piVar4,local_124,param_8);
        uVar23 = FUN_01357100(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
        local_88 = local_ac;
        local_84 = local_a8;
        local_80 = &local_a4;
        FUN_0100bb14(&local_60,&local_88,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        local_54 = local_a4;
        local_50 = piStack_a0;
        local_4c = local_9c;
        local_48 = local_98;
        piStack_44 = piStack_94;
        local_40 = piStack_90;
        local_3c = piStack_8c;
        if (local_b0 != (int *)0x0) {
          thunk_FUN_016d3fb4(local_ac);
        }
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = local_54;
        piStack_a0 = local_50;
        local_9c = local_4c;
        local_98 = local_48;
        piStack_94 = piStack_44;
        piStack_90 = local_40;
        piStack_8c = local_3c;
        *(undefined4 *)(param_8 + 8) = 0;
      }
      else {
        local_88 = local_ac;
        local_84 = local_a8;
        local_80 = &local_a4;
        FUN_0100bb14(&local_60,&local_88,piVar4,local_124);
        local_54 = local_a4;
        local_50 = piStack_a0;
        local_4c = local_9c;
        local_48 = local_98;
        piStack_44 = piStack_94;
        local_40 = piStack_90;
        local_3c = piStack_8c;
        if (local_b0 != (int *)0x0) {
          thunk_FUN_016d3fb4(local_ac);
        }
        local_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = local_54;
        piStack_a0 = local_50;
        local_9c = local_4c;
        local_98 = local_48;
        piStack_94 = piStack_44;
        piStack_90 = local_40;
        piStack_8c = local_3c;
      }
    }
    piVar13 = local_a8;
    piVar15 = local_ac;
    local_124 = local_b0;
    local_120 = local_a4;
    piStack_11c = piStack_a0;
    piStack_118 = local_9c;
    local_114 = local_98;
    local_110 = piStack_94;
    local_10c = piStack_90;
    local_108 = piStack_8c;
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(local_d4);
    }
  }
  FUN_01351b58(&local_60,piVar11,1,1);
  piVar19 = local_58;
  piVar4 = local_5c;
  if (local_60 == (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_5c,local_58);
  }
  FUN_016dd1aa(local_58,piVar18,piVar11);
  local_54 = local_124;
  local_48 = local_120;
  piStack_44 = piStack_11c;
  local_40 = piStack_118;
  local_3c = local_114;
  piStack_38 = local_110;
  piStack_34 = local_10c;
  piStack_30 = local_108;
  local_2c = CONCAT31(local_2c._1_3_,1);
  local_5c = piVar19;
  local_60 = piVar4;
  local_58 = piVar11;
  local_50 = piVar15;
  local_4c = piVar13;
  FUN_01355ffc(param_5,&local_60);
  goto LAB_01346be8;
LAB_01345000:
  iVar3 = thunk_FUN_016dd50a(*(uint **)(iVar3 + 4),"$schema",7);
  if ((iVar3 != 0) || (*pbVar8 != 3)) goto LAB_0134501c;
  piVar11 = *(int **)(pbVar8 + 8);
  piVar18 = *(int **)(pbVar8 + 0xc);
  if (&DAT_0000001d < piVar18) {
    iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",piVar11,0x1e);
    if (iVar3 == 0) goto LAB_0134501c;
LAB_013450bc:
    iVar3 = thunk_FUN_016dd50a("http://json-schema.org/draft-",piVar11,0x1d);
    if (iVar3 == 0) goto LAB_0134501c;
  }
  else if (piVar18 == (int *)&DAT_0000001d) goto LAB_013450bc;
  if (0x1d < (uint)local_124[4]) {
    iVar3 = thunk_FUN_016dd50a("https://json-schema.org/draft/",local_124[3],0x1e);
    if (iVar3 == 0) goto LAB_0134501c;
  }
  if (piVar18 == (int *)&DAT_00000001) {
    if ((char)*piVar11 == '#') goto LAB_0134501c;
    local_150 = (int *)&DAT_00000001;
    piVar4 = (int *)thunk_FUN_016d4a50();
    uVar5 = 1;
    if (piVar4 != (int *)0x0) {
      piVar13 = (int *)&DAT_00000001;
      goto LAB_0134524c;
    }
  }
  else {
    uVar5 = 0;
    if (-1 < (int)piVar18) {
      if (piVar18 == (int *)0x0) {
        piVar13 = (int *)0x0;
        piVar4 = (int *)&DAT_00000001;
      }
      else {
        piVar4 = (int *)thunk_FUN_016d4a50(piVar18);
        if (piVar4 == (int *)0x0) {
          uVar5 = 1;
          local_150 = piVar18;
          goto LAB_01346d40;
        }
        piVar13 = piVar18;
      }
LAB_0134524c:
      FUN_016dd1aa(piVar4,piVar11,piVar18);
      local_60 = piVar13;
      local_5c = piVar4;
      local_58 = piVar18;
      local_54 = local_124 + 2;
      iVar3 = FUN_01356d8c(param_6,&local_60);
      local_150 = piVar4;
      if (iVar3 != 0) goto LAB_0134501c;
      if ((piVar18 == (int *)0x0) || ((char)*piVar11 != '#')) {
        piVar13 = (int *)local_124[6];
        if ((int *)local_124[8] != (int *)0x0) {
          piVar13 = (int *)local_124[8];
        }
        if (piVar13 == (int *)local_124[4]) {
          local_b0 = (int *)local_124[3];
          local_a8 = (int *)*piVar15;
          local_a4 = (int *)local_124[6];
          piStack_a0 = (int *)local_124[7];
          local_9c = (int *)local_124[8];
          local_98 = (int *)local_124[9];
          piStack_94 = (int *)local_124[10];
          piStack_90 = (int *)local_124[0xb];
          local_ac = (int *)local_124[4];
          FUN_0134ef4c(&local_60,param_7,&local_b0,piVar11,piVar18);
          piVar21 = local_5c;
          if (local_60 != (int *)0x8000000a) {
            param_1[2] = local_58;
            param_1[3] = local_54;
            param_1[4] = local_50;
            param_1[5] = local_4c;
            param_1[6] = local_48;
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
          FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
          piVar19 = local_58;
          piVar4 = local_5c;
          piVar13 = local_60;
          local_f8 = (int *)piVar21[5];
          piStack_f4 = (int *)piVar21[6];
          piStack_f0 = (int *)piVar21[7];
          local_ec = (int *)piVar21[8];
          piStack_e8 = (int *)piVar21[9];
          piStack_e4 = (int *)piVar21[10];
          piStack_e0 = (int *)piVar21[0xb];
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar21;
            bVar22 = (bool)hasExclusiveAccess(piVar21);
          } while (!bVar22);
          *piVar21 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_013532e4(piVar21);
          }
        }
        else {
          FUN_00602a1c(&local_d8,local_124[3]);
          local_cc = (int **)*piVar15;
          iStack_c8 = local_124[6];
          iStack_c4 = local_124[7];
          local_c0 = local_124[8];
          iStack_bc = local_124[9];
          iStack_b8 = local_124[10];
          iStack_b4 = local_124[0xb];
          FUN_0100baa8(&local_d8);
          FUN_01347584(&local_60,piVar11,piVar18);
          piVar13 = local_d4;
          if (local_60 == (int *)0x0) {
            piVar19 = (int *)0x0;
            piVar4 = piVar11;
            piVar21 = piVar18;
          }
          else {
            local_15c = local_54;
            piVar4 = local_60;
            piVar19 = local_58;
            piVar21 = local_5c;
          }
          local_80 = local_cc;
          iStack_7c = iStack_c8;
          iStack_78 = iStack_c4;
          local_74 = local_c0;
          iStack_70 = iStack_bc;
          iStack_6c = iStack_b8;
          iStack_68 = iStack_b4;
          local_84 = local_d0;
          local_88 = local_d4;
          FUN_0134ef4c(&local_60,param_7,&local_88,piVar4,piVar21);
          piVar4 = local_5c;
          if (local_60 != (int *)0x8000000a) {
            param_1[2] = local_58;
            param_1[3] = local_54;
            param_1[4] = local_50;
            param_1[5] = local_4c;
            param_1[6] = local_48;
            param_1[7] = piStack_44;
            param_1[8] = local_40;
            param_1[9] = local_3c;
            param_1[10] = piStack_38;
            param_1[0xb] = piStack_34;
            param_1[0xc] = piStack_30;
            param_1[0xd] = local_2c;
            *param_1 = local_60;
            param_1[1] = local_5c;
LAB_01346c50:
            if (local_d8 == 0) {
              return;
            }
            thunk_FUN_016d3fb4(piVar13);
            return;
          }
          FUN_00602a1c(&local_60,local_5c[3],local_5c[4]);
          local_b0 = local_60;
          local_ac = local_5c;
          local_a8 = local_58;
          FUN_016dd52c(&local_a4,piVar4 + 5,0x1c);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar4;
            bVar22 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar22);
          *piVar4 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_013532e4(piVar4);
          }
          if (piVar19 != (int *)0x0) {
            iVar3 = FUN_01009aa0("",piVar19,local_15c);
            if (iVar3 == 0) {
              FUN_01357e28(piVar19,local_15c,param_8);
              uVar23 = FUN_01357100(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
              local_88 = local_ac;
              local_84 = local_a8;
              local_80 = &local_a4;
              FUN_0100bb14(&local_60,&local_88,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
              local_54 = local_a4;
              local_50 = piStack_a0;
              local_4c = local_9c;
              local_48 = local_98;
              piStack_44 = piStack_94;
              local_40 = piStack_90;
              local_3c = piStack_8c;
              if (local_b0 != (int *)0x0) {
                thunk_FUN_016d3fb4(local_ac);
              }
              local_b0 = local_60;
              local_ac = local_5c;
              local_a8 = local_58;
              local_a4 = local_54;
              piStack_a0 = local_50;
              local_9c = local_4c;
              local_98 = local_48;
              piStack_94 = piStack_44;
              piStack_90 = local_40;
              piStack_8c = local_3c;
              *(undefined4 *)(param_8 + 8) = 0;
            }
            else {
              local_88 = local_ac;
              local_84 = local_a8;
              local_80 = &local_a4;
              FUN_0100bb14(&local_60,&local_88,piVar19,local_15c);
              local_54 = local_a4;
              local_50 = piStack_a0;
              local_4c = local_9c;
              local_48 = local_98;
              piStack_44 = piStack_94;
              local_40 = piStack_90;
              local_3c = piStack_8c;
              if (local_b0 != (int *)0x0) {
                thunk_FUN_016d3fb4(local_ac);
              }
              local_b0 = local_60;
              local_ac = local_5c;
              local_a8 = local_58;
              local_a4 = local_54;
              piStack_a0 = local_50;
              local_9c = local_4c;
              local_98 = local_48;
              piStack_94 = piStack_44;
              piStack_90 = local_40;
              piStack_8c = local_3c;
            }
          }
          piVar19 = local_a8;
          piVar4 = local_ac;
          piVar13 = local_b0;
          local_f8 = local_a4;
          piStack_f4 = piStack_a0;
          piStack_f0 = local_9c;
          local_ec = local_98;
          piStack_e8 = piStack_94;
          piStack_e4 = piStack_90;
          piStack_e0 = piStack_8c;
          if (local_d8 != 0) {
            thunk_FUN_016d3fb4(local_d4);
          }
        }
        FUN_01351b58(&local_b0,piVar18,1,1);
        piVar2 = local_a8;
        piVar21 = local_ac;
        if (local_b0 == (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_ac,local_a8);
        }
        FUN_016dd1aa(local_a8,piVar11,piVar18);
        local_48 = local_f8;
        piStack_44 = piStack_f4;
        local_40 = piStack_f0;
        local_3c = local_ec;
        piStack_38 = piStack_e8;
        piStack_34 = piStack_e4;
        piStack_30 = piStack_e0;
        local_2c = CONCAT31(local_2c._1_3_,1);
        local_5c = piVar2;
        local_60 = piVar21;
        local_58 = piVar18;
        local_54 = piVar13;
        local_50 = piVar4;
        local_4c = piVar19;
        FUN_01355ffc(param_5,&local_60);
        goto LAB_0134501c;
      }
      uVar23 = FUN_01353340(piVar11,piVar18);
      FUN_013470e8(&local_60,param_3,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_124,param_7,
                   param_10);
      piVar11 = local_58;
      if (local_60 != (int *)0x8000000a) {
LAB_01346884:
        param_1[3] = local_54;
        param_1[4] = local_50;
        param_1[5] = local_4c;
        param_1[6] = local_48;
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
      if (local_5c == (int *)0x0) goto LAB_0134501c;
      local_b0 = local_58;
      FUN_01347604(&local_60,&local_b0,param_3,local_5c,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
      if (local_60 == (int *)0x8000000a) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar11;
          bVar22 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar22);
        *piVar11 = iVar3 + -1;
LAB_013455b0:
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(piVar11);
        }
        goto LAB_0134501c;
      }
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = local_50;
      param_1[5] = local_4c;
      param_1[6] = local_48;
      param_1[7] = piStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = piStack_38;
      param_1[0xb] = piStack_34;
      param_1[0xc] = piStack_30;
      param_1[0xd] = local_2c;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar11;
        bVar22 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar22);
      *piVar11 = iVar3 + -1;
LAB_01346cd4:
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4(piVar11);
        return;
      }
      return;
    }
  }
LAB_01346d40:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar5,local_150);
}

