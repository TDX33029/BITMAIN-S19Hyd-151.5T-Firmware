// FUN_018c5504 @ 018c5504 size=272 calls_out=5 calls_in=7
// strings: rustls::checkSession not saved: server didn't allocate id or ticket | rustls::checkSession not saved: server didn't allocate id or ticket

void FUN_018c5504(undefined1 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_4c;
  int local_48;
  int *local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined *local_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  local_48 = param_6;
  local_4c = param_5;
  if (*param_2 < 0) {
    FUN_018c4990(param_1,param_2);
    return;
  }
  if (1 < DAT_01d51b00) {
    local_3c = &local_4c;
    local_38 = &DAT_018d2bf8;
    local_24 = &DAT_01d22bbc;
    local_28 = 0xd;
    local_30 = 0xd;
    local_40 = &LAB_018c5928;
    local_44 = param_2 + 0x1e;
    local_2c = "rustls::checkSession not saved: server didn\'t allocate id or ticket";
    local_34 = "rustls::checkSession not saved: server didn\'t allocate id or ticket";
    FUN_0193b350(&DAT_005ab98a,&local_44,2,&local_34);
  }
  iVar1 = param_6 << 1;
  iVar2 = FUN_01298504(iVar1,1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar1);
  }
  FUN_01bed4e2(iVar2,param_5,iVar1);
  iVar1 = param_2[0x1e];
  *(int *)(param_1 + 4) = param_6;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = param_6;
  *param_1 = 1;
  *(short *)(param_1 + 1) = (short)iVar1;
  return;
}

