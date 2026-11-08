// FUN_013d8d6c @ 013d8d6c size=564 calls_out=5 calls_in=2
// strings: 

void FUN_013d8d6c(undefined4 *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_f8 [3];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  int local_84;
  undefined1 auStack_80 [92];
  
  if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894bd8);
  }
  iVar3 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (iVar3 != 0) {
    *(int *)(param_2 + 0x2c) = iVar3 + -1;
    piVar5 = (int *)(*(int *)(param_2 + 0x28) + (iVar3 + -1) * 0x98);
    if (*piVar5 == 0x110009) {
      piVar6 = piVar5 + 1;
      iVar3 = piVar5[0x17];
      FUN_016dd1aa(local_f8,piVar6,0x58);
      if (local_f8[0] != 0x110008) {
        iVar3 = 2;
        if (0x10ffff < local_f8[0]) {
          iVar3 = local_f8[0] - 0x110000;
        }
                    /* WARNING: Could not recover jumptable at 0x013d8e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_013d8e5c + *(int *)(&DAT_013d8e5c + iVar3 * 4)))();
        return;
      }
      uVar4 = *param_3;
      if (uVar4 != 0x110008) {
        iVar3 = 2;
        if (0x10ffff < uVar4) {
          iVar3 = uVar4 - 0x110000;
        }
                    /* WARNING: Could not recover jumptable at 0x013d8f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_013d8f14 + *(int *)(&DAT_013d8f14 + iVar3 * 4)))();
        return;
      }
      uStack_94 = param_3[6];
      uStack_90 = param_3[7];
      local_8c = param_3[8];
      local_98 = local_e4;
      local_a0 = local_ec;
      local_9c = local_e8;
      FUN_016dd1aa(auStack_80,piVar6,0x58);
      iVar1 = thunk_FUN_016d4a50(0x58);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x58);
      }
      FUN_016dd1aa(iVar1,piVar6,0x58);
      local_84 = iVar1;
      FUN_016dd1aa(auStack_80,param_3,0x58);
      iVar2 = thunk_FUN_016d4a50(0x58);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x58);
      }
      FUN_016dd1aa(iVar2,param_3,0x58);
      param_1[3] = local_a0;
      param_1[4] = local_9c;
      param_1[5] = local_98;
      param_1[6] = uStack_94;
      param_1[7] = uStack_90;
      param_1[8] = local_8c;
      *(char *)(param_1 + 9) = (char)iVar3;
      *param_1 = 0x110008;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      *(undefined4 *)(param_2 + 0x20) = 0;
      return;
    }
    if (*piVar5 != 0x11000a) {
      *(int *)(param_2 + 0x2c) = iVar3;
      FUN_016dd1aa(param_1,param_3,0x58);
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_01894bc8);
}

