// FUN_01aa562c @ 01aa562c size=452 calls_out=6 calls_in=2
// strings: 

void FUN_01aa562c(float param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_38;
  int local_34;
  uint local_30;
  
  if (param_1 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_005310c8,0x26,&DAT_01d2e3cc);
  }
  if (1000.0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_005310ee,0x29,&DAT_01d2e3dc);
  }
  if (param_1 == 0.0) {
    iVar6 = 1;
    uVar5 = 0;
  }
  else {
    if (param_1 <= 1.0) {
      param_1 = 1.0 / param_1;
      uVar5 = 1;
    }
    else {
      param_1 = 1000.0 / param_1;
      uVar5 = 1000;
    }
    iVar6 = (int)param_1;
  }
  uVar7 = (uint)((longlong)iVar6 * 100);
  if ((int)((ulonglong)((longlong)iVar6 * 100) >> 0x20) != (int)uVar7 >> 0x1f) {
    uVar7 = iVar6 >> 0x1f ^ 0x7fffffff;
  }
  iVar3 = thunk_FUN_01be5118(0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x28);
  }
  local_40 = 0;
  local_48 = 10;
  local_44 = iVar3;
  do {
    uVar1 = local_40;
    if (local_40 == local_48) {
      FUN_019ee1a8(&local_48);
      iVar3 = local_44;
    }
    local_40 = uVar1 + 1;
    *(undefined4 *)(iVar3 + uVar1 * 4) = 0;
  } while (local_40 != 10);
  FUN_019ac130(&local_38,1);
  uVar2 = local_30;
  iVar3 = local_34;
  uVar1 = local_38;
  local_38 = local_48;
  local_34 = local_44;
  local_30 = local_40;
  if (local_40 < local_48) {
    iVar4 = FUN_01609230(&local_38,local_40,4,4);
    if (iVar4 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_40 = local_30;
  }
  *param_2 = 1;
  param_2[4] = local_34;
  param_2[5] = local_40;
  param_2[6] = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  param_2[8] = uVar1;
  param_2[9] = iVar3;
  param_2[10] = uVar2;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[0xe] = uVar7;
  param_2[0xf] = 0;
  param_2[0x10] = uVar5;
  param_2[0x11] = iVar6;
  param_2[2] = 0;
  return;
}

