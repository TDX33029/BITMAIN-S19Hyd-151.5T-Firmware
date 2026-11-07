// FUN_00ef9ea0 @ 00ef9ea0 size=4908 calls_out=26 calls_in=1
// strings: filled must not become larger than initialized | filled must not become larger than initialized | filled must not become larger than initialized | filled must not become larger than initialized

void FUN_00ef9ea0(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  undefined4 ***pppuVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 *extraout_r3;
  undefined4 **ppuVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  char cVar14;
  undefined1 *puVar15;
  undefined4 **ppuVar16;
  undefined4 **ppuVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  bool bVar23;
  undefined8 uVar24;
  int *local_b4;
  undefined1 *local_ac;
  int *local_a8;
  int local_a0;
  int *local_9c;
  int *local_90;
  undefined4 **local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 **local_78;
  undefined4 *local_74;
  undefined4 **local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 ***local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 **local_38;
  undefined4 *local_34;
  undefined4 **local_30;
  undefined1 *local_2c;
  
  uVar24 = thunk_FUN_016de0ee(param_1,0x40,param_3,param_1);
  ppuVar17 = (undefined4 **)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
  puVar18 = (undefined4 *)(uint)*(byte *)(ppuVar17 + 0xe);
  if (puVar18 == (undefined4 *)&DAT_00000001) {
LAB_00ef9ef8:
    puVar19 = (undefined4 *)&DAT_00000001;
    puVar18 = (undefined4 *)
              (~(uint)*(byte *)(ppuVar17 + 0xc) & 1 |
              (uint)(*(char *)((int)ppuVar17 + 0x31) != '\0'));
  }
  else {
    puVar19 = puVar18;
    if (puVar18 != (undefined4 *)&SUB_00000002) {
      FUN_015e8e6c(ppuVar17,FUN_005bc49c);
      *(undefined1 *)(ppuVar17 + 0xe) = 1;
      goto LAB_00ef9ef8;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x264)) {
  case 0:
    puVar20 = *(undefined4 **)(param_2 + 0x54);
    puVar21 = *(undefined4 **)(param_2 + 0x58);
    if (*(int *)(param_2 + 0x50) == 3) {
      ppuVar16 = (undefined4 **)&DAT_80000000;
      *(undefined4 *)(param_2 + 0xb0) = 3;
      *(undefined4 **)(param_2 + 0xb4) = puVar20;
      *(undefined4 **)(param_2 + 0xb8) = puVar21;
      iVar5 = param_2;
      local_90 = param_3;
      goto LAB_00efaa00;
    }
    *(undefined4 **)(param_2 + 0xb4) = puVar20;
    *(undefined4 **)(param_2 + 0xb8) = puVar21;
    *(int *)(param_2 + 0xb0) = *(int *)(param_2 + 0x50);
    FUN_016dd1aa(param_2 + 0xbc,param_2 + 0x5c,0x54);
    FUN_016dd1aa(param_2 + 0x110,param_2 + 0xb0,0x60);
    *(undefined1 *)(param_2 + 0x25c) = 0;
switchD_00ef9fa8_caseD_0:
    local_a0 = param_2 + 0x110;
    FUN_016dd1aa(param_2 + 0x170,local_a0,0x60);
    *(undefined1 *)(param_2 + 0x260) = 1;
    *(undefined4 *)(param_2 + 0x1d4) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_2 + 0x180) = 2;
    *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_2 + 0x134);
    *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined4 *)(param_2 + 0x230) = 0;
    *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 **)(param_2 + 0x234) = (undefined4 *)(param_2 + 0x1e0);
    *(undefined4 *)(param_2 + 0x204) = 0;
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_2 + 0x1f0) = 0;
    *(undefined1 *)(param_2 + 0x25f) = 1;
    *(undefined4 *)(param_2 + 400) = 2;
    *(undefined2 *)(param_2 + 0x25d) = 0;
    *(int *)(param_2 + 500) = param_2 + 0x170;
    *(undefined4 **)(param_2 + 0x208) = (undefined4 *)(param_2 + 0x1d0);
    *(undefined1 *)(param_2 + 600) = 0;
    *(undefined1 *)(param_2 + 0x22c) = 0;
    *(undefined1 *)(param_2 + 0x200) = 0;
