// FUN_01a70d98 @ 01a70d98 size=436 calls_out=6 calls_in=2
// strings: 

void FUN_01a70d98(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_58;
  int local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  
  local_50 = 0;
  local_54 = 1;
  local_58 = (undefined4 *)0x0;
  FUN_0132b898(&local_58,0,0x23,1,1);
  iVar1 = local_50;
  FUN_01bed4e2(local_54 + local_50,&DAT_004c19a8,0x23);
  local_50 = iVar1 + 0x23;
  puVar2 = *(undefined4 **)(param_2 + 4);
  if (*(int *)(param_2 + 8) != 0) {
    puVar5 = puVar2 + *(int *)(param_2 + 8) * 4;
    do {
      local_48 = *puVar2;
      local_44 = puVar2[1];
      local_40 = puVar2[2];
      uStack_3c = puVar2[3];
      local_2c = &LAB_018a13b8;
      local_34 = &LAB_018a13b8;
      local_38 = &local_48;
      local_30 = &local_40;
      iVar1 = FUN_012fa178(&local_58,&DAT_01d2d1f4,&DAT_0058aaf1,&local_38);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_38,&DAT_01d2d21c,&DAT_01d30334);
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar5);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  if ((uint)((int)local_58 - local_50) < uVar4) {
    FUN_0132b898(&local_58,local_50,uVar4,1,1);
  }
  iVar1 = local_50;
  FUN_01bed4e2(local_54 + local_50,uVar3,uVar4);
  local_50 = iVar1 + uVar4;
  local_38 = local_58;
  local_34 = (undefined1 *)local_54;
  local_30 = (undefined4 *)local_50;
  FUN_01a70fd4(param_1,0xd);
  FUN_01a70fa0(param_2);
  return;
}

