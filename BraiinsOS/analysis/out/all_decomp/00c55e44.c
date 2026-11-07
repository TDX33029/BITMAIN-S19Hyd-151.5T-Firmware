// FUN_00c55e44 @ 00c55e44 size=2192 calls_out=13 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c56670) */

int FUN_00c55e44(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *local_68;
  uint *local_64;
  uint *local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  undefined1 *local_44;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_44 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_44 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  *local_44 = 0x7b;
  local_3c = &local_48;
  local_40 = 1;
  local_34 = &local_3c;
  local_48 = 0x80;
  local_38 = CONCAT22(local_38._2_2_,0x200);
  FUN_00cd2b24(&local_30,local_3c,&DAT_00355bd5,5);
  piVar10 = local_3c;
  if ((char)local_30 == '\x04') {
    iVar6 = local_3c[2];
    if (*local_3c == iVar6) {
      FUN_00d653ec(local_3c,iVar6,1,1,1);
      iVar6 = piVar10[2];
    }
    piVar7 = local_3c;
    *(undefined1 *)(piVar10[1] + iVar6) = 0x3a;
    local_64 = (uint *)*param_1;
    piVar10[2] = piVar10[2] + 1;
    local_68 = local_64 + 1;
    uVar11 = *local_64;
    iVar6 = piVar7[2];
    local_54 = param_1[3];
    if (*piVar7 == iVar6) {
      FUN_00d653ec(piVar7,iVar6,1,1,1);
      iVar6 = piVar7[2];
    }
    *(undefined1 *)(piVar7[1] + iVar6) = 0x7b;
    iVar6 = piVar7[2] + 1;
    local_58 = 0x100;
    bVar3 = true;
    piVar7[2] = iVar6;
    if (local_54 == 0) {
      if (*piVar7 == iVar6) {
        FUN_00d653ec(piVar7,iVar6,1,1,1);
        iVar6 = piVar7[2];
      }
      *(undefined1 *)(piVar7[1] + iVar6) = 0x7d;
      piVar7[2] = piVar7[2] + 1;
      bVar3 = false;
      local_58 = 0;
    }
    local_4c = ~uVar11 & 0x80808080;
    puVar9 = local_68;
    local_5c = local_64;
    local_50 = local_54;
    while (piVar10 = local_3c, local_50 != 0) {
      puVar16 = puVar9;
      if (local_4c == 0) {
        do {
          puVar9 = puVar16 + 1;
          uVar11 = *puVar16;
          local_5c = local_5c + -0x30;
          puVar16 = puVar9;
        } while ((uVar11 & 0x80808080) == 0x80808080);
        local_4c = uVar11 & 0x80808080 ^ 0x80808080;
      }
      uVar11 = LZCOUNT(local_4c << 0x18 | (local_4c >> 8 & 0xff) << 0x10 |
                       (local_4c >> 0x10 & 0xff) << 8 | local_4c >> 0x18);
      iVar6 = (uVar11 >> 3) * -2 - (uVar11 >> 3);
      uVar11 = local_5c[iVar6 * 4 + -0xb];
      uVar12 = local_5c[iVar6 * 4 + -10];
      if (bVar3) {
        piVar7 = local_3c;
      }
      else {
        iVar8 = local_3c[2];
        if (*local_3c == iVar8) {
          FUN_00d653ec(local_3c,iVar8,1,1,1);
          iVar8 = piVar10[2];
        }
        piVar7 = local_3c;
        *(undefined1 *)(piVar10[1] + iVar8) = 0x2c;
        piVar10[2] = piVar10[2] + 1;
      }
      FUN_00cd2b24(&local_30,piVar7,uVar11,uVar12);
      piVar10 = local_3c;
      if ((char)local_30 != '\x04') {
        puVar4 = (undefined1 *)FUN_0157c4a0(local_30,local_2c);
        goto LAB_00c565dc;
      }
      iVar8 = local_3c[2];
      if (*local_3c == iVar8) {
        FUN_00d653ec(local_3c,iVar8,1,1,1);
        iVar8 = piVar10[2];
      }
      piVar7 = local_3c;
      puVar16 = (uint *)local_5c[iVar6 * 4 + -8];
      uVar12 = local_5c[iVar6 * 4 + -5];
      *(undefined1 *)(piVar10[1] + iVar8) = 0x3a;
      piVar10[2] = piVar10[2] + 1;
      uVar11 = *puVar16;
      iVar6 = piVar7[2];
      if (*piVar7 == iVar6) {
        FUN_00d653ec(piVar7,iVar6,1,1,1);
        iVar6 = piVar7[2];
      }
      local_4c = local_4c - 1 & local_4c;
      local_50 = local_50 + -1;
      local_58 = 0x200;
      *(undefined1 *)(piVar7[1] + iVar6) = 0x7b;
      iVar6 = piVar7[2] + 1;
      piVar7[2] = iVar6;
      puVar15 = puVar16;
      if (uVar12 == 0) {
        if (*piVar7 == iVar6) {
          FUN_00d653ec(piVar7,iVar6,1,1,1);
          iVar6 = piVar7[2];
        }
        *(undefined1 *)(piVar7[1] + iVar6) = 0x7d;
        piVar7[2] = piVar7[2] + 1;
      }
      else {
        while( true ) {
          puVar15 = puVar15 + 1;
          if ((uVar11 & 0x80808080) != 0x80808080) break;
          uVar11 = *puVar15;
          puVar16 = puVar16 + -0x50;
        }
        uVar13 = uVar11 & 0x80808080 ^ 0x80808080;
        uVar11 = (uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                               (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        puVar4 = (undefined1 *)FUN_00c5c114(puVar16 + uVar11 * -0x14 + -0x14,local_3c);
        piVar10 = local_3c;
        if (puVar4 != (undefined1 *)0x0) goto LAB_00c565dc;
        iVar6 = local_3c[2];
        if (*local_3c == iVar6) {
          FUN_00d653ec(local_3c,iVar6,1,1,1);
          iVar6 = piVar10[2];
        }
        *(undefined1 *)(piVar10[1] + iVar6) = 0x3a;
        piVar10[2] = piVar10[2] + 1;
        puVar4 = (undefined1 *)FUN_00c56e30(puVar16 + uVar11 * -0x14 + -0x10,&local_3c);
        if (puVar4 != (undefined1 *)0x0) goto LAB_00c565dc;
        uVar13 = uVar13 - 1 & uVar13;
        while( true ) {
          piVar10 = local_3c;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) break;
          puVar14 = puVar15;
          if (uVar13 == 0) {
            do {
              puVar15 = puVar14 + 1;
              uVar11 = *puVar14;
              puVar16 = puVar16 + -0x50;
              puVar14 = puVar15;
            } while ((uVar11 & 0x80808080) == 0x80808080);
            uVar13 = uVar11 & 0x80808080 ^ 0x80808080;
          }
          iVar6 = local_3c[2];
          if (*local_3c == iVar6) {
            FUN_00d653ec(local_3c,iVar6,1,1,1);
            iVar6 = piVar10[2];
          }
          piVar7 = local_3c;
          uVar11 = (uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          *(undefined1 *)(piVar10[1] + iVar6) = 0x2c;
          piVar10[2] = piVar10[2] + 1;
          puVar4 = (undefined1 *)FUN_00c5c114(puVar16 + uVar11 * -0x14 + -0x14,piVar7);
          piVar10 = local_3c;
          if (puVar4 != (undefined1 *)0x0) goto LAB_00c565dc;
          iVar6 = local_3c[2];
          if (*local_3c == iVar6) {
            FUN_00d653ec(local_3c,iVar6,1,1,1);
            iVar6 = piVar10[2];
          }
          *(undefined1 *)(piVar10[1] + iVar6) = 0x3a;
          piVar10[2] = piVar10[2] + 1;
          puVar4 = (undefined1 *)FUN_00c56e30(puVar16 + uVar11 * -0x14 + -0x10,&local_3c);
          uVar13 = uVar13 - 1 & uVar13;
          if (puVar4 != (undefined1 *)0x0) goto LAB_00c565dc;
        }
        iVar6 = local_3c[2];
        if (*local_3c == iVar6) {
          FUN_00d653ec(local_3c,iVar6,1,1,1);
          iVar6 = piVar10[2];
        }
        *(undefined1 *)(piVar10[1] + iVar6) = 0x7d;
        piVar10[2] = piVar10[2] + 1;
      }
      bVar3 = false;
    }
    if (local_58 != 0) {
      iVar6 = local_3c[2];
      if (*local_3c == iVar6) {
        FUN_00d653ec(local_3c,iVar6,1,1,1);
        iVar6 = piVar10[2];
      }
      *(undefined1 *)(piVar10[1] + iVar6) = 0x7d;
      piVar10[2] = piVar10[2] + 1;
    }
    if ((char)local_38 == '\x01') {
      local_30 = 10;
      puVar4 = (undefined1 *)FUN_0157c50c(&local_30,0,0);
    }
    else {
      puVar4 = (undefined1 *)FUN_00cd2f2c(&local_38,&DAT_00410ff9,7,param_1[8]);
      if (puVar4 == (undefined1 *)0x0) {
        if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
          piVar10 = *local_34;
          iVar6 = piVar10[2];
          if (*piVar10 == iVar6) {
            FUN_00d653ec(piVar10,iVar6,1,1,1);
            iVar6 = piVar10[2];
          }
          *(undefined1 *)(piVar10[1] + iVar6) = 0x7d;
          piVar10[2] = iVar6 + 1;
        }
        puVar4 = local_44;
        iVar6 = local_48;
        if (local_48 != -0x80000000) {
          iVar5 = FUN_00c72e0c(param_1[10],param_1[0xb],local_44,local_40);
          iVar8 = DAT_018d7d80;
          if (iVar5 == 0) {
            uVar11 = ~*local_64 & 0x80808080;
            iVar5 = 0;
            do {
              if (uVar11 == 0) {
                puVar9 = local_68;
                if (local_54 == 0) {
                  DataMemoryBarrier(0xb);
                  if (DAT_018d7d14 == 0) {
                    do {
                      bVar3 = (bool)hasExclusiveAccess((int *)(DAT_018d7d80 + 8));
                    } while (!bVar3);
                    *(int *)(DAT_018d7d80 + 8) = iVar5;
                    *(undefined4 *)(iVar8 + 0xc) = 0;
                  }
                  if (iVar6 != 0) {
                    thunk_FUN_016d3fb4(puVar4,DAT_018dd947);
                  }
                  return 0;
                }
                do {
                  local_68 = puVar9 + 1;
                  uVar11 = *puVar9;
                  local_64 = local_64 + -0x30;
                  puVar9 = local_68;
                } while ((uVar11 & 0x80808080) == 0x80808080);
                uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
              }
              uVar12 = uVar11 >> 8;
              uVar13 = uVar11 >> 0x10;
              uVar1 = uVar11 >> 0x18;
              uVar2 = uVar11 << 0x18;
              uVar11 = uVar11 - 1 & uVar11;
              iVar5 = local_64[((uint)LZCOUNT(uVar2 | (uVar12 & 0xff) << 0x10 | (uVar13 & 0xff) << 8
                                              | uVar1) >> 3) * -0xc + -5] + iVar5;
              local_54 = local_54 + -1;
            } while( true );
          }
          if (iVar6 == 0) {
            return iVar5;
          }
          thunk_FUN_016d3fb4(puVar4);
          return iVar5;
        }
        goto LAB_00c565f0;
      }
    }
  }
  else {
    puVar4 = (undefined1 *)FUN_0157c4a0(local_30,local_2c);
  }
LAB_00c565dc:
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
LAB_00c565f0:
  iVar6 = FUN_00c7a328(puVar4);
  return iVar6;
}

