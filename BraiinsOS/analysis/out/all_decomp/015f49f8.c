// FUN_015f49f8 @ 015f49f8 size=608 calls_out=4 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f4b2c) */
/* WARNING: Removing unreachable block (ram,0x015f4b34) */
/* WARNING: Removing unreachable block (ram,0x015f4b90) */
/* WARNING: Removing unreachable block (ram,0x015f4b40) */
/* WARNING: Removing unreachable block (ram,0x015f4b4c) */

void FUN_015f49f8(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_1b0;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  local_1b0 = 0x1b0;
  local_1ac = &local_1b0;
  if (2 < param_3 >> 7) {
    FUN_015ec0ec(param_1,param_2,param_3,&local_1ac,FUN_015f4c64);
    return;
  }
  FUN_016dd1aa(&local_1a8,param_2,param_3);
  uVar1 = 0;
  *(undefined1 *)((int)&local_1a8 + param_3) = 0;
  if (param_3 < 7) {
    if ((char)local_1a8 == '\0') {
      uVar1 = 0;
    }
    else {
      if (param_3 == 0) goto LAB_015f4c04;
      if (local_1a8._1_1_ == '\0') {
        uVar1 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_015f4c04;
        if (local_1a8._2_1_ == '\0') {
          uVar1 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_015f4c04;
          if (local_1a8._3_1_ == '\0') {
            uVar1 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_015f4c04;
            if (local_1a4 == '\0') {
              uVar1 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_015f4c04;
              if (cStack_1a3 == '\0') {
                uVar1 = 5;
              }
              else if ((param_3 == 5) || (uVar1 = 6, cStack_1a2 != '\0')) goto LAB_015f4c04;
            }
          }
        }
      }
    }
LAB_015f4bc4:
    if (uVar1 == param_3) {
      do {
        iVar2 = FUN_016da78a(&local_1a8,0x1b0);
        if (iVar2 != -1) {
          *(undefined1 *)param_1 = 4;
          return;
        }
        piVar3 = (int *)FUN_016d2bc8();
        iVar2 = *piVar3;
      } while (iVar2 == 4);
      *param_1 = 0;
      param_1[1] = iVar2;
      return;
    }
  }
  else {
    do {
      uVar4 = *(uint *)((int)&local_1a8 + uVar1);
      if (((0x1010100 - uVar4 | uVar4) & 0x80808080 &
          (0x1010100 - *(uint *)(&local_1a4 + uVar1) | *(uint *)(&local_1a4 + uVar1))) != 0x80808080
         ) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 <= param_3 - 7);
    if (param_3 + 1 != uVar1) {
      iVar2 = 0;
      do {
        if (*(char *)((int)&local_1a8 + iVar2 + uVar1) == '\0') {
          uVar1 = iVar2 + uVar1;
          goto LAB_015f4bc4;
        }
        iVar2 = iVar2 + 1;
      } while ((param_3 + 1) - uVar1 != iVar2);
    }
  }
LAB_015f4c04:
  *param_1 = 2;
  param_1[1] = &DAT_018aae48;
  return;
}