LAB_00efa160:
    local_9c = (int *)(param_2 + 0x1f0);
    local_a8 = (int *)(param_2 + 0x204);
    puVar4 = &DAT_0187b518;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x200)) {
    case 0:
      puVar20 = *(undefined4 **)(param_2 + 500);
      uVar11 = 2;
      *(undefined4 **)(param_2 + 0x1f8) = puVar20;
      local_70 = (undefined4 **)*puVar20;
      local_6c = (undefined4 *)puVar20[1];
      local_68 = (undefined4 *)puVar20[2];
      local_64 = puVar20[3];
      *puVar20 = 2;
      if (local_70 != (undefined4 **)&SUB_00000002) {
        FUN_00a86e98(&local_70);
        if (local_64 != -1) {
          FUN_016dffb2();
        }
        FUN_00a414e8(&local_70);
      }
      piVar13 = (int *)(*(int *)(param_2 + 0x1f8) + 0x30);
      if (*piVar13 != 4) {
        puVar19 = (undefined4 *)(uint)*(byte *)(ppuVar17 + 0xe);
        *(int **)(param_2 + 0x1fc) = piVar13;
        if (puVar19 != (undefined4 *)&DAT_00000001) goto LAB_00efa214;
        goto LAB_00efa23c;
      }
      puVar20 = *(undefined4 **)(*(int *)(param_2 + 0x1f8) + 0x34);
LAB_00efa2e0:
      uVar10 = 4;
      *(undefined1 *)(param_2 + 0x200) = 1;
LAB_00efa2f0:
      if (((*local_9c == 1) && (cVar14 = *(char *)(param_2 + 500), cVar14 != '\x04')) &&
         (cVar14 == '\x03')) {
        puVar21 = *(undefined4 **)(param_2 + 0x1f8);
        puVar19 = (undefined4 *)puVar21[1];
        uVar12 = *puVar21;
        if ((code *)*puVar19 != (code *)0x0) {
          (*(code *)*puVar19)(uVar12);
        }
        if (puVar19[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
        thunk_FUN_016d3fb4(puVar21);
        ppuVar17 = (undefined4 **)(param_2 + 0x54);
      }
      *(uint *)(param_2 + 500) = uVar10 | uVar11 << 8;
      *(undefined4 **)(param_2 + 0x1f8) = puVar20;
      *local_9c = 1;
      bVar23 = true;
      if (uVar10 != 4) goto LAB_00efa380;
LAB_00efa414:
      local_a8 = (int *)(param_2 + 0x204);
      iVar5 = *local_a8;
      break;
    case 1:
      goto switchD_00efa17c_caseD_1;
    case 2:
      goto switchD_00efa17c_caseD_2;
    case 3:
      piVar13 = *(int **)(param_2 + 0x1fc);
      if (puVar19 == (undefined4 *)&DAT_00000001) {
LAB_00efa23c:
        bVar3 = *(byte *)((int)ppuVar17 + 0x31);
        puVar19 = (undefined4 *)(uint)bVar3;
        cVar14 = *(char *)(ppuVar17 + 0xc);
        if (cVar14 != '\x01') {
LAB_00efa25c:
          *(byte *)((int)ppuVar17 + 0x31) = bVar3;
          goto LAB_00efa260;
        }
        if (puVar19 != (undefined4 *)0x0) {
          bVar3 = bVar3 - 1;
          goto LAB_00efa25c;
        }
        FUN_016455a4(*(undefined4 *)*param_3,((undefined4 *)*param_3)[1]);
      }
      else {
LAB_00efa214:
        bVar23 = puVar19 != (undefined4 *)&SUB_00000002;
        cVar14 = '\0';
        puVar19 = (undefined4 *)0x0;
        if (bVar23) {
          FUN_015e8e6c(ppuVar17,FUN_005bc49c);
          *(undefined1 *)(ppuVar17 + 0xe) = 1;
          goto LAB_00efa23c;
        }
LAB_00efa260:
        FUN_01645de0(&local_70,piVar13,param_3);
        puVar20 = local_6c;
        if (((uint)local_70 & 0xff) != 5) {
          if (((uint)local_70 & 0xff) == 4) {
            *(undefined1 *)(piVar13 + 0xb) = 0;
          }
          uVar11 = (uint)local_70 >> 8;
          uVar10 = (uint)local_70 & 0xff;
          if (uVar10 == 4) {
            iVar5 = *(int *)(param_2 + 0x1f8);
            piVar13 = (int *)(iVar5 + 0x30);
            if (*piVar13 != 4) {
              FUN_00a7a2c8(piVar13);
              FUN_00a415f0(piVar13);
              iVar5 = *(int *)(param_2 + 0x1f8);
            }
            *(undefined4 *)(iVar5 + 0x30) = 4;
            *(undefined4 **)(iVar5 + 0x34) = puVar20;
            goto LAB_00efa2e0;
          }
          *(undefined1 *)(param_2 + 0x200) = 1;
          bVar23 = false;
          if (uVar10 == 5) goto LAB_00efa414;
          goto LAB_00efa2f0;
        }
        if (cVar14 != '\0') {
          if (*(char *)(ppuVar17 + 0xe) != '\x01') {
            if (*(char *)(ppuVar17 + 0xe) == '\x02') goto LAB_00efa454;
            FUN_015e8e6c(ppuVar17,FUN_01655ec4);
            *(undefined1 *)(ppuVar17 + 0xe) = 1;
          }
          *(char *)((int)ppuVar17 + 0x31) = (char)puVar19;
          *(undefined1 *)(ppuVar17 + 0xc) = 1;
        }
      }
LAB_00efa454:
      bVar23 = false;
      *(undefined1 *)(param_2 + 0x200) = 3;
      iVar5 = *local_a8;
    }
    if (iVar5 == 0) {
      local_a8 = (int *)(param_2 + 0x204);
      puVar4 = &DAT_0187b508;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x22c)) {
      case 0:
        ppuVar17 = (undefined4 **)0x0;
        *(undefined4 *)(param_2 + 0x20c) = 0;
        piVar13 = *(int **)(param_2 + 0x208);
        *(undefined4 *)(param_2 + 0x210) = 1;
        *(undefined4 *)(param_2 + 0x214) = 0;
        if (*piVar13 != 2) {
          *(int **)(param_2 + 0x218) = piVar13;
          *(undefined4 **)(param_2 + 0x21c) = (undefined4 *)(param_2 + 0x20c);
          *(undefined4 *)(param_2 + 0x220) = 0;
          *(undefined4 *)(param_2 + 0x224) = 0;
          *(undefined4 *)(param_2 + 0x228) = 0;
          goto LAB_00efa510;
        }
        iVar5 = 0;
        ppuVar16 = *(undefined4 ***)(param_2 + 0x210);
        puVar19 = *(undefined4 **)(param_2 + 0x214);
LAB_00efa7fc:
        *(undefined1 *)(param_2 + 0x22c) = 1;
        break;
      case 1:
        goto switchD_00efa17c_caseD_1;
      case 2:
        goto switchD_00efa17c_caseD_2;
      case 3:
        piVar13 = *(int **)(param_2 + 0x218);
        ppuVar17 = *(undefined4 ***)(param_2 + 0x228);
LAB_00efa510:
        do {
          puVar19 = *(undefined4 **)(param_2 + 0x21c);
          puVar21 = (undefined4 *)*puVar19;
          puVar20 = (undefined4 *)puVar19[2];
          if ((((uint)((int)puVar21 - (int)puVar20) < 0x20) &&
              (*(undefined4 **)(param_2 + 0x224) == puVar21)) &&
             (&DAT_00000020 <= *(undefined4 **)(param_2 + 0x224))) {
            local_44 = 0;
            local_48 = (undefined4 *)0x0;
            local_4c = (undefined4 *)&DAT_00000020;
            local_50 = &local_70;
            FUN_01646538(&local_38,piVar13,param_3,&local_50);
            puVar19 = local_34;
            ppuVar16 = local_38;
            puVar20 = local_48;
            pppuVar2 = local_50;
            local_74 = local_34;
            local_78 = local_38;
            if (local_4c < local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,local_48,local_4c,&DAT_018acc90);
            }
            puVar21 = *(undefined4 **)(param_2 + 0x21c);
            puVar22 = *(undefined4 **)(param_2 + 0x220);
            puVar6 = (undefined4 *)puVar21[2];
            if (puVar22 < puVar6) {
LAB_00efafb0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
            }
            puVar8 = (undefined4 *)*puVar21;
            ppuVar9 = (undefined4 **)puVar21[1];
            local_3c = (undefined4 *)((int)puVar8 - (int)puVar6);
            local_88 = ppuVar9;
            local_84 = puVar8;
            local_80 = puVar6;
            local_7c = puVar22;
            if (local_3c < local_48) {
              if (local_3c <= &DAT_0000001f) {
                *(undefined4 **)(param_2 + 0x220) = puVar6;
                FUN_00edff4c(puVar21,puVar6,0x20,1,1);
                puVar21 = *(undefined4 **)(param_2 + 0x21c);
                puVar22 = *(undefined4 **)(param_2 + 0x220);
                puVar6 = (undefined4 *)puVar21[2];
                puVar8 = (undefined4 *)*puVar21;
                ppuVar9 = (undefined4 **)puVar21[1];
              }
              if (puVar22 < puVar6) goto LAB_00efafb0;
              local_3c = (undefined4 *)((int)puVar8 - (int)puVar6);
              local_88 = ppuVar9;
              local_84 = puVar8;
              local_80 = puVar6;
              local_7c = puVar22;
            }
            puVar21 = local_7c;
            if (local_3c < puVar20) {
              local_30 = &local_3c;
              local_40 = puVar20;
              local_2c = &LAB_00fac484;
              local_34 = (undefined4 *)&LAB_00fac484;
              local_38 = &local_40;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0058c77e,&local_38,&DAT_0187c654);
            }
            puVar6 = (undefined4 *)((int)local_80 + (int)puVar20);
            if ((CARRY4((uint)local_80,(uint)puVar20)) || (local_84 < puVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(local_80,puVar6,local_84,&DAT_0187c654);
            }
            FUN_016dd1aa((undefined1 *)((int)local_88 + (int)local_80),pppuVar2,puVar20);
            if (puVar21 < puVar6) {
              local_7c = puVar6;
            }
            local_80 = puVar6;
          }
          else {
            if ((uint)((int)puVar21 - (int)puVar20) < 0x20) {
              *(undefined4 **)(param_2 + 0x220) = puVar20;
              FUN_00edff4c(puVar19,puVar20,0x20,1,1);
              puVar19 = *(undefined4 **)(param_2 + 0x21c);
              puVar21 = (undefined4 *)*puVar19;
              puVar20 = (undefined4 *)puVar19[2];
            }
            local_7c = *(undefined4 **)(param_2 + 0x220);
            local_88 = (undefined4 **)puVar19[1];
            local_84 = puVar21;
            if (local_7c < puVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
            }
            local_80 = puVar20;
            if (puVar21 < puVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,puVar20,puVar21,&DAT_018acc90);
            }
            FUN_01646538(&local_70,piVar13,param_3,&local_88);
            local_74 = local_6c;
            local_78 = local_70;
            if (local_84 < local_80) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,local_80,local_84,&DAT_018acc90);
            }
            puVar20 = (undefined4 *)((int)local_80 - (int)puVar20);
            ppuVar16 = local_70;
            puVar19 = local_6c;
          }
          if (local_84 < local_80) {
            puVar4 = &DAT_018acc90;
            puVar18 = local_80;
LAB_00efaef4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,puVar18,local_84,puVar4);
          }
          if (local_84 < local_7c) {
            puVar4 = &DAT_018acc80;
            puVar18 = local_7c;
            goto LAB_00efaef4;
          }
          local_68 = local_7c;
          local_38 = *(undefined4 ***)(*(int *)(param_2 + 0x21c) + 4);
          local_70 = local_88;
          local_6c = local_80;
          if (local_38 != local_88) {
            FUN_01446ae8(&local_38,&local_70,&DAT_0187d100);
            goto LAB_00efb278;
          }
          *(undefined4 **)(*(int *)(param_2 + 0x21c) + 8) = local_80;
          *(undefined4 **)(param_2 + 0x220) = local_7c;
          if (((uint)ppuVar16 & 0xff) != 4) {
            if (((uint)ppuVar16 & 0xff) != 5) {
              puVar20 = puVar19;
              if (((uint)ppuVar16 & 0xff) == 4) goto LAB_00efa778;
              if (((uint)ppuVar16 & 0xff) != 5) {
                iVar5 = -0x80000000;
                if (*(int *)(param_2 + 0x20c) != 0) {
                  thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x210));
                }
                goto LAB_00efa7fc;
              }
            }
            *(undefined1 *)(param_2 + 0x22c) = 3;
            bVar1 = false;
            goto LAB_00efa864;
          }
