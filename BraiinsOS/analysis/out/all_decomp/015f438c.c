// FUN_015f438c @ 015f438c size=576 calls_out=4 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f44b0) */
/* WARNING: Removing unreachable block (ram,0x015f44b8) */
/* WARNING: Removing unreachable block (ram,0x015f4514) */
/* WARNING: Removing unreachable block (ram,0x015f44c4) */
/* WARNING: Removing unreachable block (ram,0x015f44d0) */

void FUN_015f438c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  if (2 < param_3 >> 7) {
    FUN_015ec0ec(param_1,param_2,param_3,1,FUN_015f45d8);
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
      if (param_3 == 0) goto LAB_015f4570;
      if (local_1a8._1_1_ == '\0') {
        uVar1 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_015f4570;
        if (local_1a8._2_1_ == '\0') {
          uVar1 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_015f4570;
          if (local_1a8._3_1_ == '\0') {
            uVar1 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_015f4570;
            if (local_1a4 == '\0') {
              uVar1 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_015f4570;
              if (cStack_1a3 == '\0') {
                uVar1 = 5;
              }
              else if ((param_3 == 5) || (uVar1 = 6, cStack_1a2 != '\0')) goto LAB_015f4570;
            }
          }
        }
      }
    }
LAB_015f4548:
    if (uVar1 == param_3) {
      iVar2 = FUN_016e0340(&local_1a8);
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)FUN_016d2bc8();
        uVar4 = *puVar3;
        *param_1 = 0;
        param_1[1] = uVar4;
        return;
      }
      *(undefined1 *)param_1 = 4;
      return;
    }
  }
  else {
    do {
      uVar5 = *(uint *)((int)&local_1a8 + uVar1);
      if (((0x1010100 - uVar5 | uVar5) & 0x80808080 &
          (0x1010100 - *(uint *)(&local_1a4 + uVar1) | *(uint *)(&local_1a4 + uVar1))) != 0x80808080
         ) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 <= param_3 - 7);
    if (param_3 + 1 != uVar1) {
      iVar2 = 0;
      do {
        if (*(char *)((int)&local_1a8 + iVar2 + uVar1) == '\0') {
          uVar1 = iVar2 + uVar1;
          goto LAB_015f4548;
        }
        iVar2 = iVar2 + 1;
      } while ((param_3 + 1) - uVar1 != iVar2);
    }
  }
LAB_015f4570:
  *param_1 = 2;
  param_1[1] = &DAT_018aae48;
  return;
}

