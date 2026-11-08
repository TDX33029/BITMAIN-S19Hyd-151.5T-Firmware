// FUN_01536210 @ 01536210 size=328 calls_out=4 calls_in=0
// strings: 

void FUN_01536210(int *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x20,&DAT_018a7f24);
  }
  iVar6 = *param_1;
  uVar7 = (**(code **)(iVar6 + 8))(param_2,uVar2,0x10);
  if ((int)uVar7 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_21,&DAT_018a7c24,&DAT_018a7a64);
  }
  puVar1 = (undefined8 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  uVar3 = *param_3;
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  *puVar1 = uVar7;
  *(int *)(puVar1 + 1) = iVar6;
  *param_2 = 0;
  *(undefined4 *)((int)puVar1 + 0xc) = uVar3;
  *(undefined4 *)(puVar1 + 2) = uVar5;
  *(undefined4 *)((int)puVar1 + 0x14) = uVar4;
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
  return;
}

