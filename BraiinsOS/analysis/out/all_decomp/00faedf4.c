// FUN_00faedf4 @ 00faedf4 size=596 calls_out=4 calls_in=2
// strings: 

void FUN_00faedf4(uint *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if (param_2 < 8) {
    uVar3 = param_1[0x28];
    if (uVar3 < 0x29) {
      if (uVar3 == 0) {
        param_1[0x28] = 0;
        return;
      }
      iVar5 = uVar3 << 2;
      uVar6 = 0;
      uVar4 = *(uint *)(&DAT_00362c30 + param_2 * 4);
      puVar8 = param_1;
      do {
        iVar5 = iVar5 + -4;
        lVar1 = (ulonglong)uVar4 * (ulonglong)*puVar8 + (ulonglong)uVar6;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar8 = (uint)lVar1;
        puVar8 = puVar8 + 1;
      } while (iVar5 != 0);
      if (uVar6 != 0) {
        if (uVar3 == 0x28) {
LAB_00faf034:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0x28,0x28,&DAT_01880e5c);
        }
        param_1[uVar3] = uVar6;
        uVar3 = uVar3 + 1;
      }
      param_1[0x28] = uVar3;
      return;
    }
LAB_00faf020:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,0x28,&DAT_01880e5c);
  }
  uVar4 = param_2 & 7;
  if (uVar4 != 0) {
    uVar3 = param_1[0x28];
    if (0x28 < uVar3) goto LAB_00faf020;
    if (uVar3 == 0) {
      param_1[0x28] = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = *(uint *)(&DAT_00362c30 + uVar4 * 4);
      iVar5 = uVar3 << 2;
      puVar8 = param_1;
      do {
        iVar5 = iVar5 + -4;
        lVar1 = (ulonglong)(uVar6 >> uVar4) * (ulonglong)*puVar8 + (ulonglong)uVar7;
        uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar8 = (uint)lVar1;
        puVar8 = puVar8 + 1;
      } while (iVar5 != 0);
      if (uVar7 != 0) {
        if (uVar3 == 0x28) goto LAB_00faf034;
        param_1[uVar3] = uVar7;
        uVar3 = uVar3 + 1;
      }
      param_1[0x28] = uVar3;
    }
  }
  if ((param_2 & 8) != 0) {
    uVar3 = param_1[0x28];
    if (0x28 < uVar3) goto LAB_00faf020;
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      iVar5 = uVar3 << 2;
      uVar4 = 0;
      puVar8 = param_1;
      do {
        iVar5 = iVar5 + -4;
        lVar1 = (ulonglong)*puVar8 * 0x5f5e1 + (ulonglong)uVar4;
        uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar8 = (uint)lVar1;
        puVar8 = puVar8 + 1;
      } while (iVar5 != 0);
      if (uVar4 != 0) {
        if (uVar3 == 0x28) goto LAB_00faf034;
        param_1[uVar3] = uVar4;
        uVar3 = uVar3 + 1;
      }
    }
    param_1[0x28] = uVar3;
  }
  if ((param_2 & 0x10) != 0) {
    param_1 = (uint *)FUN_00faf06c(param_1,&DAT_00362c58,2);
  }
  if ((param_2 & 0x20) != 0) {
    param_1 = (uint *)FUN_00faf06c(param_1,&DAT_00362c60,3);
  }
  if ((param_2 & 0x40) != 0) {
    param_1 = (uint *)FUN_00faf06c(param_1,&DAT_00362c6c,5);
  }
  if ((param_2 & 0x80) != 0) {
    param_1 = (uint *)FUN_00faf06c(param_1,&DAT_00362c80,10);
  }
  if ((param_2 & 0x100) == 0) {
    FUN_00faec78(param_1,param_2);
    return;
  }
  uVar2 = FUN_00faf06c(param_1,&DAT_00362ca8,0x13);
  FUN_00faec78(uVar2,param_2);
  return;
}