LAB_00efa778:
          if (puVar20 == (undefined4 *)0x0) goto LAB_00efa7a8;
          ppuVar17 = (undefined4 **)((int)puVar20 + (int)ppuVar17);
          *(undefined4 ***)(param_2 + 0x228) = ppuVar17;
        } while( true );
      }
      goto LAB_00efa808;
    }
    if (iVar5 != 1) goto LAB_00efb148;
    bVar1 = bVar23;
    if (*(int *)(param_2 + 0x208) != -0x80000000) goto LAB_00efa864;
LAB_00efa838:
    puVar18 = *(undefined4 **)(param_2 + 0x20c);
    puVar21 = *(undefined4 **)(param_2 + 0x210);
    uVar11 = (uint)puVar18 & 0xff;
    *(undefined4 *)(param_2 + 0x204) = 2;
    if (uVar11 == 4) {
      puVar4 = &DAT_0187c230;
      goto LAB_00efb1c8;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187c394);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187c394);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x25c)) {
    case 0:
      goto switchD_00ef9fa8_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187c384);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187c384);
    }
    if (*(int *)(param_2 + 0x1f0) != 1) {
      if (*(int *)(param_2 + 0x1f0) == 2) goto LAB_00efb148;
      goto LAB_00efa160;
    }
    bVar23 = true;
    if (*(char *)(param_2 + 500) == '\x04') goto LAB_00efa414;
