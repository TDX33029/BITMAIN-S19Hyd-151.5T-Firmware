// FUN_016d343c @ 016d343c size=300 calls_out=4 calls_in=2
// strings: 

void FUN_016d343c(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int local_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar7 = param_2[1];
  uVar1 = *(uint *)(iVar7 + 0x1c);
  iVar4 = param_2[2];
  if (param_3 + 1U < uVar1) {
    uVar9 = *param_2;
    piVar8 = (int *)((uint)&local_68 | 4);
    do {
      piVar3 = (int *)(*(int *)(iVar7 + 0x18) + (uVar1 - 1) * 0x10);
      iVar2 = *piVar3;
      *(uint *)(iVar7 + 0x1c) = uVar1 - 1;
      if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d09ac8);
      }
      iVar5 = piVar3[2];
      iVar6 = piVar3[3];
      *piVar8 = piVar3[1];
      piVar8[1] = iVar5;
      piVar8[2] = iVar6;
      local_68 = iVar2;
      FUN_016d3594(&local_68,iVar4);
      local_78 = local_68;
      iStack_74 = local_64;
      iStack_70 = local_60;
      FUN_016d35f8(&local_68,uVar9,iVar7,&local_78);
      if (local_68 != 0x2a) {
        param_1[2] = local_60;
        param_1[3] = iStack_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = iStack_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = local_3c;
        param_1[0xc] = iStack_38;
        param_1[0xd] = iStack_34;
        param_1[0xe] = iStack_30;
        param_1[0xf] = iStack_2c;
        *param_1 = local_68;
        param_1[1] = local_64;
        return;
      }
      uVar1 = *(uint *)(iVar7 + 0x1c);
      iVar4 = local_64;
    } while (param_3 + 1U < uVar1);
  }
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004cfbd9,0xf,&DAT_01d09ad8);
  }
  FUN_016d3594(*(int *)(iVar7 + 0x18) + uVar1 * 0x10 + -0x10,iVar4);
  *param_1 = 0x2a;
  return;
}

