// FUN_00fb50a0 @ 00fb50a0 size=1152 calls_out=3 calls_in=2
// strings: 

void FUN_00fb50a0(undefined4 param_1,int param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_338;
  int local_334;
  uint local_330 [192];
  undefined1 local_30;
  
  uVar8 = 0;
  FUN_016dd606(&local_338,0,0x309);
  uVar12 = param_3;
  do {
    puVar14 = (uint *)(param_2 + uVar8);
    bVar11 = (byte)*puVar14;
    if (bVar11 != 0x30) {
      if ((byte)(bVar11 - 0x30) < 10) {
        iVar16 = param_2 + uVar8;
        uVar5 = 0;
        goto LAB_00fb5124;
      }
      iVar9 = 0;
      if (bVar11 == 0x2e) {
        puVar6 = (uint *)((int)puVar14 + 1);
        uVar15 = uVar12 - 1;
        goto LAB_00fb51c0;
      }
      uVar8 = 0;
      goto joined_r0x00fb5228;
    }
    uVar8 = uVar8 + 1;
    uVar12 = uVar12 - 1;
  } while (param_3 != uVar8);
  uVar8 = 0;
  goto LAB_00fb54c8;
  while( true ) {
    uVar12 = uVar15 - 1;
    bVar11 = *(byte *)(param_2 + uVar5 + uVar8 + 1);
    uVar5 = uVar3;
    if (9 < (byte)(bVar11 - 0x30)) break;
LAB_00fb5124:
    uVar15 = uVar12;
    uVar3 = uVar5 + 1;
    if (uVar5 >> 8 < 3) {
      *(byte *)((int)local_330 + uVar5) = bVar11 - 0x30;
    }
    local_338 = uVar3;
    if (~uVar8 + param_3 == uVar5) {
      iVar9 = 0;
      puVar14 = (uint *)(iVar16 + uVar5 + 1);
      uVar12 = 0;
      goto LAB_00fb539c;
    }
  }
  puVar14 = (uint *)(iVar16 + uVar3);
  iVar9 = 0;
  if (bVar11 == 0x2e) {
    uVar15 = uVar15 - 2;
    puVar6 = (uint *)(iVar16 + uVar3 + 1);
    uVar8 = uVar15;
    if (uVar3 == 0) {
LAB_00fb51c0:
      if (uVar15 == 0) {
        uVar15 = 0;
        uVar3 = 0;
        uVar12 = 0;
        puVar14 = puVar6;
      }
      else {
        puVar14 = (uint *)((int)puVar14 + uVar12);
        uVar12 = 0;
        do {
          if (*(byte *)((int)puVar6 + uVar12) != 0x30) {
            puVar6 = (uint *)((int)puVar6 + uVar12);
            uVar3 = 0;
            uVar8 = uVar15 - uVar12;
            goto joined_r0x00fb5198;
          }
          uVar12 = uVar12 + 1;
        } while (uVar15 != uVar12);
        uVar3 = 0;
        uVar12 = 0;
      }
    }
    else {
joined_r0x00fb5198:
      uVar12 = uVar8;
      if (uVar12 < 8) {
        uVar8 = local_338;
      }
      else {
        do {
          uVar8 = uVar3 + 8;
          if (0x2ff < uVar8) goto LAB_00fb5308;
          uVar10 = *puVar6;
          uVar5 = puVar6[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar10);
          if (((uVar10 + 0x46464646 | uVar10 + 0xcfcfcfd0 |
               puVar6[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar10) | uVar5) & 0x80808080) != 0)
          goto LAB_00fb5308;
          if (0x300 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar3,0x300,0x300,&DAT_01880eac);
          }
          uVar12 = uVar12 - 8;
          puVar6 = puVar6 + 2;
          *(uint *)((int)local_330 + uVar3) = uVar10 + 0xcfcfcfd0;
          *(uint *)((int)local_330 + uVar3 + 4) = uVar5;
          uVar3 = uVar8;
          local_338 = uVar8;
        } while (7 < uVar12);
      }
      if (uVar12 == 0) {
        uVar12 = 0;
        puVar14 = puVar6;
        local_338 = uVar8;
      }
      else {
LAB_00fb5308:
        bVar11 = (byte)*puVar6 - 0x30;
        if (bVar11 < 10) {
          iVar9 = 0;
          iVar16 = 0;
          do {
            iVar7 = iVar16;
            if (uVar3 + iVar9 >> 8 < 3) {
              *(byte *)((int)local_330 + (uVar3 - iVar7)) = bVar11;
            }
            if (uVar12 + iVar7 == 1) {
              uVar12 = 0;
              goto LAB_00fb5380;
            }
            iVar9 = iVar9 + 1;
            bVar11 = *(byte *)((int)puVar6 + (1 - iVar7)) - 0x30;
            iVar16 = iVar7 + -1;
          } while (bVar11 < 10);
          uVar12 = uVar12 + iVar7 + -1;
LAB_00fb5380:
          uVar3 = (uVar3 - iVar7) + 1;
          puVar6 = (uint *)((int)puVar6 + (1 - iVar7));
        }
        puVar14 = puVar6;
        local_338 = uVar3;
      }
    }
    iVar9 = uVar12 - uVar15;
    local_334 = iVar9;
  }
LAB_00fb539c:
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  else {
    if (param_3 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_3 - uVar12,param_3,&DAT_01880ebc);
    }
    iVar16 = 0;
    if (param_3 != uVar12) {
      iVar7 = uVar12 - param_3;
      do {
        cVar2 = *(char *)((param_2 + -1) - iVar7);
        if (cVar2 != '.') {
          if (cVar2 != '0') break;
          iVar16 = iVar16 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
    }
    local_338 = uVar3 - iVar16;
    iVar9 = iVar9 + uVar3;
    uVar8 = local_338;
    local_334 = iVar9;
    if (0x300 < local_338) {
      local_338 = 0x300;
      local_30 = 1;
      uVar8 = local_338;
    }
  }
  if (uVar12 != 0) {
    bVar11 = (byte)*puVar14;
joined_r0x00fb5228:
    if ((bVar11 | 0x20) == 0x65) {
      iVar16 = uVar12 - 1;
      if (iVar16 == 0) {
        local_334 = 0;
      }
      else {
        pbVar13 = (byte *)((int)puVar14 + 1);
        bVar11 = *pbVar13;
        if (bVar11 == 0x2d || bVar11 == 0x2b) {
          iVar16 = uVar12 - 2;
          if (iVar16 != 0) {
            pbVar13 = (byte *)((int)puVar14 + 2);
            goto LAB_00fb5430;
          }
          local_334 = 0;
        }
        else {
LAB_00fb5430:
          local_334 = 0;
          iVar7 = 0;
          do {
            bVar1 = *pbVar13;
            if (9 < (byte)(bVar1 - 0x30)) break;
            pbVar13 = pbVar13 + 1;
            iVar4 = iVar7 * 10 + (uint)(byte)(bVar1 - 0x30);
            if (iVar7 < 0x10000) {
              local_334 = iVar4;
              iVar7 = iVar4;
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        if (bVar11 == 0x2d) {
          local_334 = -local_334;
        }
      }
      local_334 = iVar9 + local_334;
    }
  }
  if (0x12 < uVar8) goto LAB_00fb54e0;
LAB_00fb54c8:
  FUN_016dd606((int)local_330 + uVar8,0,0x13 - uVar8);
LAB_00fb54e0:
  FUN_016dd1aa(param_1,&local_338,0x30c);
  return;
}

