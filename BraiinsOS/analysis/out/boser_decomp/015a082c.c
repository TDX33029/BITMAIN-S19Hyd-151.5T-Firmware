// FUN_015a082c @ 015a082c size=320 calls_out=4 calls_in=1
// strings: 

void FUN_015a082c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),&DAT_004e94a9
                       ,6);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined1 *)(puVar1 + 1) = 0x6c;
  *puVar1 = 0x69616d65;
  local_40 = CONCAT31(local_40._1_3_,3);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = local_40;
  puVar2[3] = 5;
  puVar2[4] = puVar1;
  puVar2[5] = 5;
  puVar2[6] = uStack_30;
  puVar2[7] = uStack_2c;
  uVar4 = *(uint *)(param_2 + 0x48);
  if (*(char *)(uVar4 + 0x1d) == '\x02') {
    uVar5 = 2;
  }
  else {
    param_2 = *(int *)(uVar4 + 0x18);
    uVar4 = *(uint *)(uVar4 + 0x1c);
    puVar1 = (undefined4 *)(uVar4 >> 0x10);
    uVar5 = uVar4 >> 8;
  }
  puVar3 = (undefined8 *)thunk_FUN_01be5118(0x14);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar3 = uVar6;
  *(undefined4 **)(puVar3 + 1) = puVar2;
  *(int *)((int)puVar3 + 0xc) = param_2;
  *(uint *)(puVar3 + 2) = (int)puVar1 << 0x10 | (uVar5 & 0xff) << 8 | uVar4 & 0xff;
  *param_1 = (int)puVar3;
  param_1[1] = (int)&DAT_01cfc3b0;
  return;
}

