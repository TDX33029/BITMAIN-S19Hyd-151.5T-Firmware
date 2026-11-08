// FUN_015ec424 @ 015ec424 size=1076 calls_out=11 calls_in=15
// strings: 

/* WARNING: Removing unreachable block (ram,0x015ec570) */
/* WARNING: Removing unreachable block (ram,0x015ec578) */
/* WARNING: Removing unreachable block (ram,0x015ec5d4) */
/* WARNING: Removing unreachable block (ram,0x015ec584) */
/* WARNING: Removing unreachable block (ram,0x015ec590) */

void FUN_015ec424(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint unaff_r7;
  uint *puVar9;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined2 local_1bc;
  uint *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_180;
  int local_17c;
  uint local_30;
  undefined4 *local_2c;
  
  local_1c4 = 0x1b6;
  local_1c0 = 1;
  local_1b4 = &local_1c8;
  local_1c8 = 0;
  local_1bc = 0;
  if (param_3 >> 7 < 3) {
    FUN_016dd1aa(&local_1b0,param_2,param_3);
    *(undefined1 *)((int)&local_1b0 + param_3) = 0;
    if (param_3 < 7) {
      if ((char)local_1b0 == '\0') {
        uVar3 = 0;
LAB_015ec608:
        if (uVar3 == param_3) {
          FUN_015c49ac(&local_30,&local_1b0,&local_1c8);
          goto joined_r0x015ec678;
        }
      }
      else if (param_3 != 0) {
        if (local_1b0._1_1_ == '\0') {
          uVar3 = 1;
          goto LAB_015ec608;
        }
        if (param_3 != 1) {
          if (local_1b0._2_1_ == '\0') {
            uVar3 = 2;
            goto LAB_015ec608;
          }
          if (param_3 != 2) {
            if (local_1b0._3_1_ == '\0') {
              uVar3 = 3;
              goto LAB_015ec608;
            }
            if (param_3 != 3) {
              if ((char)local_1ac == '\0') {
                uVar3 = 4;
                goto LAB_015ec608;
              }
              if (param_3 != 4) {
                if (local_1ac._1_1_ == '\0') {
                  uVar3 = 5;
                  goto LAB_015ec608;
                }
                if (param_3 != 5) {
                  uVar3 = 6;
                  if (local_1ac._2_1_ == '\0') goto LAB_015ec608;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      do {
        uVar7 = *(uint *)((int)&local_1b0 + uVar3);
        unaff_r7 = (0x1010100 - uVar7 | uVar7) & 0x80808080 &
                   (0x1010100 - *(uint *)((int)&local_1ac + uVar3) |
                   *(uint *)((int)&local_1ac + uVar3));
        if (unaff_r7 != 0x80808080) break;
        uVar3 = uVar3 + 8;
      } while (uVar3 <= param_3 - 7);
      if (param_3 + 1 != uVar3) {
        iVar4 = 0;
        do {
          unaff_r7 = (uint)*(byte *)((int)&local_1b0 + iVar4 + uVar3);
          if (unaff_r7 == 0) {
            uVar3 = iVar4 + uVar3;
            goto LAB_015ec608;
          }
          iVar4 = iVar4 + 1;
        } while ((param_3 + 1) - uVar3 != iVar4);
      }
    }
    local_30 = 2;
    local_2c = &DAT_018aae48;
LAB_015ec67c:
    if ((local_30 & 0xff) != 4) {
      *(char *)(param_1 + 1) = (char)local_30;
      *param_1 = 0x80000000;
      param_1[2] = (uint)local_2c;
      *(char *)((int)param_1 + 7) = (char)(local_30 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_30 >> 8);
      return;
    }
  }
  else {
    FUN_015e69ec(&local_30,param_2,param_3,&local_1b4);
joined_r0x015ec678:
    if ((char)local_30 != '\x04') goto LAB_015ec67c;
  }
  puVar1 = local_2c;
  uVar8 = 0;
  FUN_016dd606(&local_1b0,0,0x68);
  iVar4 = FUN_016e03d2(puVar1,&local_1b0);
  if (iVar4 == -1) {
    FUN_016d2bc8();
    local_1c0 = 0;
    local_1c4 = 1;
    local_1c8 = 0;
  }
  else {
    local_1c0 = 0;
    unaff_r7 = local_180;
    if (local_17c != 0) {
      unaff_r7 = 0xffffffff;
    }
    local_1c4 = 1;
    local_1c8 = 0;
    if (unaff_r7 == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = 1;
      FUN_00600b74(&local_1b0,0,1,unaff_r7);
      if (local_1b0 != 0) {
        *param_1 = 0x80000000;
        *(undefined2 *)(param_1 + 1) = 0x2601;
        FUN_016dffb2(puVar1);
        return;
      }
      local_1c4 = local_1ac;
      local_1c8 = unaff_r7;
    }
  }
  puVar9 = &local_30;
  FUN_015ec88c(puVar9,puVar1,&local_1c8,uVar8,unaff_r7);
  uVar7 = local_1c0;
  uVar3 = local_1c4;
  FUN_00fab1e0(&local_1b0,local_1c4,local_1c0);
  if (local_1b0 == 0) {
LAB_015ec75c:
    uVar6 = *puVar9;
    uVar2 = (undefined1)uVar6;
    puVar5 = (undefined4 *)puVar9[1];
    local_1c0 = uVar7;
    if ((uVar6 & 0xff) == 4) {
      *param_1 = local_1c8;
      param_1[1] = local_1c4;
      param_1[2] = uVar7;
      goto LAB_015ec780;
    }
  }
  else {
    uVar2 = (undefined1)local_30;
    if ((local_30 & 0xff) == 4) {
      uVar7 = 0;
      puVar9 = &DAT_018aaaa8;
      goto LAB_015ec75c;
    }
    puVar5 = local_2c;
    uVar6 = local_30;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0x80000000;
  *(short *)((int)param_1 + 5) = (short)(uVar6 >> 8);
  param_1[2] = (uint)puVar5;
  *(char *)((int)param_1 + 7) = (char)(uVar6 >> 0x18);
  if (local_1c8 != 0) {
    thunk_FUN_016d3fb4(uVar3);
    FUN_016dffb2(puVar1);
    return;
  }
LAB_015ec780:
  FUN_016dffb2(puVar1);
  return;
}

