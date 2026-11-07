// FUN_016c2544 @ 016c2544 size=984 calls_out=7 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x016c26e8) */
/* WARNING: Removing unreachable block (ram,0x016c26f0) */
/* WARNING: Removing unreachable block (ram,0x016c275c) */
/* WARNING: Removing unreachable block (ram,0x016c26fc) */
/* WARNING: Removing unreachable block (ram,0x016c2708) */
/* WARNING: Removing unreachable block (ram,0x016c285c) */

void FUN_016c2544(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_290;
  uint local_28c;
  undefined4 *local_288 [4];
  undefined4 *local_278;
  int local_21c;
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined1 auStack_90 [108];
  
  uVar1 = *(byte *)(param_3 + 4) - 1 & 0xff;
  if ((uVar1 < 0xc) && ((0xaabU >> uVar1 & 1) != 0)) {
    puVar7 = *(undefined4 **)(&DAT_004248f0 + uVar1 * 4);
    goto LAB_016c2868;
  }
  iVar8 = param_3[6];
  iVar3 = param_3[1];
  uVar4 = *param_3;
  FUN_015ed628(&local_21c,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),uVar4,
               iVar3 + -1);
  if (local_214 >> 7 < 3) {
    FUN_016dd1aa(&local_210,local_218,local_214);
    uVar1 = 0;
    *(undefined1 *)((int)&local_210 + local_214) = 0;
    if (local_214 < 7) {
      if ((char)local_210 == '\0') {
        uVar1 = 0;
LAB_016c2790:
        if (uVar1 == local_214) {
          FUN_016dd606(auStack_90,0,0x68);
          iVar2 = FUN_016e03f6(&local_210,auStack_90);
          if (iVar2 == -1) {
            local_288[0] = (undefined4 *)FUN_016d2bc8();
            local_288[0] = (undefined4 *)*local_288[0];
            local_28c = local_28c & 0xffffff00;
          }
          else {
            FUN_016dd1aa(local_288,auStack_90,0x68);
          }
          local_290 = (uint)(iVar2 == -1);
          goto LAB_016c2824;
        }
      }
      else if (local_214 != 0) {
        if (local_210._1_1_ == '\0') {
          uVar1 = 1;
          goto LAB_016c2790;
        }
        if (local_214 != 1) {
          if (local_210._2_1_ == '\0') {
            uVar1 = 2;
            goto LAB_016c2790;
          }
          if (local_214 != 2) {
            if (local_210._3_1_ == '\0') {
              uVar1 = 3;
              goto LAB_016c2790;
            }
            if (local_214 != 3) {
              if ((char)local_20c == '\0') {
                uVar1 = 4;
                goto LAB_016c2790;
              }
              if (local_214 != 4) {
                if (local_20c._1_1_ == '\0') {
                  uVar1 = 5;
                  goto LAB_016c2790;
                }
                if (local_214 != 5) {
                  uVar1 = 6;
                  if (local_20c._2_1_ == '\0') goto LAB_016c2790;
                }
              }
            }
          }
        }
      }
    }
    else {
      do {
        uVar6 = *(uint *)((int)&local_210 + uVar1);
        if (((0x1010100 - uVar6 | uVar6) & 0x80808080 &
            (0x1010100 - *(uint *)((int)&local_20c + uVar1) | *(uint *)((int)&local_20c + uVar1)))
            != 0x80808080) break;
        uVar1 = uVar1 + 8;
      } while (uVar1 <= local_214 - 7);
      if (local_214 + 1 != uVar1) {
        iVar2 = 0;
        do {
          if (*(char *)((int)&local_210 + iVar2 + uVar1) == '\0') {
            uVar1 = iVar2 + uVar1;
            goto LAB_016c2790;
          }
          iVar2 = iVar2 + 1;
        } while ((local_214 + 1) - uVar1 != iVar2);
      }
    }
    local_288[0] = &DAT_018aae48;
    local_28c = 2;
    local_290 = 1;
  }
  else {
    FUN_015e5770(&local_290,local_218,local_214,FUN_015ed7a8);
  }
LAB_016c2824:
  if (local_21c != 0) {
    thunk_FUN_016d3fb4(local_218);
  }
  puVar7 = local_288[0];
  uVar1 = local_28c;
  if (local_290 == 0) {
    puVar7 = local_278;
  }
  else if ((local_28c & 0xff) != 4) {
    FUN_015ed628(&local_210,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),uVar4,
                 iVar3 + -1);
    param_1[3] = local_20c;
    param_1[4] = local_208;
    param_1[5] = uVar1;
    param_1[6] = puVar7;
    param_1[1] = 0x80000000;
    param_1[2] = local_210;
    param_1[7] = param_2;
    *param_1 = 1;
    return;
  }
LAB_016c2868:
  FUN_015ed628(param_1 + 4,*(undefined4 *)(param_3[6] + 0xc),*(undefined4 *)(param_3[6] + 0x10),
               *param_3,param_3[1] + -1);
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  param_1[7] = puVar7;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = param_2;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = 0;
  return;
}

