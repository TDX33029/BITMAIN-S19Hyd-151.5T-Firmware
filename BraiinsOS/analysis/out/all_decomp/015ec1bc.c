// FUN_015ec1bc @ 015ec1bc size=608 calls_out=3 calls_in=33
// strings: 

/* WARNING: Removing unreachable block (ram,0x015ec2ec) */
/* WARNING: Removing unreachable block (ram,0x015ec2f4) */
/* WARNING: Removing unreachable block (ram,0x015ec350) */
/* WARNING: Removing unreachable block (ram,0x015ec300) */
/* WARNING: Removing unreachable block (ram,0x015ec30c) */

void FUN_015ec1bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_1b8;
  undefined4 *local_1b4;
  undefined4 local_1ac;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  
  local_1ac = param_2;
  if (param_4 >> 7 < 3) {
    FUN_016dd1aa(&local_1a8,param_3,param_4);
    uVar1 = 0;
    *(undefined1 *)((int)&local_1a8 + param_4) = 0;
    if (param_4 < 7) {
      if ((char)local_1a8 == '\0') {
        uVar1 = 0;
      }
      else {
        if (param_4 == 0) goto LAB_015ec3ac;
        if (local_1a8._1_1_ == '\0') {
          uVar1 = 1;
        }
        else {
          if (param_4 == 1) goto LAB_015ec3ac;
          if (local_1a8._2_1_ == '\0') {
            uVar1 = 2;
          }
          else {
            if (param_4 == 2) goto LAB_015ec3ac;
            if (local_1a8._3_1_ == '\0') {
              uVar1 = 3;
            }
            else {
              if (param_4 == 3) goto LAB_015ec3ac;
              if (local_1a4 == '\0') {
                uVar1 = 4;
              }
              else {
                if (param_4 == 4) goto LAB_015ec3ac;
                if (cStack_1a3 == '\0') {
                  uVar1 = 5;
                }
                else if ((param_4 == 5) || (uVar1 = 6, cStack_1a2 != '\0')) goto LAB_015ec3ac;
              }
            }
          }
        }
      }
LAB_015ec384:
      if (uVar1 == param_4) {
        FUN_015c49ac(&local_1b8,&local_1a8,param_2);
        if ((char)local_1b8 != '\x04') goto LAB_015ec40c;
        goto LAB_015ec3d4;
      }
    }
    else {
      do {
        uVar3 = *(uint *)((int)&local_1a8 + uVar1);
        if (((0x1010100 - uVar3 | uVar3) & 0x80808080 &
            (0x1010100 - *(uint *)(&local_1a4 + uVar1) | *(uint *)(&local_1a4 + uVar1))) !=
            0x80808080) break;
        uVar1 = uVar1 + 8;
      } while (uVar1 <= param_4 - 7);
      if (param_4 + 1 != uVar1) {
        iVar2 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar2 + uVar1) == '\0') {
            uVar1 = iVar2 + uVar1;
            goto LAB_015ec384;
          }
          iVar2 = iVar2 + 1;
        } while ((param_4 + 1) - uVar1 != iVar2);
      }
    }
LAB_015ec3ac:
    local_1b8 = 2;
    local_1b4 = &DAT_018aae48;
    bVar4 = true;
  }
  else {
    FUN_015e69ec(&local_1b8,param_3,param_4,&local_1ac);
    bVar4 = (char)local_1b8 != '\x04';
  }
  if (bVar4) {
LAB_015ec40c:
    *param_1 = local_1b8;
    param_1[1] = local_1b4;
    return;
  }
LAB_015ec3d4:
  param_1[1] = local_1b4;
  *(undefined1 *)param_1 = 4;
  return;
}

