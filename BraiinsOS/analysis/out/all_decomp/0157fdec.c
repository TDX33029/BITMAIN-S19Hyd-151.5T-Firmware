// FUN_0157fdec @ 0157fdec size=996 calls_out=4 calls_in=3
// strings: 

undefined4 FUN_0157fdec(int *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 local_5c;
  undefined4 local_58 [4];
  undefined2 local_48 [12];
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = (ulonglong *)(param_1 + 2);
  if (*param_1 == 0) {
    uVar10 = (uint)*puVar1;
    uVar2 = param_1[3];
    uVar12 = *puVar1;
    iVar5 = 0x14;
    if (uVar2 == 0 && (9999 < uVar10) <= uVar2) {
      if (-uVar2 < (uint)(uVar10 < 100)) goto LAB_0157ffc0;
LAB_015800ec:
      iVar6 = iVar5 + -2;
      uVar2 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_58 + iVar5 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar10 + uVar2 * -100 & 0xffff) * 2);
      if (uVar2 < 10) {
LAB_0158013c:
        iVar5 = iVar6 + -1;
        *(byte *)((int)local_58 + iVar6 + -1) = (byte)uVar2 | 0x30;
        goto LAB_0158014c;
      }
    }
    else {
      iVar6 = 0;
      local_5c = param_2;
      uVar12 = *puVar1;
      do {
        iVar5 = iVar6;
        iVar3 = (int)(uVar12 >> 0x20);
        uVar11 = (uint)uVar12;
        uVar12 = FUN_01846088(uVar11,iVar3,10000,0);
        uVar10 = (uint)uVar12;
        uVar8 = uVar11 + uVar10 * -10000;
        uVar2 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_48 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
        *(undefined2 *)((int)local_48 + iVar5 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar8 + uVar2 * -100 & 0xffff) * 2);
        iVar6 = iVar5 + -4;
      } while ((uint)(uVar11 < 100000000) <= (uint)-iVar3);
      iVar5 = iVar5 + 0x10;
      param_2 = local_5c;
      if ((uint)(uVar10 < 100) <= (uint)-(int)(uVar12 >> 0x20)) goto LAB_015800ec;
LAB_0157ffc0:
      uVar10 = (uint)(uVar12 >> 0x20);
      uVar2 = (uint)uVar12;
      iVar6 = iVar5;
      if (uVar10 == 0 && (9 < uVar2) <= uVar10) goto LAB_0158013c;
    }
    iVar5 = iVar6 + -2;
    *(undefined2 *)((int)local_58 + iVar6 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
  }
  else {
    if (*param_1 != 1) {
      uVar12 = *puVar1;
      uVar10 = (uint)(uVar12 >> 0x20);
      if ((int)uVar12 == 0 && (uVar12 & 0xfffff00000000) == 0) {
        if ((int)uVar12 == 0 && (uVar10 & 0x7fffffff) == 0x7ff00000) goto LAB_01580020;
      }
      else if ((~uVar10 & 0x7ff00000) == 0) {
LAB_01580020:
        FUN_0157a340(local_58,*param_2,&DAT_00567318,4);
        if ((char)local_58[0] == '\x04') {
          return 0;
        }
        uVar4 = FUN_0157c4a0(local_58[0],local_58[1]);
        return uVar4;
      }
      puVar7 = local_58;
      iVar5 = FUN_016d1b20(puVar7);
      iVar5 = iVar5 - (int)puVar7;
      uVar4 = *param_2;
      goto LAB_01580160;
    }
    uVar11 = param_1[3];
    uVar10 = (int)uVar11 >> 0x1f;
    iVar5 = 0x14;
    uVar2 = (uint)*puVar1 ^ uVar10;
    uVar8 = uVar2 - uVar10;
    uVar10 = (uVar11 ^ uVar10) - (uVar10 + (uVar2 < uVar10));
    uVar13 = CONCAT44(uVar10,uVar8);
    if (uVar10 == 0 && (9999 < uVar8) <= uVar10) {
      if (-uVar10 < (uint)(uVar8 < 100)) goto LAB_0157fed4;
LAB_01580064:
      iVar6 = iVar5 + -2;
      uVar10 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_58 + iVar5 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar8 + uVar10 * -100 & 0xffff) * 2);
      if (9 < uVar10) goto LAB_0157fee4;
LAB_015800ac:
      iVar3 = iVar6 + -1;
      *(byte *)((int)local_58 + iVar6 + -1) = (byte)uVar10 | 0x30;
    }
    else {
      iVar6 = 0;
      local_5c = param_2;
      do {
        iVar5 = iVar6;
        iVar3 = (int)((ulonglong)uVar13 >> 0x20);
        uVar9 = (uint)uVar13;
        uVar13 = FUN_01846088(uVar9,iVar3,10000,0);
        uVar8 = (uint)uVar13;
        uVar2 = uVar9 + uVar8 * -10000;
        uVar10 = (uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_48 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
        *(undefined2 *)((int)local_48 + iVar5 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar2 + uVar10 * -100 & 0xffff) * 2);
        iVar6 = iVar5 + -4;
      } while ((uint)(uVar9 < 100000000) <= (uint)-iVar3);
      iVar5 = iVar5 + 0x10;
      param_2 = local_5c;
      if ((uint)(uVar8 < 100) <= (uint)-(int)((ulonglong)uVar13 >> 0x20)) goto LAB_01580064;
LAB_0157fed4:
      uVar2 = (uint)((ulonglong)uVar13 >> 0x20);
      uVar10 = (uint)uVar13;
      iVar6 = iVar5;
      if (uVar2 == 0 && (9 < uVar10) <= uVar2) goto LAB_015800ac;
LAB_0157fee4:
      iVar3 = iVar6 + -2;
      *(undefined2 *)((int)local_58 + iVar6 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
    }
    iVar5 = iVar3;
    if (0x7fffffff < uVar11) {
      iVar5 = iVar3 + -1;
      *(undefined1 *)((int)local_58 + iVar3 + -1) = 0x2d;
    }
  }
LAB_0158014c:
  uVar4 = *param_2;
  puVar7 = (undefined4 *)((int)local_58 + iVar5);
  iVar5 = 0x14 - iVar5;
LAB_01580160:
  FUN_0157a340(&local_30,uVar4,puVar7,iVar5);
  if ((char)local_30 == '\x04') {
    return 0;
  }
  uVar4 = FUN_0157c4a0(local_30,local_2c);
  return uVar4;
}

