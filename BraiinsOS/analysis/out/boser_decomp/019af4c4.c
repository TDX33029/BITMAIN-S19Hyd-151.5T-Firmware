// FUN_019af4c4 @ 019af4c4 size=476 calls_out=8 calls_in=7
// strings: <string-with-nul>

void FUN_019af4c4(undefined4 *param_1,char *param_2,uint param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  int local_38;
  int *local_34;
  undefined4 local_30;
  
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
    if (*param_2 != '/') {
      if (param_3 < 8) {
        pcVar2 = param_2;
        uVar5 = param_3;
        do {
          uVar5 = uVar5 - 1;
          uVar6 = *pcVar2 == '/';
          if (*pcVar2 == '/') break;
          pcVar2 = pcVar2 + 1;
        } while (uVar5 != 0);
      }
      else {
        iVar3 = FUN_01307168(0x2f);
        uVar6 = iVar3 == 1;
      }
    }
  }
  FUN_00666814(&local_38,param_2,param_3);
  uVar8 = CONCAT44(local_30,local_34);
  if (local_38 == -0x80000000) {
    uVar1 = 0;
  }
  else {
    uVar8 = FUN_00664758("<string-with-nul>",0x12);
    if (local_38 != 0) {
      thunk_FUN_01be4678(local_34);
    }
    uVar1 = 1;
  }
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  piVar4 = (int *)thunk_FUN_01be5118(8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,8);
  }
  iVar7 = 1;
  *piVar4 = 0;
  local_30 = 1;
  local_38 = 2;
  local_34 = piVar4;
  if ((iVar3 != 0) && (iVar7 = FUN_01298504(iVar3,1), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar3);
  }
  FUN_01bed4e2(iVar7,(int)uVar8,iVar3);
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  param_1[0xc] = local_38;
  param_1[0xd] = local_34;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  *piVar4 = iVar7;
  piVar4[1] = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = uVar6;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x16) = uVar8;
  param_1[0x18] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[0x1c] = 0;
  param_1[0x10] = 4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[6] = 5;
  param_1[8] = 5;
  param_1[10] = 5;
  *(undefined2 *)((int)param_1 + 0x79) = 0;
  param_1[4] = 0;
  return;
}

