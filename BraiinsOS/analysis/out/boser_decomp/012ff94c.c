// FUN_012ff94c @ 012ff94c size=588 calls_out=4 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_012ff94c(uint *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_2 < 8) {
    uVar2 = param_1[0x28];
    if (uVar2 < 0x29) {
      if (uVar2 == 0) {
        param_1[0x28] = 0;
        return;
      }
      iVar4 = uVar2 << 2;
      uVar5 = 0;
      uVar3 = *(uint *)(&DAT_00425a60 + param_2 * 4);
      puVar7 = param_1;
      do {
        iVar4 = iVar4 + -4;
        lVar1 = (ulonglong)uVar3 * (ulonglong)*puVar7 + (ulonglong)uVar5;
        uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar7 = (uint)lVar1;
        puVar7 = puVar7 + 1;
      } while (iVar4 != 0);
      if (uVar5 != 0) {
        if (uVar2 == 0x28) {
LAB_012ffb84:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0x28,0x28,&DAT_01ce4690);
        }
        param_1[uVar2] = uVar5;
        uVar2 = uVar2 + 1;
      }
      param_1[0x28] = uVar2;
      return;
    }
LAB_012ffb70:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x28,&DAT_01ce4690);
  }
  uVar3 = param_2 & 7;
  if (uVar3 != 0) {
    uVar2 = param_1[0x28];
    if (0x28 < uVar2) goto LAB_012ffb70;
    if (uVar2 == 0) {
      param_1[0x28] = 0;
    }
    else {
      uVar6 = 0;
      uVar5 = *(uint *)(&DAT_00425a60 + uVar3 * 4);
      iVar4 = uVar2 << 2;
      puVar7 = param_1;
      do {
        iVar4 = iVar4 + -4;
        lVar1 = (ulonglong)(uVar5 >> uVar3) * (ulonglong)*puVar7 + (ulonglong)uVar6;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar7 = (uint)lVar1;
        puVar7 = puVar7 + 1;
      } while (iVar4 != 0);
      if (uVar6 != 0) {
        if (uVar2 == 0x28) goto LAB_012ffb84;
        param_1[uVar2] = uVar6;
        uVar2 = uVar2 + 1;
      }
      param_1[0x28] = uVar2;
    }
  }
  if ((param_2 & 8) != 0) {
    uVar2 = param_1[0x28];
    if (0x28 < uVar2) goto LAB_012ffb70;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = uVar2 << 2;
      uVar3 = 0;
      puVar7 = param_1;
      do {
        iVar4 = iVar4 + -4;
        lVar1 = (ulonglong)*puVar7 * 0x5f5e1 + (ulonglong)uVar3;
        uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar7 = (uint)lVar1;
        puVar7 = puVar7 + 1;
      } while (iVar4 != 0);
      if (uVar3 != 0) {
        if (uVar2 == 0x28) goto LAB_012ffb84;
        param_1[uVar2] = uVar3;
        uVar2 = uVar2 + 1;
      }
    }
    param_1[0x28] = uVar2;
  }
  if ((param_2 & 0x10) != 0) {
    param_1 = (uint *)FUN_012ffbbc(param_1,&DAT_00425a88,2);
  }
  if ((param_2 & 0x20) != 0) {
    param_1 = (uint *)FUN_012ffbbc(param_1,&DAT_00425a90,3);
  }
  if ((param_2 & 0x40) != 0) {
    param_1 = (uint *)FUN_012ffbbc(param_1,&DAT_00425a9c,5);
  }
  if ((param_2 & 0x80) != 0) {
    param_1 = (uint *)FUN_012ffbbc(param_1,&DAT_00425ab0,10);
  }
  if ((param_2 & 0x100) != 0) {
    param_1 = (uint *)FUN_012ffbbc(param_1,&DAT_00425ad8,0x13);
  }
  FUN_012ff7d0(param_1,param_2);
  return;
}

