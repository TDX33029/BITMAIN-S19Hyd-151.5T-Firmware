// FUN_012c734c @ 012c734c size=344 calls_out=3 calls_in=3
// strings: 

void FUN_012c734c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_30 [3];
  
  iVar5 = *(int *)(param_2 + 0x14);
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar3 = iVar5 + 1;
  *(uint *)(param_2 + 0x14) = uVar3;
  if ((uVar3 < uVar8) &&
     ((cVar1 = *(char *)(*(int *)(param_2 + 0xc) + uVar3), cVar1 == '+' || (cVar1 == '-')))) {
    uVar3 = iVar5 + 2;
    *(uint *)(param_2 + 0x14) = uVar3;
  }
  if (uVar3 < uVar8) {
    bVar2 = *(byte *)(*(int *)(param_2 + 0xc) + uVar3);
    uVar3 = uVar3 + 1;
    *(uint *)(param_2 + 0x14) = uVar3;
    uVar7 = bVar2 - 0x30 & 0xff;
    if (uVar7 < 10) {
      if (uVar3 < uVar8) {
        do {
          uVar6 = *(byte *)(*(int *)(param_2 + 0xc) + uVar3) - 0x30 & 0xff;
          if (9 < uVar6) break;
          uVar3 = uVar3 + 1;
          *(uint *)(param_2 + 0x14) = uVar3;
          if ((0xccccccb < (int)uVar7) && ((uVar7 != 0xccccccc || (7 < uVar6)))) {
            FUN_014d9818(param_1,param_2,param_3,param_5 == 0 && param_6 == 0);
            return;
          }
          uVar7 = uVar6 + uVar7 * 10;
        } while (uVar8 != uVar3);
      }
      uVar4 = SignedSaturate(param_7 + uVar7,0x20);
      SignedDoesSaturate(uVar4,0x20);
      uVar4 = SignedSaturate(param_7 - uVar7,0x20);
      SignedDoesSaturate(uVar4,0x20);
      FUN_01674238(param_1);
      return;
    }
    local_30[0] = 0xd;
  }
  else {
    local_30[0] = 5;
  }
  uVar4 = FUN_012c6bfc(param_2,local_30);
  *param_1 = 1;
  param_1[1] = uVar4;
  return;
}

