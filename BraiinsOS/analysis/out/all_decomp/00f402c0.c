// FUN_00f402c0 @ 00f402c0 size=364 calls_out=9 calls_in=1
// strings: 

int FUN_00f402c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r5;
  int iVar4;
  char local_60 [28];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int *local_30;
  int local_2c;
  
  if (*param_1 != 0) {
    local_38 = 10;
    iVar2 = FUN_0157c50c(&local_38,0,0);
    return iVar2;
  }
  iVar2 = FUN_00f3f38c(param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  local_44 = param_1[4];
  local_40 = param_1[5];
  local_3c = param_1[6];
  param_1[4] = -0x80000000;
  if (local_44 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  if (*param_4 == -0x80000000) {
    uVar1 = 0;
    iVar4 = local_44;
  }
  else {
    unaff_r5 = param_4[2];
    if (unaff_r5 < 0) {
      uVar3 = 0;
LAB_00f4034c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,unaff_r5);
    }
    iVar2 = param_4[1];
    if (unaff_r5 == 0) {
      param_4 = (int *)&DAT_00000001;
      iVar4 = 0;
    }
    else {
      param_4 = (int *)thunk_FUN_016d4a50(unaff_r5);
      if (param_4 == (int *)0x0) {
        uVar3 = 1;
        goto LAB_00f4034c;
      }
      iVar4 = unaff_r5;
    }
    FUN_016dd1aa(param_4,iVar2,unaff_r5);
    uVar1 = 3;
  }
  local_38 = CONCAT31(local_38._1_3_,uVar1);
  local_34 = iVar4;
  local_30 = param_4;
  local_2c = unaff_r5;
  FUN_00f45bb4(local_60,param_1 + 1,&local_44,&local_38);
  if (local_60[0] != '\x06') {
    FUN_00f3732c(local_60);
  }
  return 0;
}

