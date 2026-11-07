// FUN_0162aa38 @ 0162aa38 size=1020 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0162ab5c) */
/* WARNING: Removing unreachable block (ram,0x0162ab64) */
/* WARNING: Removing unreachable block (ram,0x0162abc0) */
/* WARNING: Removing unreachable block (ram,0x0162ab70) */
/* WARNING: Removing unreachable block (ram,0x0162ab7c) */
/* WARNING: Removing unreachable block (ram,0x0162ad0c) */
/* WARNING: Removing unreachable block (ram,0x0162ad14) */
/* WARNING: Removing unreachable block (ram,0x0162ad70) */
/* WARNING: Removing unreachable block (ram,0x0162ad20) */
/* WARNING: Removing unreachable block (ram,0x0162ad2c) */

void FUN_0162aa38(undefined1 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint6 uVar5;
  undefined4 local_228;
  char local_224;
  char cStack_223;
  char cStack_222;
  undefined4 local_128;
  char local_124;
  char cStack_123;
  char cStack_122;
  
  if (0xff < param_3) {
    uVar5 = FUN_01629dac(param_2,param_3,param_4,param_5);
LAB_0162ae24:
    sVar1 = (short)(uVar5 >> 0x20);
    if ((uVar5 & 1) == 0) {
      *param_1 = 4;
      return;
    }
    goto LAB_0162adf8;
  }
  FUN_016dd1aa(&local_228,param_2,param_3);
  uVar2 = 0;
  *(undefined1 *)((int)&local_228 + param_3) = 0;
  if (param_3 < 7) {
    if ((char)local_228 == '\0') {
      uVar2 = 0;
    }
    else {
      if (param_3 == 0) goto LAB_0162adf4;
      if (local_228._1_1_ == '\0') {
        uVar2 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_0162adf4;
        if (local_228._2_1_ == '\0') {
          uVar2 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_0162adf4;
          if (local_228._3_1_ == '\0') {
            uVar2 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_0162adf4;
            if (local_224 == '\0') {
              uVar2 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_0162adf4;
              if (cStack_223 == '\0') {
                uVar2 = 5;
              }
              else if ((param_3 == 5) || (uVar2 = 6, cStack_222 != '\0')) goto LAB_0162adf4;
            }
          }
        }
      }
    }
LAB_0162abf4:
    if (uVar2 == param_3) {
      if (0xff < param_5) {
        uVar5 = FUN_0162a048(param_4,param_5,&local_228);
        goto LAB_0162ae24;
      }
      FUN_016dd1aa(&local_128,param_4,param_5);
      uVar2 = 0;
      *(undefined1 *)((int)&local_128 + param_5) = 0;
      if (param_5 < 7) {
        if ((char)local_128 == '\0') {
          uVar2 = 0;
        }
        else {
          if (param_5 == 0) goto LAB_0162adf4;
          if (local_128._1_1_ == '\0') {
            uVar2 = 1;
          }
          else {
            if (param_5 == 1) goto LAB_0162adf4;
            if (local_128._2_1_ == '\0') {
              uVar2 = 2;
            }
            else {
              if (param_5 == 2) goto LAB_0162adf4;
              if (local_128._3_1_ == '\0') {
                uVar2 = 3;
              }
              else {
                if (param_5 == 3) goto LAB_0162adf4;
                if (local_124 == '\0') {
                  uVar2 = 4;
                }
                else {
                  if (param_5 == 4) goto LAB_0162adf4;
                  if (cStack_123 == '\0') {
                    uVar2 = 5;
                  }
                  else if ((param_5 == 5) || (uVar2 = 6, cStack_122 != '\0')) goto LAB_0162adf4;
                }
              }
            }
          }
        }
LAB_0162adbc:
        if (uVar2 == param_5) {
          sVar1 = -100;
          software_interrupt(0);
          goto LAB_0162adf8;
        }
      }
      else {
        do {
          uVar4 = *(uint *)((int)&local_128 + uVar2);
          if (((0x1010100 - uVar4 | uVar4) & 0x80808080 &
              (0x1010100 - *(uint *)(&local_124 + uVar2) | *(uint *)(&local_124 + uVar2))) !=
              0x80808080) break;
          uVar2 = uVar2 + 8;
        } while (uVar2 <= param_5 - 7);
        if (param_5 + 1 != uVar2) {
          iVar3 = 0;
          do {
            if (*(char *)((int)&local_128 + iVar3 + uVar2) == '\0') {
              uVar2 = iVar3 + uVar2;
              goto LAB_0162adbc;
            }
            iVar3 = iVar3 + 1;
          } while ((param_5 + 1) - uVar2 != iVar3);
        }
      }
    }
  }
  else {
    do {
      uVar4 = *(uint *)((int)&local_228 + uVar2);
      if (((0x1010100 - uVar4 | uVar4) & 0x80808080 &
          (0x1010100 - *(uint *)(&local_224 + uVar2) | *(uint *)(&local_224 + uVar2))) != 0x80808080
         ) break;
      uVar2 = uVar2 + 8;
    } while (uVar2 <= param_3 - 7);
    if (param_3 + 1 != uVar2) {
      iVar3 = 0;
      do {
        if (*(char *)((int)&local_228 + iVar3 + uVar2) == '\0') {
          uVar2 = iVar3 + uVar2;
          goto LAB_0162abf4;
        }
        iVar3 = iVar3 + 1;
      } while ((param_3 + 1) - uVar2 != iVar3);
    }
  }
LAB_0162adf4:
  sVar1 = -0x16;
LAB_0162adf8:
  *(int *)(param_1 + 4) = -(int)sVar1;
  *param_1 = 0;
  return;
}

