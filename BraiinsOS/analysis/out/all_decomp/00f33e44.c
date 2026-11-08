// FUN_00f33e44 @ 00f33e44 size=228 calls_out=3 calls_in=2
// strings: 

void FUN_00f33e44(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_28;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)*param_1;
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    iVar6 = param_1[2];
    iVar3 = 0;
    do {
      puVar5 = (ushort *)(iVar6 + iVar3);
      if (4 < *puVar5) {
        puVar5[1] = 0;
      }
      iVar4 = *(int *)(puVar5 + 2);
      if (iVar4 != 0) {
        iVar7 = *(int *)(puVar5 + 4);
        local_28 = iVar4 + iVar7 * 0x14;
        local_2c = iVar4;
        FUN_00f30554(&local_2c);
        puVar5[2] = 0;
        puVar5[3] = 0;
        FUN_00f2c6d0(iVar4,iVar7);
      }
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
      *(undefined1 *)((int)puVar5 + 7) = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      *(undefined1 *)((int)puVar5 + 0xb) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(ushort **)(puVar5 + 4) = puVar5 + 6;
      FUN_00f36024();
      iVar3 = iVar3 + 0x14;
    } while (iVar1 * 0x14 != iVar3);
  }
  return;
}

