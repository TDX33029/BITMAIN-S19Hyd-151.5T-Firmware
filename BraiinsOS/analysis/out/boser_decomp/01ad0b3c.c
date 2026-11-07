// FUN_01ad0b3c @ 01ad0b3c size=336 calls_out=0 calls_in=1
// strings: 

undefined1 * FUN_01ad0b3c(undefined4 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    return &DAT_00110000;
  }
  pbVar4 = (byte *)*param_1;
  puVar2 = (undefined1 *)(uint)*pbVar4;
  if (-1 < (char)*pbVar4) {
    *param_1 = pbVar4 + 1;
    param_1[1] = iVar3 + -1;
    return puVar2;
  }
  if ((iVar3 == 1) || (puVar2 + -0xf5 < (undefined1 *)0xffffffcd)) {
    *param_1 = pbVar4 + 1;
    param_1[1] = iVar3 + -1;
  }
  else {
    iVar5 = 0x80;
    uVar7 = (uint)pbVar4[1];
    iVar8 = 0xbf;
    if (puVar2 < (undefined1 *)0xf0) {
      if (puVar2 == (undefined1 *)0xe0) {
        iVar5 = 0xa0;
      }
      else if (puVar2 == (undefined1 *)0xed) {
        iVar8 = 0x9f;
      }
    }
    else if (puVar2 == (undefined1 *)0xf0) {
      iVar5 = 0x90;
    }
    else if (puVar2 == (undefined1 *)0xf4) {
      iVar8 = 0x8f;
    }
    if ((iVar8 - iVar5 & 0xffU) < (uVar7 - iVar5 & 0xff)) {
      *param_1 = pbVar4 + 1;
      param_1[1] = iVar3 + -1;
    }
    else {
      pbVar6 = pbVar4 + 2;
      if (puVar2 < (undefined1 *)0xe0) {
        *param_1 = pbVar6;
        param_1[1] = iVar3 + -2;
        return (undefined1 *)(uVar7 & 0x3f | ((uint)puVar2 & 0x1f) << 6);
      }
      if (iVar3 == 2) {
        iVar3 = 0;
      }
      else {
        bVar1 = *pbVar6;
        if ((char)bVar1 < -0x40) {
          *param_1 = pbVar4 + 3;
          param_1[1] = iVar3 + -3;
          if (puVar2 < (undefined1 *)0xf0) {
            return (undefined1 *)
                   (((uint)puVar2 & 0xf) << 0xc | (uVar7 & 0x3f) << 6 | (int)(char)bVar1 & 0x3fU);
          }
          return (undefined1 *)0xfffd;
        }
        iVar3 = iVar3 + -2;
      }
      *param_1 = pbVar6;
      param_1[1] = iVar3;
    }
  }
  return (undefined1 *)0xfffd;
}

