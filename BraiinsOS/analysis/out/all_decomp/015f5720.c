// FUN_015f5720 @ 015f5720 size=600 calls_out=4 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f5854) */
/* WARNING: Removing unreachable block (ram,0x015f585c) */
/* WARNING: Removing unreachable block (ram,0x015f58b8) */
/* WARNING: Removing unreachable block (ram,0x015f5868) */
/* WARNING: Removing unreachable block (ram,0x015f5874) */

void FUN_015f5720(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  uVar6 = param_2[1];
  local_1b0 = param_3;
  local_1ac = param_4;
  if (2 < uVar6 >> 7) {
    FUN_015ec0ec(param_1,*param_2,uVar6,&local_1b0,FUN_015f56e4);
    return;
  }
  FUN_016dd1aa(&local_1a8,*param_2,uVar6);
  uVar1 = 0;
  *(undefined1 *)((int)&local_1a8 + uVar6) = 0;
  if (uVar6 < 7) {
    if ((char)local_1a8 == '\0') {
      uVar1 = 0;
    }
    else {
      if (uVar6 == 0) goto LAB_015f5918;
      if (local_1a8._1_1_ == '\0') {
        uVar1 = 1;
      }
      else {
        if (uVar6 == 1) goto LAB_015f5918;
        if (local_1a8._2_1_ == '\0') {
          uVar1 = 2;
        }
        else {
          if (uVar6 == 2) goto LAB_015f5918;
          if (local_1a8._3_1_ == '\0') {
            uVar1 = 3;
          }
          else {
            if (uVar6 == 3) goto LAB_015f5918;
            if (local_1a4 == '\0') {
              uVar1 = 4;
            }
            else {
              if (uVar6 == 4) goto LAB_015f5918;
              if (cStack_1a3 == '\0') {
                uVar1 = 5;
              }
              else if ((uVar6 == 5) || (uVar1 = 6, cStack_1a2 != '\0')) goto LAB_015f5918;
            }
          }
        }
      }
    }
LAB_015f58ec:
    if (uVar1 == uVar6) {
      iVar2 = FUN_016db454(param_3,&local_1a8);
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
    } while (uVar1 <= uVar6 - 7);
    if (uVar6 + 1 != uVar1) {
      iVar2 = 0;
      do {
        if (*(char *)((int)&local_1a8 + iVar2 + uVar1) == '\0') {
          uVar1 = iVar2 + uVar1;
          goto LAB_015f58ec;
        }
        iVar2 = iVar2 + 1;
      } while ((uVar6 + 1) - uVar1 != iVar2);
    }
  }
LAB_015f5918:
  *param_1 = 2;
  param_1[1] = &DAT_018aae48;
  return;
}