LAB_00efa380:
    puVar18 = *(undefined4 **)(param_2 + 500);
    puVar21 = *(undefined4 **)(param_2 + 0x1f8);
    *(undefined4 *)(param_2 + 0x1f0) = 2;
    uVar11 = (uint)puVar18 & 0xff;
    if (4 < uVar11) goto LAB_00efb174;
    if (uVar11 == 4) {
      puVar4 = &DAT_0187c220;
      goto LAB_00efb1c8;
    }
  }
  goto LAB_00efa8b0;
LAB_00efad5c:
  ppuVar17 = *(undefined4 ***)(param_2 + 0x23c);
  local_90 = *(int **)(param_2 + 0x238);
  puVar19 = *(undefined4 **)(param_2 + 0x240);
  *(undefined4 *)(param_2 + 0x254) = 0;
  *(undefined1 *)(param_2 + 600) = 1;
  if (local_90 == (int *)0x80000001) goto LAB_00efae98;
LAB_00efadd0:
  FUN_00ea2d18(local_b4);
  *(int **)(param_2 + 0x234) = local_90;
  *(undefined4 *)(param_2 + 0x230) = 1;
  *(undefined4 ***)(param_2 + 0x238) = ppuVar17;
  *(undefined4 **)(param_2 + 0x23c) = puVar19;
  if (local_90 == (int *)&DAT_80000000) goto LAB_00efa88c;
