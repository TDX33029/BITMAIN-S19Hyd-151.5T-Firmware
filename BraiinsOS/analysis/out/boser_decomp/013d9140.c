// FUN_013d9140 @ 013d9140 size=248 calls_out=5 calls_in=1
// strings: 

void FUN_013d9140(undefined2 *param_1,ushort *param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  uVar2 = (uint)*param_2;
  if (uVar2 == 0) {
    local_24 = 1;
    local_28 = 0;
  }
  else {
    iVar1 = uVar2 << 1;
    local_24 = FUN_01298504(iVar1,1);
    if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar1);
    }
    local_20 = 0;
    local_28 = iVar1;
    if (0x18 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar2,0x18,&DAT_01cf2db0);
    }
  }
  local_20 = 0;
  FUN_013e0ab0(&local_28,param_2 + 1,(int)(param_2 + 1) + uVar2);
  iVar1 = local_20;
  *param_2 = 0;
  local_38 = local_28;
  local_34 = local_24;
  local_30 = local_20;
  if (local_20 == local_28) {
    FUN_006666a0(&local_38);
  }
  *(undefined1 *)(local_34 + iVar1) = param_3;
  *(int *)(param_1 + 2) = local_38;
  *(int *)(param_1 + 4) = local_34;
  *(int *)(param_1 + 6) = iVar1 + 1;
  *param_1 = 1;
  return;
}

