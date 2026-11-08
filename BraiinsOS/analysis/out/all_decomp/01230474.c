// FUN_01230474 @ 01230474 size=320 calls_out=4 calls_in=1
// strings: 

void FUN_01230474(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),&DAT_003e8611
                       ,6);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *(undefined1 *)(puVar1 + 1) = 0x6c;
  *puVar1 = 0x69616d65;
  local_40 = CONCAT31(local_40._1_3_,3);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = local_40;
  puVar2[3] = 5;
  puVar4 = puVar2 + 4;
  *puVar4 = puVar1;
  puVar2[5] = 5;
  puVar2[6] = uStack_30;
  puVar2[7] = uStack_2c;
  iVar5 = *(int *)(param_2 + 0x48);
  if (*(char *)(iVar5 + 0x1d) != '\x02') {
    puVar4 = (undefined4 *)(uint)*(ushort *)(iVar5 + 0x1e);
    local_4c = *(undefined1 *)(iVar5 + 0x1c);
    local_50 = *(undefined4 *)(iVar5 + 0x18);
  }
  local_38 = CONCAT22((short)puVar4,CONCAT11(*(char *)(iVar5 + 0x1d),local_4c));
  puVar3 = (undefined8 *)thunk_FUN_016d4a50(0x14);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar3 = uVar6;
  *(undefined4 **)(puVar3 + 1) = puVar2;
  *(undefined4 *)((int)puVar3 + 0xc) = local_50;
  *(undefined4 *)(puVar3 + 2) = local_38;
  *param_1 = (int)puVar3;
  param_1[1] = (int)&DAT_0188a798;
  return;
}