LAB_00efadf8:
  if (!bVar1) {
LAB_00efae98:
    *(undefined1 *)(param_2 + 0x264) = 3;
    *(undefined1 *)(param_2 + 0x25c) = 3;
    iVar5 = FUN_016540e8((uint)(puVar18 == (undefined4 *)&SUB_00000002) | (uint)puVar18 & 1,param_2,
                         *param_3);
    if (iVar5 == 0) {
      uVar12 = 0x80000001;
    }
    else {
      uVar12 = 0x80000002;
    }
    *extraout_r3 = uVar12;
    return;
  }
  if (*local_9c != 1) {
    puVar4 = &DAT_0187c240;
    goto LAB_00efb1c8;
  }
  puVar19 = *(undefined4 **)(param_2 + 0x1f8);
  *(undefined4 *)(param_2 + 0x1f0) = 2;
  uVar11 = *(uint *)(param_2 + 500) & 0xff;
  if (4 < uVar11) {
LAB_00efb174:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c374);
  }
  if (uVar11 != 4) {
    puVar4 = &DAT_0187c250;
    if (2 < uVar11) {
      uVar12 = *puVar19;
      puVar18 = (undefined4 *)puVar19[1];
      pcVar7 = (code *)*puVar18;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar12);
      }
      if (puVar18[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      thunk_FUN_016d3fb4(puVar19);
    }
    goto LAB_00efb1c8;
  }
  if (*local_a8 != 1) {
    puVar4 = &DAT_0187c260;
LAB_00efb270:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(puVar4);
  }
  ppuVar16 = *(undefined4 ***)(param_2 + 0x208);
  puVar18 = *(undefined4 **)(param_2 + 0x20c);
  puVar21 = *(undefined4 **)(param_2 + 0x210);
  *(undefined4 *)(param_2 + 0x204) = 2;
  if (&DAT_80000000 < ppuVar16) goto LAB_00efb174;
  local_70 = ppuVar16;
  local_6c = puVar18;
  local_68 = puVar21;
  if (ppuVar16 == (undefined4 **)&DAT_80000000) {
    FUN_00d793d8(&local_70);
    puVar4 = &DAT_0187c270;
    goto LAB_00efb270;
  }
  uVar11 = (uint)puVar18 & 0xff;
  ppuVar17 = *(undefined4 ***)(param_2 + 0x238);
  iVar5 = *(int *)(param_2 + 0x23c);
  *(undefined4 *)(param_2 + 0x230) = 2;
  goto LAB_00efa8b8;
