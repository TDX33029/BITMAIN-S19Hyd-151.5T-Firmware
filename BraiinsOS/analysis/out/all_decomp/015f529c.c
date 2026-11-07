// FUN_015f529c @ 015f529c size=1080 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f53d8) */
/* WARNING: Removing unreachable block (ram,0x015f53e0) */
/* WARNING: Removing unreachable block (ram,0x015f5438) */
/* WARNING: Removing unreachable block (ram,0x015f53ec) */
/* WARNING: Removing unreachable block (ram,0x015f53f8) */
/* WARNING: Removing unreachable block (ram,0x015f5594) */
/* WARNING: Removing unreachable block (ram,0x015f559c) */
/* WARNING: Removing unreachable block (ram,0x015f5600) */
/* WARNING: Removing unreachable block (ram,0x015f55a8) */
/* WARNING: Removing unreachable block (ram,0x015f55b4) */

void FUN_015f529c(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  uint uVar8;
  undefined4 *local_338;
  uint local_334;
  undefined4 local_330;
  char local_32c;
  char cStack_32b;
  char cStack_32a;
  undefined4 *local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  local_334 = param_5;
  local_338 = param_4;
  if (2 < param_3 >> 7) {
    ppuVar7 = &local_338;
    pcVar4 = FUN_015f5720;
    param_5 = param_3;
LAB_015f56c0:
    FUN_015ec0ec(param_1,param_2,param_5,ppuVar7,pcVar4);
    return;
  }
  FUN_016dd1aa(&local_330,param_2,param_3);
  uVar8 = param_3 + 1;
  uVar5 = 0;
  *(undefined1 *)((int)&local_330 + param_3) = 0;
  if (param_3 < 7) {
    if ((char)local_330 != '\0') {
      if (param_3 == 0) goto LAB_015f5674;
      if (local_330._1_1_ == '\0') {
        uVar5 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_015f5674;
        if (local_330._2_1_ == '\0') {
          uVar5 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_015f5674;
          if (local_330._3_1_ == '\0') {
            uVar5 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_015f5674;
            if (local_32c == '\0') {
              uVar5 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_015f5674;
              if (cStack_32b == '\0') {
                uVar5 = 5;
              }
              else if ((param_3 == 5) || (uVar5 = 6, cStack_32a != '\0')) goto LAB_015f5674;
            }
          }
        }
      }
    }
LAB_015f546c:
    if (uVar5 == param_3) {
      local_1b0 = &local_330;
      local_1ac = uVar8;
      if (2 < param_5 >> 7) {
        ppuVar7 = &local_1b0;
        pcVar4 = FUN_015f56e4;
        param_2 = param_4;
        goto LAB_015f56c0;
      }
      FUN_016dd1aa(&local_1a8,param_4,param_5);
      uVar5 = 0;
      *(undefined1 *)((int)&local_1a8 + param_5) = 0;
      if (param_5 < 7) {
        if ((char)local_1a8 == '\0') {
          uVar5 = 0;
        }
        else {
          if (param_5 == 0) goto LAB_015f5674;
          if (local_1a8._1_1_ == '\0') {
            uVar5 = 1;
          }
          else {
            if (param_5 == 1) goto LAB_015f5674;
            if (local_1a8._2_1_ == '\0') {
              uVar5 = 2;
            }
            else {
              if (param_5 == 2) goto LAB_015f5674;
              if (local_1a8._3_1_ == '\0') {
                uVar5 = 3;
              }
              else {
                if (param_5 == 3) goto LAB_015f5674;
                if (local_1a4 == '\0') {
                  uVar5 = 4;
                }
                else {
                  if (param_5 == 4) goto LAB_015f5674;
                  if (cStack_1a3 == '\0') {
                    uVar5 = 5;
                  }
                  else if ((param_5 == 5) || (uVar5 = 6, cStack_1a2 != '\0')) goto LAB_015f5674;
                }
              }
            }
          }
        }
LAB_015f5648:
        if (uVar5 == param_5) {
          iVar2 = FUN_016db454(&local_330,&local_1a8);
          if (iVar2 == -1) {
            puVar3 = (undefined4 *)FUN_016d2bc8();
            uVar6 = *puVar3;
            *param_1 = 0;
            param_1[1] = uVar6;
            return;
          }
          *(undefined1 *)param_1 = 4;
          return;
        }
      }
      else {
        do {
          uVar8 = *(uint *)((int)&local_1a8 + uVar5);
          if (((0x1010100 - uVar8 | uVar8) & 0x80808080 &
              (0x1010100 - *(uint *)(&local_1a4 + uVar5) | *(uint *)(&local_1a4 + uVar5))) !=
              0x80808080) break;
          uVar5 = uVar5 + 8;
        } while (uVar5 <= param_5 - 7);
        if (param_5 + 1 != uVar5) {
          iVar2 = 0;
          do {
            if (*(char *)((int)&local_1a8 + iVar2 + uVar5) == '\0') {
              uVar5 = iVar2 + uVar5;
              goto LAB_015f5648;
            }
            iVar2 = iVar2 + 1;
          } while ((param_5 + 1) - uVar5 != iVar2);
        }
      }
    }
  }
  else {
    do {
      uVar1 = *(uint *)((int)&local_330 + uVar5);
      if (((0x1010100 - uVar1 | uVar1) & 0x80808080 &
          (0x1010100 - *(uint *)(&local_32c + uVar5) | *(uint *)(&local_32c + uVar5))) != 0x80808080
         ) break;
      uVar5 = uVar5 + 8;
    } while (uVar5 <= param_3 - 7);
    if (uVar8 != uVar5) {
      iVar2 = 0;
      do {
        if (*(char *)((int)&local_330 + iVar2 + uVar5) == '\0') {
          uVar5 = iVar2 + uVar5;
          goto LAB_015f546c;
        }
        iVar2 = iVar2 + 1;
      } while (uVar8 - uVar5 != iVar2);
    }
  }
LAB_015f5674:
  *param_1 = 2;
  param_1[1] = &DAT_018aae48;
  return;
}

