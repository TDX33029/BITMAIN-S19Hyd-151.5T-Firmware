// FUN_015ae878 @ 015ae878 size=1516 calls_out=2 calls_in=1
// strings: 

void FUN_015ae878(undefined1 *param_1,int *param_2,uint param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_54;
  undefined4 local_50;
  undefined1 auStack_4c [6];
  undefined2 local_46 [17];
  
  if (param_4 == '\0') {
    if (param_3 == 0) {
      uVar2 = 0xff;
LAB_015aeda8:
      iVar4 = param_2[2];
      local_54 = uVar2 + 4 & 0xff;
      uVar2 = local_54;
      do {
        if (*param_2 == iVar4) {
          FUN_015afa68(param_2,iVar4,1,1,1);
          iVar4 = param_2[2];
        }
        uVar2 = uVar2 - 1;
        *(undefined1 *)(param_2[1] + iVar4) = 0x20;
        iVar4 = iVar4 + 1;
        param_2[2] = iVar4;
      } while (uVar2 != 0);
    }
    else {
      local_54 = 0;
      uVar2 = param_3;
      if (99999 < param_3) {
        uVar2 = param_3 / 100000;
      }
      uVar5 = uVar2 + 0x5fff6 & uVar2 + 0x7ff9c ^ uVar2 + 0xdfc18 & uVar2 + 0x7d8f0;
      uVar2 = uVar5 >> 0x11;
      if (99999 < param_3) {
        uVar2 = (uVar5 >> 0x11) + 5;
      }
      if (uVar2 < 3) {
        uVar2 = uVar2 ^ 0xff;
        goto LAB_015aeda8;
      }
    }
    if (param_3 < 10000) goto LAB_015aeaec;
    iVar4 = 0;
    uVar2 = param_3;
    do {
      iVar3 = iVar4 + -4;
      param_3 = uVar2 / 10000;
      uVar5 = (uint)((short)(uVar2 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_46 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      *(undefined2 *)((int)local_46 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 % 10000 + uVar5 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar2;
      iVar4 = iVar3;
      uVar2 = param_3;
    } while (bVar1);
  }
  else {
    if (param_4 != '\x01') {
      iVar4 = 10;
      if (9999 < param_3) {
        iVar3 = 0;
        uVar2 = param_3;
        do {
          iVar4 = iVar3;
          param_3 = uVar2 / 10000;
          uVar5 = (uint)((short)(uVar2 % 10000 >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_46 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
          *(undefined2 *)((int)local_46 + iVar4 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar2 % 10000 + uVar5 * -100 & 0xffff) * 2);
          bVar1 = 99999999 < uVar2;
          iVar3 = iVar4 + -4;
          uVar2 = param_3;
        } while (bVar1);
        iVar4 = iVar4 + 6;
        local_50 = param_1;
      }
      if (99 < param_3) {
        uVar2 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(auStack_4c + iVar4 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar2 * -100 & 0xffff) * 2);
        iVar4 = iVar4 + -2;
        param_3 = uVar2;
      }
      if (param_3 < 10) {
        iVar3 = iVar4 + -1;
        auStack_4c[iVar4 + -1] = (byte)param_3 | 0x30;
      }
      else {
        iVar3 = iVar4 + -2;
        *(undefined2 *)(auStack_4c + iVar4 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_3 * 2);
      }
      iVar4 = param_2[2];
      uVar2 = 10 - iVar3;
      if ((uint)(*param_2 - iVar4) < uVar2) {
        FUN_015afa68(param_2,iVar4,uVar2,1,1);
        iVar4 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar4,auStack_4c + iVar3,uVar2);
      param_2[2] = iVar4 + uVar2;
      *(uint *)(param_1 + 4) = uVar2;
      *param_1 = 4;
      return;
    }
    if (param_3 == 0) {
      uVar2 = 0xff;
LAB_015aed40:
      iVar4 = param_2[2];
      local_54 = uVar2 + 4 & 0xff;
      uVar2 = local_54;
      do {
        if (*param_2 == iVar4) {
          FUN_015afa68(param_2,iVar4,1,1,1);
          iVar4 = param_2[2];
        }
        uVar2 = uVar2 - 1;
        *(undefined1 *)(param_2[1] + iVar4) = 0x30;
        iVar4 = iVar4 + 1;
        param_2[2] = iVar4;
      } while (uVar2 != 0);
    }
    else {
      local_54 = 0;
      uVar2 = param_3;
      if (99999 < param_3) {
        uVar2 = param_3 / 100000;
      }
      uVar5 = uVar2 + 0x5fff6 & uVar2 + 0x7ff9c ^ uVar2 + 0xdfc18 & uVar2 + 0x7d8f0;
      uVar2 = uVar5 >> 0x11;
      if (99999 < param_3) {
        uVar2 = (uVar5 >> 0x11) + 5;
      }
      if (uVar2 < 3) {
        uVar2 = uVar2 ^ 0xff;
        goto LAB_015aed40;
      }
    }
    if (param_3 < 10000) {
LAB_015aeaec:
      iVar3 = 10;
      goto joined_r0x015aeaf4;
    }
    iVar4 = 0;
    uVar2 = param_3;
    do {
      iVar3 = iVar4 + -4;
      param_3 = uVar2 / 10000;
      uVar5 = (uint)((short)(uVar2 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_46 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      *(undefined2 *)((int)local_46 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 % 10000 + uVar5 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar2;
      iVar4 = iVar3;
      uVar2 = param_3;
    } while (bVar1);
  }
  iVar3 = iVar3 + 10;
  local_50 = param_1;
joined_r0x015aeaf4:
  if (99 < param_3) {
    uVar2 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar2 * -100 & 0xffff) * 2);
    iVar3 = iVar3 + -2;
    param_3 = uVar2;
  }
  if (param_3 < 10) {
    iVar4 = iVar3 + -1;
    auStack_4c[iVar3 + -1] = (byte)param_3 | 0x30;
  }
  else {
    iVar4 = iVar3 + -2;
    *(undefined2 *)(auStack_4c + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_3 * 2);
  }
  iVar3 = param_2[2];
  uVar2 = 10 - iVar4;
  if ((uint)(*param_2 - iVar3) < uVar2) {
    FUN_015afa68(param_2,iVar3,uVar2,1,1);
    iVar3 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar3,auStack_4c + iVar4,uVar2);
  param_2[2] = iVar3 + uVar2;
  *param_1 = 4;
  *(uint *)(param_1 + 4) = uVar2 + local_54;
  return;
}