LAB_00efa7a8:
  iVar5 = *(int *)(param_2 + 0x20c);
  *(undefined4 *)(param_2 + 0x228) = 0;
  ppuVar16 = *(undefined4 ***)(param_2 + 0x210);
  puVar19 = *(undefined4 **)(param_2 + 0x214);
  *(undefined1 *)(param_2 + 0x22c) = 1;
  bVar1 = false;
  if (iVar5 != -0x7fffffff) {
LAB_00efa808:
    FUN_00ea2d18(local_a8);
    *(undefined4 ***)(param_2 + 0x20c) = ppuVar16;
    *(undefined4 **)(param_2 + 0x210) = puVar19;
    *(undefined4 *)(param_2 + 0x204) = 1;
    *(int *)(param_2 + 0x208) = iVar5;
    bVar1 = bVar23;
    if (iVar5 == -0x80000000) goto LAB_00efa838;
  }
LAB_00efa864:
  local_9c = (int *)(param_2 + 0x1f0);
  local_a8 = (int *)(param_2 + 0x204);
  local_b4 = (int *)(param_2 + 0x230);
  if (*local_b4 == 0) {
    puVar4 = &DAT_0187b508;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 600)) {
    case 1:
switchD_00efa17c_caseD_1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0();
    case 2:
switchD_00efa17c_caseD_2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(puVar4);
    case 3:
      piVar13 = *(int **)(param_2 + 0x244);
      puVar15 = *(undefined1 **)(param_2 + 0x254);
LAB_00efaac8:
      do {
        puVar19 = *(undefined4 **)(param_2 + 0x248);
        puVar21 = (undefined4 *)*puVar19;
        puVar20 = (undefined4 *)puVar19[2];
        if ((((uint)((int)puVar21 - (int)puVar20) < 0x20) &&
            (*(undefined4 **)(param_2 + 0x250) == puVar21)) &&
           (&DAT_00000020 <= *(undefined4 **)(param_2 + 0x250))) {
          local_44 = 0;
          local_48 = (undefined4 *)0x0;
          local_4c = (undefined4 *)&DAT_00000020;
          local_50 = &local_70;
          FUN_01646538(&local_38,piVar13,param_3,&local_50);
          puVar19 = local_34;
          ppuVar17 = local_38;
          puVar20 = local_48;
          pppuVar2 = local_50;
          local_74 = local_34;
          local_78 = local_38;
          if (local_4c < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,local_48,local_4c,&DAT_018acc90);
          }
          puVar21 = *(undefined4 **)(param_2 + 0x248);
          puVar22 = *(undefined4 **)(param_2 + 0x24c);
          puVar6 = (undefined4 *)puVar21[2];
          if (puVar22 < puVar6) {
LAB_00efb0b4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
          }
          puVar8 = (undefined4 *)*puVar21;
          ppuVar16 = (undefined4 **)puVar21[1];
          local_3c = (undefined4 *)((int)puVar8 - (int)puVar6);
          local_88 = ppuVar16;
          local_84 = puVar8;
          local_80 = puVar6;
          local_7c = puVar22;
          if (local_3c < local_48) {
            if (local_3c < &DAT_00000020) {
              *(undefined4 **)(param_2 + 0x24c) = puVar6;
              FUN_00edff4c(puVar21,puVar6,0x20,1,1);
              puVar21 = *(undefined4 **)(param_2 + 0x248);
              puVar22 = *(undefined4 **)(param_2 + 0x24c);
              puVar6 = (undefined4 *)puVar21[2];
              puVar8 = (undefined4 *)*puVar21;
              ppuVar16 = (undefined4 **)puVar21[1];
            }
            if (puVar22 < puVar6) goto LAB_00efb0b4;
            local_3c = (undefined4 *)((int)puVar8 - (int)puVar6);
            local_88 = ppuVar16;
            local_84 = puVar8;
            local_80 = puVar6;
            local_7c = puVar22;
          }
          puVar21 = local_7c;
          if (local_3c < puVar20) {
            local_30 = &local_3c;
            local_40 = puVar20;
            local_2c = &LAB_00fac484;
            local_34 = (undefined4 *)&LAB_00fac484;
            local_38 = &local_40;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0058c77e,&local_38,&DAT_0187c654);
          }
          puVar6 = (undefined4 *)((int)local_80 + (int)puVar20);
          if ((CARRY4((uint)local_80,(uint)puVar20)) || (local_84 < puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(local_80,puVar6,local_84,&DAT_0187c654);
          }
          FUN_016dd1aa((undefined1 *)((int)local_88 + (int)local_80),pppuVar2,puVar20);
          if (puVar21 < puVar6) {
            local_7c = puVar6;
          }
          local_80 = puVar6;
        }
        else {
          if ((uint)((int)puVar21 - (int)puVar20) < 0x20) {
            *(undefined4 **)(param_2 + 0x24c) = puVar20;
            FUN_00edff4c(puVar19,puVar20,0x20,1,1);
            puVar19 = *(undefined4 **)(param_2 + 0x248);
            puVar21 = (undefined4 *)*puVar19;
            puVar20 = (undefined4 *)puVar19[2];
          }
          local_7c = *(undefined4 **)(param_2 + 0x24c);
          local_88 = (undefined4 **)puVar19[1];
          local_84 = puVar21;
          if (local_7c < puVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
          }
          local_80 = puVar20;
          if (puVar21 < puVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,puVar20,puVar21,&DAT_018acc90);
          }
          FUN_01646538(&local_70,piVar13,param_3,&local_88);
          local_74 = local_6c;
          local_78 = local_70;
          if (local_84 < local_80) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,local_80,local_84,&DAT_018acc90);
          }
          puVar20 = (undefined4 *)((int)local_80 - (int)puVar20);
          ppuVar17 = local_70;
          puVar19 = local_6c;
        }
        if (local_84 < local_80) {
          puVar4 = &DAT_018acc90;
          puVar18 = local_80;
LAB_00efaf1c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,puVar18,local_84,puVar4);
        }
        if (local_84 < local_7c) {
          puVar4 = &DAT_018acc80;
          puVar18 = local_7c;
          goto LAB_00efaf1c;
        }
        local_68 = local_7c;
        local_70 = local_88;
        local_38 = *(undefined4 ***)(*(int *)(param_2 + 0x248) + 4);
        local_6c = local_80;
        if (local_38 != local_88) {
          FUN_01446ae8(&local_38,&local_70,&DAT_0187d100);
LAB_00efb278:
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xfdee,0xefb278);
          (*pcVar7)();
        }
        *(undefined4 **)(*(int *)(param_2 + 0x248) + 8) = local_80;
        *(undefined4 **)(param_2 + 0x24c) = local_7c;
        if (((uint)ppuVar17 & 0xff) != 4) {
          if (((uint)ppuVar17 & 0xff) != 5) {
            puVar20 = puVar19;
            if (((uint)ppuVar17 & 0xff) == 4) goto LAB_00efad28;
            if (((uint)ppuVar17 & 0xff) != 5) {
              local_90 = (int *)&DAT_80000000;
              if (*(int *)(param_2 + 0x238) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x23c));
              }
              goto LAB_00efadc8;
            }
          }
          *(undefined1 *)(param_2 + 600) = 3;
          goto LAB_00efae98;
        }
