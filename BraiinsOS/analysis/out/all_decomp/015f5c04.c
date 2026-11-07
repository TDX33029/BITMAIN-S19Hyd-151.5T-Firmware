// FUN_015f5c04 @ 015f5c04 size=808 calls_out=7 calls_in=6
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f5d30) */
/* WARNING: Removing unreachable block (ram,0x015f5d38) */
/* WARNING: Removing unreachable block (ram,0x015f5d94) */
/* WARNING: Removing unreachable block (ram,0x015f5d44) */
/* WARNING: Removing unreachable block (ram,0x015f5d50) */
/* WARNING: Removing unreachable block (ram,0x015f5de8) */

void FUN_015f5c04(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_1b0;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  int local_19c;
  uint local_198;
  undefined4 *local_194;
  
  if (param_3 >> 7 < 3) {
    FUN_016dd1aa(&local_1a8,param_2,param_3);
    uVar2 = 0;
    *(undefined1 *)((int)&local_1a8 + param_3) = 0;
    if (param_3 < 7) {
      if ((char)local_1a8 == '\0') {
        uVar2 = 0;
LAB_015f5dc8:
        if (uVar2 == param_3) {
          local_1ac = (undefined4 *)FUN_016d26cc(&local_1a8);
          goto LAB_015f5e14;
        }
      }
      else if (param_3 != 0) {
        if (local_1a8._1_1_ == '\0') {
          uVar2 = 1;
          goto LAB_015f5dc8;
        }
        if (param_3 != 1) {
          if (local_1a8._2_1_ == '\0') {
            uVar2 = 2;
            goto LAB_015f5dc8;
          }
          if (param_3 != 2) {
            if (local_1a8._3_1_ == '\0') {
              uVar2 = 3;
              goto LAB_015f5dc8;
            }
            if (param_3 != 3) {
              if ((char)local_1a4 == '\0') {
                uVar2 = 4;
                goto LAB_015f5dc8;
              }
              if (param_3 != 4) {
                if (local_1a4._1_1_ == '\0') {
                  uVar2 = 5;
                  goto LAB_015f5dc8;
                }
                if (param_3 != 5) {
                  uVar2 = 6;
                  if (local_1a4._2_1_ == '\0') goto LAB_015f5dc8;
                }
              }
            }
          }
        }
      }
    }
    else {
      do {
        uVar5 = *(uint *)((int)&local_1a8 + uVar2);
        if (((0x1010100 - uVar5 | uVar5) & 0x80808080 &
            (0x1010100 - *(uint *)((int)&local_1a4 + uVar2) | *(uint *)((int)&local_1a4 + uVar2)))
            != 0x80808080) break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 7);
      if (param_3 + 1 != uVar2) {
        iVar6 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar6 + uVar2) == '\0') {
            uVar2 = iVar6 + uVar2;
            goto LAB_015f5dc8;
          }
          iVar6 = iVar6 + 1;
        } while ((param_3 + 1) - uVar2 != iVar6);
      }
    }
    uVar2 = 2;
    local_1ac = &DAT_018aae48;
    uVar1 = 2;
    bVar7 = true;
  }
  else {
    FUN_015f5f50(&local_1b0,param_2,param_3);
    uVar1 = (undefined1)local_1b0;
    bVar7 = (local_1b0 & 0xff) != 4;
    uVar2 = local_1b0;
  }
  local_1b0 = uVar2;
  if (bVar7) {
    local_1b0._1_2_ = (undefined2)(uVar2 >> 8);
    local_1b0._3_1_ = (undefined1)(uVar2 >> 0x18);
    *(undefined2 *)((int)param_1 + 5) = local_1b0._1_2_;
    *(undefined1 *)((int)param_1 + 7) = local_1b0._3_1_;
    param_1[2] = local_1ac;
    *(undefined1 *)(param_1 + 1) = uVar1;
    *param_1 = 1;
    return;
  }
LAB_015f5e14:
  puVar3 = local_1ac;
  if (local_1ac == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_016d2bc8();
    uVar4 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = uVar4;
    *param_1 = 1;
    return;
  }
  iVar6 = 1;
  if ((param_3 != 0) && (iVar6 = thunk_FUN_016d4a50(param_3), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar6,param_2,param_3);
  local_194 = puVar3;
  local_1a4 = 1;
  local_1a8 = 1;
  local_1a0 = param_3;
  local_19c = iVar6;
  local_198 = param_3;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar3 = local_1a8;
  puVar3[1] = local_1a4;
  puVar3[2] = local_1a0;
  puVar3[3] = local_19c;
  puVar3[4] = local_198;
  puVar3[5] = local_194;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = puVar3;
  *param_1 = 0;
  return;
}

