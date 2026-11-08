// FUN_00e5cedc @ 00e5cedc size=1124 calls_out=4 calls_in=2
// strings: 

void FUN_00e5cedc(int *param_1,int *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 local_54;
  undefined1 auStack_50 [16];
  undefined2 local_40 [14];
  
  puVar1 = (ulonglong *)(param_1 + 2);
  if (*param_1 == 0) {
    uVar8 = (uint)*puVar1;
    iVar5 = 0x14;
    uVar2 = param_1[3];
    uVar11 = *puVar1;
    if (uVar2 == 0 && (9999 < uVar8) <= uVar2) {
      if ((uint)(uVar8 < 100) <= -uVar2) goto LAB_00e5d1f0;
LAB_00e5d0c4:
      uVar8 = (uint)(uVar11 >> 0x20);
      uVar2 = (uint)uVar11;
      iVar9 = iVar5;
      if (uVar8 == 0 && (9 < uVar2) <= uVar8) {
LAB_00e5d23c:
        iVar5 = iVar9 + -1;
        auStack_50[iVar9 + -1] = (byte)uVar2 | 0x30;
        goto LAB_00e5d24c;
      }
    }
    else {
      iVar9 = 0;
      local_54 = param_2;
      uVar11 = *puVar1;
      do {
        iVar5 = iVar9;
        iVar3 = (int)(uVar11 >> 0x20);
        uVar10 = (uint)uVar11;
        uVar11 = FUN_01846088(uVar10,iVar3,10000,0);
        uVar8 = (uint)uVar11;
        uVar6 = uVar8 * 0xd8f0 + uVar10;
        uVar2 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_40 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
        *(undefined2 *)((int)local_40 + iVar5 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar6 & 0xffff) * 2);
        iVar9 = iVar5 + -4;
      } while ((uint)(uVar10 < 100000000) <= (uint)-iVar3);
      iVar5 = iVar5 + 0x10;
      param_2 = local_54;
      if ((uint)-(int)(uVar11 >> 0x20) < (uint)(uVar8 < 100)) goto LAB_00e5d0c4;
LAB_00e5d1f0:
      iVar9 = iVar5 + -2;
      uVar2 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(auStack_50 + iVar5 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar8 & 0xffff) * 2);
      if (uVar2 < 10) goto LAB_00e5d23c;
    }
    iVar5 = iVar9 + -2;
    *(undefined2 *)(auStack_50 + iVar9 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
  }
  else {
    if (*param_1 != 1) {
      uVar11 = *puVar1;
      uVar8 = (uint)(uVar11 >> 0x20);
      if ((int)uVar11 == 0 && (uVar11 & 0xfffff00000000) == 0) {
        if ((int)uVar11 == 0 && (uVar8 & 0x7fffffff) == 0x7ff00000) goto LAB_00e5d124;
      }
      else if ((~uVar8 & 0x7ff00000) == 0) {
LAB_00e5d124:
        iVar5 = param_2[2];
        if ((uint)(*param_2 - iVar5) < 4) {
          FUN_00edff4c(param_2,iVar5,4,1,1);
          iVar5 = param_2[2];
        }
        *(undefined4 *)(param_2[1] + iVar5) = 0x6c6c756e;
        param_2[2] = iVar5 + 4;
        return;
      }
      iVar5 = FUN_016d1b20(auStack_50);
      uVar8 = iVar5 - (int)auStack_50;
      iVar9 = param_2[2];
      if ((uint)(*param_2 - iVar9) < uVar8) {
        FUN_00edff4c(param_2,iVar9,uVar8,1,1);
        iVar9 = param_2[2];
      }
      iVar5 = param_2[1];
      puVar4 = auStack_50;
      goto LAB_00e5d270;
    }
    uVar10 = param_1[3];
    uVar8 = (int)uVar10 >> 0x1f;
    iVar5 = 0x14;
    uVar2 = (uint)*puVar1 ^ uVar8;
    uVar6 = uVar2 - uVar8;
    uVar8 = (uVar10 ^ uVar8) - (uVar8 + (uVar2 < uVar8));
    uVar12 = CONCAT44(uVar8,uVar6);
    if (uVar8 == 0 && (9999 < uVar6) <= uVar8) {
      if ((uint)(uVar6 < 100) <= -uVar8) goto LAB_00e5d16c;
LAB_00e5cfd0:
      uVar2 = (uint)((ulonglong)uVar12 >> 0x20);
      uVar8 = (uint)uVar12;
      iVar9 = iVar5;
      if (uVar2 != 0 || uVar2 < (9 < uVar8)) goto LAB_00e5cfe0;
LAB_00e5d1b0:
      iVar3 = iVar9 + -1;
      auStack_50[iVar9 + -1] = (byte)uVar8 | 0x30;
    }
    else {
      iVar9 = 0;
      local_54 = param_2;
      do {
        iVar5 = iVar9;
        iVar3 = (int)((ulonglong)uVar12 >> 0x20);
        uVar7 = (uint)uVar12;
        uVar12 = FUN_01846088(uVar7,iVar3,10000,0);
        uVar6 = (uint)uVar12;
        uVar2 = uVar6 * 0xd8f0 + uVar7;
        uVar8 = (uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_40 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar8 * 2);
        *(undefined2 *)((int)local_40 + iVar5 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar8 * 0xff9c + uVar2 & 0xffff) * 2);
        iVar9 = iVar5 + -4;
      } while ((uint)(uVar7 < 100000000) <= (uint)-iVar3);
      iVar5 = iVar5 + 0x10;
      param_2 = local_54;
      if ((uint)-(int)((ulonglong)uVar12 >> 0x20) < (uint)(uVar6 < 100)) goto LAB_00e5cfd0;
LAB_00e5d16c:
      iVar9 = iVar5 + -2;
      uVar8 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(auStack_50 + iVar5 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar8 * 0xff9c + uVar6 & 0xffff) * 2);
      if (uVar8 < 10) goto LAB_00e5d1b0;
LAB_00e5cfe0:
      iVar3 = iVar9 + -2;
      *(undefined2 *)(auStack_50 + iVar9 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar8 * 2);
    }
    iVar5 = iVar3;
    if (0x7fffffff < uVar10) {
      iVar5 = iVar3 + -1;
      auStack_50[iVar3 + -1] = 0x2d;
    }
  }
LAB_00e5d24c:
  iVar9 = param_2[2];
  puVar4 = auStack_50 + iVar5;
  uVar8 = 0x14 - iVar5;
  if ((uint)(*param_2 - iVar9) < uVar8) {
    FUN_00edff4c(param_2,iVar9,uVar8,1,1);
    iVar9 = param_2[2];
  }
  iVar5 = param_2[1];
LAB_00e5d270:
  FUN_016dd1aa(iVar5 + iVar9,puVar4,uVar8);
  param_2[2] = iVar9 + uVar8;
  return;
}