LAB_00efad28:
        if (puVar20 == (undefined4 *)0x0) goto LAB_00efad5c;
        puVar15 = (undefined1 *)((int)puVar20 + (int)puVar15);
        *(undefined1 **)(param_2 + 0x254) = puVar15;
      } while( true );
    }
    puVar15 = (undefined1 *)0x0;
    *(undefined4 *)(param_2 + 0x238) = 0;
    piVar13 = *(int **)(param_2 + 0x234);
    *(undefined4 *)(param_2 + 0x23c) = 1;
    *(undefined4 *)(param_2 + 0x240) = 0;
    if (*piVar13 != 2) {
      *(int **)(param_2 + 0x244) = piVar13;
      *(undefined4 **)(param_2 + 0x248) = (undefined4 *)(param_2 + 0x238);
      *(undefined4 *)(param_2 + 0x24c) = 0;
      *(undefined4 *)(param_2 + 0x250) = 0;
      *(undefined4 *)(param_2 + 0x254) = 0;
      goto LAB_00efaac8;
    }
    local_90 = (int *)0x0;
    ppuVar17 = *(undefined4 ***)(param_2 + 0x23c);
    puVar19 = *(undefined4 **)(param_2 + 0x240);
LAB_00efadc8:
    *(undefined1 *)(param_2 + 600) = 1;
    goto LAB_00efadd0;
  }
  if (*local_b4 != 1) {
LAB_00efb148:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0035b674,0x45,&DAT_0187b564);
  }
  local_90 = *(int **)(param_2 + 0x234);
  if (local_90 != (int *)&DAT_80000000) goto LAB_00efadf8;
