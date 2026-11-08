// FUN_0156b670 @ 0156b670 size=352 calls_out=4 calls_in=0
// strings: 

void FUN_0156b670(undefined4 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 uStack_25;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x20,&DAT_018a7f24);
  }
  iVar7 = param_1[4];
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar3 = *param_1;
  uVar11 = (**(code **)(iVar7 + 8))(param_2,uVar2,0x10);
  if ((int)uVar11 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018a8f2c,&DAT_018a8fd8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x28);
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  *(undefined8 *)(puVar1 + 7) = uVar11;
  puVar1[9] = iVar7;
  *puVar1 = uVar3;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = uVar6;
  return;
}

