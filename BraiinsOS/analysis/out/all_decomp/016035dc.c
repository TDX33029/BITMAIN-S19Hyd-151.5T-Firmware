// FUN_016035dc @ 016035dc size=1624 calls_out=8 calls_in=1
// strings: 

void FUN_016035dc(undefined2 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  do {
    if (DAT_018d903c != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018d903c);
      goto LAB_0160361c;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18d903c);
  } while (!bVar1);
  DAT_018d903c = 1;
  DataMemoryBarrier(0xb);
LAB_0160361c:
  local_4c = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    local_4c = FUN_015bf3f8();
    local_4c = local_4c ^ 1;
  }
  iVar10 = DAT_018d904c;
  iVar8 = DAT_018d9044;
  local_50 = *param_2;
  uVar16 = DAT_018d9050 - DAT_018d904c;
  uVar13 = param_2[2];
  if (local_50 - uVar13 < uVar16) {
    uVar5 = uVar16 + uVar13;
    if (!CARRY4(uVar16,uVar13)) {
      if (uVar5 <= local_50 * 2) {
        uVar5 = local_50 << 1;
      }
      if (uVar5 < 9) {
        uVar5 = 8;
      }
      FUN_015bf51c(&local_48,local_50,param_2[1],uVar5,1,1);
      if (local_48 != 1) {
        *param_2 = uVar5;
        param_2[1] = local_44;
        local_58 = local_44;
        local_50 = uVar5;
        goto LAB_01603694;
      }
    }
    *param_1 = 0x2601;
  }
  else {
    local_58 = param_2[1];
LAB_01603694:
    uVar5 = uVar16 + uVar13;
    FUN_016dd1aa(local_58 + uVar13,iVar8 + iVar10,uVar16);
    DAT_018d904c = 0;
    DAT_018d9050 = 0;
    param_2[2] = uVar5;
    if (local_50 - uVar5 < 0x20) {
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      do {
        uVar13 = FUN_016e0250(0,&local_48,0x20);
        if (uVar13 != 0xffffffff) {
          if (0x20 < uVar13) goto LAB_01603bd0;
          if (local_50 - uVar5 < uVar13) {
            FUN_015bf41c(param_2,uVar5,uVar13,1,1);
            local_58 = param_2[1];
            uVar15 = param_2[2];
            FUN_016dd1aa(local_58 + uVar15,&local_48,uVar13);
            uVar15 = uVar15 + uVar13;
            param_2[2] = uVar15;
          }
          else {
            FUN_016dd1aa(local_58 + uVar5,&local_48,uVar13);
            uVar15 = uVar5 + uVar13;
            param_2[2] = uVar15;
            if (uVar13 == 0) {
              iVar8 = 0;
              goto LAB_01603a3c;
            }
          }
          uVar13 = *param_2;
          goto LAB_01603788;
        }
        piVar6 = (int *)FUN_016d2bc8();
        iVar8 = *piVar6;
      } while (iVar8 == 4);
LAB_01603724:
      bVar4 = 1;
      param_2 = (uint *)0x0;
      uVar9 = 0;
LAB_01603a0c:
      bVar2 = iVar8 == 9;
      bVar3 = (bool)(bVar4 & bVar2);
      bVar1 = bVar3;
      if (!bVar3 && (!bVar1 || !bVar2)) {
        *(int *)(param_1 + 2) = iVar8;
        *(bool *)((int)param_1 + 3) = bVar1 && bVar2;
        *(undefined1 *)param_1 = uVar9;
        *(ushort *)((int)param_1 + 1) = (ushort)param_2 & 0xff;
        goto joined_r0x01603a54;
      }
      if (bVar3) {
        iVar8 = 0;
      }
    }
    else {
      uVar13 = local_50;
      uVar15 = uVar5;
LAB_01603788:
      iVar10 = 0;
      uVar12 = 0;
      uVar18 = 0x2000;
LAB_01603794:
      if ((uVar15 == uVar13) && (uVar13 == local_50)) {
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        while (uVar13 = FUN_016e0250(0,&local_48,0x20), uVar13 == 0xffffffff) {
          piVar6 = (int *)FUN_016d2bc8();
          iVar8 = *piVar6;
          if (iVar8 != 4) goto LAB_01603724;
        }
        if (0x20 < uVar13) {
LAB_01603bd0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar13,0x20,&DAT_018aab48);
        }
        if (uVar13 == 0) {
          FUN_016dd1aa(param_2[1] + local_50,&local_48,0);
          param_2[2] = local_50;
          iVar8 = local_50 - uVar5;
          goto LAB_01603a3c;
        }
        FUN_015bf41c(param_2,local_50,uVar13,1,1);
        local_58 = param_2[1];
        uVar15 = param_2[2];
        FUN_016dd1aa(local_58 + uVar15,&local_48,uVar13);
        uVar15 = uVar15 + uVar13;
        param_2[2] = uVar15;
        uVar13 = *param_2;
      }
      if (uVar15 == uVar13) {
        uVar14 = uVar13 + 0x20;
        if (uVar14 <= uVar13 * 2) {
          uVar14 = uVar13 << 1;
        }
        FUN_015bf51c(&local_48,uVar13,local_58,uVar14,1,1);
        if (local_48 == 1) {
          uVar9 = 1;
          bVar4 = 0;
          param_2 = (uint *)&DAT_00000026;
          iVar8 = 1;
          goto LAB_01603a0c;
        }
        *param_2 = uVar14;
        param_2[1] = local_44;
        local_58 = local_44;
        uVar13 = uVar14;
      }
      else {
        uVar13 = *param_2;
      }
      uVar14 = uVar13 - uVar15;
      if (uVar18 < uVar13 - uVar15) {
        uVar14 = uVar18;
      }
      uVar17 = uVar14;
      if (0x7ffffffe < uVar14) {
        uVar17 = 0x7fffffff;
      }
      while (uVar7 = FUN_016e0250(0,local_58 + uVar15,uVar17), uVar7 == 0xffffffff) {
        piVar6 = (int *)FUN_016d2bc8();
        iVar8 = *piVar6;
        if (iVar8 != 4) {
          uVar9 = 0;
          bVar4 = 1;
          param_2[2] = uVar15;
          goto LAB_01603a0c;
        }
      }
      uVar15 = uVar7 + uVar15;
      uVar17 = uVar12;
      if (uVar12 < uVar7) {
        uVar17 = uVar7;
      }
      param_2[2] = uVar15;
      if (uVar7 != 0) {
        uVar12 = uVar17 - uVar7;
        iVar8 = 0;
        if (uVar7 < uVar14) {
          iVar8 = iVar10 + 1;
        }
        iVar10 = iVar8;
        uVar11 = uVar18;
        if (1 < iVar10) {
          uVar11 = 0xffffffff;
        }
        if (uVar17 == uVar14) {
          uVar11 = uVar18;
        }
        uVar18 = uVar11;
        if (((uVar7 == uVar14) && (uVar11 <= uVar14)) && (uVar18 = uVar11 << 1, 0x7fffffff < uVar11)
           ) {
          uVar18 = 0xffffffff;
        }
        goto LAB_01603794;
      }
      iVar8 = uVar15 - uVar5;
    }
LAB_01603a3c:
    *(undefined1 *)param_1 = 4;
    *(uint *)(param_1 + 2) = iVar8 + uVar16;
  }
joined_r0x01603a54:
  if (((local_4c == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
    DAT_018d9040 = 1;
  }
  iVar8 = DAT_018d903c;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d903c);
  } while (!bVar1);
  DAT_018d903c = 0;
  if (iVar8 == 2) {
    software_interrupt(0);
    FUN_016d3496(&DAT_018d903c,0x81,1,param_5);
    return;
  }
  return;
}

