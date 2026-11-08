// FUN_005b800c @ 005b800c size=556 calls_out=1 calls_in=1
// strings: 

void FUN_005b800c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  if (*(char *)(param_2 + 0x2c) == '\0') {
    pbVar2 = *(byte **)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x1c) == 0) {
      bVar3 = param_1[2];
LAB_005b81e8:
      *(byte **)(param_2 + 0x18) = pbVar2;
      uVar1 = 0;
      goto LAB_005b81f4;
    }
    bVar3 = *pbVar2;
    uVar4 = (uint)bVar3;
    *(byte **)(param_2 + 0x18) = pbVar2 + 1;
    iVar5 = *(int *)(param_2 + 0x24) + 1;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
    if (uVar4 == 10) {
      *(int *)(param_2 + 0x28) = iVar5 + *(int *)(param_2 + 0x28);
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      iVar5 = 0;
    }
    *(byte *)(param_2 + 0x2d) = bVar3;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(int *)(param_2 + 0x24) = iVar5;
  }
  else {
    bVar3 = *(byte *)(param_2 + 0x2d);
    uVar4 = (uint)bVar3;
  }
  uVar1 = 1;
  if (uVar4 - 9 < 0x18) {
    bVar3 = (byte)uVar4;
    uVar1 = 1;
    if ((1 << (uVar4 - 9 & 0xff) & 0x800013U) != 0) {
      uVar1 = *(undefined1 *)(param_2 + 0x2d);
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar5 = *(int *)(param_2 + 0x14);
        if (iVar5 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar5) = uVar1;
        *(int *)(param_2 + 0x14) = iVar5 + 1;
      }
      while( true ) {
        bVar3 = (byte)uVar4;
        if (*(char *)(param_2 + 0x2c) == '\x01') {
          bVar3 = *(byte *)(param_2 + 0x2d);
          uVar4 = (uint)bVar3;
        }
        else {
          pbVar2 = *(byte **)(param_2 + 0x18);
          if (*(int *)(param_2 + 0x1c) == 0) goto LAB_005b81e8;
          bVar3 = *pbVar2;
          uVar4 = (uint)bVar3;
          *(byte **)(param_2 + 0x18) = pbVar2 + 1;
          iVar5 = *(int *)(param_2 + 0x24) + 1;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
          if (uVar4 == 10) {
            *(int *)(param_2 + 0x28) = iVar5 + *(int *)(param_2 + 0x28);
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
            iVar5 = 0;
          }
          *(byte *)(param_2 + 0x2d) = bVar3;
          *(undefined1 *)(param_2 + 0x2c) = 1;
          *(int *)(param_2 + 0x24) = iVar5;
        }
        if ((0x17 < uVar4 - 9) || (bVar3 = (byte)uVar4, (1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0))
        break;
        uVar1 = *(undefined1 *)(param_2 + 0x2d);
        *(undefined1 *)(param_2 + 0x2c) = 0;
        if (*(int *)(param_2 + 0xc) != -0x80000000) {
          iVar5 = *(int *)(param_2 + 0x14);
          if (iVar5 == *(int *)(param_2 + 0xc)) {
            FUN_006029c0(param_2 + 0xc);
          }
          *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar5) = uVar1;
          *(int *)(param_2 + 0x14) = iVar5 + 1;
        }
      }
      uVar1 = 1;
    }
  }
LAB_005b81f4:
  *(undefined4 *)(param_1 + 4) = uVar6;
  param_1[2] = bVar3;
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

