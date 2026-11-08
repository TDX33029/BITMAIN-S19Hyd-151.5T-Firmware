// FUN_00e1b750 @ 00e1b750 size=4568 calls_out=36 calls_in=0
// strings: lvedChainConfig | lvedChainConfig | lvedChainConfig | SetGloba | SetGloba | lDefaultError

uint FUN_00e1b750(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  int extraout_r1;
  code *pcVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  undefined *puVar18;
  undefined4 uVar19;
  char cVar20;
  undefined4 uVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  char cVar26;
  uint *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  bool bVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined *local_3c4;
  undefined4 local_3ac;
  undefined4 local_3a8;
  uint local_33c;
  int local_334;
  int local_330;
  uint local_32c;
  undefined4 *local_328;
  undefined4 local_324;
  int local_320;
  int local_31c;
  int local_318;
  uint local_314;
  int local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  int local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined4 ***local_108;
  uint local_104;
  uint local_f8;
  undefined4 *local_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  uint uStack_e0;
  int iStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined **local_74;
  undefined *local_70;
  undefined4 *local_6c;
  undefined4 **local_68;
  undefined *local_64;
  undefined4 local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c [2];
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar32 = thunk_FUN_016de0ee(0,0x40);
  iVar23 = (int)uVar32 + (int)((ulonglong)uVar32 >> 0x20);
  uVar19 = *(undefined4 *)(param_1 + 8);
  uVar21 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar23 + 0x38) != '\x01') {
    local_3a8 = 0;
    local_3ac = 0;
    if (*(char *)(iVar23 + 0x38) == '\x02') goto LAB_00e1b7c8;
    FUN_015e8e6c(iVar23,FUN_01655ec4);
    *(undefined1 *)(iVar23 + 0x38) = 1;
  }
  local_3a8 = *(undefined4 *)(iVar23 + 0x18);
  local_3ac = *(undefined4 *)(iVar23 + 0x1c);
  *(undefined4 *)(iVar23 + 0x18) = uVar19;
  *(undefined4 *)(iVar23 + 0x1c) = uVar21;
LAB_00e1b7c8:
  piVar6 = (int *)(param_1 + 0x18);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x226)) {
  case 0:
    local_c8 = *(undefined4 *)(param_1 + 0x218);
    uStack_c4 = *(undefined4 *)(param_1 + 0x21c);
    uStack_c0 = *(undefined4 *)(param_1 + 0x220);
    FUN_016dd1aa((uint)&local_330 | 4,&local_f8,0x48);
    iVar24 = 0;
    *(undefined2 *)(param_1 + 0x224) = 0;
    uVar19 = *(undefined4 *)(param_1 + 0x210);
    uVar21 = *(undefined4 *)(param_1 + 0x214);
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_016dd1aa(param_1 + 0x1c,&local_330,0x4c);
    *(undefined4 *)(param_1 + 0x1a0) = uVar21;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = uVar19;
    *(undefined1 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x204);
    *(int **)(param_1 + 0x208) = piVar6;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    piVar25 = piVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018790a8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018790a8);
  case 3:
    iVar24 = *(int *)(param_1 + 0x20c);
    piVar25 = *(int **)(param_1 + 0x208);
  }
  iVar15 = 0;
  if (iVar24 != 2) {
    iVar15 = iVar24 + 1;
  }
  *(int *)(param_1 + 0x20c) = iVar15;
  uVar32 = thunk_FUN_016de0ee(iVar24 + 1,0x1c4);
  puVar27 = (uint *)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
  piVar7 = piVar25 + 0x54;
  piVar8 = piVar25 + 0x45;
  local_3c4 = &DAT_0187b34c;
  local_334 = 3;
  local_33c = 0;
  iVar15 = 0x32bb;
