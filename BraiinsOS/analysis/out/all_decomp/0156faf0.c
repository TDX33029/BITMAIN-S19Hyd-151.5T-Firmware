// FUN_0156faf0 @ 0156faf0 size=2660 calls_out=11 calls_in=2
// strings: /etc/ssl/certs/ca-certificates.crt | /etc/pki/ca-trust/extracted/pem/tls-ca-bundle.pem | /etc/ssl/ca-bundle.pem | /etc/pki/tls/cacert.pem | /etc/ssl/cert.pem | /opt/etc/ssl/certs/ca-certificates.crt

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0156faf0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 *puVar22;
  int *local_160;
  undefined4 *local_15c;
  undefined4 *local_138;
  int *local_134;
  undefined4 *local_130;
  undefined4 *local_120;
  int *local_11c;
  undefined4 *local_118;
  undefined4 *local_114;
  int *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  int local_104;
  int local_100;
  undefined4 *local_98;
  int *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  int *local_88;
  undefined4 *local_84;
  
  FUN_015e9334(&local_98,&DAT_0040d90e,0xd);
  piVar17 = local_94;
  puVar1 = local_98;
  FUN_015e9334(&local_108,&DAT_0040d91b,0xc);
  puVar8 = local_108;
  if (local_108 == (undefined4 *)&DAT_80000000) {
    piVar9 = (int *)&DAT_00000004;
    puVar19 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
  }
  else {
    iVar16 = 1;
    iVar6 = local_104;
    iVar5 = local_100;
    if (local_100 == 0) {
      iVar21 = 1;
LAB_0156fc28:
      piVar9 = (int *)thunk_FUN_016d4a50(0x30);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x30);
      }
      *piVar9 = local_100;
      piVar9[1] = iVar16;
      piVar9[2] = local_100;
      local_90 = (undefined4 *)&DAT_00000001;
      local_98 = (undefined4 *)&DAT_00000004;
      local_94 = piVar9;
      while (puVar19 = local_90, iVar21 == 0) {
        iVar3 = 1;
        iVar16 = iVar6;
        if (iVar5 == 0) {
          iVar21 = 1;
          iVar18 = iVar5;
        }
        else {
          iVar18 = 0;
          do {
            if (*(char *)(iVar6 + iVar18) == ':') {
              iVar21 = 0;
              iVar16 = iVar6 + iVar18 + 1;
              iVar5 = iVar5 - (iVar18 + 1);
              goto LAB_0156fcf0;
            }
            iVar18 = iVar18 + 1;
          } while (iVar5 != iVar18);
          iVar21 = 1;
          iVar18 = iVar5;
LAB_0156fcf0:
          if (iVar18 != 0) {
            iVar3 = thunk_FUN_016d4a50(iVar18);
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar18);
            }
            FUN_016dd1aa(iVar3,iVar6,iVar18);
            if (iVar18 == -0x80000000) break;
          }
        }
        iVar6 = iVar16;
        if (puVar19 == local_98) {
          FUN_01571ea4(&local_98,puVar19,2 - iVar21,4,0xc);
          piVar9 = local_94;
        }
        local_90 = (undefined4 *)((int)puVar19 + 1);
        piVar10 = piVar9 + (int)puVar19 * 3;
        *piVar10 = iVar18;
        piVar10[1] = iVar3;
        piVar10[2] = iVar18;
      }
      piVar9 = local_94;
      puVar14 = local_98;
    }
    else {
      iVar3 = 0;
      do {
        if (*(char *)(local_104 + iVar3) == ':') {
          iVar21 = 0;
          iVar5 = local_100 - (iVar3 + 1);
          iVar6 = local_104 + iVar3 + 1;
          goto joined_r0x0156fbec;
        }
        iVar3 = iVar3 + 1;
      } while (local_100 != iVar3);
      iVar21 = 1;
      iVar3 = local_100;
joined_r0x0156fbec:
      local_100 = iVar3;
      if (iVar3 == 0) goto LAB_0156fc28;
      iVar16 = thunk_FUN_016d4a50(iVar3);
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar3);
      }
      FUN_016dd1aa(iVar16,local_104,iVar3);
      if (iVar3 != -0x80000000) goto LAB_0156fc28;
      piVar9 = (int *)&DAT_00000004;
      puVar19 = (undefined4 *)0x0;
      puVar14 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      thunk_FUN_016d3fb4(local_104);
    }
  }
  local_138 = puVar14;
  local_134 = piVar9;
  local_130 = puVar19;
  if (puVar19 != (undefined4 *)0x0 || puVar1 != (undefined4 *)&DAT_80000000) {
    FUN_0157084c(param_1,&local_138);
    goto joined_r0x0156fdc0;
  }
  FUN_015e9334(&local_98,&DAT_0040d90e,0xd);
  puVar22 = local_90;
  piVar10 = local_94;
  puVar8 = local_98;
  if (local_98 == (undefined4 *)&DAT_80000000) {
    puVar8 = (undefined4 *)&DAT_80000000;
    puVar22 = puVar14;
    piVar10 = param_1;
  }
  else {
    FUN_015f5984(&local_98,local_94,local_90);
    puVar12 = local_90;
    if (local_98 == (undefined4 *)&DAT_00000001) {
      if ((char)local_94 == '\x03') {
        uVar20 = *local_90;
        puVar22 = (undefined4 *)local_90[1];
        pcVar4 = (code *)*puVar22;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        thunk_FUN_016d3fb4(puVar12);
        puVar22 = puVar12;
      }
      if (puVar8 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(piVar10);
      }
      puVar8 = (undefined4 *)&DAT_80000000;
    }
  }
  FUN_015e9334(&local_98,&DAT_0040d91b,0xc);
  puVar13 = local_90;
  piVar15 = local_94;
  puVar12 = local_98;
  if (local_98 == (undefined4 *)&DAT_80000000) {
LAB_0156ff2c:
    local_15c = (undefined4 *)0x0;
    local_160 = (int *)&DAT_00000004;
  }
  else {
    FUN_015f5984(&local_98,local_94,local_90);
    puVar2 = local_90;
    if (local_98 == (undefined4 *)&DAT_00000001) {
      if ((char)local_94 == '\x03') {
        puVar13 = (undefined4 *)local_90[1];
        uVar20 = *local_90;
        pcVar4 = (code *)*puVar13;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        thunk_FUN_016d3fb4(puVar2);
      }
      local_15c = (undefined4 *)0x0;
      local_160 = (int *)&DAT_00000004;
      if (puVar12 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(piVar15);
        goto LAB_0156ff2c;
      }
    }
    else {
      local_160 = (int *)thunk_FUN_016d4a50(0xc);
      if (local_160 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      local_160[2] = (int)puVar13;
      local_15c = (undefined4 *)&DAT_00000001;
      *local_160 = (int)puVar12;
      local_160[1] = (int)piVar15;
    }
  }
  local_120 = local_15c;
  local_11c = local_160;
  local_118 = local_15c;
  local_114 = puVar8;
  local_110 = piVar10;
  local_10c = puVar22;
  if (puVar8 == (undefined4 *)&DAT_80000000) {
    pcVar7 = "/etc/ssl/certs/ca-certificates.crt";
    puVar8 = (undefined4 *)&DAT_00000022;
    FUN_015f5984(&local_98,"/etc/ssl/certs/ca-certificates.crt",0x22);
    if (local_98 == (undefined4 *)&DAT_00000001) {
      piVar10 = (int *)((uint)&local_98 | 4);
      if ((char)*piVar10 == '\x03') {
        puVar8 = (undefined4 *)piVar10[1];
        uVar20 = *puVar8;
        puVar22 = (undefined4 *)puVar8[1];
        pcVar4 = (code *)*puVar22;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        thunk_FUN_016d3fb4(puVar8);
      }
      pcVar7 = "/etc/pki/ca-trust/extracted/pem/tls-ca-bundle.pem";
      puVar8 = (undefined4 *)&DAT_00000031;
      FUN_015f5984(&local_98,"/etc/pki/ca-trust/extracted/pem/tls-ca-bundle.pem",0x31);
      if (local_98 == (undefined4 *)0x0) goto LAB_01570238;
      if ((char)*piVar10 == '\x03') {
        puVar8 = (undefined4 *)piVar10[1];
        uVar20 = *puVar8;
        puVar22 = (undefined4 *)puVar8[1];
        pcVar4 = (code *)*puVar22;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        thunk_FUN_016d3fb4(puVar8);
      }
      pcVar7 = "/etc/pki/tls/certs/ca-bundle.crt\v\x18";
      puVar8 = (undefined4 *)&DAT_00000020;
      FUN_015f5984(&local_98,&DAT_00566450,0x20);
      if (local_98 != (undefined4 *)&DAT_00000001) goto LAB_01570238;
      if ((char)*piVar10 == '\x03') {
        puVar8 = (undefined4 *)piVar10[1];
        uVar20 = *puVar8;
        puVar22 = (undefined4 *)puVar8[1];
        pcVar4 = (code *)*puVar22;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        thunk_FUN_016d3fb4(puVar8);
      }
      pcVar7 = "/etc/ssl/ca-bundle.pem";
      puVar8 = (undefined4 *)&DAT_00000016;
      FUN_015f5984(&local_98,"/etc/ssl/ca-bundle.pem",0x16);
      if (local_98 != (undefined4 *)&DAT_00000001) goto LAB_01570238;
      if ((char)*piVar10 == '\x03') {
        puVar8 = (undefined4 *)piVar10[1];
        uVar20 = *puVar8;
        puVar22 = (undefined4 *)puVar8[1];
        pcVar4 = (code *)*puVar22;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        thunk_FUN_016d3fb4(puVar8);
      }
      pcVar7 = "/etc/pki/tls/cacert.pem";
      puVar8 = (undefined4 *)&DAT_00000017;
      FUN_015f5984(&local_98,"/etc/pki/tls/cacert.pem",0x17);
      if (local_98 != (undefined4 *)&DAT_00000001) goto LAB_01570238;
      piVar15 = (int *)((uint)&local_108 | 4);
      iVar5 = piVar10[1];
      *piVar15 = *piVar10;
      piVar15[1] = iVar5;
      local_108 = (undefined4 *)&DAT_00000001;
      FUN_00de397c(&local_108);
      pcVar7 = "/etc/ssl/cert.pem";
      puVar8 = (undefined4 *)&DAT_00000011;
      FUN_015f5984(&local_98,"/etc/ssl/cert.pem",0x11);
      if (local_98 != (undefined4 *)&DAT_00000001) goto LAB_01570238;
      iVar5 = piVar10[1];
      *piVar15 = *piVar10;
      piVar15[1] = iVar5;
      local_108 = (undefined4 *)&DAT_00000001;
      FUN_00de397c(&local_108);
      pcVar7 = "/opt/etc/ssl/certs/ca-certificates.crt";
      puVar8 = (undefined4 *)&DAT_00000026;
      FUN_015f5984(&local_98,"/opt/etc/ssl/certs/ca-certificates.crt",0x26);
      if (local_98 != (undefined4 *)&DAT_00000001) goto LAB_01570238;
      iVar5 = piVar10[1];
      *piVar15 = *piVar10;
      piVar15[1] = iVar5;
      local_108 = (undefined4 *)&DAT_00000001;
      FUN_00de397c(&local_108);
      pcVar7 = "/etc/ssl/certs/cacert.pem";
      puVar8 = (undefined4 *)&DAT_00000019;
      FUN_015f5984(&local_98,"/etc/ssl/certs/cacert.pem",0x19);
      if (local_98 != (undefined4 *)&DAT_00000001) goto LAB_01570238;
      iVar5 = piVar10[1];
      *piVar15 = *piVar10;
      piVar15[1] = iVar5;
      local_108 = (undefined4 *)&DAT_00000001;
      FUN_00de397c(&local_108);
      puVar8 = (undefined4 *)&DAT_80000000;
    }
    else {
LAB_01570238:
      piVar10 = (int *)thunk_FUN_016d4a50(puVar8);
      if (piVar10 == (int *)0x0) {
        uVar20 = 1;
LAB_01570510:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar20,puVar8);
      }
      FUN_016dd1aa(piVar10,pcVar7,puVar8);
    }
    local_114 = puVar8;
    local_110 = piVar10;
    local_10c = puVar8;
  }
  pcVar7 = (char *)((uint)&local_98 | 4);
  iVar5 = 0;
  puVar8 = local_114;
  do {
    uVar11 = *(undefined4 *)((int)&DAT_0188b874 + iVar5);
    puVar22 = *(undefined4 **)((int)&DAT_0188b878 + iVar5);
    FUN_015f5984(&local_98,uVar11,puVar22);
    iVar5 = iVar5 + 8;
    if (local_98 == (undefined4 *)0x0) {
      uVar20 = 0;
      if ((int)puVar22 < 0) goto LAB_01570510;
      if (puVar22 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)&DAT_00000001;
      }
      else {
        puVar12 = (undefined4 *)thunk_FUN_016d4a50(puVar22);
        if (puVar12 == (undefined4 *)0x0) {
          uVar20 = 1;
          puVar8 = puVar22;
          goto LAB_01570510;
        }
      }
      FUN_016dd1aa(puVar12,uVar11,puVar22);
      FUN_015f5984(&local_98,puVar12,puVar22);
      puVar8 = local_90;
      if (local_98 == (undefined4 *)&DAT_00000001) {
        if ((char)local_94 == '\x03') {
          puVar13 = (undefined4 *)local_90[1];
          uVar20 = *local_90;
          pcVar4 = (code *)*puVar13;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar20);
          }
          if (puVar13[1] != 0) {
            thunk_FUN_016d3fb4(uVar20);
          }
          thunk_FUN_016d3fb4(puVar8);
        }
        if (puVar22 != (undefined4 *)0x0) {
          puVar8 = puVar12;
          goto LAB_01570318;
        }
      }
      else {
        if (local_15c == local_120) {
          FUN_01699b34(&local_120);
          local_160 = local_11c;
        }
        local_118 = (undefined4 *)((int)local_15c + 1);
        piVar10 = local_160 + (int)local_15c * 3;
        *piVar10 = (int)puVar22;
        piVar10[1] = (int)puVar12;
        piVar10[2] = (int)puVar22;
        local_15c = local_118;
      }
    }
    else {
      puVar12 = puVar8;
      if (*pcVar7 == '\x03') {
        puVar12 = *(undefined4 **)(pcVar7 + 4);
        puVar22 = (undefined4 *)puVar12[1];
        uVar20 = *puVar12;
        pcVar4 = (code *)*puVar22;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar20);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
LAB_01570318:
        thunk_FUN_016d3fb4(puVar12);
        puVar12 = puVar8;
      }
    }
    puVar8 = puVar12;
  } while (iVar5 != 0x18);
  local_108 = local_120;
  local_88 = local_110;
  local_84 = local_10c;
  local_98 = local_120;
  local_94 = local_11c;
  local_90 = local_118;
  local_8c = local_114;
  FUN_0157084c(param_1,&local_98);
  if (((uint)local_8c & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_88);
  }
  piVar10 = local_94;
  piVar15 = local_94 + 1;
  for (puVar8 = local_90; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)((int)puVar8 + -1)) {
    if (piVar15[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar15);
    }
    piVar15 = piVar15 + 3;
  }
  if (local_98 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(piVar10);
  }
joined_r0x0156fdc0:
  puVar8 = (undefined4 *)0x0;
  if (((uint)puVar1 & 0x7fffffff) == 0) goto LAB_015707d4;
  do {
    thunk_FUN_016d3fb4(piVar17);
LAB_015707d4:
    piVar17 = piVar9 + (int)puVar8 * 3 + -3;
    do {
      piVar10 = piVar17;
      if (puVar19 == puVar8) {
        if (puVar14 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(piVar9);
        }
        return;
      }
      piVar17 = piVar10 + 3;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*piVar17 == 0);
    piVar17 = (int *)piVar10[4];
  } while( true );
}

