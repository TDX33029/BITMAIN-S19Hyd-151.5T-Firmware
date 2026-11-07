// FUN_00747784 @ 00747784 size=276 calls_out=4 calls_in=3
// strings: 

void FUN_00747784(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int local_54 [2];
  int local_4c;
  undefined4 local_48;
  uint local_44 [3];
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
LAB_007477e4:
  do {
    while( true ) {
      do {
        FUN_00a40f64(local_54,param_1);
        iVar1 = local_4c;
        iVar4 = local_54[0];
        if (local_54[0] == 0) {
          return;
        }
        iVar3 = local_54[0] + local_4c * 0xc;
        local_48 = param_1;
        if (*(int *)(iVar3 + 0x10c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x110));
        }
        puVar5 = (uint *)(iVar4 + iVar1 * 0x18);
        iVar4 = 4;
        if (1 < *puVar5) {
          iVar4 = *puVar5 - 2;
        }
      } while (iVar4 - 1U < 4);
      if (iVar4 == 0) goto LAB_0074786c;
      if (iVar4 == 5) break;
      uVar2 = puVar5[1];
      if (uVar2 == 0) {
        local_24 = 0;
      }
      else {
        local_24 = puVar5[3];
        local_38 = puVar5[2];
        local_30 = 0;
        local_44[1] = 0;
        local_44[2] = uVar2;
        local_2c = uVar2;
        local_28 = local_38;
      }
      local_44[0] = (uint)(uVar2 != 0);
      local_34 = local_44[0];
      FUN_00747784(local_44);
    }
    FUN_007bb54c(puVar5 + 1);
  } while (puVar5[1] == 0);
  goto LAB_00747878;
LAB_0074786c:
  if (puVar5[1] != 0) {
LAB_00747878:
    thunk_FUN_016d3fb4(puVar5[2]);
  }
  goto LAB_007477e4;
}

