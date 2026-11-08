// FUN_00f18170 @ 00f18170 size=316 calls_out=1 calls_in=1
// strings: 

void FUN_00f18170(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (param_2 == 0) {
    return;
  }
  puVar9 = param_1 + param_2 * 5;
  do {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      puVar6 = (undefined1 *)*param_1;
      do {
        *puVar6 = 0;
        iVar1 = iVar1 + -1;
        puVar6 = puVar6 + 1;
      } while (iVar1 != 0);
    }
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)param_1[2];
      puVar4 = puVar2;
      do {
        iVar5 = puVar4[1];
        if (iVar5 != 0) {
          puVar6 = (undefined1 *)*puVar4;
          do {
            *puVar6 = 0;
            iVar5 = iVar5 + -1;
            puVar6 = puVar6 + 1;
          } while (iVar5 != 0);
        }
        iVar5 = puVar4[3];
        if (iVar5 != 0) {
          puVar6 = (undefined1 *)puVar4[2];
          do {
            *puVar6 = 0;
            iVar5 = iVar5 + -1;
            puVar6 = puVar6 + 1;
          } while (iVar5 != 0);
        }
        if ((undefined1 *)puVar4[4] != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)puVar4[4];
          for (iVar5 = puVar4[5]; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          iVar5 = puVar4[4];
          iVar7 = puVar4[5];
          puVar4[4] = 0;
          if ((iVar5 != 0) && (iVar7 != 0)) {
            iVar8 = 0;
            do {
              *(undefined1 *)(iVar5 + iVar8) = 0;
              iVar8 = iVar8 + 1;
            } while (iVar7 != iVar8);
            thunk_FUN_016d3fb4();
          }
        }
        puVar3 = puVar4 + 6;
        *(undefined1 *)(puVar4 + 4) = 0;
        *(undefined1 *)((int)puVar4 + 0x11) = 0;
        *(undefined1 *)((int)puVar4 + 0x12) = 0;
        *(undefined1 *)((int)puVar4 + 0x13) = 0;
        *(undefined1 *)(puVar4 + 5) = 0;
        *(undefined1 *)((int)puVar4 + 0x15) = 0;
        *(undefined1 *)((int)puVar4 + 0x16) = 0;
        *(undefined1 *)((int)puVar4 + 0x17) = 0;
        puVar4[4] = 0;
        puVar4[5] = puVar3;
        puVar4 = puVar3;
      } while (puVar3 != puVar2 + iVar1 * 6);
    }
    param_1 = param_1 + 5;
  } while (param_1 != puVar9);
  return;
}

