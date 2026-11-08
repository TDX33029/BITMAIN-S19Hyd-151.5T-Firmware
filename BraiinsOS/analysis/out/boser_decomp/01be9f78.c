// FUN_01be9f78 @ 01be9f78 size=298 calls_out=15 calls_in=1
// strings: 

int FUN_01be9f78(void)

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
  
  FUN_01bee3bc(0xffffffff);
  FUN_01bea6d4(auStack_a8);
  cVar1 = DAT_01d53573;
  puVar2 = (undefined4 *)FUN_01be3244();
  if (cVar1 < '\x01') {
    iVar3 = FUN_01be9dec();
    uVar10 = *puVar2;
    bVar9 = iVar3 == 0;
  }
  else {
    FUN_01be9f74(0xffffffff);
    FUN_01beee34(0xffffffff);
    FUN_01be9d80(0xffffffff);
    puVar7 = (undefined4 *)&UNK_01d3b25c;
    FUN_01bee398();
    puVar8 = (undefined4 *)&UNK_01d3b25c;
    piVar5 = &DAT_00567404;
    local_b0 = &DAT_00567404;
    while( true ) {
      if (*piVar5 != 0) {
        FUN_01bedf2c();
      }
      if (puVar8 == (undefined4 *)&UNK_01d3b280) break;
      puVar8 = puVar8 + 1;
      piVar5 = (int *)*puVar8;
    }
    FUN_01be47c8(0xffffffff);
    FUN_01bee540();
    iVar4 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
    iVar6 = *(int *)(iVar4 + -0x68);
    iVar3 = FUN_01be9dec();
    uVar10 = *puVar2;
    if (iVar3 == 0) {
      for (; iVar6 != iVar4 + -0x70; iVar6 = *(int *)(iVar6 + 8)) {
        *(undefined4 *)(iVar6 + 0x10) = 0xffffffff;
      }
      DAT_01d54078 = 0;
      DAT_01d5407c = 0;
    }
    FUN_01bee5a4();
    bVar9 = iVar3 == 0;
    FUN_01be47c8(bVar9);
    while( true ) {
      if ((undefined4 *)*local_b0 != (undefined4 *)0x0) {
        if (iVar3 == 0) {
          *(undefined4 *)*local_b0 = 0;
        }
        else {
          FUN_01bee02c();
        }
      }
      if (puVar7 == (undefined4 *)&UNK_01d3b280) break;
      puVar7 = puVar7 + 1;
      local_b0 = (undefined4 *)*puVar7;
    }
    FUN_01bee3b0();
    if (iVar3 != 0) {
      FUN_01be9d80(0);
    }
    FUN_01beee34(bVar9);
    FUN_01be9f74(bVar9);
  }
  FUN_01bea6f0(auStack_a8);
  FUN_01bee3bc(bVar9);
  if (iVar3 < 0) {
    *puVar2 = uVar10;
  }
  return iVar3;
}

