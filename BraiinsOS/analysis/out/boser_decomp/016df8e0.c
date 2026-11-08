// FUN_016df8e0 @ 016df8e0 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_016df8e0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_60;
  int iStack_5c;
  undefined4 local_58;
  uint local_54;
  int local_48 [8];
  undefined4 local_28;
  
  local_48[0] = *param_2;
  local_48[1] = param_2[1];
  local_48[2] = param_2[2];
  local_48[3] = param_2[3];
  local_48[4] = param_2[4];
  local_48[5] = param_2[5];
  iStack_5c = FUN_01298504(0x18,4);
  if (iStack_5c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x18);
  }
  iVar2 = 0;
  local_28 = 0;
  local_48[6] = 3;
  do {
    uVar3 = *(undefined4 *)((int)local_48 + iVar2);
    puVar1 = (undefined4 *)(iStack_5c + 4 + iVar2);
    *puVar1 = *(undefined4 *)((int)local_48 + iVar2 + 4);
    iVar2 = iVar2 + 8;
    puVar1[-1] = uVar3;
  } while (iVar2 != 0x18);
  local_60 = 3;
  local_54 = local_54 & 0xffffff00;
  local_58 = 3;
  local_48[7] = iStack_5c;
  FUN_016f5e30(&local_60);
  *param_1 = local_60;
  param_1[1] = iStack_5c;
  param_1[2] = local_58;
  param_1[3] = local_54;
  return;
}

