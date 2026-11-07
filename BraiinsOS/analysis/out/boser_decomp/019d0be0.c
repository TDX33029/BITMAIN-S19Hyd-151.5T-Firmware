// FUN_019d0be0 @ 019d0be0 size=144 calls_out=4 calls_in=12
// strings: 

void FUN_019d0be0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_20 [16];
  
  FUN_01aae138(auStack_20);
  iVar2 = FUN_0164c1f0(auStack_20);
  if (iVar2 == 0) {
    bVar1 = 2;
  }
  else {
    puVar3 = (undefined *)FUN_0164c1f0(auStack_20);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_01d4ee38;
      DataMemoryBarrier(0xb);
      if (DAT_01d4ee80 != 2) {
        FUN_0164c478();
      }
    }
    bVar1 = puVar3[0x29];
    uVar4 = *(undefined4 *)(puVar3 + 0x14);
    uVar5 = *(undefined4 *)(puVar3 + 0x18);
    uVar6 = *(undefined4 *)(puVar3 + 0x1c);
    uVar7 = *(undefined4 *)(puVar3 + 0x20);
    uVar8 = *(undefined4 *)(puVar3 + 0x24);
    *param_1 = *(undefined4 *)(puVar3 + 0x10);
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    bVar1 = ~bVar1 & 1;
  }
  *(byte *)(param_1 + 6) = bVar1;
  FUN_0164c100(auStack_20);
  return;
}

