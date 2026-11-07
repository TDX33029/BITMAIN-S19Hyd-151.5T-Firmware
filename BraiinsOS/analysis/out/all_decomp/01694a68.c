// FUN_01694a68 @ 01694a68 size=1032 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_01694a68(int *param_1,undefined4 param_2,undefined1 *param_3,int *param_4,undefined1 **param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint extraout_r2;
  uint uVar9;
  int extraout_r3;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 *local_90;
  int *local_8c;
  undefined1 **local_88;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined1 *local_68;
  int *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 *local_44;
  int *local_40;
  undefined1 **local_3c;
  undefined1 *local_38;
  int *local_34;
  undefined1 **local_30;
  
  local_88 = param_5;
  local_60 = (int *)0x0;
  local_78 = &DAT_3b9aca00;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_68 = &DAT_3b9aca00;
  if ((param_1[0x12] & param_1[8]) != 0) {
    return 1;
  }
  puVar13 = (uint *)(param_1 + 8);
  local_90 = param_3;
  local_8c = param_4;
  uVar16 = thunk_FUN_016de0ee(1,param_1[8],param_1[0x12],0x280);
  uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
  piVar5 = (int *)((int)uVar16 + extraout_r3);
  uVar14 = 0;
  uVar9 = extraout_r2;
LAB_01694af8:
  uVar12 = 0;
  do {
    ppuVar4 = local_88;
    piVar7 = local_8c;
    puVar3 = local_90;
    uVar9 = uVar9 - 1 & uVar8;
    uVar10 = *(uint *)(param_1[0x25] + uVar9 * 4);
    DataMemoryBarrier(0xb);
    if (uVar8 == uVar10) {
      if (uVar9 + 1 < (uint)param_1[0x10]) {
        uVar11 = uVar8 + 1;
        uVar10 = *puVar13;
        if (uVar10 != uVar8) goto LAB_01694b5c;
LAB_01694be0:
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar13);
        if (bVar1) {
          *puVar13 = uVar11;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        uVar11 = param_1[0x11] + (uVar8 & -param_1[0x11]);
        uVar10 = *puVar13;
        if (uVar10 == uVar8) goto LAB_01694be0;
LAB_01694b5c:
        bVar2 = false;
        ClearExclusiveLocal();
      }
      if (bVar2) {
        local_60 = (int *)(param_1[0x25] + uVar9 * 4);
        local_5c = uVar8 + 1;
        DataMemoryBarrier(0xb);
        *local_60 = local_5c;
        FUN_01694ecc(param_1 + 0x1c);
        return 2;
      }
      uVar8 = 6;
      if (uVar12 < 6) {
        uVar8 = uVar12;
      }
      uVar9 = 1;
      do {
        uVar11 = uVar9 >> (uVar8 & 0xff);
        uVar9 = uVar9 + 1;
        HintYield();
      } while (uVar11 == 0);
      if (uVar12 < 7) {
        uVar12 = uVar12 + 1;
      }
    }
    else if (param_1[0x11] + uVar10 == uVar8 + 1) {
      DataMemoryBarrier(0xb);
      if (param_1[0x11] + *param_1 == uVar8) break;
      uVar8 = 6;
      if (uVar12 < 6) {
        uVar8 = uVar12;
      }
      uVar9 = 1;
      do {
        uVar10 = uVar9 >> (uVar8 & 0xff);
        uVar9 = uVar9 + 1;
        HintYield();
      } while (uVar10 == 0);
      uVar10 = *puVar13;
      if (uVar12 < 7) {
        uVar12 = uVar12 + 1;
      }
    }
    else {
      if (uVar12 < 7) {
        uVar8 = 1;
        do {
          uVar9 = uVar8 >> (uVar12 & 0xff);
          uVar8 = uVar8 + 1;
          HintYield();
        } while (uVar9 == 0);
        uVar12 = uVar12 + 1;
      }
      else {
        FUN_016da3a8();
        if (uVar12 < 0xb) {
          uVar12 = uVar12 + 1;
        }
      }
      uVar10 = *puVar13;
    }
    uVar9 = param_1[0x12];
    uVar8 = uVar10;
    if ((uVar9 & uVar10) != 0) {
      return 1;
    }
  } while( true );
  if (uVar14 != 0xb) {
    if (uVar14 < 7) {
      uVar8 = 1;
      do {
        uVar9 = uVar8 >> (uVar14 & 0xff);
        uVar8 = uVar8 + 1;
        HintYield();
      } while (uVar9 == 0);
    }
    else {
      FUN_016da3a8();
    }
    uVar8 = param_1[8];
    uVar14 = uVar14 + 1;
    uVar9 = param_1[0x12];
    uVar12 = uVar9 & uVar8;
    goto joined_r0x01694ce0;
  }
  if (local_88 != (undefined1 **)&DAT_3b9aca00) {
    FUN_015f3b0c(&local_38,1);
    if (local_38 == puVar3 && local_34 == piVar7) {
      if (ppuVar4 <= local_30) {
        return 0;
      }
    }
    else if ((int)((int)local_34 - ((int)piVar7 + (uint)(local_38 < puVar3))) < 0 ==
             (SBORROW4((int)local_34,(int)piVar7) !=
             SBORROW4((int)local_34 - (int)piVar7,(uint)(local_38 < puVar3)))) {
      return 0;
    }
  }
  local_3c = &local_90;
  local_44 = auStack_80;
  piVar7 = piVar5;
  local_40 = param_1;
  if (((char)piVar5[1] == '\x01') || (piVar7 = (int *)FUN_01698f8c(piVar5), piVar7 != (int *)0x0)) {
    iVar15 = *piVar7;
    *piVar7 = 0;
    if (iVar15 == 0) {
      piVar6 = (int *)FUN_00fba86c();
      local_44 = (undefined1 *)0x0;
      local_34 = local_40;
      local_30 = local_3c;
      local_38 = auStack_80;
      FUN_01695ef8(&local_38,piVar6);
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar15 + -1;
      if (iVar15 == 1) {
LAB_01694d90:
        DataMemoryBarrier(0xb);
        FUN_00fbaa00(piVar6);
      }
    }
    else {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar15 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar15 + 0x18) = 0;
      local_44 = (undefined1 *)0x0;
      local_34 = local_40;
      local_30 = local_3c;
      local_38 = auStack_80;
      FUN_01695ef8(&local_38,iVar15);
      piVar6 = (int *)*piVar7;
      *piVar7 = iVar15;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar15 + -1;
        if (iVar15 == 1) goto LAB_01694d90;
      }
    }
  }
  else {
    FUN_01696040(&local_44);
  }
  uVar8 = param_1[8];
  uVar9 = param_1[0x12];
  uVar14 = 0;
  uVar12 = uVar9 & uVar8;
joined_r0x01694ce0:
  if (uVar12 != 0) {
    return 1;
  }
  goto LAB_01694af8;
}

