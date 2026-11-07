// FUN_016b4ab8 @ 016b4ab8 size=284 calls_out=2 calls_in=2
// strings: 

void FUN_016b4ab8(undefined4 *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_2 + 0x14);
  uVar4 = *(uint *)(param_2 + 0x130) & 0x1f;
  uVar1 = uVar5 >> uVar4;
  if (uVar1 < 0x200001) {
    iVar7 = 1 << uVar4;
    if (*(int *)(param_2 + 0xc) - uVar5 < (uint)(1 << uVar4)) {
      FUN_006520b4((int *)(param_2 + 0xc),uVar5,iVar7,8,8);
      uVar5 = *(uint *)(param_2 + 0x14);
    }
    iVar6 = *(int *)(param_2 + 0x10);
    uVar4 = uVar5 + iVar7;
    puVar3 = (undefined4 *)(iVar6 + uVar5 * 8);
    do {
      *puVar3 = 0;
      iVar7 = iVar7 + -1;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    } while (iVar7 != 0);
    *(uint *)(param_2 + 0x14) = uVar4;
    uVar5 = *(int *)(param_2 + 0x134) + (uVar1 << (*(uint *)(param_2 + 0x130) & 0x1f));
    if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,uVar4,&DAT_01d08a18);
    }
    puVar3 = (undefined4 *)(iVar6 + uVar5 * 8);
    *puVar3 = 0;
    uVar5 = *(uint *)(param_2 + 0x140);
    bVar2 = *(byte *)(param_2 + 0x13c);
    puVar3[1] = 0xfffffc00;
    if (((bVar2 & 1) == 0) || (*(int *)(param_2 + 0x20) * 4 + uVar4 * 8 <= uVar5)) {
      *param_1 = 0x30;
      param_1[1] = uVar1;
    }
    else {
      *param_1 = 0x2e;
      param_1[1] = uVar5;
    }
  }
  else {
    param_1[2] = 0x200000;
    param_1[3] = 0;
    *param_1 = 0x2b;
  }
  return;
}

