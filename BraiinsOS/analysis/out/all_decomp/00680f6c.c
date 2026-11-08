// FUN_00680f6c @ 00680f6c size=544 calls_out=5 calls_in=1
// strings: 

void FUN_00680f6c(uint *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar10 = *(int *)(param_2 + 0x60);
  if (iVar10 != 0) {
    puVar12 = *(undefined4 **)(param_2 + 100);
    (*(code *)puVar12[3])(&local_40,iVar10);
    if (local_40 == 3) {
      if ((*(char *)(param_2 + 0x68) == '\0') ||
         (iVar10 = FUN_01657fc4(param_2,*param_3), iVar10 != 0)) {
        *param_1 = 4;
        return;
      }
      *param_1 = 2;
      *(undefined1 *)(param_2 + 0x68) = 0;
      return;
    }
    local_58 = local_40;
    local_54 = local_3c;
    local_50 = uStack_38;
    uStack_4c = uStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    if (local_40 != 2) {
      puVar1 = (uint *)((uint)&local_58 | 4);
      uVar4 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar11 = puVar1[4];
      local_3c = uVar4;
      uStack_38 = uVar6;
      uStack_34 = uVar7;
      uStack_30 = uVar8;
      uStack_2c = uVar11;
      FUN_0165a798(&local_58);
      uVar9 = *(uint *)(param_2 + 0x54);
      uVar5 = local_58 + *(uint *)(param_2 + 0x50);
      uVar3 = local_54 + uVar9 + (uint)CARRY4(local_58,*(uint *)(param_2 + 0x50));
      if ((int)uVar9 < 0 != (int)((local_54 ^ uVar3) & ~(local_54 ^ uVar9)) < 0) {
LAB_00681128:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar2 = (undefined1 *)(*(int *)(param_2 + 0x58) + local_50);
      if (puVar2 < &DAT_3b9aca00) {
        uVar9 = uVar3;
      }
      else {
        bVar13 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        uVar9 = uVar3 + bVar13;
        if ((int)((uVar3 ^ uVar9) & ~uVar3) < 0) goto LAB_00681128;
        uVar3 = 0xc4653600;
        puVar2 = puVar2 + -1000000000;
      }
      FUN_01653364(param_2,uVar3,uVar5,uVar9,puVar2,1);
      *(undefined1 *)(param_2 + 0x68) = 1;
      local_58 = uVar4;
      local_54 = uVar6;
      local_50 = uVar7;
      uStack_4c = uVar8;
      uStack_48 = uVar11;
      goto LAB_00681068;
    }
    if ((code *)*puVar12 != (code *)0x0) {
      (*(code *)*puVar12)(iVar10);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    *(undefined4 *)(param_2 + 0x60) = 0;
  }
  local_40 = 3;
LAB_00681068:
  *param_1 = local_40;
  param_1[1] = local_58;
  param_1[2] = local_54;
  param_1[3] = local_50;
  param_1[4] = uStack_4c;
  param_1[5] = uStack_48;
  return;
}

