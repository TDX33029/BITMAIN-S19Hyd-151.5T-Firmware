// FUN_015e9334 @ 015e9334 size=660 calls_out=4 calls_in=18
// strings: 

/* WARNING: Removing unreachable block (ram,0x015e9458) */
/* WARNING: Removing unreachable block (ram,0x015e9460) */
/* WARNING: Removing unreachable block (ram,0x015e94bc) */
/* WARNING: Removing unreachable block (ram,0x015e946c) */
/* WARNING: Removing unreachable block (ram,0x015e9478) */

void FUN_015e9334(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_1b4;
  int local_1b0;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  if (param_3 >> 7 < 3) {
    FUN_016dd1aa(&local_1a8,param_2,param_3);
    uVar2 = 0;
    *(undefined1 *)((int)&local_1a8 + param_3) = 0;
    if (param_3 < 7) {
      if ((char)local_1a8 == '\0') {
        uVar2 = 0;
      }
      else {
        if (param_3 == 0) goto LAB_015e9514;
        if (local_1a8._1_1_ == '\0') {
          uVar2 = 1;
        }
        else {
          if (param_3 == 1) goto LAB_015e9514;
          if (local_1a8._2_1_ == '\0') {
            uVar2 = 2;
          }
          else {
            if (param_3 == 2) goto LAB_015e9514;
            if (local_1a8._3_1_ == '\0') {
              uVar2 = 3;
            }
            else {
              if (param_3 == 3) goto LAB_015e9514;
              if (local_1a4 == '\0') {
                uVar2 = 4;
              }
              else {
                if (param_3 == 4) goto LAB_015e9514;
                if (cStack_1a3 == '\0') {
                  uVar2 = 5;
                }
                else if ((param_3 == 5) || (uVar2 = 6, cStack_1a2 != '\0')) goto LAB_015e9514;
              }
            }
          }
        }
      }
LAB_015e94f0:
      if (uVar2 == param_3) {
        FUN_015e95f8(&local_1b4,&local_1a8);
        goto joined_r0x015e95ac;
      }
    }
    else {
      do {
        uVar6 = *(uint *)((int)&local_1a8 + uVar2);
        if (((0x1010100 - uVar6 | uVar6) & 0x80808080 &
            (0x1010100 - *(uint *)(&local_1a4 + uVar2) | *(uint *)(&local_1a4 + uVar2))) !=
            0x80808080) break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 7);
      if (param_3 + 1 != uVar2) {
        iVar4 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar4 + uVar2) == '\0') {
            uVar2 = iVar4 + uVar2;
            goto LAB_015e94f0;
          }
          iVar4 = iVar4 + 1;
        } while ((param_3 + 1) - uVar2 != iVar4);
      }
    }
LAB_015e9514:
    local_1b0 = 2;
    local_1ac = &DAT_018aae48;
    local_1b4 = -0x7fffffff;
  }
  else {
    FUN_015e974c(&local_1b4,param_2,param_3);
joined_r0x015e95ac:
    if (local_1b4 != -0x7fffffff) {
      *param_1 = local_1b4;
      param_1[1] = local_1b0;
      param_1[2] = (int)local_1ac;
      return;
    }
  }
  puVar1 = local_1ac;
  if ((char)local_1b0 == '\x03') {
    uVar5 = *local_1ac;
    puVar7 = (undefined4 *)local_1ac[1];
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    thunk_FUN_016d3fb4(puVar1);
  }
  *param_1 = -0x80000000;
  return;
}

