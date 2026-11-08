// FUN_01243dec @ 01243dec size=204 calls_out=5 calls_in=2
// strings: 

void FUN_01243dec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 uStack_21;
  
  FUN_012fbd94(&local_44);
  if (local_44 == 1) {
    local_38[0] = 6;
    local_34 = param_2;
    local_30 = param_3;
    FUN_0123bf08(param_1,local_38,&uStack_21,&DAT_01cf9914);
  }
  else {
    uVar2 = 0;
    if (local_3c < 0) {
LAB_01243e24:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,local_3c);
    }
    if (local_3c == 0) {
      iVar1 = 1;
      iVar3 = 0;
    }
    else {
      uVar2 = 1;
      iVar1 = FUN_01298504(local_3c,1);
      iVar3 = local_3c;
      if (iVar1 == 0) goto LAB_01243e24;
    }
    FUN_01bed4e2(iVar1,local_40,local_3c);
    param_1[2] = iVar1;
    *param_1 = 2;
    param_1[1] = iVar3;
    param_1[3] = local_3c;
  }
  return;
}

