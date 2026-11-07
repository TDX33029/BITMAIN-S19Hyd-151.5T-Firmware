// FUN_016a8a14 @ 016a8a14 size=268 calls_out=4 calls_in=2
// strings: 

void FUN_016a8a14(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 auStack_2f0 [708];
  undefined2 local_2c;
  char local_2a;
  
  if (param_2 != 0) {
    iVar8 = 0;
    do {
      while( true ) {
        puVar9 = (uint *)(param_1 + iVar8);
        uVar3 = *puVar9;
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *(char *)puVar9 = '\a';
        if ((uVar3 & 0xff) != 6) break;
        FUN_016dd1aa(&local_2f8,uVar5,0x2c8);
        uVar2 = local_2f4;
        uVar1 = local_2f8;
        FUN_016a25b8(auStack_2f0);
        thunk_FUN_016d3fb4(uVar5);
        if ((char)*puVar9 != '\a') {
          FUN_0169d780(puVar9);
        }
        *(char *)((int)puVar9 + 3) = local_2a;
        *(undefined2 *)((int)puVar9 + 1) = local_2c;
        puVar4 = (undefined1 *)(param_1 + iVar8);
        *puVar4 = 5;
        *(undefined4 *)(puVar4 + 4) = uVar1;
        *(undefined4 *)(puVar4 + 8) = uVar2;
        iVar8 = iVar8 + 0x20;
        if (param_2 * 0x20 == iVar8) {
          return;
        }
      }
      local_2c = *(undefined2 *)((int)puVar9 + 1);
      local_2a = *(char *)((int)puVar9 + 3);
      puVar4 = (undefined1 *)(param_1 + iVar8);
      *puVar4 = (char)uVar3;
      *(uint *)(puVar4 + 4) = uVar5;
      *(uint *)(puVar4 + 8) = uVar6;
      *(uint *)(puVar4 + 0xc) = uVar7;
      iVar8 = iVar8 + 0x20;
    } while (param_2 * 0x20 != iVar8);
  }
  return;
}

