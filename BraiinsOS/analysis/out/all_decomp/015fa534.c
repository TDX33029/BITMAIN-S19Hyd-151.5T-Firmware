// FUN_015fa534 @ 015fa534 size=1368 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015fa720) */
/* WARNING: Removing unreachable block (ram,0x015fa728) */
/* WARNING: Removing unreachable block (ram,0x015fa784) */
/* WARNING: Removing unreachable block (ram,0x015fa734) */
/* WARNING: Removing unreachable block (ram,0x015fa740) */

longlong FUN_015fa534(int *param_1,int param_2,char *param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 **local_1c8;
  undefined4 *local_1c4;
  undefined4 *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined4 **local_1b0;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  
  iVar5 = param_1[2];
  iVar2 = *param_1;
  iVar8 = 0;
  if (iVar5 == 0) {
    if (*param_3 == '/') {
      param_1[2] = 0;
    }
  }
  else {
    if (*param_3 != '/') {
      iVar7 = param_1[1];
      if (*(char *)(iVar7 + iVar5 + -1) == '/') {
        iVar8 = iVar5;
        goto LAB_015fa5b0;
      }
      if (iVar2 == iVar5) {
        FUN_015bf41c(param_1,iVar5,1,1,1);
        iVar5 = param_1[2];
        iVar2 = *param_1;
        iVar7 = param_1[1];
      }
      iVar8 = iVar5 + 1;
      *(undefined1 *)(iVar7 + iVar5) = 0x2f;
    }
    param_1[2] = iVar8;
  }
LAB_015fa5b0:
  if ((uint)(iVar2 - iVar8) < param_4) {
    FUN_015bf41c(param_1,iVar8,param_4,1,1);
    iVar8 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar8,param_3,param_4);
  param_1[2] = iVar8 + param_4;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar15 = param_1[2];
  local_1bc = 0x1b6;
  local_1b8 = 1;
  local_1c8 = &local_1c0;
  local_1c0 = (undefined4 *)0x0;
  local_1b4 = 0;
  if (uVar15 >> 7 < 3) {
    FUN_016dd1aa(&local_1a8,param_1[1],uVar15);
    *(undefined1 *)((int)&local_1a8 + uVar15) = 0;
    if (uVar15 < 7) {
      if ((char)local_1a8 == '\0') {
        uVar3 = 0;
LAB_015fa7b8:
        if (uVar3 == uVar15) {
          FUN_015c49ac(&local_1b0,&local_1a8,&local_1c0);
          if ((char)local_1b0 == '\x04') goto LAB_015fa818;
          goto LAB_015fa7dc;
        }
      }
      else if (uVar15 != 0) {
        if (local_1a8._1_1_ == '\0') {
          uVar3 = 1;
          goto LAB_015fa7b8;
        }
        if (uVar15 != 1) {
          if (local_1a8._2_1_ == '\0') {
            uVar3 = 2;
            goto LAB_015fa7b8;
          }
          if (uVar15 != 2) {
            if (local_1a8._3_1_ == '\0') {
              uVar3 = 3;
              goto LAB_015fa7b8;
            }
            if (uVar15 != 3) {
              if ((char)local_1a4 == '\0') {
                uVar3 = 4;
                goto LAB_015fa7b8;
              }
              if (uVar15 != 4) {
                if (local_1a4._1_1_ == '\0') {
                  uVar3 = 5;
                  goto LAB_015fa7b8;
                }
                if (uVar15 != 5) {
                  uVar3 = 6;
                  if (local_1a4._2_1_ == '\0') goto LAB_015fa7b8;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      do {
        uVar9 = *(uint *)((int)&local_1a8 + uVar3);
        if (((0x1010100 - uVar9 | uVar9) & 0x80808080 &
            (0x1010100 - *(uint *)((int)&local_1a4 + uVar3) | *(uint *)((int)&local_1a4 + uVar3)))
            != 0x80808080) break;
        uVar3 = uVar3 + 8;
      } while (uVar3 <= uVar15 - 7);
      if (uVar15 + 1 != uVar3) {
        iVar8 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar8 + uVar3) == '\0') {
            uVar3 = iVar8 + uVar3;
            goto LAB_015fa7b8;
          }
          iVar8 = iVar8 + 1;
        } while ((uVar15 + 1) - uVar3 != iVar8);
      }
    }
    local_1b0 = (undefined4 **)0x2;
    local_1ac = &DAT_018aae48;
LAB_015fa7dc:
    local_1c8 = local_1b0;
  }
  else {
    FUN_015e69ec(&local_1b0,param_1[1],uVar15,&local_1c8);
    if ((char)local_1b0 != '\x04') goto LAB_015fa7dc;
LAB_015fa818:
    local_1c8 = (undefined4 **)CONCAT31(local_1c8._1_3_,4);
  }
  puVar14 = local_1ac;
  local_1c4 = local_1ac;
  FUN_015f7c68(param_1);
  uVar15 = extraout_r3;
  puVar10 = puVar14;
  if ((((uint)local_1c8 & 0xff) != 4) &&
     (puVar10 = (undefined4 *)0xffffffff, ((uint)local_1c8 & 0xff) == 3)) {
    uVar12 = *puVar14;
    puVar13 = (undefined4 *)puVar14[1];
    pcVar6 = (code *)*puVar13;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar12);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    thunk_FUN_016d3fb4(puVar14);
    uVar15 = extraout_r3_00;
  }
  if (puVar10 == (undefined4 *)0xffffffff) {
LAB_015fa930:
    return (ulonglong)uVar15 << 0x20;
  }
  local_1c0 = puVar10;
  FUN_015c4bfc(&local_1a8,&local_1c0,param_2);
  if ((char)local_1a8 != '\x04') {
    if ((char)local_1a8 == '\x03') {
      uVar12 = *local_1a4;
      puVar14 = (undefined4 *)local_1a4[1];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      thunk_FUN_016d3fb4(local_1a4);
    }
    FUN_016dffb2(puVar10);
    uVar15 = extraout_r3_02;
    goto LAB_015fa930;
  }
  FUN_016dffb2(puVar10);
  uVar17 = FUN_015fab18(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  iVar8 = (int)(uVar17 >> 0x20);
  pcVar4 = (char *)uVar17;
  if (iVar8 == 0) {
    return (ulonglong)extraout_r3_01 << 0x20;
  }
  if (iVar8 == 1) {
    cVar11 = *pcVar4;
    uVar12 = 0;
    uVar15 = extraout_r3_01;
    if (cVar11 == '+') goto LAB_015fa930;
    if (cVar11 == '-') goto LAB_015fa9e8;
  }
  else {
    cVar11 = *pcVar4;
  }
  if (cVar11 == '+') {
    uVar17 = CONCAT44(iVar8 + -1,pcVar4 + 1);
  }
  iVar8 = (int)(uVar17 >> 0x20);
  if (uVar17 < 0x900000000) {
    uVar12 = 1;
    uVar15 = 0;
    while (iVar8 != 0) {
      uVar3 = *(byte *)uVar17 - 0x30;
      if (9 < uVar3) {
        return (ulonglong)uVar15 << 0x20;
      }
      iVar8 = (int)(uVar17 >> 0x20) + -1;
      uVar17 = CONCAT44(iVar8,(byte *)uVar17 + 1);
      uVar15 = uVar3 + uVar15 * 10;
    }
  }
  else {
    uVar15 = 0;
    do {
      iVar8 = (int)(uVar17 >> 0x20);
      if (iVar8 == 0) {
        return CONCAT44(uVar15,1);
      }
      uVar1 = (ulonglong)uVar15;
      uVar15 = (uint)(uVar1 * 10);
      if ((int)(uVar1 * 10 >> 0x20) != 0) goto LAB_015fa930;
      uVar3 = *(byte *)uVar17 - 0x30;
      uVar12 = 0;
      bVar16 = CARRY4(uVar3,uVar15);
      uVar15 = uVar3 + uVar15;
      if (9 < uVar3) goto LAB_015fa930;
      uVar17 = CONCAT44(iVar8 + -1,(byte *)uVar17 + 1);
    } while (!bVar16);
  }
LAB_015fa9e8:
  return CONCAT44(uVar15,uVar12);
}

