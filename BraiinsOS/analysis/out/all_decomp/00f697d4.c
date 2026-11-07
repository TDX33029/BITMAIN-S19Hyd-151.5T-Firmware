// FUN_00f697d4 @ 00f697d4 size=492 calls_out=1 calls_in=1
// strings: 

bool FUN_00f697d4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  
  uVar3 = param_2 & 7;
  uVar7 = (param_2 & 0x1fff) >> 4;
  uVar4 = uVar3;
  if (uVar3 < 3) {
    uVar4 = uVar3 + 7;
  }
  puVar6 = &DAT_0035d4d3;
  uVar4 = uVar4 + uVar7;
  iVar5 = (int)param_2 >> 0xd;
  if (uVar4 < 7) {
    iVar5 = iVar5 + -1;
    uVar2 = iVar5 % 400;
    if ((int)uVar2 < 0) {
      puVar6 = &DAT_0035d663;
    }
    uVar4 = 0x406U >> (puVar6[uVar2] & 0x1f) & 1 | 0x34;
  }
  else {
    uVar4 = uVar4 / 7;
    if ((0x406U >> (param_2 & 0xf) & 1 | 0x34) < uVar4) {
      iVar5 = iVar5 + 1;
      uVar4 = 1;
    }
    uVar2 = iVar5 % 400;
  }
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 400;
  }
  if (399 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,400,&DAT_01880254);
  }
  uVar1 = (int)(uVar4 << 4 | iVar5 << 10) >> 10;
  if ((*(int *)(param_1 + 0x28) != 1) || (*(uint *)(param_1 + 0x2c) == uVar1)) {
    if ((uVar1 < 0x80000000) || (*(int *)(param_1 + 0x30) != 0)) {
      if ((int)uVar1 < 0) {
        return false;
      }
      if (*(int *)(param_1 + 0x30) == 1 && *(uint *)(param_1 + 0x34) != uVar1 / 100) {
        return false;
      }
      if ((*(int *)(param_1 + 0x38) == 1) && (*(uint *)(param_1 + 0x3c) != uVar1 % 100)) {
        return false;
      }
    }
    else if (*(int *)(param_1 + 0x38) != 0) {
      return false;
    }
    if ((*(int *)(param_1 + 0x60) != 1) ||
       (*(uint *)(param_1 + 100) == (uVar4 & 0x3f | (uint)((byte)(&DAT_0035d4d3)[uVar2] >> 4)))) {
      iVar5 = uVar7 + uVar3;
      return *(byte *)(param_1 + 0xa8) == 7 ||
             (uint)*(byte *)(param_1 + 0xa8) ==
             (iVar5 + ((uint)((short)iVar5 * 0x2493) >> 0x10) * -7 & 0xffff);
    }
  }
  return false;
}

