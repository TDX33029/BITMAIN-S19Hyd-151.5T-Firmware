// FUN_015c7df0 @ 015c7df0 size=756 calls_out=6 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x015c7f14) */
/* WARNING: Removing unreachable block (ram,0x015c7f1c) */
/* WARNING: Removing unreachable block (ram,0x015c7f78) */
/* WARNING: Removing unreachable block (ram,0x015c7f28) */
/* WARNING: Removing unreachable block (ram,0x015c7f34) */

uint FUN_015c7df0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 *unaff_r4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int local_280;
  uint local_27c;
  undefined4 *local_278 [4];
  uint local_268;
  undefined4 local_210;
  char local_20c;
  char cStack_20b;
  char cStack_20a;
  undefined4 auStack_90 [28];
  
  if (param_2 >> 7 < 3) {
    FUN_016dd1aa(&local_210,param_1,param_2);
    uVar1 = 0;
    *(undefined1 *)((int)&local_210 + param_2) = 0;
    if (param_2 < 7) {
      if ((char)local_210 == '\0') {
        uVar1 = 0;
      }
      else {
        if (param_2 == 0) goto LAB_015c8000;
        if (local_210._1_1_ == '\0') {
          uVar1 = 1;
        }
        else {
          if (param_2 == 1) goto LAB_015c8000;
          if (local_210._2_1_ == '\0') {
            uVar1 = 2;
          }
          else {
            if (param_2 == 2) goto LAB_015c8000;
            if (local_210._3_1_ == '\0') {
              uVar1 = 3;
            }
            else {
              if (param_2 == 3) goto LAB_015c8000;
              if (local_20c == '\0') {
                uVar1 = 4;
              }
              else {
                if (param_2 == 4) goto LAB_015c8000;
                if (cStack_20b == '\0') {
                  uVar1 = 5;
                }
                else if ((param_2 == 5) || (uVar1 = 6, cStack_20a != '\0')) goto LAB_015c8000;
              }
            }
          }
        }
      }
LAB_015c7fac:
      if (uVar1 == param_2) {
        unaff_r4 = auStack_90;
        FUN_016dd606(unaff_r4,0,0x68);
        iVar2 = FUN_016e048a(&local_210,unaff_r4);
        if (iVar2 == -1) {
          puVar3 = (undefined4 *)FUN_016d2bc8();
          puVar3 = (undefined4 *)*puVar3;
          local_27c = local_27c & 0xffffff00;
          uVar1 = local_27c;
          local_278[0] = puVar3;
          goto joined_r0x015c8090;
        }
        FUN_016dd1aa(local_278,auStack_90,0x68);
        goto LAB_015c8074;
      }
    }
    else {
      do {
        uVar5 = *(uint *)((int)&local_210 + uVar1);
        if (((0x1010100 - uVar5 | uVar5) & 0x80808080 &
            (0x1010100 - *(uint *)(&local_20c + uVar1) | *(uint *)(&local_20c + uVar1))) !=
            0x80808080) break;
        uVar1 = uVar1 + 8;
      } while (uVar1 <= param_2 - 7);
      if (param_2 + 1 != uVar1) {
        iVar2 = 0;
        do {
          if (*(char *)((int)&local_210 + iVar2 + uVar1) == '\0') {
            uVar1 = iVar2 + uVar1;
            goto LAB_015c7fac;
          }
          iVar2 = iVar2 + 1;
        } while ((param_2 + 1) - uVar1 != iVar2);
      }
    }
LAB_015c8000:
    puVar3 = &DAT_018aae48;
    local_27c = 2;
    uVar1 = local_27c;
    local_278[0] = puVar3;
  }
  else {
    FUN_015e5770(&local_280,param_1,param_2,FUN_015e56f0);
    puVar3 = local_278[0];
    uVar1 = local_27c;
    if (local_280 != 0) goto joined_r0x015c8090;
LAB_015c8074:
    puVar3 = unaff_r4;
    uVar1 = 4;
    if ((local_268 & 0xf000) == 0x4000) {
      uVar1 = 0x104;
    }
  }
joined_r0x015c8090:
  if ((uVar1 & 0xff) == 3) {
    uVar6 = *puVar3;
    puVar7 = (undefined4 *)puVar3[1];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    thunk_FUN_016d3fb4(puVar3);
  }
  return (uint)((uVar1 & 0xff) == 4) & (uVar1 & 0x100) >> 8;
}

