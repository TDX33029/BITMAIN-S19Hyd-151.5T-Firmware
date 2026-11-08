// FUN_00703fd4 @ 00703fd4 size=332 calls_out=12 calls_in=1
// strings: 

void FUN_00703fd4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  
  piVar4 = &local_68;
  iVar2 = FUN_00703d88(param_3);
  FUN_01afc914(&local_68,iVar2 + 7U >> 2 | 1);
  iVar2 = FUN_007044a8(&local_68,param_3);
  if (iVar2 == 0) {
    local_48 = local_68;
    local_44 = uStack_64;
    local_40 = uStack_60;
    local_3c = local_5c;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    local_2c = 0;
    local_28 = 0;
    iVar3 = FUN_01afcd14(&local_48,&local_2c,&local_28);
    iVar1 = local_28;
    iVar2 = local_2c;
    if ((iVar3 == 1) && (local_2c != 0)) {
      iVar3 = 0;
      if (local_28 < 0) {
LAB_00704078:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar3,iVar1);
      }
      if (local_28 == 0) {
        iVar5 = 1;
      }
      else {
        iVar3 = 1;
        iVar5 = FUN_01298504(local_28,1);
        if (iVar5 == 0) goto LAB_00704078;
        iVar3 = iVar1;
      }
      FUN_01bed4e2(iVar5,iVar2,iVar1);
      FUN_01b6b1c4(iVar2);
      FUN_01afca0c(&local_48);
      FUN_00703cfc(param_3);
      local_40 = iVar1;
      local_48 = iVar3;
      local_44 = iVar5;
      uVar6 = FUN_00703dd4(&local_48);
      param_1[1] = param_2;
      *(undefined8 *)(param_1 + 2) = uVar6;
      param_1[4] = param_3;
      param_1[5] = param_3;
      goto LAB_0070409c;
    }
    piVar4 = &local_48;
  }
  FUN_01afca0c(piVar4);
  FUN_01b46fd8(param_3);
  param_2 = 0;
LAB_0070409c:
  *param_1 = param_2;
  return;
}

