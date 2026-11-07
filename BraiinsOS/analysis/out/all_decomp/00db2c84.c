// FUN_00db2c84 @ 00db2c84 size=3384 calls_out=23 calls_in=1
// strings: jsonm! | BUG: invalid serializationstruct GenericTelemetryFrameOutputTooSmall

longlong FUN_00db2c84(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 unaff_r5;
  int iVar19;
  uint *puVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  ulonglong uVar26;
  int local_c4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  uint *local_68;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  int *local_40;
  undefined4 local_3c;
  undefined1 local_38;
  uint *local_34;
  byte local_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  undefined1 local_2c;
  undefined1 uStack_2b;
  ushort uStack_2a;
  uint *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x26)) {
  case 0:
    param_1[0x25] = param_1[0x24];
    local_c4 = param_1[0x24] + 0x1c0;
    param_1[10] = *param_1;
    param_1[0xb] = param_1[1];
    param_1[0xc] = param_1[2];
    param_1[0xd] = param_1[3];
    param_1[0xe] = param_1[4];
    param_1[0xf] = param_1[5];
    param_1[0x10] = param_1[6];
    param_1[0x11] = param_1[7];
    param_1[0x12] = param_1[8];
    param_1[0x13] = param_1[9];
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x18] = local_c4;
LAB_00db2d40:
    iVar25 = param_1[0x11];
    *(undefined1 *)((int)param_1 + 0x8d) = 0;
    local_44 = 0;
    local_4c = 0;
    local_38 = 0;
    iVar10 = param_1[0x10];
    local_3c = 0x400;
    local_40 = &local_4c;
    iVar13 = param_1[0x12];
    local_48 = 1;
    FUN_01147600(&local_80,&local_40,1);
    puVar9 = local_7c;
    if (local_80 != (uint *)&DAT_00000005) {
      puVar18 = local_74;
      puVar20 = local_80;
      puVar7 = local_78;
      goto LAB_00db3950;
    }
    if ((*(char *)((int)local_7c + 7) == '\x01') &&
       (FUN_011533ec(&local_80,*local_7c,&DAT_004146ea,5), local_80 != (uint *)&SUB_00000002)) {
      local_34 = local_80;
      puVar18 = local_78;
      puVar7 = local_7c;
    }
    else {
      uVar11 = puVar9[2];
      iVar6 = 0;
      iVar15 = 0;
      if (iVar13 != 0) {
        iVar6 = 0x10;
        iVar15 = iVar25;
      }
      if ((char)uVar11 == '\0') {
        iVar6 = 0;
      }
      FUN_01153164(&local_34,*puVar9);
      if (local_34 == (uint *)&SUB_00000002) {
        local_78 = (uint *)0x0;
        local_7c = (uint *)0x0;
        local_6c = 0;
        local_74 = (uint *)((uint)local_74 & 0xffff0000);
        local_68 = puVar9;
        local_80 = (uint *)&DAT_80000000;
        if ((char)uVar11 == '\0') {
LAB_00db2e64:
          puVar9 = local_68;
          iVar15 = iVar13 * 0x10;
          if (iVar6 != iVar15) {
            if (local_80 == (uint *)&DAT_80000000) {
              iVar15 = iVar25 + iVar6;
              iVar6 = iVar6 + iVar13 * -0x10;
              do {
                FUN_01143358(&local_34,iVar15,puVar9);
                puVar20 = local_34;
                if (local_34 != (uint *)&DAT_00000005) goto LAB_00db387c;
                iVar15 = iVar15 + 0x10;
                iVar6 = iVar6 + 0x10;
              } while (iVar6 != 0);
            }
            else {
              iVar14 = iVar25;
              while( true ) {
                iVar15 = iVar15 + -0x10;
                iVar19 = iVar14 + iVar6;
                if (local_80 == (uint *)&DAT_80000000) {
                  FUN_01143358(&local_34,iVar19,local_68);
                  puVar20 = local_34;
                  if (local_34 != (uint *)&DAT_00000005) goto LAB_00db387c;
                }
                else {
                  if (local_74._3_1_ == '\0') {
                    uVar5 = 0x92;
                    if (local_80 == local_78) {
                      FUN_01150aa8(&local_80,local_80,1);
                    }
                  }
                  else {
                    uVar5 = 0x82;
                    if (local_80 == local_78) {
                      FUN_01150aa8(&local_80,local_80,1);
                    }
                  }
                  *(undefined1 *)((int)local_7c + (int)local_78) = uVar5;
                  local_78 = (uint *)((int)local_78 + 1);
                  uVar11 = *(uint *)(iVar19 + 0xc);
                  if (local_74._3_1_ == '\x01') {
                    if (local_80 == local_78) {
                      FUN_01150aa8(&local_80,local_78,1);
                    }
                    *(undefined1 *)((int)local_7c + (int)local_78) = 0xa9;
                    local_78 = (uint *)((int)local_78 + 1);
                    if ((uint)((int)local_80 - (int)local_78) < 9) {
                      FUN_01150aa8(&local_80,local_78,9);
                    }
                    puVar21 = (undefined4 *)((int)local_7c + (int)local_78);
                    *puVar21 = 0x6d657469;
                    local_78 = (uint *)((int)local_78 + 9);
                    puVar21[1] = 0x7079745f;
                    *(undefined1 *)(puVar21 + 2) = 0x65;
                  }
                  if (uVar11 < 0x100) {
                    cVar1 = (char)uVar11;
                    if (cVar1 < '\0') {
                      if (local_80 == local_78) {
                        FUN_01150aa8(&local_80,local_78,1);
                      }
                      *(undefined1 *)((int)local_7c + (int)local_78) = 0xcc;
                      local_78 = (uint *)((int)local_78 + 1);
                      if (local_80 == local_78) {
                        FUN_01150aa8(&local_80,local_80,1);
                      }
                      *(char *)((int)local_7c + (int)local_78) = cVar1;
                      puVar9 = (uint *)((int)local_78 + 1);
                    }
                    else {
                      if (local_80 == local_78) {
                        FUN_01150aa8(&local_80,local_78,1);
                      }
                      *(char *)((int)local_7c + (int)local_78) = cVar1;
                      puVar9 = (uint *)((int)local_78 + 1);
                    }
                  }
                  else if (uVar11 < 0x10000) {
                    if (local_80 == local_78) {
                      FUN_01150aa8(&local_80,local_78,1);
                    }
                    *(undefined1 *)((int)local_7c + (int)local_78) = 0xcd;
                    local_78 = (uint *)((int)local_78 + 1);
                    if ((uint)((int)local_80 - (int)local_78) < 2) {
                      FUN_01150aa8(&local_80,local_78,2);
                    }
                    puVar9 = (uint *)((int)local_78 + 2);
                    *(ushort *)((int)local_7c + (int)local_78) =
                         (ushort)((uVar11 << 0x18) >> 0x10) | (ushort)(uVar11 >> 8) & 0xff;
                  }
                  else {
                    if (local_80 == local_78) {
                      FUN_01150aa8(&local_80,local_78,1);
                    }
                    *(undefined1 *)((int)local_7c + (int)local_78) = 0xce;
                    local_78 = (uint *)((int)local_78 + 1);
                    if ((uint)((int)local_80 - (int)local_78) < 4) {
                      FUN_01150aa8(&local_80,local_78,4);
                    }
                    puVar9 = (uint *)((int)local_78 + 4);
                    *(uint *)((int)local_7c + (int)local_78) =
                         uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18;
                  }
                  local_78 = puVar9;
                  if (local_74._3_1_ == '\x01') {
                    if (local_80 == puVar9) {
                      FUN_01150aa8(&local_80,puVar9,1);
                    }
                    *(undefined1 *)((int)local_7c + (int)local_78) = 0xa7;
                    local_78 = (uint *)((int)local_78 + 1);
                    if ((uint)((int)local_80 - (int)local_78) < 7) {
                      FUN_01150aa8(&local_80,local_78,7);
                    }
                    *(undefined4 *)((int)local_7c + (int)local_78) = 0x6c796170;
                    *(undefined4 *)((int)local_7c + (int)local_78 + 3) = 0x64616f6c;
                    local_78 = (uint *)((int)local_78 + 7);
                  }
                  puVar7 = local_78;
                  puVar9 = local_80;
                  uVar23 = *(uint *)(iVar19 + 8);
                  uVar17 = *(undefined4 *)(iVar19 + 4);
                  uVar11 = 0xffffffc5;
                  if (uVar23 >> 0x10 != 0) {
                    uVar11 = 0xffffffc6;
                  }
                  if (uVar23 < 0x100) {
                    uVar11 = 0xffffffc4;
                  }
                  uVar5 = FUN_011530f4(uVar11);
                  if (puVar9 == puVar7) {
                    FUN_01150aa8(&local_80,puVar9,1);
                    puVar7 = local_78;
                  }
                  local_78 = (uint *)((int)puVar7 + 1);
                  *(undefined1 *)((int)local_7c + (int)puVar7) = uVar5;
                  if (uVar11 == 0xffffffc4) {
                    if (local_80 == local_78) {
                      FUN_01150aa8(&local_80,local_78,1);
                    }
                    puVar9 = (uint *)((int)local_78 + 1);
                    *(char *)((int)local_7c + (int)local_78) = (char)uVar23;
                  }
                  else if ((uVar11 & 0xff) == 0xc5) {
                    if ((uint)((int)local_80 - (int)local_78) < 2) {
                      FUN_01150aa8(&local_80,local_78,2);
                    }
                    puVar9 = (uint *)((int)local_78 + 2);
                    *(ushort *)((int)local_7c + (int)local_78) =
                         (ushort)((uVar23 << 0x18) >> 0x10) | (ushort)(uVar23 >> 8) & 0xff;
                  }
                  else {
                    if ((uint)((int)local_80 - (int)local_78) < 4) {
                      FUN_01150aa8(&local_80,local_78,4);
                    }
                    puVar9 = local_78 + 1;
                    *(uint *)((int)local_7c + (int)local_78) =
                         uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                         (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18;
                  }
                  local_78 = puVar9;
                  if ((uint)((int)local_80 - (int)puVar9) < uVar23) {
                    FUN_01150aa8(&local_80,puVar9,uVar23);
                  }
                  puVar9 = local_78;
                  FUN_016dd1aa((undefined1 *)((int)local_7c + (int)local_78),uVar17,uVar23);
                  local_78 = (uint *)((int)puVar9 + uVar23);
                  local_6c = local_6c + 1;
                }
                if (iVar6 == iVar15) break;
                iVar14 = iVar14 + 0x10;
              }
            }
          }
        }
        else if (iVar15 != 0) {
          FUN_01143358(&local_34,iVar15,puVar9);
          puVar20 = local_34;
          if (local_34 != (uint *)&DAT_00000005) {
LAB_00db387c:
            puVar9 = (uint *)CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
            puVar7 = (uint *)CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c));
            puVar18 = local_28;
            if (((uint)local_80 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(local_7c);
            }
            goto LAB_00db3950;
          }
          goto LAB_00db2e64;
        }
        puVar7 = local_68;
        puVar9 = local_78;
        puVar4 = local_7c;
        puVar3 = local_80;
        if (local_80 != (uint *)&DAT_80000000) {
          FUN_01153164(&local_34,*local_68,local_6c);
          if (local_34 == (uint *)&SUB_00000002) {
            piVar16 = (int *)*puVar7;
            iVar15 = *piVar16;
            uVar11 = piVar16[2];
            puVar7 = (uint *)(iVar15 - uVar11);
            if (puVar9 <= puVar7) {
joined_r0x00db2f18:
              if (puVar7 < puVar9) {
                FUN_01150aa8(piVar16,uVar11,puVar9);
                uVar11 = piVar16[2];
              }
              FUN_016dd1aa(piVar16[1] + uVar11,puVar4,puVar9);
              piVar16[2] = piVar16[2] + (int)puVar9;
              if (puVar3 != (uint *)0x0) {
                thunk_FUN_016d3fb4(puVar4);
              }
              goto LAB_00db2f4c;
            }
            puVar24 = (undefined1 *)(uVar11 + (int)puVar9);
            if (!CARRY4(uVar11,(uint)puVar9)) {
              if (puVar24 <= (undefined1 *)(iVar15 * 2)) {
                puVar24 = (undefined1 *)(iVar15 << 1);
              }
              if (puVar24 < (undefined1 *)0x9) {
                puVar24 = (undefined1 *)0x8;
              }
              FUN_01150958(&local_34,iVar15,piVar16[1],puVar24,1,1);
              if (local_34 != (uint *)&DAT_00000001) {
                uVar11 = piVar16[2];
                puVar7 = (uint *)(puVar24 + -uVar11);
                *piVar16 = (int)puVar24;
                piVar16[1] = CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
                goto joined_r0x00db2f18;
              }
            }
            puVar7 = (uint *)0x2601;
            puVar9 = (uint *)&DAT_00000001;
            puVar18 = (uint *)0x0;
          }
          else {
            uVar11 = CONCAT13(uStack_2b,CONCAT12(local_2c,uStack_2e));
            puVar18 = (uint *)((uint)uStack_2a << 0x10 | uVar11 >> 0x10);
            puVar7 = (uint *)((uint)local_30 | uVar11 << 0x10 | (uint)bStack_2f << 8);
            puVar9 = local_34;
          }
          puVar20 = (uint *)0x0;
          if (puVar3 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar4);
            puVar20 = (uint *)0x0;
          }
          goto LAB_00db3950;
        }
LAB_00db2f4c:
        uVar11 = local_44;
        uVar17 = local_48;
        iVar15 = local_4c;
        uVar8 = local_44 * 0x6e;
        uVar23 = uVar8 / 100 + 0x18;
        puVar9 = (uint *)FUN_016d38c8(uVar23,1);
        if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar23);
        }
        local_7c = (uint *)(uVar8 / 100 + 0x14);
        local_80 = puVar9 + 1;
        *puVar9 = uVar11;
        local_78 = (uint *)0x0;
        if (uVar11 < 0xffff) {
          uVar22 = 0x2000;
          iVar6 = FUN_016d38c8(0x2000,1);
          if (iVar6 == 0) {
            uVar17 = 2;
            goto LAB_00db39ac;
          }
          uVar26 = FUN_01152138(uVar17,uVar11,&local_80,iVar6);
        }
        else {
          uVar22 = 0x4000;
          iVar6 = FUN_016d38c8(0x4000,1);
          if (iVar6 == 0) {
            uVar17 = 4;
LAB_00db39ac:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar17,uVar22);
          }
          uVar26 = FUN_01152a80(uVar17,uVar11,&local_80,iVar6);
        }
        thunk_FUN_016d3fb4(iVar6);
        if ((uVar26 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_34,&DAT_01888a5c,&DAT_01888a6c);
        }
        uVar11 = (int)(uVar26 >> 0x20) + 4;
        if (uVar11 < uVar23) {
          uVar23 = uVar11;
          if (uVar11 == 0) {
            thunk_FUN_016d3fb4(puVar9);
            puVar9 = (uint *)&DAT_00000001;
          }
          else {
            puVar9 = (uint *)thunk_FUN_016d4ea4(puVar9,uVar11);
            if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar11);
            }
          }
        }
        iVar6 = 0;
        param_1[0x15] = puVar9;
        *(undefined1 *)(param_1 + 0x17) = 0;
        param_1[0x14] = uVar23;
        param_1[0x16] = uVar23;
        if (iVar15 != 0) {
          thunk_FUN_016d3fb4(uVar17);
        }
        *(undefined1 *)((int)param_1 + 0x8d) = 1;
        for (; iVar13 != iVar6; iVar6 = iVar6 + 1) {
          if (*(int *)(iVar25 + iVar6 * 0x10) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(iVar25 + iVar6 * 0x10 + 4));
          }
        }
        if (iVar10 != 0) {
          thunk_FUN_016d3fb4(iVar25);
        }
        unaff_r5 = 0;
        param_1[0x19] = param_1[0x16];
        local_7c = (uint *)param_1[0x14];
        local_78 = (uint *)param_1[0x15];
        local_74 = (uint *)param_1[0x16];
        uStack_70 = param_1[0x17];
        *(undefined1 *)((int)param_1 + 0x8d) = 0;
        local_80 = (uint *)CONCAT31(local_80._1_3_,3);
        FUN_0114fdf8(&local_98,&local_80);
        param_1[0x1a] = local_98;
        param_1[0x1b] = uStack_94;
        param_1[0x1c] = uStack_90;
        param_1[0x1d] = uStack_8c;
        param_1[0x1e] = uStack_88;
        *(undefined1 *)(param_1 + 0x22) = 0;
        param_1[0x1f] = local_c4;
        goto switchD_00db2d1c_caseD_3;
      }
      puVar18 = (uint *)CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c));
      puVar7 = (uint *)CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
    }
    puVar9 = local_34;
    puVar20 = (uint *)0x0;
