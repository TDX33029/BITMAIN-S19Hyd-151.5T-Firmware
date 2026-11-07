// FUN_00df0110 @ 00df0110 size=356 calls_out=6 calls_in=3
// strings: 

void FUN_00df0110(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined1 auStack_38 [20];
  
  do {
    uVar4 = FUN_0195e3b0(param_2);
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 0) {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
  } while ((*(int *)(iVar1 + 8) != *(int *)(param_2[9] + 8)) ||
          (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_2[9] + 4)),
          iVar1 != 0));
  iVar1 = thunk_FUN_01be5118(0x40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x40);
  }
  FUN_01bed4e2(iVar1,(int)uVar4,0x10);
  iVar3 = 1;
  local_68 = 1;
  local_70 = 4;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  uStack_50 = param_2[4];
  local_4c = param_2[5];
  uStack_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
  local_3c = param_2[9];
  local_6c = iVar1;
  while( true ) {
    uVar4 = FUN_0195e3b0(&local_60);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 0) break;
    if ((*(int *)(iVar2 + 8) == *(int *)(local_3c + 8)) &&
       (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(local_3c + 4)),
       iVar2 == 0)) {
      FUN_01bed4e2(auStack_38,(int)uVar4,0x10);
      if (iVar3 == local_70) {
        FUN_016092cc(&local_70,iVar3,1,1,0x10);
        iVar1 = local_6c;
      }
      FUN_01bed4e2(iVar1 + iVar3 * 0x10,auStack_38,0x10);
      iVar3 = iVar3 + 1;
      local_68 = iVar3;
    }
  }
  *param_1 = local_70;
  param_1[1] = local_6c;
  param_1[2] = local_68;
  return;
}

