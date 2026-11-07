// FUN_0102d85c @ 0102d85c size=312 calls_out=4 calls_in=3
// strings: keep-alive | proxy-connection

undefined4 FUN_0102d85c(undefined4 param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 0x14;
  local_14 = 0;
  local_18 = 0;
  local_20 = 0;
  iVar1 = FUN_01028eb8(param_1,&local_20);
  if (iVar1 == 0) {
    local_1c = 0x45;
    local_14 = 0;
    local_18 = 0;
    local_20 = 0;
    iVar1 = FUN_01028eb8(param_1,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
      local_1c = 0x47;
      local_14 = 0;
      local_18 = 0;
      iVar1 = FUN_01028eb8(param_1,&local_20);
      if (((iVar1 == 0) && (iVar1 = FUN_010290a0(param_1,"keep-alive",10), iVar1 == 0)) &&
         (iVar1 = FUN_010290a0(param_1,"proxy-connection",0x10), iVar1 == 0)) {
        local_20 = 0;
        local_1c = 0x43;
        local_14 = 0;
        local_18 = 0;
        iVar1 = FUN_01029b24(param_1,&local_20);
        if (iVar1 == 0) {
          return 0xc;
        }
        if ((*(int *)(iVar1 + 8) == 8) &&
           (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar1 + 4),&DAT_00569968,8), iVar1 == 0)) {
          return 0xc;
        }
      }
    }
  }
  return 6;
}

