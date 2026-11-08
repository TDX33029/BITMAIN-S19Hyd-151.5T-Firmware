// FUN_006c073c @ 006c073c size=220 calls_out=7 calls_in=1
// strings: 

void FUN_006c073c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined1 *local_24;
  
  FUN_006d0110(&local_34);
  FUN_019bb7e0(local_34,local_30);
  FUN_006d1ab4(&local_34);
  local_24 = &LAB_00632348;
  local_28 = &local_34;
  FUN_00664898(&local_40,&DAT_005bd5dc,&local_28);
  FUN_019bb7e0(local_34,local_30);
  if (local_38 < 0) {
    uVar2 = 0;
LAB_006c07ac:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,local_38);
  }
  if (local_38 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(local_38,1);
    if (iVar1 == 0) goto LAB_006c07ac;
    iVar3 = local_38;
  }
  FUN_01bed4e2(iVar1,uStack_3c,local_38);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = local_38;
  if (local_40 != -0x80000000) {
    FUN_019bb7e0(local_40,uStack_3c);
  }
  return;
}

