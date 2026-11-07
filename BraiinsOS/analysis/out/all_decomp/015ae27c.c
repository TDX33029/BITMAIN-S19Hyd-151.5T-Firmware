// FUN_015ae27c @ 015ae27c size=1512 calls_out=2 calls_in=1
// strings: 

void FUN_015ae27c(undefined1 *param_1,int *param_2,uint param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_50;
  undefined1 auStack_4c [6];
  undefined2 local_46 [17];
  
  if (param_4 == '\0') {
    if (param_3 == 0) {
LAB_015ae578:
      iVar4 = param_2[2];
      if (*param_2 == iVar4) {
        FUN_015afa68(param_2,iVar4,1,1,1);
        iVar4 = param_2[2];
      }
      iVar6 = 1;
      *(undefined1 *)(param_2[1] + iVar4) = 0x20;
      param_2[2] = iVar4 + 1;
    }
    else {
      iVar6 = 0;
      uVar5 = param_3;
      if (99999 < param_3) {
        uVar5 = param_3 / 100000;
      }
      uVar2 = uVar5 + 0x5fff6 & uVar5 + 0x7ff9c ^ uVar5 + 0xdfc18 & uVar5 + 0x7d8f0;
      uVar5 = uVar2 >> 0x11;
      if (99999 < param_3) {
        uVar5 = (uVar2 >> 0x11) + 5;
      }
      if (uVar5 == 0) goto LAB_015ae578;
    }
    if (9999 < param_3) {
      iVar4 = 0;
      uVar5 = param_3;
      do {
        iVar3 = iVar4;
        param_3 = uVar5 / 10000;
        uVar2 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_46 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
        *(undefined2 *)((int)local_46 + iVar3 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar5 % 10000 + uVar2 * -100 & 0xffff) * 2);
        bVar1 = 99999999 < uVar5;
        iVar4 = iVar3 + -4;
        uVar5 = param_3;
      } while (bVar1);
      iVar3 = iVar3 + 6;
      local_50 = param_2;
      goto joined_r0x015ae648;
    }
  }
  else {
    if (param_4 != '\x01') {
      iVar6 = 10;
      if (9999 < param_3) {
        iVar4 = 0;
        uVar5 = param_3;
        do {
          iVar6 = iVar4;
          param_3 = uVar5 / 10000;
          uVar2 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_46 + iVar6) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
          *(undefined2 *)((int)local_46 + iVar6 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar5 % 10000 + uVar2 * -100 & 0xffff) * 2);
          bVar1 = 99999999 < uVar5;
          iVar4 = iVar6 + -4;
          uVar5 = param_3;
        } while (bVar1);
        iVar6 = iVar6 + 6;
        local_50 = param_2;
      }
      if (99 < param_3) {
        uVar5 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(auStack_4c + iVar6 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar5 * -100 & 0xffff) * 2);
        iVar6 = iVar6 + -2;
        param_3 = uVar5;
      }
      if (param_3 < 10) {
        iVar4 = iVar6 + -1;
        auStack_4c[iVar6 + -1] = (byte)param_3 | 0x30;
      }
      else {
        iVar4 = iVar6 + -2;
        *(undefined2 *)(auStack_4c + iVar6 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_3 * 2);
      }
      iVar6 = param_2[2];
      uVar5 = 10 - iVar4;
      if ((uint)(*param_2 - iVar6) < uVar5) {
        FUN_015afa68(param_2,iVar6,uVar5,1,1);
        iVar6 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar6,auStack_4c + iVar4,uVar5);
      param_2[2] = iVar6 + uVar5;
      *(uint *)(param_1 + 4) = uVar5;
      *param_1 = 4;
      return;
    }
    if (param_3 == 0) {
LAB_015ae484:
      iVar4 = param_2[2];
      if (*param_2 == iVar4) {
        FUN_015afa68(param_2,iVar4,1,1,1);
        iVar4 = param_2[2];
      }
      iVar6 = 1;
      *(undefined1 *)(param_2[1] + iVar4) = 0x30;
      param_2[2] = iVar4 + 1;
    }
    else {
      iVar6 = 0;
      uVar5 = param_3;
      if (99999 < param_3) {
        uVar5 = param_3 / 100000;
      }
      uVar2 = uVar5 + 0x5fff6 & uVar5 + 0x7ff9c ^ uVar5 + 0xdfc18 & uVar5 + 0x7d8f0;
      uVar5 = uVar2 >> 0x11;
      if (99999 < param_3) {
        uVar5 = (uVar2 >> 0x11) + 5;
      }
      if (uVar5 == 0) goto LAB_015ae484;
    }
    if (9999 < param_3) {
      iVar4 = 0;
      uVar5 = param_3;
      do {
        iVar3 = iVar4;
        param_3 = uVar5 / 10000;
        uVar2 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_46 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
        *(undefined2 *)((int)local_46 + iVar3 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar5 % 10000 + uVar2 * -100 & 0xffff) * 2);
        bVar1 = 99999999 < uVar5;
        iVar4 = iVar3 + -4;
        uVar5 = param_3;
      } while (bVar1);
      iVar3 = iVar3 + 6;
      local_50 = param_2;
      goto joined_r0x015ae648;
    }
  }
  iVar3 = 10;
joined_r0x015ae648:
  if (99 < param_3) {
    uVar5 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar5 * -100 & 0xffff) * 2);
    iVar3 = iVar3 + -2;
    param_3 = uVar5;
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
  uVar5 = 10 - iVar4;
  if ((uint)(*param_2 - iVar3) < uVar5) {
    FUN_015afa68(param_2,iVar3,uVar5,1,1);
    iVar3 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar3,auStack_4c + iVar4,uVar5);
  param_2[2] = iVar3 + uVar5;
  *param_1 = 4;
  *(uint *)(param_1 + 4) = uVar5 + iVar6;
  return;
}

