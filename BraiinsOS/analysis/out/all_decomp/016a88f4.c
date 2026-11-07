// FUN_016a88f4 @ 016a88f4 size=288 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016a88f4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  
  if (((*(int *)(param_1 + 0x1c) == -0x80000000) ||
      ((uVar4 = 0, *(uint *)(param_1 + 0x24) <= *(uint *)(param_2 + 0x18) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x14)),
       iVar1 == 0)))) &&
     ((*(int *)(param_1 + 0x10) == -0x80000000 ||
      ((uVar4 = 0, *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x10) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0xc)),
       iVar1 == 0)))))) {
    uVar4 = 1;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar8 = *(int *)(param_2 + 0x1c);
      iVar9 = *(int *)(param_2 + 0x20);
      iVar6 = *(int *)(param_1 + 8);
      iVar1 = iVar6 + *(int *)(param_1 + 0xc) * 0x20;
      do {
        if (iVar9 == 0) {
          return 0;
        }
        uVar10 = *(undefined4 *)(iVar6 + 0x14);
        iVar11 = *(int *)(iVar6 + 0x18);
        iVar7 = 0;
        iVar5 = iVar9 << 3;
        while ((puVar2 = (undefined4 *)(iVar8 + iVar7 * 8), puVar2[1] != iVar11 ||
               (iVar3 = thunk_FUN_016dd50a(*puVar2,uVar10,iVar11), iVar3 != 0))) {
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -8;
          if (iVar5 == 0) {
            return 0;
          }
        }
        iVar6 = iVar6 + 0x20;
      } while (iVar6 != iVar1);
    }
  }
  return uVar4;
}

