// FUN_012a7aa8 @ 012a7aa8 size=576 calls_out=12 calls_in=2
// strings: 

void FUN_012a7aa8(int *param_1,int param_2)

{
  undefined4 **ppuVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int **local_70;
  int *local_6c;
  undefined4 **local_68;
  undefined1 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 **local_50;
  int *local_4c;
  undefined4 **local_48;
  int local_40;
  int local_3c;
  int iStack_38;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_012a7da0(&local_7c);
  local_60 = local_78;
  local_5c = local_78 + local_74 * 8;
  local_58 = param_2;
  FUN_01298a14(&local_40,&local_60);
  if (local_40 == -0x80000000) {
    local_68 = (undefined4 **)0x0;
    local_6c = (int *)&SUB_00000004;
    local_70 = (undefined4 **)0x0;
  }
  else {
    piVar2 = (int *)thunk_FUN_01be5118(0x30);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    *piVar2 = local_40;
    piVar2[1] = local_3c;
    piVar2[2] = iStack_38;
    local_50 = (undefined4 **)0x4;
    local_48 = (undefined4 **)0x1;
    iVar5 = 0xc;
    local_30 = local_60;
    local_2c = local_5c;
    local_28 = local_58;
    local_4c = piVar2;
    while (ppuVar1 = local_48, FUN_01298a14(&local_70,&local_30),
          local_70 != (undefined4 **)0x80000000) {
      if (ppuVar1 == local_50) {
        FUN_006520b4(&local_50,ppuVar1,1,4,0xc);
        piVar2 = local_4c;
      }
      piVar3 = (int *)((int)piVar2 + iVar5);
      local_48 = (undefined4 **)((int)ppuVar1 + 1);
      iVar5 = iVar5 + 0xc;
      *piVar3 = (int)local_70;
      piVar3[1] = (int)local_6c;
      piVar3[2] = (int)local_68;
    }
    local_70 = local_50;
    local_6c = local_4c;
    local_68 = local_48;
  }
  FUN_012b345c(&local_40,local_6c,local_68,"|",1);
  FUN_006a41c0(&local_70);
  FUN_0134aee0(local_7c,local_78,4,8);
  puVar4 = (undefined *)FUN_012b9138(param_2 + 0x74);
  local_64 = &LAB_00632348;
  puVar6 = &DAT_00420598;
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar4;
  }
  local_50 = (undefined4 **)(puVar6 + 0x38);
  local_28 = 0;
  local_30 = 0;
  local_70 = (int **)&local_50;
  local_2c = 1;
  local_6c = (int *)&DAT_012b5b4c;
  local_68 = (undefined4 **)&local_40;
  iVar5 = FUN_012fa178(&local_30,&DAT_01ce25b4,&DAT_0041fdb9,&local_70);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01ce23f4,&DAT_01ce237c);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  FUN_0134bd64(local_40,local_3c);
  return;
}

