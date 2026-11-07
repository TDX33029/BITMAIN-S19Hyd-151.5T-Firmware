// FUN_00c64888 @ 00c64888 size=572 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00c64888(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_1c [3];
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  if (uVar6 < uVar5) {
    iVar7 = *(int *)(param_1 + 0xc);
    uVar4 = uVar6 + 1;
    *(uint *)(param_1 + 0x14) = uVar4;
    if (*(byte *)(iVar7 + uVar6) == 0x30) {
      if ((uVar4 < uVar5) && (*(byte *)(iVar7 + uVar4) - 0x30 < 10)) goto LAB_00c648cc;
    }
    else {
      if (8 < *(byte *)(iVar7 + uVar6) - 0x31) goto LAB_00c64a94;
      if (uVar4 < uVar5) {
        while (*(byte *)(iVar7 + uVar4) - 0x30 < 10) {
          uVar4 = uVar4 + 1;
          *(uint *)(param_1 + 0x14) = uVar4;
          if (uVar5 == uVar4) {
            return 0;
          }
        }
      }
    }
    if (uVar5 <= uVar4) {
      return 0;
    }
    cVar1 = *(char *)(iVar7 + uVar4);
    if (cVar1 == 'e' || cVar1 == 'E') {
      uVar6 = uVar4 + 1;
      *(uint *)(param_1 + 0x14) = uVar6;
      if ((uVar6 < uVar5) && (*(char *)(iVar7 + uVar6) == '+' || *(char *)(iVar7 + uVar6) == '-')) {
        uVar6 = uVar4 + 2;
        *(uint *)(param_1 + 0x14) = uVar6;
      }
      if (uVar6 < uVar5) {
        bVar2 = *(byte *)(iVar7 + uVar6);
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + 0x14) = uVar6;
        if (bVar2 - 0x30 < 10) {
          if (uVar5 <= uVar6) {
            return 0;
          }
          do {
            if (9 < *(byte *)(iVar7 + uVar6) - 0x30) {
              return 0;
            }
            uVar6 = uVar6 + 1;
            *(uint *)(param_1 + 0x14) = uVar6;
          } while (uVar5 != uVar6);
          return 0;
        }
      }
    }
    else {
      if (cVar1 != '.') {
        return 0;
      }
      uVar6 = uVar4 + 1;
      *(uint *)(param_1 + 0x14) = uVar6;
      if ((uVar5 <= uVar6) || (9 < *(byte *)(iVar7 + uVar6) - 0x30)) {
LAB_00c648cc:
        local_1c[0] = 0xd;
        uVar3 = FUN_00c629ac(param_1,local_1c);
        return uVar3;
      }
      uVar6 = uVar4 + 2;
      do {
        uVar4 = uVar6;
        if (uVar5 == uVar4) {
          *(uint *)(param_1 + 0x14) = uVar5;
          return 0;
        }
        bVar2 = *(byte *)(iVar7 + uVar4);
        uVar6 = uVar4 + 1;
      } while (bVar2 - 0x30 < 10);
      *(uint *)(param_1 + 0x14) = uVar4;
      if ((bVar2 | 0x20) != 0x65) {
        return 0;
      }
      uVar6 = uVar4 + 1;
      *(uint *)(param_1 + 0x14) = uVar6;
      if ((uVar6 < uVar5) && (*(char *)(iVar7 + uVar6) == '+' || *(char *)(iVar7 + uVar6) == '-')) {
        uVar6 = uVar4 + 2;
        *(uint *)(param_1 + 0x14) = uVar6;
      }
      if (uVar6 < uVar5) {
        bVar2 = *(byte *)(iVar7 + uVar6);
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + 0x14) = uVar6;
        if (bVar2 - 0x30 < 10) {
          if (uVar5 <= uVar6) {
            return 0;
          }
          do {
            if (9 < *(byte *)(iVar7 + uVar6) - 0x30) {
              return 0;
            }
            uVar6 = uVar6 + 1;
            *(uint *)(param_1 + 0x14) = uVar6;
          } while (uVar5 != uVar6);
          return 0;
        }
      }
    }
  }
LAB_00c64a94:
  local_1c[0] = 0xd;
  uVar3 = FUN_011b4d78(param_1,local_1c);
  return uVar3;
}

