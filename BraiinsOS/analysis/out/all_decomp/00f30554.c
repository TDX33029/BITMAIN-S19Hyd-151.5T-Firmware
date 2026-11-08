// FUN_00f30554 @ 00f30554 size=316 calls_out=1 calls_in=8
// strings: 

void FUN_00f30554(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar10 = (undefined4 *)param_1[1];
  puVar9 = (undefined4 *)*param_1;
  while (puVar3 = puVar9, puVar3 != puVar10) {
    iVar5 = puVar3[1];
    puVar9 = puVar3 + 5;
    puVar7 = (undefined1 *)*puVar3;
    *param_1 = puVar9;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)((int)puVar3 + 0x12) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    iVar5 = puVar3[3];
    if (iVar5 != 0) {
      puVar1 = (undefined4 *)puVar3[2];
      puVar3 = puVar1;
      do {
        iVar4 = puVar3[1];
        if (iVar4 != 0) {
          puVar7 = (undefined1 *)*puVar3;
          do {
            *puVar7 = 0;
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + 1;
          } while (iVar4 != 0);
        }
        iVar4 = puVar3[3];
        if (iVar4 != 0) {
          puVar7 = (undefined1 *)puVar3[2];
          do {
            *puVar7 = 0;
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + 1;
          } while (iVar4 != 0);
        }
        if ((undefined1 *)puVar3[4] != (undefined1 *)0x0) {
          puVar7 = (undefined1 *)puVar3[4];
          for (iVar4 = puVar3[5]; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          iVar4 = puVar3[4];
          iVar6 = puVar3[5];
          puVar3[4] = 0;
          if ((iVar4 != 0) && (iVar6 != 0)) {
            iVar8 = 0;
            do {
              *(undefined1 *)(iVar4 + iVar8) = 0;
              iVar8 = iVar8 + 1;
            } while (iVar6 != iVar8);
            thunk_FUN_016d3fb4();
          }
        }
        puVar2 = puVar3 + 6;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x11) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0;
        *(undefined1 *)((int)puVar3 + 0x13) = 0;
        *(undefined1 *)(puVar3 + 5) = 0;
        *(undefined1 *)((int)puVar3 + 0x15) = 0;
        *(undefined1 *)((int)puVar3 + 0x16) = 0;
        *(undefined1 *)((int)puVar3 + 0x17) = 0;
        puVar3[4] = 0;
        puVar3[5] = puVar2;
        puVar3 = puVar2;
      } while (puVar2 != puVar1 + iVar5 * 6);
    }
  }
  return;
}

