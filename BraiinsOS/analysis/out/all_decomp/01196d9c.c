// FUN_01196d9c @ 01196d9c size=1944 calls_out=18 calls_in=1
// strings: prefixItems

void FUN_01196d9c(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  uint uVar14;
  int unaff_r4;
  uint uVar15;
  uint unaff_r6;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  char *pcVar23;
  undefined8 uVar24;
  int local_184;
  int local_180;
  undefined *local_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  int local_e0;
  undefined *local_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined1 auStack_c8 [136];
  undefined1 local_40;
  int local_38;
  undefined *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  cVar1 = *param_4;
  puVar4 = param_1;
  if (cVar1 != '\x05') {
    if (cVar1 == '\x04') {
      iVar16 = *(int *)(param_4 + 8);
      uVar21 = *(uint *)(param_4 + 0xc);
      FUN_0119d4b4(&local_180,param_2,&DAT_004146ea,5);
      if (0x6666666 < uVar21) {
        uVar6 = 0;
LAB_01196edc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,unaff_r4);
      }
      unaff_r4 = uVar21 * 0x14;
      if (unaff_r4 == 0) {
        uVar20 = 4;
        local_f0 = 0;
      }
      else {
        uVar20 = thunk_FUN_016d4a50(unaff_r4);
        if (uVar20 == 0) {
          uVar6 = 4;
          goto LAB_01196edc;
        }
        local_f0 = uVar21;
      }
      local_e8 = 0;
      local_ec = uVar20;
      if (uVar21 != 0) {
        uVar14 = 1;
        iVar22 = 0;
        iVar18 = uVar21 * 0x18;
        do {
          FUN_0119f6cc(auStack_c8,&local_180,uVar14 - 1);
          uVar3 = FUN_01352d48(local_40,iVar16);
          FUN_0125acb4(&local_e0,auStack_c8,iVar16,uVar3);
          if (local_e0 == 0) {
            FUN_01161600(auStack_c8);
            uVar21 = uVar20;
            while (uVar14 = uVar14 - 1, uVar14 != 0) {
              FUN_0115ccf0(uVar21);
              uVar21 = uVar21 + 0x14;
            }
            puVar11 = (uint *)0x0;
            puVar13 = local_dc;
            if (local_f0 != 0) {
              thunk_FUN_016d3fb4(uVar20);
            }
            goto LAB_0119739c;
          }
          local_34 = local_dc;
          local_38 = local_e0;
          local_30 = local_d8;
          iStack_2c = iStack_d4;
          iStack_28 = iStack_d0;
          if (uVar14 - 1 == local_f0) {
            FUN_011cf59c(&local_f0);
            uVar20 = local_ec;
          }
          piVar7 = (int *)(uVar20 + iVar22);
          *piVar7 = local_38;
          piVar7[1] = (int)local_34;
          piVar7[2] = local_30;
          piVar7[3] = iStack_2c;
          piVar7[4] = iStack_28;
          local_e8 = uVar14;
          FUN_01161600(auStack_c8);
          iVar16 = iVar16 + 0x18;
          iVar22 = iVar22 + 0x14;
          uVar14 = uVar14 + 1;
          iVar18 = iVar18 + -0x18;
        } while (iVar18 != 0);
      }
      puVar11 = (uint *)thunk_FUN_016d4a50(0xc);
      if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar11 = local_f0;
      puVar11[1] = local_ec;
      puVar11[2] = local_e8;
      puVar13 = &DAT_01889628;
LAB_0119739c:
      FUN_01161600(&local_180);
      param_1[1] = puVar11;
      param_1[2] = puVar13;
      *param_1 = 1;
      return;
    }
    puVar4 = (undefined4 *)0x0;
    if (cVar1 == '\x01') {
      unaff_r6 = (uint)(byte)param_4[1];
    }
    if (cVar1 != '\x01' || unaff_r6 != 0) {
      *param_1 = 0;
      return;
    }
  }
  iVar16 = *param_3;
  if (iVar16 != 0) {
    local_184 = param_3[1];
    while( true ) {
      uVar21 = (uint)*(ushort *)(iVar16 + 0x192);
      iVar22 = iVar16 + 0x10c;
      uVar20 = 0xffffffff;
      puVar4 = (undefined4 *)(uVar21 * 3);
      iVar18 = uVar21 * 0xc;
      do {
        if (iVar18 == 0) goto LAB_01196e88;
        uVar15 = *(uint *)(iVar22 + 8);
        uVar14 = uVar15;
        if (10 < uVar15) {
          uVar14 = 0xb;
        }
        iVar5 = FUN_016dd50a("prefixItems",*(undefined4 *)(iVar22 + 4),uVar14);
        if (iVar5 == 0) {
          iVar5 = 0xb - uVar15;
        }
        iVar18 = iVar18 + -0xc;
        uVar20 = uVar20 + 1;
        iVar22 = iVar22 + 0xc;
        puVar4 = (undefined4 *)((uint)(0 < iVar5) - (uint)(iVar5 < 0) & 0xff);
      } while (puVar4 == (undefined4 *)&DAT_00000001);
      uVar21 = uVar20;
      if (puVar4 == (undefined4 *)0x0) break;
LAB_01196e88:
      if (local_184 == 0) goto LAB_01196f94;
      local_184 = local_184 + -1;
      iVar16 = *(int *)(iVar16 + uVar21 * 4 + 0x198);
    }
    pbVar17 = (byte *)(iVar16 + uVar20 * 0x18);
    puVar4 = (undefined4 *)(uint)*pbVar17;
    if (puVar4 == (undefined4 *)&DAT_00000004) {
      iVar16 = *(int *)(pbVar17 + 0xc);
      FUN_0119d4b4(auStack_c8,param_2,&DAT_004146ea,5);
      uVar3 = FUN_01352d48(local_40,param_4);
      FUN_0125acb4(&local_38,auStack_c8,param_4,uVar3);
      if (local_38 == 0) {
        piVar7 = (int *)0x0;
        puVar13 = local_34;
      }
      else {
        local_180 = local_38;
        local_17c = local_34;
        local_178 = local_30;
        iStack_174 = iStack_2c;
        iStack_170 = iStack_28;
        iStack_16c = iVar16;
        piVar7 = (int *)thunk_FUN_016d4a50(0x18);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *piVar7 = local_180;
        piVar7[1] = (int)local_17c;
        piVar7[2] = local_178;
        piVar7[3] = iStack_174;
        piVar7[4] = iStack_170;
        piVar7[5] = iStack_16c;
        puVar13 = &DAT_018896e8;
      }
      FUN_01161600(auStack_c8);
      param_1[1] = piVar7;
      param_1[2] = puVar13;
      goto LAB_011973d0;
    }
  }
