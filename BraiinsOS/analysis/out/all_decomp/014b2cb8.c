// FUN_014b2cb8 @ 014b2cb8 size=1616 calls_out=11 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014b2cb8(uint *param_1,uint *param_2,byte *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  uint *unaff_r4;
  int iVar12;
  uint unaff_r5;
  uint uVar13;
  uint *unaff_r6;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint local_88;
  int *local_58;
  uint *local_54;
  uint local_50;
  uint *puStack_4c;
  uint uStack_48;
  uint uStack_44;
  int *local_40;
  uint *local_3c;
  uint uStack_38;
  uint *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_4 != 0) {
    unaff_r5 = *param_2;
  }
  if (param_4 == 0 || unaff_r5 == 0) {
    uVar13 = (uint)*param_3;
    if (uVar13 == 0) {
      uVar7 = 0;
    }
    else if (uVar13 == 2) {
      puVar14 = *(undefined4 **)(param_3 + 4);
      unaff_r4 = (uint *)thunk_FUN_016d4a50(0x10);
      if (unaff_r4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      (**(code **)*puVar14)(&local_40,puVar14 + 3,puVar14[1],puVar14[2]);
      *unaff_r4 = (uint)local_40;
      unaff_r4[1] = (uint)local_3c;
      unaff_r4[2] = uStack_38;
      unaff_r4[3] = (uint)puStack_34;
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)param_3[1] << 8;
    }
    local_40 = (int *)(uVar7 | uVar13);
    local_3c = unaff_r4;
    (*(code *)**(undefined4 **)(param_3 + 8))
              (&uStack_38,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),
               *(undefined4 *)(param_3 + 0x10));
    *param_1 = (uint)local_40;
    param_1[1] = (uint)local_3c;
    param_1[2] = uStack_38;
    param_1[3] = (uint)puStack_34;
    param_1[4] = uStack_30;
    param_1[5] = uStack_2c;
    param_1[6] = 0;
    return;
  }
  piVar16 = (int *)(unaff_r5 + 8);
  do {
    if (*piVar16 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar16);
      unaff_r6 = param_2;
      goto LAB_014b2d58;
    }
    bVar4 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar4);
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
LAB_014b2d58:
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(unaff_r5 + 0xc);
  }
  else {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
    cVar1 = *(char *)(unaff_r5 + 0xc);
    unaff_r6 = param_2;
  }
  if (cVar1 != '\0') {
    uVar7 = (uint)local_3c >> 8;
    local_3c = (uint *)CONCAT31((int3)uVar7,(char)uVar13);
    local_40 = piVar16;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_018a5d18,&DAT_018a5c7c);
  }
  uVar7 = (uint)*param_3;
  if (uVar7 == 0) {
    uVar15 = 0;
  }
  else if (uVar7 == 1) {
    uVar15 = (uint)param_3[1] << 8;
  }
  else {
    puVar14 = *(undefined4 **)(param_3 + 4);
    unaff_r6 = (uint *)thunk_FUN_016d4a50(0x10);
    if (unaff_r6 == (uint *)0x0) goto LAB_014b32ec;
    (**(code **)*puVar14)(&local_40,puVar14 + 3,puVar14[1],puVar14[2]);
    *unaff_r6 = (uint)local_40;
    unaff_r6[1] = (uint)local_3c;
    unaff_r6[2] = uStack_38;
    unaff_r6[3] = (uint)puStack_34;
    uVar15 = 0;
  }
  local_58 = (int *)(uVar15 | uVar7);
  local_54 = unaff_r6;
  (*(code *)**(undefined4 **)(param_3 + 8))
            (&local_50,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10)
            );
  uVar7 = FUN_014c854c(*(undefined4 *)(unaff_r5 + 0x30),*(undefined4 *)(unaff_r5 + 0x34),
                       *(undefined4 *)(unaff_r5 + 0x38),*(undefined4 *)(unaff_r5 + 0x3c),&local_58);
  if (*(int *)(unaff_r5 + 0x28) == 0) {
    FUN_01492424((int *)(unaff_r5 + 0x20),(undefined4 *)(unaff_r5 + 0x30));
  }
  uVar18 = *(uint *)(unaff_r5 + 0x24);
  puVar11 = *(uint **)(unaff_r5 + 0x20);
  bVar4 = false;
  iVar12 = 0;
  uVar15 = uVar7;
  do {
    uVar15 = uVar18 & uVar15;
    uVar17 = *(uint *)((int)puVar11 + uVar15);
    uVar10 = uVar17 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      iVar8 = FUN_014c953c(&local_58,
                           *(int *)(unaff_r5 + 0x20) +
                           (uVar15 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                                    (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18)
                                     >> 3) & uVar18) * -0x18 + -0x18);
      puVar6 = local_54;
      uVar10 = uVar10 - 1 & uVar10;
      if (iVar8 != 0) {
        if (1 < (byte)local_58) {
          (**(code **)(*local_54 + 0x10))(local_54 + 3,local_54[1],local_54[2]);
          thunk_FUN_016d3fb4(puVar6);
        }
        (**(code **)(local_50 + 0x10))(&uStack_44,puStack_4c,uStack_48);
        *(undefined1 *)param_1 = 3;
        if (uVar13 != 0) goto LAB_014b3034;
        goto LAB_014b3024;
      }
    }
    uVar10 = uVar17 & 0x80808080;
    if (bVar4) {
LAB_014b2f8c:
      if ((uVar10 & uVar17 << 1) != 0) break;
      bVar4 = true;
    }
    else {
      if (uVar10 != 0) {
        local_88 = uVar15 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar18;
        goto LAB_014b2f8c;
      }
      bVar4 = false;
    }
    iVar12 = iVar12 + 4;
    uVar15 = iVar12 + uVar15;
  } while( true );
  if (-1 < *(char *)((int)puVar11 + local_88)) {
    uVar15 = *puVar11 & 0x80808080;
    local_88 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
  }
  iVar12 = *(int *)(unaff_r5 + 0x20);
  local_40 = local_58;
  local_3c = local_54;
  uStack_38 = local_50;
  puStack_34 = puStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  bVar2 = *(byte *)(iVar12 + local_88);
  uVar15 = *(uint *)(unaff_r5 + 0x24);
  iVar8 = *(int *)(unaff_r5 + 0x28);
  *(int *)(unaff_r5 + 0x2c) = *(int *)(unaff_r5 + 0x2c) + 1;
  bVar3 = (byte)(uVar7 >> 0x19);
  *(byte *)(iVar12 + local_88) = bVar3;
  *(uint *)(unaff_r5 + 0x28) = iVar8 - (bVar2 & 1);
  *(byte *)(iVar12 + (uVar15 & local_88 - 4) + 4) = bVar3;
  iVar12 = iVar12 + local_88 * -0x18;
  *(int **)(iVar12 + -0x18) = local_58;
  *(uint **)(iVar12 + -0x14) = local_54;
  *(uint *)(iVar12 + -0x10) = local_50;
  *(uint **)(iVar12 + -0xc) = puStack_4c;
  *(uint *)(iVar12 + -8) = uStack_48;
  *(uint *)(iVar12 + -4) = uStack_44;
  uVar7 = (uint)*param_3;
  if (uVar7 == 0) {
    uVar15 = 0;
  }
  else if (uVar7 == 2) {
    puVar14 = *(undefined4 **)(param_3 + 4);
    puVar11 = (uint *)thunk_FUN_016d4a50(0x10);
    if (puVar11 == (uint *)0x0) {
LAB_014b32ec:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    (**(code **)*puVar14)(&local_40,puVar14 + 3,puVar14[1],puVar14[2]);
    *puVar11 = (uint)local_40;
    puVar11[1] = (uint)local_3c;
    puVar11[2] = uStack_38;
    puVar11[3] = (uint)puStack_34;
    uVar15 = 0;
    puStack_4c = puVar11;
  }
  else {
    uVar15 = (uint)param_3[1] << 8;
  }
  local_40 = (int *)(uVar15 | uVar7);
  local_3c = puStack_4c;
  (*(code *)**(undefined4 **)(param_3 + 8))
            (&uStack_38,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),
             *(undefined4 *)(param_3 + 0x10));
  uVar7 = *param_2;
  piVar9 = (int *)(uVar7 + 4);
  do {
    iVar12 = *piVar9;
    while (iVar12 != -1) {
      if (iVar12 < 0) {
        local_54 = &DAT_0157d360;
        local_58 = (int *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_58,&DAT_018ae278);
      }
      iVar8 = *piVar9;
      if (iVar8 == iVar12) {
        bVar5 = (bool)hasExclusiveAccess(piVar9);
        if (bVar5) {
          *piVar9 = iVar12 + 1;
        }
        bVar4 = false;
        if (bVar5) {
          DataMemoryBarrier(0xb);
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      iVar12 = iVar8;
      if (bVar4) {
        *param_1 = (uint)local_40;
        param_1[1] = (uint)local_3c;
        param_1[2] = uStack_38;
        param_1[3] = (uint)puStack_34;
        param_1[4] = uStack_30;
        param_1[5] = uStack_2c;
        param_1[6] = uVar7;
        if (uVar13 == 0) {
LAB_014b3024:
          if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
            *(undefined1 *)(unaff_r5 + 0xc) = 1;
          }
        }
LAB_014b3034:
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar16;
          bVar4 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar4);
        *piVar16 = 0;
        if (iVar12 == 2) {
          FUN_016d6968(0xf0,piVar16,0x81,1);
          return;
        }
        return;
      }
    }
    HintYield();
  } while( true );
}

