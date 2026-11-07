// FUN_014163bc @ 014163bc size=340 calls_out=0 calls_in=1
// strings: 

uint FUN_014163bc(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
  puVar4 = *(uint **)(param_1 + 8);
  puVar5 = *(uint **)(param_1 + 4);
  if ((puVar4 == (uint *)0x0) || ((uint)((int)puVar5 - (int)puVar4) < 8)) {
    uVar3 = 1;
    iVar6 = 6;
    if (puVar4 < puVar5) {
      uVar2 = *puVar4;
      *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 1);
      if ((char)uVar2 == 'H') {
        if (puVar5 <= (uint *)((int)puVar4 + 1)) goto LAB_01416504;
        cVar1 = *(char *)((int)puVar4 + 1);
        *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 2);
        if (cVar1 == 'T') {
          if (puVar5 <= (uint *)((int)puVar4 + 2)) goto LAB_01416504;
          cVar1 = *(char *)((int)puVar4 + 2);
          *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 3);
          if (cVar1 == 'T') {
            if (puVar5 <= (uint *)((int)puVar4 + 3)) goto LAB_01416504;
            cVar1 = *(char *)((int)puVar4 + 3);
            *(uint **)(param_1 + 8) = puVar4 + 1;
            if (cVar1 == 'P') {
              if (puVar5 <= puVar4 + 1) goto LAB_01416504;
              uVar2 = puVar4[1];
              *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 5);
              if ((char)uVar2 == '/') {
                if (puVar5 <= (uint *)((int)puVar4 + 5)) goto LAB_01416504;
                cVar1 = *(char *)((int)puVar4 + 5);
                *(uint **)(param_1 + 8) = (uint *)((int)puVar4 + 6);
                if (cVar1 == '1') {
                  if ((uint *)((int)puVar4 + 6) < puVar5) {
                    cVar1 = *(char *)((int)puVar4 + 6);
                    *(char **)(param_1 + 8) = (char *)((int)puVar4 + 7);
                    uVar3 = 2;
                    if (cVar1 == '.') {
                      uVar3 = 1;
                    }
                  }
                  goto LAB_01416504;
                }
              }
            }
          }
        }
      }
      uVar3 = 2;
    }
  }
  else {
    *(uint **)(param_1 + 8) = puVar4 + 2;
    iVar6 = 6;
    if ((*puVar4 ^ 0x50545448) == 0 && puVar4[1] == 0x312e312f) {
      iVar6 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
    if ((*puVar4 ^ 0x50545448) == 0 && puVar4[1] == 0x302e312f) {
      uVar3 = 0;
      iVar6 = 0;
    }
  }
LAB_01416504:
  return uVar3 | iVar6 << 8;
}

