// FUN_01ab07bc @ 01ab07bc size=416 calls_out=1 calls_in=1
// strings: 

int FUN_01ab07bc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (*(int *)(param_1 + 0x10) == -0x80000000) {
    bVar11 = *(int *)(param_2 + 0x10) != -0x80000000;
    uVar1 = 0;
    if (bVar11) {
      uVar1 = 0xffffffff;
    }
    uVar9 = (uint)bVar11;
  }
  else {
    if (*(int *)(param_2 + 0x10) == -0x80000000) {
      return 0xff;
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar9 = *(uint *)(param_2 + 0x18);
    uVar1 = (uint)(uVar1 >= uVar9 && uVar1 != uVar9) - (uint)(uVar1 < uVar9);
    uVar9 = 1;
  }
  if ((uVar1 & 0xff) == 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar1 = (uint)(uVar5 >= uVar1 && uVar5 != uVar1) - (uint)(uVar5 < uVar1);
  }
  if ((uVar1 & 0xff) == 0) {
    if (*(int *)(param_1 + 0x10) == -0x80000000) {
      uVar1 = -uVar9;
    }
    else {
      if (uVar9 == 0) {
        return 0xff;
      }
      uVar9 = *(uint *)(param_2 + 0x18);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar1 = uVar9;
      if (uVar5 < uVar9) {
        uVar1 = uVar5;
      }
      iVar6 = FUN_01bed842(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),uVar1);
      if (iVar6 == 0) {
        iVar6 = uVar5 - uVar9;
      }
      uVar1 = (uint)(0 < iVar6) - (uint)(iVar6 < 0);
    }
    if (uVar1 == 0) {
      uVar9 = *(uint *)(param_1 + 0xc);
      uVar5 = *(uint *)(param_2 + 0xc);
      uVar1 = uVar9;
      if (uVar5 < uVar9) {
        uVar1 = uVar5;
      }
      iVar6 = uVar1 + 1;
      puVar4 = (undefined4 *)(*(int *)(param_2 + 8) + 4);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          uVar7 = 0;
          uVar1 = (uint)(uVar9 >= uVar5 && uVar9 != uVar5);
          if (uVar9 < uVar5) {
            uVar7 = 1;
          }
          goto LAB_01ab094c;
        }
        uVar8 = *puVar4;
        uVar10 = puVar4[1];
        uVar7 = puVar2[1];
        puVar4 = puVar4 + 3;
        uVar1 = uVar10;
        if (uVar7 < uVar10) {
          uVar1 = uVar7;
        }
        iVar3 = FUN_01bed842(*puVar2,uVar8,uVar1);
        if (iVar3 == 0) {
          iVar3 = uVar7 - uVar10;
        }
        puVar2 = puVar2 + 3;
      } while (iVar3 == 0);
      uVar7 = (uint)(iVar3 < 0);
      uVar1 = (uint)(0 < iVar3);
LAB_01ab094c:
      uVar1 = uVar1 - uVar7;
    }
  }
  return -uVar1;
}

