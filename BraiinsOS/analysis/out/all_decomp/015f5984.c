// FUN_015f5984 @ 015f5984 size=628 calls_out=5 calls_in=11
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f5aa8) */
/* WARNING: Removing unreachable block (ram,0x015f5ab0) */
/* WARNING: Removing unreachable block (ram,0x015f5b0c) */
/* WARNING: Removing unreachable block (ram,0x015f5abc) */
/* WARNING: Removing unreachable block (ram,0x015f5ac8) */

void FUN_015f5984(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_210;
  char local_20c;
  char cStack_20b;
  char cStack_20a;
  undefined1 auStack_90 [112];
  
  if (2 < param_3 >> 7) {
    FUN_015e5770(param_1,param_2,param_3,FUN_015e56f0);
    return;
  }
  FUN_016dd1aa(&local_210,param_2,param_3);
  uVar1 = 0;
  *(undefined1 *)((int)&local_210 + param_3) = 0;
  if (param_3 < 7) {
    if ((char)local_210 == '\0') {
      uVar1 = 0;
    }
    else {
      if (param_3 == 0) goto LAB_015f5b90;
      if (local_210._1_1_ == '\0') {
        uVar1 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_015f5b90;
        if (local_210._2_1_ == '\0') {
          uVar1 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_015f5b90;
          if (local_210._3_1_ == '\0') {
            uVar1 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_015f5b90;
            if (local_20c == '\0') {
              uVar1 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_015f5b90;
              if (cStack_20b == '\0') {
                uVar1 = 5;
              }
              else if ((param_3 == 5) || (uVar1 = 6, cStack_20a != '\0')) goto LAB_015f5b90;
            }
          }
        }
      }
    }
LAB_015f5b40:
    if (uVar1 == param_3) {
      FUN_016dd606(auStack_90,0,0x68);
      iVar2 = FUN_016e048a(&local_210,auStack_90);
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)FUN_016d2bc8();
        uVar4 = *puVar3;
        *(undefined1 *)(param_1 + 1) = 0;
        param_1[2] = uVar4;
        *param_1 = 1;
        return;
      }
      FUN_016dd1aa(param_1 + 2,auStack_90,0x68);
      *param_1 = 0;
      return;
    }
  }
  else {
    do {
      if (((0x1010100 - *(uint *)((int)&local_210 + uVar1) | *(uint *)((int)&local_210 + uVar1)) &
           0x80808080 & (0x1010100 - *(uint *)(&local_20c + uVar1) | *(uint *)(&local_20c + uVar1)))
          != 0x80808080) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 <= param_3 - 7);
    if (param_3 + 1 != uVar1) {
      iVar2 = 0;
      do {
        if (*(char *)((int)&local_210 + iVar2 + uVar1) == '\0') {
          uVar1 = iVar2 + uVar1;
          goto LAB_015f5b40;
        }
        iVar2 = iVar2 + 1;
      } while ((param_3 + 1) - uVar1 != iVar2);
    }
  }
LAB_015f5b90:
  param_1[1] = 2;
  param_1[2] = &DAT_018aae48;
  *param_1 = 1;
  return;
}

