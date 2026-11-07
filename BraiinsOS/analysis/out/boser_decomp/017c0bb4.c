// FUN_017c0bb4 @ 017c0bb4 size=968 calls_out=18 calls_in=0
// strings: rtion failed: !p | tr.is_null()

undefined4 FUN_017c0bb4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *unaff_r8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_1b8 [24];
  undefined1 auStack_158 [96];
  uint local_f8;
  int local_f4;
  undefined1 auStack_f0 [96];
  uint local_90;
  int local_8c;
  undefined1 auStack_88 [56];
  undefined4 local_50;
  undefined1 auStack_48 [24];
  int local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x1b4)) {
  case 0:
    iVar7 = param_1 + 0xd0;
    *(undefined1 *)(param_1 + 0x1b5) = 1;
    piVar9 = (int *)(param_1 + 0x1ac);
    *piVar9 = *(int *)(param_1 + 0x1a8);
    FUN_01bed4e2(iVar7,param_1,0xd0);
    unaff_r8 = (int *)(param_1 + 0x1b0);
    *unaff_r8 = iVar7;
    *(int **)(param_1 + 0x1a0) = unaff_r8;
    *(int **)(param_1 + 0x1a4) = piVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1c4f0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1c4f0);
  case 3:
    piVar9 = *(int **)(param_1 + 0x1a4);
    iVar7 = **(int **)(param_1 + 0x1a0);
  }
  FUN_0178bbb4(&local_90,iVar7,param_2);
  if (local_90 == 4 && local_8c == 0) {
    iVar7 = *piVar9;
    piVar9 = (int *)*param_2;
    uVar1 = FUN_019ec670(piVar9);
    if ((uVar1 & 0xff) == 2) {
      uVar1 = 0;
LAB_017c0d54:
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2cdf8);
      }
      uVar2 = *(uint *)(iVar7 + 0x80);
      DataMemoryBarrier(0xb);
      if ((uVar2 & 4) == 0) {
        puVar8 = (uint *)(iVar7 + 0x80);
        if ((uVar2 & 8) == 0) {
LAB_017c0e8c:
          bVar10 = true;
          if ((uVar2 & 8) == 0) goto LAB_017c0e98;
        }
        else {
          iVar5 = piVar9[1];
          iVar6 = *(int *)(iVar7 + 0x74);
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            iVar5 = *piVar9;
            iVar6 = *(int *)(iVar7 + 0x70);
          }
          if (bVar10 && iVar6 == iVar5) goto LAB_017c0e8c;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar8;
            bVar10 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar10);
          *puVar8 = uVar2 & 0xfffffff7;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 4) != 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar10 = (bool)hasExclusiveAccess(puVar8);
            } while (!bVar10);
            *puVar8 = *puVar8 | 8;
            DataMemoryBarrier(0xb);
            goto LAB_017c0ef4;
          }
          (**(code **)(*(int *)(iVar7 + 0x70) + 0xc))(*(undefined4 *)(iVar7 + 0x74));
LAB_017c0e98:
          uVar11 = (**(code **)*piVar9)(piVar9[1]);
          *(undefined8 *)(iVar7 + 0x70) = uVar11;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar8;
            bVar10 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar10);
          *puVar8 = uVar2 | 8;
          bVar10 = true;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 4) != 0) goto LAB_017c0ef4;
        }
      }
      else {
LAB_017c0ef4:
        uVar1 = 0;
        bVar10 = false;
      }
      FUN_019edbc4(uVar1,unaff_r8);
      if (!bVar10) goto LAB_017c0f1c;
    }
    else if ((uVar1 & 1) == 0) {
      unaff_r8 = (int *)((uVar1 & 0xffffff) >> 0x10);
      uVar1 = (uVar1 & 0xffffff) >> 8;
      goto LAB_017c0d54;
    }
    uVar4 = 3;
    uVar3 = 1;
  }
  else {
    FUN_01bed4e2(local_1b8,auStack_88,0x60);
    FUN_01bed4e2(auStack_158,local_1b8,0x60);
    local_f4 = local_8c;
    local_f8 = local_90;
    FUN_01bed4e2(auStack_f0,auStack_158,0x60);
    piVar9 = *(int **)(param_1 + 0x1ac);
    *(undefined1 *)(param_1 + 0x1b5) = 0;
    local_1b8[0] = 0;
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce08);
    }
    puVar8 = (uint *)(piVar9 + 2);
    if (*puVar8 != 4 || piVar9[3] != 0) {
      FUN_017cc810(puVar8);
    }
    FUN_01bed4e2(puVar8,&local_f8,0x68);
    iVar7 = FUN_0188d714(puVar8);
    if (iVar7 == 0) {
      uVar1 = *puVar8;
      iVar7 = piVar9[3];
      *puVar8 = 4;
      piVar9[3] = 0;
      if (uVar1 == 4 && iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ce18);
      }
      FUN_01bed4e2(auStack_88,piVar9 + 4,0x60);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar9;
        bVar10 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar10);
      *piVar9 = iVar6 + -1;
      local_90 = uVar1;
      local_8c = iVar7;
    }
    else {
      local_8c = 0;
      local_90 = 4;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar9;
        bVar10 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar10);
      *piVar9 = iVar6 + -1;
    }
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01783fa8(piVar9);
    }
    FUN_01771c90(local_1b8);
    if ((local_90 & 7) == 3) {
      FUN_00754858(auStack_88);
    }
    else if (local_90 != 4) {
      FUN_0142e6dc(&local_90);
      FUN_0178e884(local_50);
      FUN_017c10bc(auStack_48);
      FUN_019bb7e0(*(undefined4 *)(local_30 + 0x10),*(undefined4 *)(local_30 + 0x14));
      thunk_FUN_01be4678(local_30);
    }
LAB_017c0f1c:
    FUN_017c01ec(param_1 + 0xd0);
    if (*(char *)(param_1 + 0x1b5) != '\0') {
      FUN_01771c90(param_1 + 0x1ac);
    }
    uVar3 = 0;
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x1b5) = 0;
  }
  *(undefined1 *)(param_1 + 0x1b4) = uVar4;
  return uVar3;
}

