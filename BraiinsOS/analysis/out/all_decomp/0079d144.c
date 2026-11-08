// FUN_0079d144 @ 0079d144 size=292 calls_out=5 calls_in=2
// strings: 

void FUN_0079d144(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_300 [96];
  undefined1 auStack_2a0 [636];
  
  uVar4 = *param_4;
  uVar3 = param_4[1];
  uVar2 = param_4[2];
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  puVar1[4] = uVar2;
  FUN_00702a70(auStack_300);
  FUN_006f853c(auStack_2a0);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = *param_5;
  uVar5 = param_5[1];
  *(undefined4 *)(param_1 + 0x2f8) = *param_3;
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  *(undefined4 *)(param_1 + 0x300) = uVar3;
  *(undefined4 *)(param_1 + 0x304) = param_2;
  uVar2 = param_5[2];
  *(undefined4 **)(param_1 + 0x308) = puVar1;
  FUN_016dd1aa(param_1 + 0x270,auStack_300,0x60);
  FUN_016dd1aa(param_1,auStack_2a0,0x270);
  *(undefined4 *)(param_1 + 0x31c) = 4;
  *(undefined4 *)(param_1 + 0x340) = 4;
  *(undefined4 *)(param_1 + 0x2e0) = 4;
  *(undefined1 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined1 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = uVar2;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = uVar4;
  *(undefined4 *)(param_1 + 0x2f4) = uVar5;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  return;
}