LAB_00db3950:
    if (local_4c != 0) {
      thunk_FUN_016d3fb4(local_48);
    }
    local_80 = puVar20;
    local_7c = puVar9;
    local_78 = puVar7;
    local_74 = puVar18;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: invalid serializationstruct GenericTelemetryFrameOutputTooSmall",0x1a,
                 &local_80,&DAT_01888a4c,&DAT_01888a3c);
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878780);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878780);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x23)) {
  case 0:
    local_c4 = param_1[0x18];
    goto LAB_00db2d40;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018786a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018786a0);
  }
switchD_00db2d1c_caseD_3:
  uVar26 = FUN_00db4410(param_1 + 0x1a,param_2);
  uVar11 = (uint)(uVar26 >> 0x20);
  if ((uVar26 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x23) = 3;
    *(undefined1 *)(param_1 + 0x26) = 3;
    return CONCAT44(unaff_r5,1);
  }
  if (*(char *)(param_1 + 0x22) == '\x03') {
    puVar21 = (undefined4 *)param_1[0x21];
    uVar17 = param_1[0x20];
    pcVar12 = (code *)*puVar21;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar17);
    }
    if (puVar21[1] == 0) goto LAB_00db36f8;
  }
  else {
    if ((*(char *)(param_1 + 0x22) != '\0') || (param_1[0x1a] == 0)) goto LAB_00db36f8;
    uVar17 = param_1[0x1b];
  }
  thunk_FUN_016d3fb4(uVar17);
LAB_00db36f8:
  if (uVar11 != 0) {
    *(undefined2 *)(param_1 + 0x23) = 1;
    FUN_00ee0018(*(undefined4 *)(*(int *)(param_1[0x25] + 0x21c) + 8),&local_80);
    FUN_01662df8(*(undefined4 *)(param_1[0x25] + 0x224));
    *(undefined1 *)(param_1 + 0x26) = 1;
    return (ulonglong)uVar11 << 0x20;
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    uVar11 = param_1[0x19];
    local_7c = (uint *)0x4;
    local_80 = (uint *)0x567438;
    piVar16 = (int *)FUN_00a62238(DAT_018d7d74,&local_80,1);
    puVar9 = (uint *)(piVar16 + 2);
    do {
      uVar23 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar23 + uVar11;
    piVar16[3] = piVar16[3] + (uint)CARRY4(uVar23,uVar11);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4();
    }
  }
  *(undefined2 *)(param_1 + 0x23) = 1;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return 0;
}

