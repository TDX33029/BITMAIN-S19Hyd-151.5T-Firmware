// FUN_015f4f38 @ 015f4f38 size=800 calls_out=7 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f505c) */
/* WARNING: Removing unreachable block (ram,0x015f5064) */
/* WARNING: Removing unreachable block (ram,0x015f50c0) */
/* WARNING: Removing unreachable block (ram,0x015f5070) */
/* WARNING: Removing unreachable block (ram,0x015f507c) */

void FUN_015f4f38(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_280;
  uint local_27c;
  undefined4 *local_278 [26];
  undefined4 local_210;
  char local_20c;
  char cStack_20b;
  char cStack_20a;
  undefined1 auStack_90 [112];
  
  if (param_3 >> 7 < 3) {
    FUN_016dd1aa(&local_210,param_2,param_3);
    uVar3 = 0;
    *(undefined1 *)((int)&local_210 + param_3) = 0;
    if (param_3 < 7) {
      if ((char)local_210 == '\0') {
        uVar3 = 0;
      }
      else {
        if (param_3 == 0) goto LAB_015f5154;
        if (local_210._1_1_ == '\0') {
          uVar3 = 1;
        }
        else {
          if (param_3 == 1) goto LAB_015f5154;
          if (local_210._2_1_ == '\0') {
            uVar3 = 2;
          }
          else {
            if (param_3 == 2) goto LAB_015f5154;
            if (local_210._3_1_ == '\0') {
              uVar3 = 3;
            }
            else {
              if (param_3 == 3) goto LAB_015f5154;
              if (local_20c == '\0') {
                uVar3 = 4;
              }
              else {
                if (param_3 == 4) goto LAB_015f5154;
                if (cStack_20b == '\0') {
                  uVar3 = 5;
                }
                else if ((param_3 == 5) || (uVar3 = 6, cStack_20a != '\0')) goto LAB_015f5154;
              }
            }
          }
        }
      }
LAB_015f50f4:
      if (uVar3 == param_3) {
        FUN_016dd606(auStack_90,0,0x68);
        iVar4 = FUN_016e048a(&local_210,auStack_90);
        if (iVar4 != -1) {
          FUN_016dd1aa(local_278,auStack_90,0x68);
LAB_015f5144:
          *(undefined2 *)param_1 = 0x104;
          return;
        }
        local_278[0] = (undefined4 *)FUN_016d2bc8();
        local_278[0] = (undefined4 *)*local_278[0];
        local_27c = local_27c & 0xffffff00;
        goto LAB_015f517c;
      }
    }
    else {
      do {
        uVar7 = *(uint *)((int)&local_210 + uVar3);
        uVar8 = *(uint *)((int)local_278 + uVar3 + 0x6c);
        if (((0x1010100 - uVar7 | uVar7) & 0x80808080 & (0x1010100 - uVar8 | uVar8)) != 0x80808080)
        break;
        uVar3 = uVar3 + 8;
      } while (uVar3 <= param_3 - 7);
      if (param_3 + 1 != uVar3) {
        iVar4 = 0;
        do {
          if (*(char *)((int)&local_210 + iVar4 + uVar3) == '\0') {
            uVar3 = iVar4 + uVar3;
            goto LAB_015f50f4;
          }
          iVar4 = iVar4 + 1;
        } while ((param_3 + 1) - uVar3 != iVar4);
      }
    }
LAB_015f5154:
    local_278[0] = &DAT_018aae48;
    local_27c = 2;
  }
  else {
    FUN_015e5770(&local_280,param_2,param_3,FUN_015e56f0);
    if (local_280 == 0) goto LAB_015f5144;
  }
LAB_015f517c:
  puVar1 = local_278[0];
  uVar3 = local_27c;
  uVar8 = local_27c & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case 0:
    cVar2 = FUN_015e6e98(local_278[0]);
    break;
  case 1:
    if ((local_27c >> 8 & 0xff) == 0) goto LAB_015f51e4;
    goto LAB_015f51b0;
  default:
    cVar2 = *(char *)(local_278[0] + 2);
  }
  if (cVar2 == '\0') {
LAB_015f51e4:
    *(undefined2 *)param_1 = 4;
    if (uVar8 == 3) {
      uVar6 = *puVar1;
      puVar9 = (undefined4 *)puVar1[1];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar6);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      thunk_FUN_016d3fb4(puVar1);
      return;
    }
  }
  else {
LAB_015f51b0:
    *param_1 = uVar3;
    param_1[1] = (uint)puVar1;
  }
  return;
}

