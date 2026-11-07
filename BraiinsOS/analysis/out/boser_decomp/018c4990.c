// FUN_018c4990 @ 018c4990 size=284 calls_out=4 calls_in=3
// strings: rustls::checkSession not saved: server didn't allocate id or ticket | rustls::checkSession not saved: server didn't allocate id or ticket

void FUN_018c4990(undefined1 *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 local_50;
  int iStack_4c;
  undefined1 local_46 [2];
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined *local_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  local_50 = param_3;
  iStack_4c = param_4;
  if (1 < DAT_01d51b00) {
    local_46[0] = 2;
    if ((int)*param_2 < 0) {
      local_46[0] = (undefined1)(0x3000201 >> ((*param_2 & 0x1f) << 3));
    }
    local_44 = local_46;
    local_40 = &LAB_018c5b9c;
    local_28 = 0xd;
    local_30 = 0xd;
    local_38 = &DAT_018d5b10;
    local_24 = &DAT_01d22bac;
    local_2c = "rustls::checkSession not saved: server didn\'t allocate id or ticket";
    local_34 = "rustls::checkSession not saved: server didn\'t allocate id or ticket";
    local_3c = (undefined1 *)&local_50;
    FUN_0193b350(&DAT_0057717a,&local_44,2,&local_34);
  }
  iVar1 = param_4 << 1;
  iVar2 = FUN_01298504(iVar1,1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar1);
  }
  FUN_01bed4e2(iVar2,param_3,iVar1);
  uVar3 = *param_2;
  *param_1 = 0;
  uVar4 = 2;
  *(int *)(param_1 + 4) = param_4;
  *(int *)(param_1 + 8) = iVar2;
  if ((int)uVar3 < 0) {
    uVar4 = (undefined1)(0x3000201 >> ((uVar3 & 0x1f) << 3));
  }
  *(int *)(param_1 + 0xc) = param_4;
  param_1[1] = uVar4;
  return;
}

