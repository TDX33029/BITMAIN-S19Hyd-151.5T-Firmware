// FUN_014f6668 @ 014f6668 size=356 calls_out=0 calls_in=1
// strings: 

void FUN_014f6668(undefined1 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = param_2[1];
  uVar4 = param_2[2];
  if ((uVar9 <= uVar4) || (iVar10 = *param_2, *(char *)(iVar10 + uVar4) != 's')) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = uVar4 + 1;
  param_2[2] = uVar2;
  if ((uVar2 < uVar9) && (*(char *)(iVar10 + uVar2) == '_')) {
    param_2[2] = uVar4 + 2;
    uVar4 = 0;
    iVar10 = 0;
LAB_014f67b4:
    *param_1 = 0;
    *(uint *)(param_1 + 8) = uVar4 + 1;
    *(uint *)(param_1 + 0xc) = iVar10 + (uint)(0xfffffffe < uVar4);
    return;
  }
  uVar7 = 0;
  uVar5 = 0;
  while (uVar9 != uVar2) {
    cVar1 = *(char *)(iVar10 + uVar2);
    if (cVar1 == '_') {
      param_2[2] = uVar2 + 1;
      if ((uVar7 & uVar5) != 0xffffffff) {
        uVar4 = uVar7 + 1;
        iVar10 = uVar5 + (0xfffffffe < uVar7);
        if (uVar4 != 0xffffffff || iVar10 != -1) goto LAB_014f67b4;
      }
      break;
    }
    bVar8 = cVar1 - 0x30;
    if (9 < (byte)(cVar1 - 0x30U)) {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        bVar8 = cVar1 + 0xa9;
      }
      else {
        if (0x19 < (byte)(cVar1 + 0xbfU)) break;
        bVar8 = cVar1 - 0x1d;
      }
    }
    uVar3 = (uint)((ulonglong)uVar7 * 0x3e);
    uVar4 = (uint)((ulonglong)uVar7 * 0x3e >> 0x20);
    uVar2 = uVar2 + 1;
    param_2[2] = uVar2;
    uVar7 = (uint)((ulonglong)uVar5 * 0x3e);
    uVar6 = uVar4 + uVar7;
    if ((int)((ulonglong)uVar5 * 0x3e >> 0x20) != 0 || CARRY4(uVar4,uVar7)) break;
    uVar4 = (uint)bVar8;
    uVar7 = uVar3 + uVar4;
    uVar5 = uVar6 + CARRY4(uVar3,uVar4);
    if (CARRY4(uVar6,(uint)CARRY4(uVar3,uVar4))) break;
  }
  param_1[1] = 0;
  *param_1 = 1;
  return;
}

