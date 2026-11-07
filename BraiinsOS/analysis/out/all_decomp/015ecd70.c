// FUN_015ecd70 @ 015ecd70 size=964 calls_out=10 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ecec4) */
/* WARNING: Removing unreachable block (ram,0x015ecf20) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */

void FUN_015ecd70(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  uint local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_178;
  int local_174;
  
  local_1c4 = 0x1b6;
  local_1c0 = 1;
  local_1ac = &local_1c8;
  local_1c8 = 0;
  local_1bc = 0;
  if (param_3 >> 7 < 3) {
    FUN_016dd1aa(&local_1a8,param_2,param_3);
    *(undefined1 *)((int)&local_1a8 + param_3) = 0;
    if (param_3 < 7) {
      if ((char)local_1a8 == '\0') {
        uVar2 = 0;
LAB_015ecf54:
        if (uVar2 == param_3) {
          FUN_015c49ac(&local_1b8,&local_1a8,&local_1c8);
          goto joined_r0x015ecfc4;
        }
      }
      else if (param_3 != 0) {
        if (local_1a8._1_1_ == '\0') {
          uVar2 = 1;
          goto LAB_015ecf54;
        }
        if (param_3 != 1) {
          if (local_1a8._2_1_ == '\0') {
            uVar2 = 2;
            goto LAB_015ecf54;
          }
          if (param_3 != 2) {
            if (local_1a8._3_1_ == '\0') {
              uVar2 = 3;
              goto LAB_015ecf54;
            }
            if (param_3 != 3) {
              if ((char)local_1a4 == '\0') {
                uVar2 = 4;
                goto LAB_015ecf54;
              }
              if (param_3 != 4) {
                if (local_1a4._1_1_ == '\0') {
                  uVar2 = 5;
                  goto LAB_015ecf54;
                }
                if (param_3 != 5) {
                  uVar2 = 6;
                  if (local_1a4._2_1_ == '\0') goto LAB_015ecf54;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar5 = *(uint *)((int)&local_1a8 + uVar2);
        if (((0x1010100 - uVar5 | uVar5) & 0x80808080 &
            (0x1010100 - *(uint *)((int)&local_1a4 + uVar2) | *(uint *)((int)&local_1a4 + uVar2)))
            != 0x80808080) break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 7);
      if (param_3 + 1 != uVar2) {
        iVar3 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar3 + uVar2) == '\0') {
            uVar2 = iVar3 + uVar2;
            goto LAB_015ecf54;
          }
          iVar3 = iVar3 + 1;
        } while ((param_3 + 1) - uVar2 != iVar3);
      }
    }
    local_1b8 = 2;
    local_1b4 = &DAT_018aae48;
LAB_015ecfc8:
    if ((local_1b8 & 0xff) != 4) {
      *(char *)(param_1 + 1) = (char)local_1b8;
      *param_1 = -0x80000000;
      param_1[2] = (int)local_1b4;
      *(char *)((int)param_1 + 7) = (char)(local_1b8 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_1b8 >> 8);
      return;
    }
  }
  else {
    FUN_015e69ec(&local_1b8,param_2,param_3,&local_1ac);
joined_r0x015ecfc4:
    if ((char)local_1b8 != '\x04') goto LAB_015ecfc8;
  }
  puVar1 = local_1b4;
  uVar4 = 0;
  FUN_016dd606(&local_1a8,0,0x68);
  iVar3 = FUN_016e03d2(puVar1,&local_1a8);
  if (iVar3 == -1) {
    FUN_016d2bc8();
    iVar3 = 1;
    local_178 = 0;
  }
  else {
    if (local_174 != 0) {
      local_178 = -1;
    }
    if (local_178 < 0) {
LAB_015ed020:
      *param_1 = -0x80000000;
      *(undefined2 *)(param_1 + 1) = 0x2601;
      goto LAB_015ed030;
    }
    uVar4 = 1;
    if (local_178 == 0) {
      local_178 = 0;
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(local_178);
      if (iVar3 == 0) goto LAB_015ed020;
    }
  }
  local_1a0 = 0;
  local_1a8 = local_178;
  local_1a4 = iVar3;
  FUN_015ec88c(&local_1c8,puVar1,&local_1a8,uVar4,local_178);
  if ((char)local_1c8 == '\x04') {
    *param_1 = local_1a8;
    param_1[1] = local_1a4;
    param_1[2] = local_1a0;
    FUN_016dffb2(puVar1);
    return;
  }
  *(char *)(param_1 + 1) = (char)local_1c8;
  *(undefined1 *)((int)param_1 + 7) = local_1c8._3_1_;
  *(undefined2 *)((int)param_1 + 5) = local_1c8._1_2_;
  param_1[2] = local_1c4;
  *param_1 = -0x80000000;
  if (local_1a8 != 0) {
    thunk_FUN_016d3fb4(local_1a4);
    FUN_016dffb2(puVar1);
    return;
  }
LAB_015ed030:
  FUN_016dffb2(puVar1);
  return;
}

