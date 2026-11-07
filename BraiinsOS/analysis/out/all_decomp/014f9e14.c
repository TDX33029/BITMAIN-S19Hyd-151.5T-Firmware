// FUN_014f9e14 @ 014f9e14 size=292 calls_out=0 calls_in=1
// strings: 

void FUN_014f9e14(undefined1 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  if ((uVar2 < uVar8) && (*(char *)(*param_2 + uVar2) == '_')) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_2[2] = uVar2 + 1;
    *param_1 = 0;
    return;
  }
  if (uVar8 < uVar2) {
    uVar8 = uVar2;
  }
  uVar4 = 0;
  uVar6 = 0;
  do {
    if (uVar8 == uVar2) break;
    cVar1 = *(char *)(*param_2 + uVar2);
    if (cVar1 == '_') {
      param_2[2] = uVar2 + 1;
      if (!CARRY4(uVar6,(uint)(0xfffffffe < uVar4))) {
        *(uint *)(param_1 + 8) = uVar4 + 1;
        *(uint *)(param_1 + 0xc) = uVar6 + (0xfffffffe < uVar4);
        *param_1 = 0;
        return;
      }
      break;
    }
    bVar9 = cVar1 - 0x30;
    if (9 < (byte)(cVar1 - 0x30U)) {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        bVar9 = cVar1 + 0xa9;
      }
      else {
        if (0x19 < (byte)(cVar1 + 0xbfU)) break;
        bVar9 = cVar1 - 0x1d;
      }
    }
    uVar3 = (uint)((ulonglong)uVar4 * 0x3e);
    uVar4 = (uint)((ulonglong)uVar4 * 0x3e >> 0x20);
    uVar2 = uVar2 + 1;
    param_2[2] = uVar2;
    uVar5 = (uint)((ulonglong)uVar6 * 0x3e);
    uVar7 = uVar4 + uVar5;
    if ((int)((ulonglong)uVar6 * 0x3e >> 0x20) != 0 || CARRY4(uVar4,uVar5)) break;
    uVar5 = (uint)bVar9;
    uVar4 = uVar3 + uVar5;
    uVar6 = uVar7 + CARRY4(uVar3,uVar5);
  } while (!CARRY4(uVar7,(uint)CARRY4(uVar3,uVar5)));
  param_1[1] = 0;
  *param_1 = 1;
  return;
}

