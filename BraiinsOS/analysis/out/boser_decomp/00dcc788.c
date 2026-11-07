// FUN_00dcc788 @ 00dcc788 size=468 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dcc788(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_5c;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar5 = param_2[10];
  do {
    iVar1 = FUN_006bf6e0(param_2);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    iVar2 = *(int *)(iVar1 + 0x10);
    if (-1 < iVar2) {
      iVar2 = 2;
    }
    uVar7 = *(undefined4 *)(iVar1 + *(int *)(&DAT_004018e0 + iVar2 * 4));
    uVar6 = *(undefined4 *)(iVar1 + *(int *)(&DAT_004018f8 + iVar2 * 4));
    iVar2 = FUN_006e59bc(uVar5,uVar7,uVar6);
  } while (iVar2 == 0);
  uVar8 = param_2[9];
  local_5c = (undefined4 *)thunk_FUN_01be5118(0x80);
  if (local_5c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x80);
  }
  local_5c[2] = 0;
  local_5c[6] = uVar8;
  local_5c[7] = uVar5;
  local_60 = 4;
  *local_5c = uVar7;
  local_5c[1] = uVar6;
  local_5c[3] = iVar1;
  local_58 = 1;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = param_2[4];
  local_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  uStack_30 = param_2[8];
  local_2c = param_2[9];
  local_28 = param_2[10];
  uVar5 = local_28;
  iVar1 = local_58;
  local_68 = local_5c;
  while (iVar2 = FUN_006bf6e0(&local_50), iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (-1 < iVar3) {
      iVar3 = 2;
    }
    uVar8 = *(undefined4 *)(iVar2 + *(int *)(&DAT_004018e0 + iVar3 * 4));
    uVar7 = *(undefined4 *)(iVar2 + *(int *)(&DAT_004018f8 + iVar3 * 4));
    iVar3 = FUN_006e59bc(uVar5,uVar8,uVar7);
    uVar6 = local_2c;
    if (iVar3 != 0) {
      if (iVar1 == local_60) {
        FUN_0132b898(&local_60,iVar1,1,4,0x20);
        local_68 = local_5c;
      }
      puVar4 = local_68 + iVar1 * 8;
      *puVar4 = uVar8;
      local_58 = iVar1 + 1;
      puVar4[6] = uVar6;
      puVar4[7] = uVar5;
      puVar4[1] = uVar7;
      puVar4[2] = 0;
      puVar4[3] = iVar2;
      uVar5 = local_28;
      iVar1 = local_58;
    }
  }
  *param_1 = local_60;
  param_1[1] = (int)local_5c;
  param_1[2] = local_58;
  return;
}