LAB_00efa88c:
  puVar18 = *(undefined4 **)(param_2 + 0x238);
  puVar21 = *(undefined4 **)(param_2 + 0x23c);
  *(undefined4 *)(param_2 + 0x230) = 2;
  uVar11 = (uint)puVar18 & 0xff;
  if (uVar11 == 4) {
    puVar4 = &DAT_0187c280;
LAB_00efb1c8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(puVar4);
  }
LAB_00efa8b0:
  iVar5 = 0;
  ppuVar16 = (undefined4 **)&DAT_80000000;
  local_90 = param_3;
LAB_00efa8b8:
  local_9c = (int *)(param_2 + 0x1f0);
  local_a0 = param_2 + 0x110;
  local_ac = (undefined1 *)(param_2 + 0x25c);
  FUN_00ef66a0(local_9c);
  puVar20 = (undefined4 *)(uVar11 | (uint)puVar18 & 0xffffff00);
  if (ppuVar16 == (undefined4 **)&DAT_80000000) {
    piVar13 = (int *)(param_2 + 0x1e0);
    *(undefined2 *)(param_2 + 0x25d) = 0;
    if (*piVar13 != 2) {
      FUN_00a86e98(piVar13);
      if (*(int *)(param_2 + 0x1ec) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar13);
    }
    piVar13 = (int *)(param_2 + 0x1d0);
    *(undefined1 *)(param_2 + 0x25f) = 0;
    if (*piVar13 != 2) {
      FUN_00a86e98(piVar13);
      if (*(int *)(param_2 + 0x1dc) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar13);
    }
    *(undefined1 *)(param_2 + 0x260) = 0;
    FUN_00d97900(param_2 + 0x170);
    iVar5 = param_2;
  }
  else {
    *(undefined1 *)(param_2 + 0x260) = 0;
    local_70 = *(undefined4 ***)(param_2 + 0x1d0);
    local_6c = *(undefined4 **)(param_2 + 0x1d4);
    local_68 = *(undefined4 **)(param_2 + 0x1d8);
    local_64 = *(int *)(param_2 + 0x1dc);
    if (local_70 != (undefined4 **)0x2) {
      FUN_00a86e98(&local_70);
      if (local_64 != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(&local_70);
    }
    *(undefined1 *)(param_2 + 0x25f) = 0;
    local_70 = *(undefined4 ***)(param_2 + 0x1e0);
    local_6c = *(undefined4 **)(param_2 + 0x1e4);
    local_68 = *(undefined4 **)(param_2 + 0x1e8);
    local_64 = *(int *)(param_2 + 0x1ec);
    if (local_70 != (undefined4 **)&SUB_00000002) {
      FUN_00a86e98(&local_70);
      if (local_64 != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(&local_70);
    }
    *(undefined4 *)(param_2 + 0x25d) = 0;
    FUN_00d97900(param_2 + 0x170);
  }
  *local_ac = 1;
  FUN_00ef6550(local_a0);
LAB_00efaa00:
  *extraout_r3 = ppuVar16;
  extraout_r3[1] = puVar20;
  extraout_r3[2] = puVar21;
  *(undefined1 *)(param_2 + 0x264) = 1;
  extraout_r3[3] = local_90;
  extraout_r3[4] = ppuVar17;
  extraout_r3[5] = iVar5;
  extraout_r3[6] = puVar19;
  return;
}

