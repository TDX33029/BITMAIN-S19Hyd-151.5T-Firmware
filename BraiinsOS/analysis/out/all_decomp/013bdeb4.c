// FUN_013bdeb4 @ 013bdeb4 size=348 calls_out=5 calls_in=1
// strings: 

void FUN_013bdeb4(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8 [100];
  
  local_1b8 = 0;
  local_1bc = 0xfa;
  local_1c0 = 100;
  local_1c4 = 10;
  local_1c8 = 10;
  FUN_013e8d04(&local_1b4,&local_1c8,param_2);
  iVar5 = local_1b4;
  if (local_1b4 != -0x80000000) {
    iVar5 = local_1ac;
  }
  if (local_1b4 != -0x80000000 && iVar5 != 0) {
    iVar5 = iVar5 << 4;
    puVar3 = (undefined1 *)(local_1b0 + 0xc);
    do {
      *puVar3 = 0;
      iVar5 = iVar5 + -0x10;
      puVar3 = puVar3 + 0x10;
    } while (iVar5 != 0);
  }
  FUN_013e8278(&local_1b4,1);
  if (local_1b4 == -0x80000000) {
    *(undefined1 *)(param_1 + 0xc) = 2;
    return;
  }
  FUN_013c9fdc(local_1a8,local_1b0,local_1ac);
  if (local_1a8[0] == -0x7ffffff9) {
    *(undefined1 *)(param_1 + 0xc) = 2;
  }
  else {
    if (local_1ac == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(local_1b0 + 8);
      if (local_1ac != 1) {
        uVar2 = local_1ac - 1U & 0xfffffff;
        puVar1 = (uint *)(local_1b0 + 0x18);
        do {
          if (uVar4 <= *puVar1) {
            uVar4 = *puVar1;
          }
          uVar2 = uVar2 - 1;
          puVar1 = puVar1 + 4;
        } while (uVar2 != 0);
      }
    }
    FUN_013cbcc8(param_1,local_1a8,uVar4);
  }
  for (iVar5 = 0; local_1ac != iVar5; iVar5 = iVar5 + 1) {
    if (*(int *)(local_1b0 + iVar5 * 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(local_1b0 + iVar5 * 0x10 + 4));
    }
  }
  if (local_1b4 != 0) {
    thunk_FUN_016d3fb4(local_1b0);
  }
  return;
}