LAB_01196f94:
  if (cVar1 == '\x05') {
    puVar4 = *(undefined4 **)(param_4 + 0xc);
  }
  if ((cVar1 == '\x05' && puVar4 == (undefined4 *)&DAT_00000001) &&
     (iVar16 = *(int *)(param_4 + 4), iVar16 != 0)) {
    iVar18 = *(int *)(param_4 + 8);
    do {
      uVar21 = (uint)*(ushort *)(iVar16 + 0x192);
      iVar5 = iVar16 + 0x10c;
      uVar20 = 0xffffffff;
      iVar22 = uVar21 * 0xc;
      do {
        if (iVar22 == 0) goto LAB_01197124;
        uVar15 = *(uint *)(iVar5 + 8);
        uVar14 = uVar15;
        if (3 < uVar15) {
          uVar14 = 4;
        }
        iVar8 = FUN_016dd50a(&DAT_005680b8,*(undefined4 *)(iVar5 + 4),uVar14);
        if (iVar8 == 0) {
          iVar8 = 4 - uVar15;
        }
        iVar22 = iVar22 + -0xc;
        uVar20 = uVar20 + 1;
        iVar5 = iVar5 + 0xc;
      } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
      uVar21 = uVar20;
      if (0 < iVar8 == iVar8 < 0) {
        pcVar23 = (char *)(iVar16 + uVar20 * 0x18);
        if (*pcVar23 == '\x03') {
          uVar19 = *(undefined4 *)(pcVar23 + 8);
          iVar16 = *(int *)(pcVar23 + 0xc);
          uVar24 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                &DAT_004146ea,5);
          uVar6 = (undefined4)((ulonglong)uVar24 >> 0x20);
          piVar7 = (int *)uVar24;
          uVar24 = FUN_0123ab30(piVar7,uVar6,&DAT_005680b8,4);
          uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
          piVar9 = (int *)uVar24;
          DataMemoryBarrier(0xb);
          do {
            iVar18 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = iVar18 + -1;
          if (iVar18 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar7,uVar6);
          }
          if (iVar16 == 7) {
            iVar16 = thunk_FUN_016dd50a(uVar19,&DAT_00414648,7);
            if (iVar16 == 0) {
              if (*(char *)(param_2 + 0x88) == '\0') {
                FUN_011a14b4(param_1 + 1,piVar9,uVar12);
                *param_1 = 1;
                return;
              }
              FUN_011a1538(param_1 + 1,piVar9,uVar12);
              *param_1 = 1;
              return;
            }
            iVar16 = thunk_FUN_016dd50a(uVar19,&DAT_00414654,7);
            if (iVar16 == 0) {
              FUN_011a1430(param_1 + 1,piVar9,uVar12);
              *param_1 = 1;
              return;
            }
          }
          else if (iVar16 == 6) {
            iVar16 = thunk_FUN_016dd50a(uVar19,&DAT_003e873a,6);
            if (iVar16 == 0) {
              puVar10 = (undefined8 *)thunk_FUN_016d4a50(8);
              if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,8);
              }
              puVar13 = &DAT_01889668;
LAB_0119746c:
              *puVar10 = uVar24;
              param_1[1] = puVar10;
              param_1[2] = puVar13;
              *param_1 = 1;
              return;
            }
            iVar16 = thunk_FUN_016dd50a(uVar19,&DAT_00414642,6);
            if (iVar16 == 0) {
              puVar10 = (undefined8 *)thunk_FUN_016d4a50(8);
              if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,8);
              }
              puVar13 = &DAT_01889688;
              goto LAB_0119746c;
            }
          }
          DataMemoryBarrier(0xb);
          do {
            iVar16 = *piVar9;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = iVar16 + -1;
          if (iVar16 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar9,uVar12);
          }
        }
        break;
      }
LAB_01197124:
      if (iVar18 == 0) break;
      iVar18 = iVar18 + -1;
      iVar16 = *(int *)(iVar16 + uVar21 * 4 + 0x198);
    } while( true );
  }
  FUN_0119d4b4(auStack_c8,param_2,&DAT_004146ea,5);
  uVar3 = FUN_01352d48(local_40,param_4);
  FUN_0125acb4(&local_38,auStack_c8,param_4,uVar3);
  if (local_38 == 0) {
    piVar7 = (int *)0x0;
    puVar13 = local_34;
  }
  else {
    local_180 = local_38;
    local_17c = local_34;
    local_178 = local_30;
    iStack_174 = iStack_2c;
    iStack_170 = iStack_28;
    piVar7 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *piVar7 = local_180;
    piVar7[1] = (int)local_17c;
    piVar7[2] = local_178;
    piVar7[3] = iStack_174;
    piVar7[4] = iStack_170;
    puVar13 = &DAT_01889648;
  }
  FUN_01161600(auStack_c8);
  param_1[1] = piVar7;
  param_1[2] = puVar13;
LAB_011973d0:
  *param_1 = 1;
  return;
}

