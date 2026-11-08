// FUN_010a7344 @ 010a7344 size=364 calls_out=0 calls_in=1
// strings: 

uint FUN_010a7344(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 4);
  puVar4 = *(uint **)(param_1 + 8);
  if ((uint)((int)puVar5 - (int)puVar4) < 8) {
    uVar2 = 1;
    if (puVar4 < puVar5) {
      uVar3 = *puVar4;
      *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 1);
      if ((char)uVar3 != 'H') {
        return 0x602;
      }
      if ((uint *)((int)puVar4 + 1) < puVar5) {
        cVar1 = *(char *)((int)puVar4 + 1);
        *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 2);
        if (cVar1 != 'T') {
          return 0x602;
        }
        if ((uint *)((int)puVar4 + 2) < puVar5) {
          cVar1 = *(char *)((int)puVar4 + 2);
          *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 3);
          if (cVar1 != 'T') {
            return 0x602;
          }
          if ((uint *)((int)puVar4 + 3) < puVar5) {
            cVar1 = *(char *)((int)puVar4 + 3);
            *(uint **)(param_1 + 8) = puVar4 + 1;
            if (cVar1 != 'P') {
              return 0x602;
            }
            if (puVar4 + 1 < puVar5) {
              uVar3 = puVar4[1];
              *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 5);
              if ((char)uVar3 != '/') {
                return 0x602;
              }
              if ((uint *)((int)puVar4 + 5) < puVar5) {
                cVar1 = *(char *)((int)puVar4 + 5);
                *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 6);
                if (cVar1 != '1') {
                  return 0x602;
                }
                if ((uint *)((int)puVar4 + 6) < puVar5) {
                  cVar1 = *(char *)((int)puVar4 + 6);
                  uVar2 = 2;
                  *(char **)(param_1 + 8) = (char *)((int)puVar4 + 7);
                  if (cVar1 == '.') {
                    uVar2 = 1;
                  }
                  return uVar2 | 0x600;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = *puVar4;
    uVar2 = puVar4[1];
    *(uint **)(param_1 + 8) = puVar4 + 2;
    if ((uVar3 ^ 0x50545448) == 0 && uVar2 == 0x302e312f) {
      return 0;
    }
    if ((uVar3 ^ 0x50545448) == 0 && uVar2 == 0x312e312f) {
      return 0x100;
    }
    uVar2 = 2;
  }
  return uVar2 | 0x600;
}

