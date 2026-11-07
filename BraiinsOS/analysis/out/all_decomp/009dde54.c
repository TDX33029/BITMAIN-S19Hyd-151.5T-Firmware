// FUN_009dde54 @ 009dde54 size=124 calls_out=0 calls_in=0
// strings: 

uint FUN_009dde54(uint *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar4 = *param_1;
  if (param_1[0xb] != 0) {
    uVar5 = param_1[10];
    uVar8 = uVar5 + param_1[0xb] * 0x28;
    do {
      puVar1 = (undefined4 *)(uVar5 + 8);
      piVar3 = (int *)(uVar5 + 0xc);
      uVar5 = uVar5 + 0x28;
      iVar6 = *piVar3 << 5;
      pcVar7 = (char *)*puVar1;
      while (iVar6 != 0) {
        cVar2 = *pcVar7;
        iVar6 = iVar6 + -0x20;
        pcVar7 = pcVar7 + 0x20;
        if (cVar2 != '\a') {
          uVar5 = 0;
          if (uVar4 != 0) {
            uVar5 = uVar4;
          }
          return uVar5;
        }
      }
    } while (uVar5 != uVar8);
  }
  uVar5 = param_1[8];
  if (param_1[4] < param_1[8]) {
    uVar5 = param_1[4];
  }
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  return uVar5;
}

