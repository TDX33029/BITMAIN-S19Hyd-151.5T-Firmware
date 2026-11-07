// FUN_01ab4e64 @ 01ab4e64 size=256 calls_out=4 calls_in=2
// strings: 

void FUN_01ab4e64(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char local_308;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 auStack_2f0 [708];
  undefined2 local_2c;
  char local_2a;
  
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      pcVar6 = (char *)(param_1 + iVar5);
      uVar2 = *(undefined4 *)(pcVar6 + 4);
      uVar3 = *(undefined4 *)(pcVar6 + 8);
      uVar4 = *(undefined4 *)(pcVar6 + 0xc);
      local_308 = (char)*(undefined4 *)pcVar6;
      *(undefined1 *)(param_1 + iVar5) = 7;
      if (local_308 == '\x06') {
        FUN_01bed4e2(&local_2f8,uVar2,0x2c8);
        uVar4 = local_2f4;
        uVar3 = local_2f8;
        FUN_01abf5d4(auStack_2f0);
        thunk_FUN_01be4678(uVar2);
        if (*pcVar6 != '\a') {
          FUN_01ab4760(pcVar6);
        }
        puVar1 = (undefined1 *)(param_1 + iVar5);
        *puVar1 = 5;
        *(undefined4 *)(puVar1 + 4) = uVar3;
        *(undefined2 *)(puVar1 + 1) = local_2c;
        puVar1[3] = local_2a;
        *(undefined4 *)(puVar1 + 8) = uVar4;
      }
      else {
        pcVar6 = (char *)(param_1 + iVar5);
        *pcVar6 = local_308;
        *(undefined4 *)(pcVar6 + 4) = uVar2;
        *(undefined4 *)(pcVar6 + 8) = uVar3;
        *(undefined4 *)(pcVar6 + 0xc) = uVar4;
        local_2a = pcVar6[3];
        local_2c = *(undefined2 *)(pcVar6 + 1);
      }
      iVar5 = iVar5 + 0x20;
    } while (param_2 * 0x20 != iVar5);
  }
  return;
}

