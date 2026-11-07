// FUN_0157084c @ 0157084c size=2396 calls_out=20 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01570d4c) */
/* WARNING: Removing unreachable block (ram,0x01570d50) */
/* WARNING: Removing unreachable block (ram,0x01570da8) */
/* WARNING: Removing unreachable block (ram,0x01570d5c) */
/* WARNING: Removing unreachable block (ram,0x01570d64) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157084c(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint *puVar23;
  bool bVar24;
  int local_2e4;
  char *local_2c0;
  undefined4 local_2b8;
  int local_2b4;
  uint local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  char *local_2a0;
  int local_29c;
  undefined4 local_294;
  undefined1 local_290;
  int *local_288;
  int local_280;
  uint local_27c;
  undefined4 *local_278 [4];
  uint local_268;
  char cStack_211;
  uint local_210;
  int *local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  undefined *local_1fc;
  uint local_1f8;
  undefined1 auStack_90 [108];
  
  local_2e4 = *(int *)(param_2 + 4);
  iVar12 = *(int *)(param_2 + 8);
  local_2a4 = 0;
  local_2a8 = 4;
  local_2ac = 0;
  local_2b0 = 0;
  local_2b4 = 4;
  local_2b8 = 0;
  uVar15 = local_2b0;
  if (*(int *)(param_2 + 0xc) != -0x80000000 || iVar12 != 0) {
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      FUN_015712f4(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&local_2b8);
    }
    iVar12 = local_2e4 + iVar12 * 0xc;
    do {
      while( true ) {
        uVar20 = local_2b0;
        iVar5 = local_2b4;
        if (local_2e4 == iVar12) {
          uVar15 = local_2b0;
          if (local_2b0 < 2) goto LAB_01571058;
          if (local_2b0 < 0x15) {
            FUN_0157225c(local_2b4,local_2b0);
          }
          else {
            FUN_01571b18(local_2b4,local_2b0);
          }
          puVar3 = (uint *)(iVar5 + 0x20);
          uVar18 = 1;
          iVar12 = uVar20 - 2;
          goto LAB_015710ac;
        }
        uVar8 = *(undefined4 *)(local_2e4 + 4);
        uVar15 = *(uint *)(local_2e4 + 8);
        FUN_015f5c04(&local_210,uVar8,uVar15);
        piVar2 = local_20c;
        if (local_210 != 1) break;
        local_2e4 = local_2e4 + 0xc;
        FUN_0157154c(&local_2b8,local_208 >> 8,local_20c,local_208,uVar8,uVar15,&DAT_0040d8fd,0x11);
      }
      local_2e4 = local_2e4 + 0xc;
      bVar1 = (byte)local_208;
LAB_015709e8:
      if ((bVar1 & 1) == 0) {
        puVar3 = (uint *)FUN_016d2bc8();
        do {
          while( true ) {
            *puVar3 = 0;
            puVar4 = (undefined4 *)FUN_016d2700(piVar2[5]);
            if (puVar4 == (undefined4 *)0x0) {
              uVar20 = *puVar3;
              if (uVar20 == 0) goto LAB_01571010;
              local_210 = local_210 & 0xffffff00;
              uVar18 = local_210;
              if (uVar15 == 0) {
                piVar7 = (int *)&DAT_00000001;
              }
              else {
                piVar7 = (int *)thunk_FUN_016d4a50(uVar15);
                if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,uVar15);
                }
              }
              FUN_016dd1aa(piVar7,uVar8,uVar15);
              iVar5 = local_2a4;
              local_204 = uVar18;
              local_1f8 = 0x19;
              local_1fc = &DAT_0040d8e4;
              local_210 = uVar15;
              local_20c = piVar7;
              local_208 = uVar15;
              local_200 = uVar20;
              if (local_2a4 == local_2ac) {
                FUN_01571e44(&local_2ac);
              }
              puVar3 = (uint *)(local_2a8 + iVar5 * 0x1c);
              *puVar3 = local_210;
              puVar3[1] = (uint)local_20c;
              puVar3[2] = local_208;
              puVar3[3] = local_204;
              puVar3[4] = local_200;
              puVar3[5] = (uint)local_1fc;
              puVar3[6] = local_1f8;
              local_2a4 = iVar5 + 1;
              goto LAB_015709e0;
            }
            psVar13 = (short *)((int)puVar4 + 0x13);
            iVar5 = FUN_016dd8a2(psVar13);
            if (iVar5 == 2) break;
            if (iVar5 != 1) {
              uVar19 = *puVar4;
              uVar16 = puVar4[1];
              uVar17 = *(undefined1 *)((int)puVar4 + 0x12);
              if (iVar5 != -1) goto LAB_01570ab8;
              iVar5 = 0;
              local_2c0 = &DAT_00000001;
              goto LAB_01570acc;
            }
            if (*(char *)psVar13 != '.') goto LAB_01570a48;
          }
        } while (*psVar13 == 0x2e2e);
LAB_01570a48:
        uVar19 = *puVar4;
        uVar16 = puVar4[1];
        uVar17 = *(undefined1 *)((int)puVar4 + 0x12);
LAB_01570ab8:
        iVar5 = iVar5 + 1;
        local_2c0 = (char *)thunk_FUN_016d4a50(iVar5);
        if (local_2c0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,iVar5);
        }
LAB_01570acc:
        FUN_016dd1aa(local_2c0,psVar13,iVar5);
        do {
          iVar6 = *piVar2;
          bVar24 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar24);
        *piVar2 = iVar6 + 1;
        if (iVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)software_udf(0xfdee,0x15711ac);
          (*pcVar10)();
        }
        iVar6 = piVar2[3];
        local_288 = piVar2;
        *(undefined4 *)((uint)&local_210 | 4) = uVar19;
        ((undefined4 *)((uint)&local_210 | 4))[1] = uVar16;
        uVar20 = piVar2[4];
        *(int *)((uint)&local_2a0 | 4) = iVar5;
        ((int *)((uint)&local_2a0 | 4))[1] = (int)local_20c;
        local_2a0 = local_2c0;
        local_294 = uVar16;
        local_290 = uVar17;
        if (uVar20 == 0) {
          bVar24 = false;
          local_208 = 0;
          local_20c = (int *)&DAT_00000001;
          if (iVar5 != 1) goto LAB_01570b9c;
LAB_01570bb0:
          local_210 = local_208;
          if (bVar24) {
            FUN_015bf41c(&local_210,uVar20,1,1,1);
            *(undefined1 *)((int)local_20c + local_208) = 0x2f;
            uVar18 = local_208 + 1;
            uVar21 = local_210;
            goto LAB_01570bec;
          }
          if (iVar5 != 1) goto LAB_01570fc4;
        }
        else {
          piVar7 = (int *)thunk_FUN_016d4a50(uVar20);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar20);
          }
          FUN_016dd1aa(piVar7,iVar6,uVar20);
          bVar24 = *(char *)((int)piVar7 + (uVar20 - 1)) != '/';
          local_20c = piVar7;
          local_208 = uVar20;
          if (iVar5 == 1) goto LAB_01570bb0;
LAB_01570b9c:
          uVar18 = 0;
          uVar21 = uVar20;
          local_210 = local_208;
          if (*local_2c0 != '/') goto LAB_01570bb0;
LAB_01570bec:
          uVar20 = uVar18;
          local_208 = uVar20;
          if (uVar21 - uVar20 < iVar5 - 1U) {
LAB_01570fc4:
            FUN_015bf41c(&local_210,uVar20,iVar5 + -1,1,1);
            uVar20 = local_208;
          }
        }
        FUN_016dd1aa((undefined1 *)((int)local_20c + uVar20),local_2c0,iVar5 + -1);
        piVar7 = local_20c;
        uVar18 = local_210;
        uVar21 = uVar20 + iVar5 + -1;
        if (uVar21 >> 7 < 3) {
          FUN_016dd1aa(&local_210,local_20c,uVar21);
          uVar20 = uVar20 + iVar5;
          *(undefined1 *)((int)&local_210 + uVar21) = 0;
          if (uVar21 < 7) {
            uVar9 = 0;
            do {
              if (*(char *)((int)&local_210 + uVar9) == '\0') goto LAB_01570dbc;
              uVar9 = uVar9 + 1;
            } while (uVar20 != uVar9);
          }
          else {
            uVar9 = 0;
            do {
              uVar11 = *(uint *)((int)&local_210 + uVar9);
              if (((0x1010100 - uVar11 | uVar11) & 0x80808080 &
                  (0x1010100 - *(uint *)((int)&local_20c + uVar9) |
                  *(uint *)((int)&local_20c + uVar9))) != 0x80808080) break;
              uVar9 = uVar9 + 8;
            } while (uVar9 <= uVar21 - 7);
            if (uVar20 != uVar9) {
              iVar5 = 0;
              do {
                if (*(char *)((int)&local_210 + iVar5 + uVar9) == '\0') {
                  uVar9 = iVar5 + uVar9;
                  goto LAB_01570dbc;
                }
                iVar5 = iVar5 + 1;
              } while (uVar20 - uVar9 != iVar5);
            }
          }
          goto LAB_01570e00;
        }
        FUN_015e5770(&local_280,local_20c,uVar21,FUN_015e56f0);
        iVar5 = local_280;
        goto LAB_01570e1c;
      }
LAB_01571010:
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar2;
        bVar24 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar24);
      *piVar2 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(piVar2);
      }
    } while( true );
  }
  goto LAB_01571058;
  while( true ) {
    puVar3 = puVar3 + 3;
    uVar18 = uVar18 + 1;
    bVar24 = iVar12 == 0;
    iVar12 = iVar12 + -1;
    uVar15 = local_2b0;
    if (bVar24) break;
LAB_015710ac:
    if (puVar3[-3] == puVar3[-6]) {
      uVar15 = puVar3[-4];
      iVar6 = thunk_FUN_016dd50a(uVar15,puVar3[-7]);
      if (iVar6 == 0) {
        if ((puVar3[-5] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar15);
        }
        uVar15 = uVar18;
        if (uVar18 + 1 < uVar20) goto LAB_01571128;
        break;
      }
    }
  }
  goto LAB_01571058;
LAB_01570dbc:
  if (uVar9 == uVar21) {
    FUN_016dd606(auStack_90,0,0x68);
    iVar5 = FUN_016e048a(&local_210,auStack_90);
    if (iVar5 == -1) {
      local_278[0] = (undefined4 *)FUN_016d2bc8();
      local_278[0] = (undefined4 *)*local_278[0];
      local_27c = local_27c & 0xffffff00;
      iVar5 = 1;
    }
    else {
      FUN_016dd1aa(local_278,auStack_90,0x68);
      iVar5 = 0;
    }
  }
  else {
LAB_01570e00:
    *(undefined4 *)((uint)&local_280 | 4) = 2;
    ((undefined4 *)((uint)&local_280 | 4))[1] = &DAT_018aae48;
    iVar5 = 1;
  }
LAB_01570e1c:
  if (iVar5 == 0) {
    if ((local_268 & 0xf000) == 0x8000) {
      FUN_015712f4(piVar7,uVar21,&local_2b8);
    }
    if (uVar18 != 0) {
      thunk_FUN_016d3fb4(piVar7);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar24 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar24);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f4880(piVar2);
    }
    goto LAB_01570f90;
  }
  puVar14 = local_278[0];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_27c & 0xff) {
  case 0:
    puVar14 = (undefined4 *)&SUB_00000002;
    if (local_278[0] == (undefined4 *)&SUB_00000002) break;
LAB_01570ee4:
    FUN_0157154c(&local_2b8);
    goto LAB_01570f50;
  case 1:
    if ((local_27c & 0xffff) >> 8 != 0) goto LAB_01570ee4;
    break;
  default:
    if (*(char *)(local_278[0] + 2) != '\0') goto LAB_01570ee4;
  }
  if ((local_27c & 0xff) == 3) {
    uVar16 = *puVar14;
    puVar22 = (undefined4 *)puVar14[1];
    pcVar10 = (code *)*puVar22;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar16);
    }
    if (puVar22[1] != 0) {
      thunk_FUN_016d3fb4(uVar16);
    }
    thunk_FUN_016d3fb4(puVar14);
  }
LAB_01570f50:
  if (uVar18 != 0) {
    thunk_FUN_016d3fb4(piVar7);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar24 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar24);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015f4880(piVar2);
  }
LAB_01570f90:
  *local_2c0 = '\0';
  if (local_29c != 0) {
    thunk_FUN_016d3fb4(local_2c0);
  }
LAB_015709e0:
  bVar1 = puVar4 == (undefined4 *)0x0;
  goto LAB_015709e8;
LAB_01571128:
  do {
    puVar23 = (uint *)(iVar5 + uVar18 * 0xc);
    if (*puVar3 == puVar23[-1]) {
      uVar15 = puVar3[-1];
      iVar6 = thunk_FUN_016dd50a(uVar15,puVar23[-2]);
      if (iVar6 != 0) goto LAB_0157110c;
      if ((puVar3[-2] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar15);
      }
    }
    else {
LAB_0157110c:
      uVar15 = puVar3[-1];
      uVar20 = *puVar3;
      uVar18 = uVar18 + 1;
      *puVar23 = puVar3[-2];
      puVar23[1] = uVar15;
      puVar23[2] = uVar20;
    }
    puVar3 = puVar3 + 3;
    iVar12 = iVar12 + -1;
    uVar15 = uVar18;
  } while (iVar12 != 0);
LAB_01571058:
  local_2b0 = uVar15;
  *param_1 = local_2b8;
  param_1[1] = local_2b4;
  param_1[2] = local_2b0;
  param_1[3] = local_2ac;
  param_1[4] = local_2a8;
  param_1[5] = local_2a4;
  return;
}

