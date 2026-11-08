// FUN_01715614 @ 01715614 size=304 calls_out=1 calls_in=6
// strings: 

undefined8 FUN_01715614(undefined4 param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar6;
  uint *puVar5;
  uint uVar7;
  bool bVar8;
  
  iVar3 = *param_3;
  uVar1 = param_3[1] * 4;
  if (uVar1 <= param_2) goto LAB_0171570c;
  uVar4 = uVar1 - param_2;
  if (uVar4 - 1 < 5) {
    uVar4 = 0;
    uVar2 = param_2;
LAB_01715694:
    uVar4 = uVar4 | *(byte *)(iVar3 + uVar2);
    if (uVar2 + 1 < uVar1) {
      uVar4 = uVar4 | *(byte *)(iVar3 + uVar2 + 1);
      if (uVar2 + 2 < uVar1) {
        uVar4 = uVar4 | *(byte *)(iVar3 + uVar2 + 2);
        if (uVar2 + 3 < uVar1) {
          uVar4 = uVar4 | *(byte *)(iVar3 + uVar2 + 3);
          if (uVar2 + 4 < uVar1) {
            uVar4 = uVar4 | *(byte *)(iVar3 + uVar2 + 4);
          }
        }
      }
    }
  }
  else {
    uVar2 = uVar4 & 0xfffffffc;
    uVar7 = 0;
    puVar5 = (uint *)(iVar3 + param_2);
    do {
      puVar6 = puVar5 + 1;
      uVar7 = *puVar5 | uVar7;
      puVar5 = puVar6;
    } while (puVar6 != (uint *)(uVar2 + (int)(iVar3 + param_2)));
    bVar8 = uVar2 != uVar4;
    if (bVar8) {
      uVar2 = param_2 + uVar2;
    }
    uVar4 = uVar7 & 0xff | (uVar7 & 0xffff) >> 8 | (uVar7 & 0xffffff) >> 0x10 | uVar7 >> 0x18;
    if (bVar8) goto LAB_01715694;
  }
  if (uVar4 != 0) {
    return 0;
  }
LAB_0171570c:
  FUN_0171524c(param_1,param_2,iVar3,param_3[1]);
  return 1;
}

