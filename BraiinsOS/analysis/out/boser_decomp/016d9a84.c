// FUN_016d9a84 @ 016d9a84 size=248 calls_out=5 calls_in=1
// strings: 

void FUN_016d9a84(undefined4 *param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_160 [88];
  undefined1 auStack_108 [88];
  undefined4 local_b0 [23];
  undefined1 local_54;
  
  FUN_016ebfd0(auStack_160,param_4);
  FUN_016d9bb8(auStack_108,param_2,auStack_160);
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09e18);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16d9b78);
    (*pcVar1)();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  FUN_01bed4e2((uint)local_b0 | 4,auStack_108,0x58);
  iVar2 = *(int *)(param_2 + 0x2c);
  local_b0[0] = 0x110009;
  local_54 = param_3;
  if (iVar2 == *(int *)(param_2 + 0x24)) {
    FUN_016f5348();
  }
  FUN_01bed4e2(iVar2 * 0x98 + *(int *)(param_2 + 0x28),local_b0,0x98);
  *(int *)(param_2 + 0x2c) = iVar2 + 1;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  param_1[6] = *(undefined4 *)(param_2 + 0x50);
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  param_1[3] = *(undefined4 *)(param_2 + 0x50);
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return;
}

