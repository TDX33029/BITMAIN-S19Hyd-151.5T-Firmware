// FUN_014f77d4 @ 014f77d4 size=400 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_014f77d4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    uVar11 = param_1[1];
    uVar6 = param_1[2];
    if (uVar6 < uVar11) {
      if (*(char *)(iVar3 + uVar6) == 'K') {
        param_1[2] = uVar6 + 1;
        uVar2 = FUN_014f7968(param_1,0);
        return uVar2;
      }
      if (*(char *)(iVar3 + uVar6) == 'L') {
        uVar4 = uVar6 + 1;
        param_1[2] = uVar4;
        if ((uVar4 < uVar11) && (*(char *)(iVar3 + uVar4) == '_')) {
          param_1[2] = uVar6 + 2;
          uVar2 = FUN_014f81fc(param_1,uVar6 + 2,0,0);
          return uVar2;
        }
        uVar6 = 0;
        uVar7 = 0;
        do {
          if (uVar11 == uVar4) break;
          cVar1 = *(char *)(iVar3 + uVar4);
          if (cVar1 == '_') {
            param_1[2] = uVar4 + 1;
            if (!CARRY4(uVar7,(uint)(0xfffffffe < uVar6))) {
              uVar2 = FUN_014f81fc(param_1,0,uVar6 + 1,uVar7 + (0xfffffffe < uVar6));
              return uVar2;
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
          uVar5 = (uint)((ulonglong)uVar6 * 0x3e);
          uVar6 = (uint)((ulonglong)uVar6 * 0x3e >> 0x20);
          uVar4 = uVar4 + 1;
          param_1[2] = uVar4;
          uVar8 = (uint)((ulonglong)uVar7 * 0x3e);
          uVar9 = uVar6 + uVar8;
          if ((int)((ulonglong)uVar7 * 0x3e >> 0x20) != 0 || CARRY4(uVar6,uVar8)) break;
          uVar8 = (uint)bVar10;
          uVar6 = uVar5 + uVar8;
          uVar7 = uVar9 + CARRY4(uVar5,uVar8);
        } while (!CARRY4(uVar9,(uint)CARRY4(uVar5,uVar8)));
        if ((param_1[4] == 0) || (iVar3 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar3 == 0))
        {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
          return 0;
        }
        return 1;
      }
    }
  }
  uVar2 = FUN_014f7080();
  return uVar2;
}

