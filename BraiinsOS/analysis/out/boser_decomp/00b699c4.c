// FUN_00b699c4 @ 00b699c4 size=1264 calls_out=10 calls_in=1
// strings: /proc/uptime

void FUN_00b699c4(uint *param_1,int param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint local_68 [6];
  undefined4 *local_50;
  uint local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x30)) {
  case 0:
    *(undefined1 *)(param_2 + 0x2c) = 0;
switchD_00b69a1c_caseD_0:
    *(undefined1 *)(param_2 + 0x28) = 0;
    *(char **)(param_2 + 4) = "/proc/uptime";
    *(undefined4 *)(param_2 + 8) = 0xc;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13340);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13340);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2c)) {
    case 0:
      goto switchD_00b69a1c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c130bc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c130bc,param_2 + 4);
    }
  }
  puVar19 = (undefined1 *)(param_2 + 0x2c);
  FUN_00b69fb0(&local_48,param_2 + 4,*param_3);
  uVar14 = local_40;
  puVar7 = local_44;
  puVar6 = local_48;
  if (local_48 == (undefined1 *)0x80000001) {
    uVar8 = 3;
    *puVar19 = 3;
    puVar18 = (undefined1 *)0x3b9aca01;
    goto LAB_00b69d14;
  }
  if (*(char *)(param_2 + 0x28) == '\x03') {
    FUN_00b71be0(param_2 + 0x14);
  }
  puVar18 = &DAT_3b9aca00;
  if (puVar6 == (undefined1 *)0x80000000) {
    puVar15 = puVar7;
LAB_00b69aac:
    *puVar19 = 1;
LAB_00b69cf4:
    puVar18 = &DAT_3b9aca00;
    uVar10 = (uint)puVar15 & 0xff;
    if (uVar10 < 4) {
      uVar10 = FUN_0187266c(puVar15,uVar14);
    }
  }
  else {
    local_34 = (int)puVar7 + uVar14;
    local_2c = 1;
    local_30 = 0;
    local_38 = (uint)puVar7;
    uStack_3c = uVar14;
    local_48 = (undefined1 *)0x0;
    local_44 = (undefined1 *)uVar14;
    local_40 = (uint)puVar7;
    FUN_01318760(local_68 + 5,&local_48);
    if (local_4c < 2) {
      puVar15 = (undefined1 *)0x5;
      puVar12 = puVar7;
    }
    else {
      FUN_01305878(&local_48,*local_50,local_50[1]);
      if ((char)local_48 != '\0') {
        puVar15 = (undefined1 *)0x4;
        FUN_0134aee0(local_68[5],local_50,4,8);
        FUN_019bb7e0(puVar6,puVar7);
        uVar14 = 0;
        goto LAB_00b69aac;
      }
      if ((double)CONCAT44(uStack_3c,local_40) < 0.0) {
        local_25 = 0;
LAB_00b69ea4:
        local_48 = &local_25;
        local_44 = &LAB_0130a2b8;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_48,&DAT_01c13248);
      }
      uVar10 = (uStack_3c & 0x7fffffff) >> 0x14;
      if (uVar10 < 0x3e0) {
        puVar18 = (undefined1 *)0x0;
        puVar15 = (undefined1 *)0x0;
      }
      else {
        uVar9 = uStack_3c & 0xfffff | 0x100000;
        uVar14 = uVar10 - 0x3ff;
        if (0x3fe < uVar10) {
          if (uVar10 < 0x433) {
            uVar16 = 0x433 - uVar10;
            uVar11 = local_40 >> (0x20 - uVar14 & 0xff) | uStack_3c << (uVar14 & 0xff);
            uVar14 = local_40 << (uVar14 & 0xff);
            if (-1 < (int)(uVar10 - 0x41f)) {
              uVar14 = 0;
              uVar11 = local_40 << (uVar10 - 0x41f & 0xff);
            }
            uVar1 = (ulonglong)(uVar11 & 0xfffff) * 1000000000 +
                    ((ulonglong)uVar14 * 1000000000 >> 0x20);
            uVar17 = 0;
            uVar10 = (uint)uVar1 >> 0x14;
            uVar11 = local_40 >> (uVar16 & 0xff) | uVar9 << (0x20 - (uVar16 & 0xffff) & 0xff);
            uVar13 = (uVar16 & 0xffff) - 0x20;
            if (-1 < (int)uVar13) {
              uVar11 = uVar9 >> (uVar13 & 0xff);
            }
            uVar9 = uVar9 >> (uVar16 & 0xff);
            if (-1 < (int)uVar13) {
              uVar9 = 0;
            }
            if ((uVar1 & 0x80000) != 0) {
              uVar17 = (uint)((int)((ulonglong)uVar14 * 1000000000) != 0 ||
                             ((uint)uVar1 & 0xfffff) != 0x80000) | uVar10 & 1;
            }
            puVar12 = (undefined1 *)(uVar17 + (uVar10 | (int)(uVar1 >> 0x20) << 0xc));
            puVar18 = (undefined1 *)0x0;
            if (puVar12 != &DAT_3b9aca00) {
              puVar18 = puVar12;
            }
            puVar15 = (undefined1 *)(uVar11 + 1);
            uVar14 = uVar9 + (0xfffffffe < uVar11);
            if (puVar12 != &DAT_3b9aca00) {
              puVar15 = (undefined1 *)uVar11;
              uVar14 = uVar9;
            }
            puVar12 = (undefined1 *)((uint)puVar15 >> 8 | uVar14 << 0x18);
            uVar14 = uVar14 >> 8;
          }
          else {
            if (0x43e < uVar10) {
              local_25 = 1;
              goto LAB_00b69ea4;
            }
            uVar10 = uVar10 - 0x433;
            puVar18 = (undefined1 *)0x0;
            uVar14 = local_40 >> (0x20 - (uVar10 & 0xffff) & 0xff) | uVar9 << (uVar10 & 0xff);
            uVar9 = (uVar10 & 0xffff) - 0x20;
            puVar15 = (undefined1 *)(local_40 << (uVar10 & 0xff));
            if (-1 < (int)uVar9) {
              uVar14 = local_40 << (uVar9 & 0xff);
              puVar15 = (undefined1 *)0x0;
            }
            puVar12 = (undefined1 *)((uint)puVar15 >> 8 | uVar14 << 0x18);
            uVar14 = uVar14 >> 8;
          }
          goto LAB_00b69cb8;
        }
        local_68[1] = uVar9;
        local_68[0] = local_40;
        local_68[3] = 0;
        local_68[2] = 0;
        uVar14 = uVar10 - 0x3d3 & 0x1f;
        uVar13 = uVar14 ^ 0x1f;
        iVar5 = -(uVar10 - 0x3d3 >> 3 & 0xc);
        uVar10 = *(uint *)((int)local_68 + iVar5 + 8);
        uVar16 = *(uint *)((int)local_68 + iVar5 + 4);
        lVar2 = (ulonglong)(uVar10 << uVar14 | (uVar16 >> 1) >> uVar13) * 1000000000;
        uVar11 = (uint)lVar2;
        lVar3 = (ulonglong)(*(uint *)((int)local_68 + iVar5) << uVar14) * 1000000000;
        uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar17 = 0;
        lVar4 = (ulonglong)(uVar16 << uVar14 | (*(uint *)((int)local_68 + iVar5) >> 1) >> uVar13) *
                1000000000;
        uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar1 = lVar4 + CONCAT44(uVar11,uVar9);
        uVar14 = (int)((ulonglong)lVar2 >> 0x20) +
                 (*(int *)((int)local_68 + iVar5 + 0xc) << uVar14 | (uVar10 >> 1) >> uVar13) *
                 1000000000 +
                 (uint)(CARRY4(uVar11,uVar16) ||
                       CARRY4(uVar11 + uVar16,(uint)CARRY4((uint)lVar4,uVar9)));
        if ((uVar1 & 0x8000000000000000) != 0) {
          uVar17 = (uint)(((int)lVar3 != 0 || (int)(uVar1 >> 0x20) != -0x80000000) ||
                         (int)uVar1 != 0) | uVar14 & 1;
        }
        puVar15 = (undefined1 *)(uVar17 + uVar14);
        puVar18 = (undefined1 *)0x0;
        if (puVar15 != &DAT_3b9aca00) {
          puVar18 = puVar15;
        }
        puVar15 = (undefined1 *)(uint)(puVar15 == &DAT_3b9aca00);
      }
      puVar12 = (undefined1 *)0x0;
      uVar14 = 0;
    }
LAB_00b69cb8:
    FUN_0134aee0(local_68[5],local_50,4,8);
    FUN_019bb7e0(puVar6,puVar7);
    *puVar19 = 1;
    uVar14 = uVar14 << 8 | (uint)puVar12 >> 0x18;
    if (puVar18 == &DAT_3b9aca00) goto LAB_00b69cf4;
    uVar10 = (uint)puVar15 & 0xff | (int)puVar12 << 8;
  }
  *param_1 = uVar10;
  param_1[1] = uVar14;
  uVar8 = 1;
LAB_00b69d14:
  *(undefined1 *)(param_2 + 0x30) = uVar8;
  param_1[2] = (uint)puVar18;
  return;
}

