// FUN_0189e3f8 @ 0189e3f8 size=284 calls_out=0 calls_in=4
// strings: 

void FUN_0189e3f8(undefined1 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  if ((uVar2 < uVar9) && (*(char *)(*param_2 + uVar2) == '_')) {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_2[2] = uVar2 + 1;
  }
  else {
    if (uVar9 < uVar2) {
      uVar9 = uVar2;
    }
    uVar5 = 0;
    uVar7 = 0;
    do {
      if (uVar9 == uVar2) break;
      cVar1 = *(char *)(*param_2 + uVar2);
      if (cVar1 == '_') {
        param_2[2] = uVar2 + 1;
        uVar3 = 0;
        if (!CARRY4(uVar7,(uint)(0xfffffffe < uVar5))) {
          *(uint *)(param_1 + 8) = uVar5 + 1;
          *(uint *)(param_1 + 0xc) = uVar7 + (0xfffffffe < uVar5);
          goto LAB_0189e50c;
        }
        break;
      }
      bVar10 = cVar1 - 0x30;
      if (9 < (byte)(cVar1 - 0x30U)) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          bVar10 = cVar1 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) break;
          bVar10 = cVar1 - 0x1d;
        }
      }
      uVar4 = (uint)((ulonglong)uVar5 * 0x3e);
      uVar5 = (uint)((ulonglong)uVar5 * 0x3e >> 0x20);
      uVar2 = uVar2 + 1;
      param_2[2] = uVar2;
      uVar6 = (uint)((ulonglong)uVar7 * 0x3e);
      uVar8 = uVar5 + uVar6;
      if ((int)((ulonglong)uVar7 * 0x3e >> 0x20) != 0 || CARRY4(uVar5,uVar6)) break;
      uVar6 = (uint)bVar10;
      uVar5 = uVar4 + uVar6;
      uVar7 = uVar8 + CARRY4(uVar4,uVar6);
    } while (!CARRY4(uVar8,(uint)CARRY4(uVar4,uVar6)));
    uVar3 = 1;
    param_1[1] = 0;
  }
LAB_0189e50c:
  *param_1 = uVar3;
  return;
}

