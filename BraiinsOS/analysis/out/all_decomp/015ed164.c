// FUN_015ed164 @ 015ed164 size=876 calls_out=7 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015ed2c0) */
/* WARNING: Removing unreachable block (ram,0x015ed2c8) */
/* WARNING: Removing unreachable block (ram,0x015ed32c) */
/* WARNING: Removing unreachable block (ram,0x015ed2d4) */
/* WARNING: Removing unreachable block (ram,0x015ed2e0) */

void FUN_015ed164(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  uint local_1b8;
  undefined4 *local_1b4;
  undefined1 *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  
  local_1ac = (undefined1 *)&local_1c8;
  local_1c4 = 0x1b6;
  local_1c0 = 0x1000100;
  local_1bc = 1;
  local_1c8 = 0;
  if (param_3 >> 7 < 3) {
    local_1ac = (undefined1 *)&local_1c8;
    FUN_016dd1aa(&local_1a8,param_2,param_3);
    *(undefined1 *)((int)&local_1a8 + param_3) = 0;
    if (6 < param_3) {
      uVar2 = 0;
      do {
        uVar6 = *(uint *)((int)&local_1a8 + uVar2);
        if (((0x1010100 - uVar6 | uVar6) & 0x80808080 &
            (0x1010100 - *(uint *)((int)&local_1a4 + uVar2) | *(uint *)((int)&local_1a4 + uVar2)))
            != 0x80808080) break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 7);
      if (param_3 + 1 != uVar2) {
        iVar5 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar5 + uVar2) == '\0') {
            uVar2 = iVar5 + uVar2;
            goto LAB_015ed360;
          }
          iVar5 = iVar5 + 1;
        } while ((param_3 + 1) - uVar2 != iVar5);
      }
LAB_015ed388:
      local_1b8 = 2;
      local_1b4 = &DAT_018aae48;
      bVar8 = true;
      goto joined_r0x015ed3d0;
    }
    if ((char)local_1a8 != '\0') {
      if (param_3 != 0) {
        if (local_1a8._1_1_ == '\0') {
          uVar2 = 1;
          goto LAB_015ed360;
        }
        if (param_3 != 1) {
          if (local_1a8._2_1_ == '\0') {
            uVar2 = 2;
            goto LAB_015ed360;
          }
          if (param_3 != 2) {
            if (local_1a8._3_1_ == '\0') {
              uVar2 = 3;
              goto LAB_015ed360;
            }
            if (param_3 != 3) {
              if ((char)local_1a4 == '\0') {
                uVar2 = 4;
                goto LAB_015ed360;
              }
              if (param_3 != 4) {
                if (local_1a4._1_1_ == '\0') {
                  uVar2 = 5;
                  goto LAB_015ed360;
                }
                if (param_3 != 5) {
                  uVar2 = 6;
                  if (local_1a4._2_1_ == '\0') goto LAB_015ed360;
                }
              }
            }
          }
        }
      }
      goto LAB_015ed388;
    }
    uVar2 = 0;
LAB_015ed360:
    if (uVar2 != param_3) goto LAB_015ed388;
    FUN_015c49ac(&local_1b8,&local_1a8,&local_1c8);
    if ((char)local_1b8 == '\x04') goto LAB_015ed3e8;
  }
  else {
    FUN_015e69ec(&local_1b8,param_2,param_3,&local_1ac);
    bVar8 = (char)local_1b8 != '\x04';
joined_r0x015ed3d0:
    if (!bVar8) goto LAB_015ed3e8;
  }
  if ((local_1b8 & 0xff) != 4) {
    *(char *)param_1 = (char)local_1b8;
    param_1[1] = local_1b4;
    *(char *)((int)param_1 + 3) = (char)(local_1b8 >> 0x18);
    *(short *)((int)param_1 + 1) = (short)(local_1b8 >> 8);
    return;
  }
LAB_015ed3e8:
  puVar1 = local_1b4;
  if (param_5 != 0) {
    puVar7 = &DAT_018aeaf8;
    do {
      while (uVar2 = FUN_016e034e(puVar1,param_4,param_5), uVar2 == 0xffffffff) {
        puVar3 = (uint *)FUN_016d2bc8();
        local_1a8._0_1_ = '\0';
        local_1a4 = *puVar3;
        if (*puVar3 != 4) {
          puVar7 = &local_1a8;
LAB_015ed4a4:
          uVar4 = puVar7[1];
          *param_1 = *puVar7;
          param_1[1] = uVar4;
          FUN_016dffb2(puVar1);
          return;
        }
        if (param_5 == 0) goto LAB_015ed468;
      }
      local_1a4 = uVar2;
      local_1a8._0_1_ = '\x04';
      if (uVar2 == 0) goto LAB_015ed4a4;
      if (param_5 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,param_5,param_5,&DAT_018aab58);
      }
      param_4 = param_4 + uVar2;
      param_5 = param_5 - uVar2;
    } while (param_5 != 0);
  }
LAB_015ed468:
  *(undefined1 *)param_1 = 4;
  FUN_016dffb2(puVar1);
  return;
}

