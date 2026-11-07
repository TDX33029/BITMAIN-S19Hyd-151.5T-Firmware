// FUN_008fa9ec @ 008fa9ec size=316 calls_out=4 calls_in=4
// strings: 

undefined4 FUN_008fa9ec(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_1c [3];
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 < uVar4) {
    iVar5 = *(int *)(param_1 + 0xc);
    do {
      uVar7 = *(byte *)(iVar5 + uVar3) - 9;
      if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(iVar5 + uVar3) != 0x6e) {
          uVar2 = FUN_005b8238(param_1,local_1c,&DAT_018674a8);
          uVar2 = FUN_00e959bc(uVar2,param_1);
          return uVar2;
        }
        uVar6 = uVar3 + 1;
        *(uint *)(param_1 + 0x14) = uVar6;
        uVar7 = uVar4;
        if (uVar4 < uVar6) {
          uVar7 = uVar6;
        }
        if (uVar6 < uVar4) {
          cVar1 = *(char *)(iVar5 + uVar6);
          uVar4 = uVar3 + 2;
          *(uint *)(param_1 + 0x14) = uVar4;
          if (cVar1 == 'u') {
            if (uVar4 == uVar7) goto LAB_008faad4;
            cVar1 = *(char *)(iVar5 + uVar4);
            uVar4 = uVar3 + 3;
            *(uint *)(param_1 + 0x14) = uVar4;
            if (cVar1 == 'l') {
              if (uVar4 == uVar7) goto LAB_008faad4;
              cVar1 = *(char *)(iVar5 + uVar4);
              *(uint *)(param_1 + 0x14) = uVar3 + 4;
              if (cVar1 == 'l') {
                return 0;
              }
            }
          }
          local_1c[0] = 9;
        }
        else {
LAB_008faad4:
          local_1c[0] = 5;
        }
        uVar2 = FUN_005b8c9c(param_1,local_1c);
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x14) = uVar3;
    } while (uVar4 != uVar3);
  }
  local_1c[0] = 5;
  uVar2 = FUN_008f9984(param_1,local_1c);
  return uVar2;
}

