// FUN_01852b44 @ 01852b44 size=356 calls_out=8 calls_in=1
// strings: invalid certificate encoding

void FUN_01852b44(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar3 = *(int **)(param_2 + 0x18);
  while (FUN_01939768(&local_38,param_2,FUN_016f76b0,&LAB_016f8ac0), local_38 == 0) {
    if (local_30 == -0x80000000) goto LAB_01852c14;
    if ((char)local_34 == '\0') {
      local_48 = 5;
      goto LAB_01852c30;
    }
    FUN_019bb7e0(local_30,local_2c);
  }
  if (local_34 != 6) {
    local_48 = local_34;
    iStack_44 = local_30;
    uStack_40 = local_2c;
    iStack_3c = local_28;
    if (local_34 == 5) {
LAB_01852c30:
      iVar2 = 0;
      if (local_28 < 0) {
LAB_01852c3c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar2,local_28);
      }
      if (local_28 == 0) {
        iVar1 = 1;
      }
      else {
        iVar2 = 1;
        iVar1 = FUN_01298504(local_28,1);
        if (iVar1 == 0) goto LAB_01852c3c;
        iVar2 = local_28;
      }
      FUN_01bed4e2(iVar1,local_2c,local_28);
      if (local_30 != -0x80000000) {
        FUN_019bb7e0(local_30,local_2c);
      }
      *param_1 = iVar2;
      param_1[1] = iVar1;
      param_1[2] = local_28;
      return;
    }
    local_38 = local_38 & 0xffff0000;
    iVar2 = FUN_0183b7f0(&local_38,"invalid certificate encoding",0x1c);
    FUN_018556e0(&local_48);
    if (*piVar3 != 0) {
      FUN_017109f8();
    }
    *piVar3 = iVar2;
  }
LAB_01852c14:
  *param_1 = -0x80000000;
  return;
}