LAB_00e1b990:
  do {
    if (iVar24 == 2) {
LAB_00e1ba10:
      iVar15 = 0;
      if (local_334 == 0) goto LAB_00e1cd20;
      goto LAB_00e1ba1c;
    }
    if (iVar24 == 1) {
      iVar15 = 0;
      if (local_334 == 0) goto LAB_00e1cd20;
LAB_00e1b9f4:
      local_334 = local_334 + -1;
      if (piVar25[0x40] == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar25[0x5f]) {
        case '\0':
          *piVar8 = piVar25[0x41];
          piVar25[0x46] = piVar25[0x42];
          piVar25[0x47] = piVar25[0x43];
          piVar25[0x48] = piVar25[0x44];
          iVar24 = piVar25[0x47];
          puVar22 = (uint *)(iVar24 + 0x98);
          uVar9 = *(uint *)(iVar24 + 0x98);
          if ((uVar9 < 0xfffffff0) && ((uVar9 & 8) == 0)) {
            if (*puVar22 != uVar9) {
              ClearExclusiveLocal();
              goto LAB_00e1bb7c;
            }
            bVar30 = (bool)hasExclusiveAccess(puVar22);
            if (!bVar30) goto LAB_00e1bb7c;
            *puVar22 = uVar9 + 0x10;
            DataMemoryBarrier(0xb);
          }
          else {
LAB_00e1bb7c:
            FUN_0127d66c(puVar22);
          }
          FUN_0128236c(puVar22);
          FUN_0128236c((uint)puVar22 | 1);
          uVar2 = *(undefined2 *)(iVar24 + 0x9c);
          uVar3 = *(undefined2 *)(iVar24 + 0x9e);
          local_330 = 0;
          bVar30 = true;
          puVar11 = puVar27;
          if ((char)puVar27[0xd] != '\x01') {
            puVar11 = (uint *)FUN_01284e64();
            if (puVar11 == (uint *)0x0) {
              FUN_01283788(&local_f8);
              FUN_012824e8(&local_330);
              bVar30 = false;
              local_330 = 1;
              local_32c = local_f8;
              local_328 = local_f4;
              local_324 = uStack_f0;
              local_320 = iStack_ec;
              local_31c = local_e8;
              local_318 = iStack_e4;
              local_314 = uStack_e0;
              local_310 = iStack_dc;
              local_30c = local_d8;
              local_308 = uStack_d4;
              uStack_304 = uStack_d0;
              uStack_300 = uStack_cc;
              uStack_2fc = local_c8;
              puVar11 = &local_32c;
            }
          }
          uVar17 = puVar11[9];
          uVar29 = puVar11[8];
          iVar24 = uVar17 * -4;
          uVar9 = uVar17;
          do {
            if (iVar24 == 0) goto LAB_00e1bc04;
            puVar12 = (undefined4 *)((uVar29 - 4) - iVar24);
            iVar24 = iVar24 + 4;
            uVar9 = uVar9 - 1;
          } while ((uint *)*puVar12 != puVar22);
          *(undefined4 *)(uVar29 + uVar9 * 4) = *(undefined4 *)(uVar29 + (uVar17 - 1) * 4);
          puVar11[9] = uVar17 - 1;
LAB_00e1bc04:
          if (!bVar30) {
            do {
              iVar24 = DAT_018dd954 + -1;
              bVar30 = (bool)hasExclusiveAccess(0x18dd954);
            } while (!bVar30);
            DAT_018dd954 = iVar24;
            if (local_310 != 0) {
              thunk_FUN_016d3fb4(local_30c);
            }
            if (local_318 != 3) {
              if (local_318 == 0) {
                FUN_012848c0(local_314);
              }
              else if (local_318 == 1) {
                FUN_01283d28();
              }
              else {
                FUN_01284358();
              }
            }
          }
          local_330 = 0;
          bVar30 = true;
          puVar11 = puVar27;
          if ((char)puVar27[0xd] != '\x01') {
            puVar11 = (uint *)FUN_01284e64();
            if (puVar11 == (uint *)0x0) {
              FUN_01283788(&local_f8);
              FUN_012824e8(&local_330);
              bVar30 = false;
              local_330 = 1;
              local_32c = local_f8;
              local_328 = local_f4;
              local_324 = uStack_f0;
              local_320 = iStack_ec;
              local_31c = local_e8;
              local_318 = iStack_e4;
              local_314 = uStack_e0;
              local_310 = iStack_dc;
              local_30c = local_d8;
              local_308 = uStack_d4;
              uStack_304 = uStack_d0;
              uStack_300 = uStack_cc;
              uStack_2fc = local_c8;
              puVar11 = &local_32c;
            }
          }
          uVar17 = puVar11[9];
          uVar29 = puVar11[8];
          iVar24 = uVar17 * -4;
          uVar9 = uVar17;
          do {
            if (iVar24 == 0) goto LAB_00e1bcd8;
            puVar1 = (uint *)((uVar29 - 4) - iVar24);
            iVar24 = iVar24 + 4;
            uVar9 = uVar9 - 1;
          } while (*puVar1 != ((uint)puVar22 | 1));
          *(undefined4 *)(uVar29 + uVar9 * 4) = *(undefined4 *)(uVar29 + (uVar17 - 1) * 4);
          puVar11[9] = uVar17 - 1;
LAB_00e1bcd8:
          if (!bVar30) {
            do {
              iVar24 = DAT_018dd954 + -1;
              bVar30 = (bool)hasExclusiveAccess(0x18dd954);
            } while (!bVar30);
            DAT_018dd954 = iVar24;
            if (local_310 != 0) {
              thunk_FUN_016d3fb4(local_30c);
            }
            if (local_318 != 3) {
              if (local_318 == 0) {
                FUN_012848c0(local_314);
              }
              else if (local_318 == 1) {
                FUN_01283d28();
              }
              else {
                FUN_01284358();
              }
            }
          }
          DataMemoryBarrier(0xb);
          do {
            uVar9 = *puVar22;
            bVar30 = (bool)hasExclusiveAccess(puVar22);
          } while (!bVar30);
          *puVar22 = uVar9 - 0x10;
          if ((uVar9 & 0xfffffff2) == 0x12) {
            FUN_0127d34c(puVar22);
          }
          *(undefined1 *)(piVar25 + 0x5e) = 0;
          *(undefined2 *)((int)piVar25 + 0x126) = uVar3;
          *(undefined2 *)(piVar25 + 0x49) = uVar2;
          piVar25[0x4a] = (int)piVar8;
          piVar10 = piVar8;
LAB_00e1bd94:
          *(undefined1 *)(piVar25 + 0x5d) = 0;
          piVar25[0x4b] = (int)piVar10;
          piVar25[0x4c] = (int)piVar10;
LAB_00e1bda0:
          *(undefined1 *)(piVar25 + 0x5c) = 0;
          piVar25[0x4d] = (int)piVar10;
          piVar25[0x4e] = (int)piVar10;
LAB_00e1bdac:
          iVar24 = *piVar10;
          *(undefined1 *)((int)piVar25 + 0x14d) = 0;
          piVar25[0x51] = iVar24 + 8;
          piVar25[0x52] = (int)(piVar10 + 1);
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187b34c);
        case '\x02':
          goto switchD_00e1ba64_caseD_2;
        case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar25[0x5e]) {
          case '\0':
            piVar10 = (int *)piVar25[0x4a];
            goto LAB_00e1bd94;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0187b32c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0187b32c);
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar25[0x5d]) {
          case '\0':
            piVar10 = (int *)piVar25[0x4c];
            goto LAB_00e1bda0;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0187b37c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0187b37c);
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar25[0x5c]) {
          case '\0':
            piVar10 = (int *)piVar25[0x4e];
            goto LAB_00e1bdac;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018acd5c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018acd5c);
          }
        }
        cVar4 = *(char *)(iVar23 + 0x38);
        if (cVar4 != '\x01') {
          cVar26 = '\0';
          cVar20 = '\0';
          if (cVar4 == '\x02') goto LAB_00e1be1c;
          FUN_015e8e6c(iVar23,FUN_005bc49c);
          *(undefined1 *)(iVar23 + 0x38) = 1;
        }
        cVar20 = *(char *)(iVar23 + 0x31);
        cVar26 = *(char *)(iVar23 + 0x30);
        cVar4 = cVar20;
        if (cVar26 != '\x01') {
LAB_00e1be14:
          *(char *)(iVar23 + 0x31) = cVar4;
          cVar4 = '\x01';
LAB_00e1be1c:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)piVar25 + 0x14d)) {
          case 0:
            *(undefined1 *)(piVar25 + 0x53) = 0;
            piVar25[0x4f] = piVar25[0x51];
            piVar25[0x50] = piVar25[0x52];
            break;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018ad404);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018ad404);
          case 4:
            goto switchD_00e1be28_caseD_4;
          }
          do {
            iVar24 = piVar25[0x4f];
            if (cVar4 != '\x01') {
              if (cVar4 == '\x02') {
                    /* WARNING: Subroutine does not return */
                FUN_015f853c(&DAT_018ae900);
              }
              FUN_015e8e6c(iVar23,FUN_01655ec4);
              *(undefined1 *)(iVar23 + 0x38) = 1;
            }
            if ((*(uint *)(iVar23 + 0x24) & 1) == 0) {
              uVar32 = FUN_0164e918();
              if ((uint)uVar32 < 2) {
                uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),1);
              }
            }
            else {
              uVar32 = CONCAT44(*(undefined4 *)(iVar23 + 0x28),*(undefined4 *)(iVar23 + 0x2c));
            }
            uVar9 = (uint)((ulonglong)uVar32 >> 0x20);
            uVar17 = (uint)uVar32;
            uVar9 = uVar9 ^ uVar9 << 0x11;
            *(undefined4 *)(iVar23 + 0x24) = 1;
            *(uint *)(iVar23 + 0x28) = uVar17;
            uVar9 = uVar17 >> 0x10 ^ uVar9 >> 7 ^ uVar17 ^ uVar9;
            *(uint *)(iVar23 + 0x2c) = uVar9;
            uVar9 = uVar9 + uVar17 >> 0x19 & 0x70;
            local_32c = *(uint *)(iVar24 + uVar9);
            DataMemoryBarrier(0xb);
            local_330 = iVar24 + uVar9;
            *(undefined1 *)(piVar25 + 0x53) = 1;
            local_32c = local_32c >> 2;
            local_314 = local_314 & 0xffffff00;
            local_318 = 0;
            local_320 = 0;
            local_324 = 0;
            local_328 = (undefined4 *)0x0;
            DataMemoryBarrier(0xb);
            uVar9 = *(uint *)piVar25[0x50];
            uVar17 = *(uint *)(piVar25[0x4f] + 0xb8) & 0xfffffffe;
            if (uVar9 != uVar17) {
              *(uint *)piVar25[0x50] = uVar17;
LAB_00e1c0dc:
              FUN_0163bdc0(&local_330);
              if (local_320 != 0) {
                (**(code **)(local_320 + 0xc))(local_31c);
              }
              *(undefined1 *)(piVar25 + 0x53) = 0;
              *(undefined1 *)(piVar25 + 0x5c) = 1;
              *(undefined1 *)((int)piVar25 + 0x14d) = 1;
              if (uVar9 != uVar17) {
                piVar6 = (int *)piVar25[0x4d];
                iVar23 = *piVar6;
                puVar27 = (uint *)(iVar23 + 0x98);
                uVar9 = *(uint *)(iVar23 + 0x98);
                if ((uVar9 < 0xfffffff0) && ((uVar9 & 8) == 0)) {
                  if (*puVar27 == uVar9) {
                    bVar30 = (bool)hasExclusiveAccess(puVar27);
                    if (bVar30) {
                      *puVar27 = uVar9 + 0x10;
                      DataMemoryBarrier(0xb);
                      goto LAB_00e1c1e4;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                }
                FUN_0127d66c(puVar27);
LAB_00e1c1e4:
                FUN_0128236c(puVar27);
                FUN_0128236c((uint)puVar27 | 1);
                DataMemoryBarrier(0xb);
                piVar6[1] = *(uint *)(iVar23 + 0xc0) & 0xfffffffe;
                iVar24 = *(uint *)(iVar23 + 0xa8) + 0xc4653601;
                if (*(uint *)(iVar23 + 0xa8) < 999999999) {
                  iVar24 = 0;
                }
                    /* WARNING: Could not recover jumptable at 0x00e1c234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (*(code *)((int)&DAT_00e1c238 + (&DAT_00e1c238)[iVar24]))();
                return uVar9;
              }
              puVar12 = (undefined4 *)FUN_00f22cac();
              *(undefined1 *)(piVar25 + 0x5d) = 1;
              *(undefined1 *)(piVar25 + 0x5e) = 1;
              (**(code **)*puVar12)();
              FUN_005c471c(piVar8);
              piVar25[0x40] = 1;
              *(undefined1 *)(piVar25 + 0x5f) = 1;
              if (local_334 != 0) goto LAB_00e1ba1c;
              iVar15 = 0;
              goto LAB_00e1cd20;
            }
            if ((*(uint *)(piVar25[0x4f] + 0xb8) & 1) != 0) goto LAB_00e1c0dc;
            *(undefined1 *)(piVar25 + 0x53) = 0;
            *piVar7 = local_330;
            piVar25[0x55] = local_32c;
            piVar25[0x56] = 0;
            piVar25[0x57] = 0;
            piVar25[0x58] = 0;
            piVar25[0x59] = local_31c;
            piVar25[0x5a] = 0;
            piVar25[0x5b] = local_314;
switchD_00e1be28_caseD_4:
            iVar24 = FUN_0163c044(piVar7,param_2);
            if (iVar24 != 0) goto code_r0x00e1c04c;
            FUN_0163bdc0(piVar7);
            if (piVar25[0x58] != 0) {
              (**(code **)(piVar25[0x58] + 0xc))(piVar25[0x59]);
            }
            *(undefined1 *)(piVar25 + 0x53) = 0;
            cVar4 = *(char *)(iVar23 + 0x38);
          } while( true );
        }
        if (cVar20 != '\0') {
          cVar4 = cVar20 + -1;
          goto LAB_00e1be14;
        }
        FUN_016455a4(*param_2,param_2[1]);
        goto LAB_00e1c0ac;
      }
      if (piVar25[0x40] == 1) goto LAB_00e1ba10;
      goto LAB_00e1cdb8;
    }
    if (iVar24 == 0) {
      if (local_334 != 0) {
        uVar9 = FUN_00ea2df0(piVar25,param_2);
        local_33c = uVar9 | local_33c;
        local_334 = local_334 + -1;
        if (local_334 != 0) goto LAB_00e1b9f4;
        iVar15 = 0;
      }
LAB_00e1cd20:
      if ((local_33c & 1) == 0) {
        iVar24 = *piVar25;
        bVar30 = iVar24 == 1;
        if (bVar30) {
          iVar15 = piVar25[0x40];
          iVar24 = 2;
          *piVar25 = 2;
        }
        bVar31 = bVar30 && iVar15 == 1;
        if (bVar30 && iVar15 == 1) {
          piVar25[0x40] = iVar24;
          bVar31 = piVar25[0x60] == 1;
        }
        if (!bVar31) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("expected completed future",0x19,&DAT_01878820);
        }
        piVar25[0x60] = iVar24;
        FUN_00de5178(piVar6);
        FUN_005c0c4c(param_1 + 0x118);
        FUN_005c1390(param_1 + 0x198);
        uVar5 = 1;
        local_33c = 0;
      }
      else {
        uVar5 = 3;
        local_33c = 1;
      }
      goto LAB_00e1cd88;
    }
    iVar24 = iVar24 + -3;
  } while( true );
code_r0x00e1c04c:
  *(undefined1 *)((int)piVar25 + 0x14d) = 4;
  if (cVar26 != '\0') {
    if (*(char *)(iVar23 + 0x38) != '\x01') {
      if (*(char *)(iVar23 + 0x38) == '\x02') goto LAB_00e1c0ac;
      FUN_015e8e6c(iVar23,FUN_01655ec4);
      *(undefined1 *)(iVar23 + 0x38) = 1;
    }
    *(char *)(iVar23 + 0x31) = cVar20;
    *(undefined1 *)(iVar23 + 0x30) = 1;
  }
LAB_00e1c0ac:
  uVar5 = 3;
  local_33c = 1;
  *(undefined1 *)(piVar25 + 0x5d) = 3;
  *(undefined1 *)(piVar25 + 0x5c) = 3;
  *(undefined1 *)(piVar25 + 0x5f) = 3;
  *(undefined1 *)(piVar25 + 0x5e) = 3;
  if (local_334 != 0) {
LAB_00e1ba1c:
    iVar24 = 0;
    local_334 = local_334 + -1;
    if (piVar25[0x60] == 0) {
      if ((char)piVar25[0x77] == '\0') {
        piVar25[99] = piVar25[0x61];
        piVar25[100] = piVar25[0x62];
        goto LAB_00e1c7b8;
      }
      if ((char)piVar25[0x77] != '\x03') {
        local_3c4 = &DAT_0187b38c;
switchD_00e1ba64_caseD_2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(local_3c4);
      }
      while (FUN_00ea70d0(&local_330,piVar25 + 0x65,param_2), local_330 != 4) {
        FUN_016dd1aa(&local_f8,&local_330,0x60);
        if ((char)piVar25[0x76] == '\x03') {
          cVar4 = (char)piVar25[0x75];
          bVar30 = cVar4 == '\x03';
          if (bVar30) {
            cVar4 = *(char *)((int)piVar25 + 0x1b1);
          }
          if (!bVar30 || cVar4 != '\x04') goto LAB_00e1c814;
          FUN_0163bdc0(piVar25 + 0x6d);
          if (piVar25[0x71] != 0) {
            (**(code **)(piVar25[0x71] + 0xc))(piVar25[0x72]);
          }
          *(undefined1 *)(piVar25 + 0x6c) = 0;
          if (local_f8 != 3) goto LAB_00e1c820;
LAB_00e1ccc0:
          (**(code **)*local_f4)();
        }
        else {
LAB_00e1c814:
          if (local_f8 == 3) goto LAB_00e1ccc0;
LAB_00e1c820:
          FUN_016dd1aa(&local_330,&local_f8,0x60);
          local_118 = 0x6cbcef6b;
          pbVar13 = (byte *)FUN_00ea77bc("lvedChainConfig",0x6cbcef6b,&local_118);
          local_118 = ((uint)pbVar13[3] << 0x18 | (uint)pbVar13[2] << 0x10 | (uint)pbVar13[1] << 8 |
                      (uint)*pbVar13) ^ 0xc535a649;
          local_114 = ((uint)pbVar13[7] << 0x18 | (uint)pbVar13[6] << 0x10 | (uint)pbVar13[5] << 8 |
                      (uint)pbVar13[4]) ^ 0x4e6b6857;
          local_110 = ((uint)pbVar13[0xb] << 0x18 | (uint)pbVar13[10] << 0x10 |
                       (uint)pbVar13[9] << 8 | (uint)pbVar13[8]) ^ 0x4f52a507;
          local_10c = ((uint)pbVar13[0xf] << 0x18 | (uint)pbVar13[0xe] << 0x10 |
                       (uint)pbVar13[0xd] << 8 | (uint)pbVar13[0xc]) ^ 0x65bb573e;
          local_108 = (undefined4 ***)
                      (((uint)pbVar13[0x13] << 0x18 | (uint)pbVar13[0x12] << 0x10 |
                        (uint)pbVar13[0x11] << 8 | (uint)pbVar13[0x10]) ^ 0xe4ce8290);
          local_104 = ((uint)pbVar13[0x17] << 0x18 | (uint)pbVar13[0x16] << 0x10 |
                       (uint)pbVar13[0x15] << 8 | (uint)pbVar13[0x14]) ^ 0xa70f831e;
          FUN_015ed164(&local_98,&local_118,0x18,local_2ec,local_2e8);
          if ((char)local_98 != '\x04') {
            local_8c = local_94;
            local_90 = local_98;
            if (DAT_018d9130 < 4) {
              uVar9 = (uint)DAT_018da2d4;
              if (uVar9 - 1 < 2) {
LAB_00e1ca38:
                if (uVar9 != 2) {
                  DataMemoryBarrier(0xb);
                  puVar18 = DAT_018daa78;
                  if (DAT_018dd984 != 2) {
                    puVar18 = &DAT_018ae394;
                  }
                  pcVar16 = s_SetGloba_00414c05;
                  if ((DAT_018dd984 == 2) && (pcVar16 = DAT_018daa74, DAT_018daa70 != 0)) {
                    pcVar16 = DAT_018daa74 + (*(int *)(puVar18 + 8) - 1U & 0xfffffff8) + 8;
                  }
                  iVar15 = (**(code **)(puVar18 + 0x14))(pcVar16);
                  if (iVar15 == 0) goto LAB_00e1cc40;
                }
                uVar19 = *(undefined4 *)(DAT_018da2cc + 0x1c);
                iVar15 = *(int *)(DAT_018da2cc + 0x20);
                if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187b39c);
                }
                uStack_54 = *(undefined4 *)(DAT_018da2cc + 0x24);
                uStack_50 = *(undefined4 *)(DAT_018da2cc + 0x28);
                uStack_4c = 0;
                local_44 = 0x37;
                local_48 = &DAT_0035950a;
                local_5c = uVar19;
                iStack_58 = iVar15;
                if (iVar15 == 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187b39c);
                }
                local_68 = local_2c;
                local_6c = &local_40;
                local_74 = &local_48;
                local_78 = &local_5c;
                local_84 = &local_78;
                local_30 = 1;
                local_80 = 2;
                local_64 = &DAT_0187b3ac;
                local_114 = 0;
                local_70 = &DAT_018abb78;
                local_2c[0] = &local_90;
                local_108 = &local_84;
                local_118 = 1;
                DataMemoryBarrier(0xb);
                pcVar16 = s_SetGloba_00414c05;
                puVar18 = &DAT_018ae394;
                if (DAT_018dd984 == 2) {
                  pcVar16 = DAT_018daa74;
                  puVar18 = DAT_018daa78;
                  if (DAT_018daa70 != 0) {
                    pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                  }
                }
                local_104 = DAT_018da2cc;
                local_7c = (undefined4 *)(DAT_018da2cc + 0x1c);
                local_40 = uVar19;
                local_3c = iVar15;
                local_38 = uStack_54;
                local_34 = uStack_50;
                iVar15 = (**(code **)(puVar18 + 0x28))(pcVar16,&local_118);
                if (iVar15 != 0) {
                  (**(code **)(puVar18 + 0x2c))(pcVar16,&local_118);
                }
              }
              else if (uVar9 != 0) {
                uVar9 = FUN_0169ac90(&DAT_018da2cc);
                uVar9 = uVar9 & 0xff;
                if (uVar9 != 0) goto LAB_00e1ca38;
              }
            }
LAB_00e1cc40:
            puVar12 = local_8c;
            if ((char)local_90 == '\x03') {
              uVar19 = *local_8c;
              puVar28 = (undefined4 *)local_8c[1];
              pcVar14 = (code *)*puVar28;
              if (pcVar14 != (code *)0x0) {
                (*pcVar14)(uVar19);
              }
              if (puVar28[1] != 0) {
                thunk_FUN_016d3fb4(uVar19);
              }
              thunk_FUN_016d3fb4(puVar12);
            }
          }
          if (local_2f0 != 0) {
            thunk_FUN_016d3fb4(local_2ec);
          }
          if (local_32c != 0) {
            thunk_FUN_016d3fb4(local_328);
          }
          if (local_f8 == 3) goto LAB_00e1ccc0;
        }
LAB_00e1c7b8:
        *(undefined1 *)(piVar25 + 0x76) = 0;
        piVar25[0x65] = (int)(piVar25 + 99);
      }
      *(undefined1 *)(piVar25 + 0x77) = 3;
      local_33c = 1;
      iVar15 = extraout_r1;
    }
    else {
      iVar15 = local_334;
      if (piVar25[0x60] != 1) {
LAB_00e1cdb8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0035b674,0x45,&DAT_0187b564);
      }
    }
    goto LAB_00e1b990;
  }
LAB_00e1cd88:
  cVar4 = *(char *)(iVar23 + 0x38);
  *(undefined1 *)(param_1 + 0x226) = uVar5;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') goto joined_r0x00e1cda8;
    FUN_015e8e6c(iVar23,FUN_01655ec4);
    *(undefined1 *)(iVar23 + 0x38) = 1;
  }
  *(undefined4 *)(iVar23 + 0x18) = local_3a8;
  *(undefined4 *)(iVar23 + 0x1c) = local_3ac;
joined_r0x00e1cda8:
  if (local_33c == 0) {
    local_330 = 2;
    FUN_00e1d554(param_1,&local_330);
    return 0;
  }
  return local_33c;
}

