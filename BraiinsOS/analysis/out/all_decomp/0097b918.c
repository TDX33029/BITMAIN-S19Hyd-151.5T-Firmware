// FUN_0097b918 @ 0097b918 size=588 calls_out=3 calls_in=1
// strings: dummy-platform-nameWorkerBitmain Antminer S17

void FUN_0097b918(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xe);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xe);
  }
  *(undefined2 *)(puVar1 + 3) = 0x7265;
  puVar1[2] = 0x6e696d73;
  puVar1[1] = 0x6f622d79;
  *puVar1 = &DAT_6d6d7564;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xe);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1);
  }
  *(undefined2 *)(puVar2 + 3) = 0x6c65;
  puVar2[2] = 0x646f6d2d;
  puVar2[1] = 0x77682d79;
  *puVar2 = &DAT_6d6d7564;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xe);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xe);
  }
  *(undefined2 *)(puVar3 + 3) = 0x6c65;
  puVar3[2] = 0x646f6d2d;
  puVar3[1] = 0x77682d79;
  *puVar3 = &DAT_6d6d7564;
  iVar4 = thunk_FUN_016d4a50(0x13);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x13);
  }
  FUN_016dd1aa(iVar4,"dummy-platform-nameWorkerBitmain Antminer S17",0x13);
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xf);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xf);
  }
  *(undefined4 *)((int)puVar5 + 0xb) = 0x64692d65;
  *puVar5 = &DAT_6d6d7564;
  puVar5[2] = 0x65636976;
  puVar5[1] = 0x65642d79;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xe);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *(undefined2 *)(puVar6 + 3) = 0x6564;
  puVar6[2] = 0x6f6d2d73;
  puVar6[1] = 0x6f622d79;
  param_1[0xb] = 0xf;
  param_1[0xc] = 0xe;
  param_1[0xd] = puVar6;
  param_1[0xe] = 0xe;
  param_1[0xf] = 0xe;
  *puVar6 = &DAT_6d6d7564;
  param_1[1] = puVar1;
  param_1[2] = 0xe;
  param_1[3] = 0xe;
  param_1[0x10] = puVar3;
  param_1[0x11] = 0xe;
  param_1[8] = 0x13;
  param_1[9] = 0xf;
  param_1[10] = puVar5;
  *param_1 = 0xe;
  param_1[4] = puVar2;
  param_1[5] = 0xe;
  param_1[6] = 0x13;
  param_1[7] = iVar4;
  return;
}

