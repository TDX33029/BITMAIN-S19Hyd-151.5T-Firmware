// FUN_016d9ca4 @ 016d9ca4 size=298 calls_out=15 calls_in=1
// strings: 

int FUN_016d9ca4(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined4 *local_b0;
  undefined1 auStack_a8 [132];
  
  FUN_016de150(0xffffffff);
  FUN_016da498(auStack_a8);
  cVar1 = DAT_018ddb0b;
  puVar2 = (undefined4 *)FUN_016d2bc8();
  if (cVar1 < '\x01') {
    iVar3 = FUN_016d9b18();
    uVar10 = *puVar2;
    bVar9 = iVar3 == 0;
  }
  else {
    FUN_016d9ca0(0xffffffff);
    FUN_016debc8(0xffffffff);
    FUN_016d9aac(0xffffffff);
    puVar7 = (undefined4 *)&UNK_018b5bc0;
    FUN_016de12c();
    puVar8 = (undefined4 *)&UNK_018b5bc0;
    piVar5 = &DAT_00427d94;
    local_b0 = &DAT_00427d94;
    while( true ) {
      if (*piVar5 != 0) {
        FUN_016ddcc0();
      }
      if (puVar8 == (undefined4 *)&UNK_018b5be4) break;
      puVar8 = puVar8 + 1;
      piVar5 = (int *)*puVar8;
    }
    FUN_016d4104(0xffffffff);
    FUN_016de2d4();
    iVar4 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
    iVar6 = *(int *)(iVar4 + -0x68);
    iVar3 = FUN_016d9b18();
    uVar10 = *puVar2;
    if (iVar3 == 0) {
      for (; iVar6 != iVar4 + -0x70; iVar6 = *(int *)(iVar6 + 8)) {
        *(undefined4 *)(iVar6 + 0x10) = 0xffffffff;
      }
      DAT_018de610 = 0;
      DAT_018de614 = 0;
    }
    FUN_016de338();
    bVar9 = iVar3 == 0;
    FUN_016d4104(bVar9);
    while( true ) {
      if ((undefined4 *)*local_b0 != (undefined4 *)0x0) {
        if (iVar3 == 0) {
          *(undefined4 *)*local_b0 = 0;
        }
        else {
          FUN_016dddc0();
        }
      }
      if (puVar7 == (undefined4 *)&UNK_018b5be4) break;
      puVar7 = puVar7 + 1;
      local_b0 = (undefined4 *)*puVar7;
    }
    FUN_016de144();
    if (iVar3 != 0) {
      FUN_016d9aac(0);
    }
    FUN_016debc8(bVar9);
    FUN_016d9ca0(bVar9);
  }
  FUN_016da4b4(auStack_a8);
  FUN_016de150(bVar9);
  if (iVar3 < 0) {
    *puVar2 = uVar10;
  }
  return iVar3;
}

