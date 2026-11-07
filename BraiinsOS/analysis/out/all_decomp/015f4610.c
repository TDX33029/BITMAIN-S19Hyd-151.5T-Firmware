// FUN_015f4610 @ 015f4610 size=536 calls_out=3 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f4734) */
/* WARNING: Removing unreachable block (ram,0x015f473c) */
/* WARNING: Removing unreachable block (ram,0x015f4798) */
/* WARNING: Removing unreachable block (ram,0x015f4748) */
/* WARNING: Removing unreachable block (ram,0x015f4754) */

void FUN_015f4610(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  if (2 < param_3 >> 7) {
    FUN_015c709c(param_1,param_2,param_3);
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
      if (param_3 == 0) goto LAB_015f47e8;
      if (local_1a8._1_1_ == '\0') {
        uVar1 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_015f47e8;
        if (local_1a8._2_1_ == '\0') {
          uVar1 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_015f47e8;
          if (local_1a8._3_1_ == '\0') {
            uVar1 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_015f47e8;
            if (local_1a4 == '\0') {
              uVar1 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_015f47e8;
              if (cStack_1a3 == '\0') {
                uVar1 = 5;
              }
              else if ((param_3 == 5) || (uVar1 = 6, cStack_1a2 != '\0')) goto LAB_015f47e8;
            }
          }
        }
      }
    }
LAB_015f47cc:
    if (uVar1 == param_3) {
      FUN_015e59c4(param_1,&local_1a8);
      return;
    }
  }
  else {
    do {
      if (((0x1010100 - *(uint *)((int)&local_1a8 + uVar1) | *(uint *)((int)&local_1a8 + uVar1)) &
           0x80808080 & (0x1010100 - *(uint *)(&local_1a4 + uVar1) | *(uint *)(&local_1a4 + uVar1)))
          != 0x80808080) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 <= param_3 - 7);
    if (param_3 + 1 != uVar1) {
      iVar2 = 0;
      do {
        if (*(char *)((int)&local_1a8 + iVar2 + uVar1) == '\0') {
          uVar1 = iVar2 + uVar1;
          goto LAB_015f47cc;
        }
        iVar2 = iVar2 + 1;
      } while ((param_3 + 1) - uVar1 != iVar2);
    }
  }
LAB_015f47e8:
  *param_1 = 0x80000000;
  param_1[1] = 2;
  param_1[2] = &DAT_018aae48;
  return;
}

