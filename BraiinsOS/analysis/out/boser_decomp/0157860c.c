// FUN_0157860c @ 0157860c size=924 calls_out=13 calls_in=2
// strings: 

int FUN_0157860c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  int *local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 auStack_7f [47];
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar18 = CONCAT44(local_bc,local_c0);
  if ((*param_2 == '\x04') && (iVar6 = *(int *)(param_1 + 8), iVar6 == *(int *)(param_2 + 0xc))) {
    iVar15 = 0;
    if (iVar6 != 0) {
      iVar12 = *(int *)(param_2 + 8);
      iVar8 = *(int *)(param_1 + 4);
      do {
        iVar4 = FUN_01578ae8(iVar8,iVar12);
        if (iVar4 == 0) goto LAB_0157867c;
        iVar8 = iVar8 + 0x18;
        iVar12 = iVar12 + 0x18;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
LAB_0157867c:
    piVar13 = *(int **)(param_1 + 0xc);
    do {
      iVar6 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_015789b0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15789b0);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    if (param_4 == 0) {
      uVar9 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      local_c8 = *(int **)(param_4 + 0xc);
      do {
        iVar6 = *local_c8;
        bVar2 = (bool)hasExclusiveAccess(local_c8);
      } while (!bVar2);
      *local_c8 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_015789b0;
      piVar11 = piVar13 + 2;
      local_c4 = *(undefined4 *)(param_4 + 0x10);
      uVar9 = (*(int **)(param_4 + 4))[1];
      if (uVar7 < uVar9) {
        uVar9 = 0;
      }
      else {
        iVar6 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar11,uVar9);
        if (iVar6 != 0) {
          uVar9 = 0;
        }
        piVar11 = (int *)((int)piVar11 + uVar9);
      }
      uVar18 = FUN_016bc0ec(piVar11,uVar7 - uVar9);
      local_cc = 3;
      uVar9 = 2;
    }
    uVar19 = FUN_01531840(param_3);
    uVar14 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    iVar6 = uVar14 * 0x18;
    if (0x5555555 < uVar14) {
LAB_0157878c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,iVar6);
    }
    if (iVar6 == 0) {
      local_b4 = 8;
      local_b8 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 4);
      uVar10 = 8;
      iVar8 = FUN_01298504(iVar6,8);
      if (iVar8 == 0) goto LAB_0157878c;
      local_b8 = uVar14;
      local_b4 = iVar8;
      if (uVar14 != 0) {
        iVar12 = 0;
        uVar16 = 0;
        uVar5 = (uint)&local_a8 | 4;
        do {
          if (iVar6 == iVar12) break;
          uVar16 = uVar16 + 1;
          puVar17 = (uint *)(iVar15 + iVar12);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)*puVar17) {
          case '\0':
            uVar3 = 0;
            break;
          case '\x01':
            local_a8 = *puVar17;
            uStack_a4 = puVar17[1];
            local_a0 = puVar17[2];
            uStack_9c = puVar17[3];
            local_98 = (int *)puVar17[4];
            uStack_94 = puVar17[5];
            goto LAB_015788b8;
          case '\x02':
            local_a0 = puVar17[2];
            uStack_9c = puVar17[3];
            local_98 = (int *)puVar17[4];
            uStack_94 = puVar17[5];
            uVar3 = 2;
            break;
          case '\x03':
            FUN_006666fc(uVar5,puVar17[2],puVar17[3]);
            uVar3 = 3;
            break;
          case '\x04':
            FUN_014fcef8(uVar5,puVar17 + 1);
            uVar3 = 4;
            break;
          case '\x05':
            FUN_0156aa80(uVar5,puVar17 + 1);
            uVar3 = 5;
          }
          local_a8 = CONCAT31(local_a8._1_3_,uVar3);
LAB_015788b8:
          puVar17 = (uint *)(iVar8 + iVar12);
          iVar12 = iVar12 + 0x18;
          *puVar17 = local_a8;
          puVar17[1] = uStack_a4;
          puVar17[2] = local_a0;
          puVar17[3] = uStack_9c;
          puVar17[4] = (uint)local_98;
          puVar17[5] = uStack_94;
        } while (uVar14 != uVar16);
      }
    }
    local_a8 = local_b8;
    uStack_a4 = local_b4;
    local_b0 = uVar14;
    local_a0 = uVar14;
    FUN_01bed4e2((uint)&local_b8 | 3,&local_a8,0xc);
    uStack_9c = local_cc;
    local_98 = local_c8;
    uStack_94 = local_c4;
    local_50 = 6;
    local_80 = 4;
    local_88 = 0x8000000e;
    local_a8 = uVar9;
    local_4c = param_2;
    uStack_90 = uVar18;
    FUN_01bed4e2(auStack_7f,&local_b8,0xf);
    local_30 = piVar13;
    local_2c = uVar7;
    local_38 = uVar19;
    iVar15 = thunk_FUN_01be5118(0x80);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar15,&local_a8,0x80);
  }
  return iVar15;
}

