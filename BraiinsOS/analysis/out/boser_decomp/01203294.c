// FUN_01203294 @ 01203294 size=16 calls_out=1 calls_in=1
// strings: 

void FUN_01203294(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  uint *puVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined1 auStack_1c [4];
  
  puVar1 = (uint *)FUN_01209888(auStack_1c + 8);
  while( true ) {
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    iVar2 = 2;
    if ((uint)(uVar3 < 2) <= -uVar4) {
      iVar2 = uVar3 - 2;
    }
    if (iVar2 != 0) break;
    puVar1 = (uint *)0x0;
  }
  if (iVar2 == 1) {
    puVar5 = puVar1 + 2;
    if (*puVar5 == 0) {
      puVar5 = puVar1 + 4;
    }
    FUN_01139b38(*puVar5,puVar5[1]);
    return;
  }
  FUN_007af1e8(puVar1,-(uVar4 + (uVar3 >= 2)),uVar3,uVar4,unaff_r4,unaff_r5,unaff_r6);
  if (*puVar1 != 0 || puVar1[1] != 0) {
    puVar5 = puVar1 + 2;
    if (*puVar5 == 0) {
      puVar5 = puVar1 + 4;
    }
    FUN_01139b38(*puVar5,puVar5[1]);
  }
  FUN_01340e1c(puVar1[0x40e]);
  FUN_019bb7e0(puVar1[0x410],puVar1[0x411]);
  return;
}

