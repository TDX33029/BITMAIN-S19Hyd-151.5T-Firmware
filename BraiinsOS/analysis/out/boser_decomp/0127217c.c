// FUN_0127217c @ 0127217c size=392 calls_out=10 calls_in=6
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_0127217c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_68;
  int iStack_64;
  undefined4 uStack_60;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    uVar1 = FUN_007025b0(param_1);
    if (uVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar3 = param_1[4];
      iVar2 = param_1[5];
      local_44 = param_1[6];
      param_1[4] = -0x80000000;
      if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_4c = iVar3;
      local_48 = iVar2;
      FUN_0196aa8c(&local_40,param_5);
      if (local_40 == 0x80000000) {
        uVar1 = local_3c;
      }
      else {
        local_68 = local_40;
        iStack_64 = local_3c;
        uStack_60 = iStack_38;
        param_5 = param_5 * 0xc;
        do {
          if (param_5 == 0) {
            local_3c = local_68;
            iStack_38 = iStack_64;
            uStack_34 = uStack_60;
            local_40 = CONCAT31(local_40._1_3_,4);
            FUN_0196b484(&local_68,param_1 + 1,&local_4c,&local_40);
            if ((local_68 & 0xff) == 6) {
              return 0;
            }
            FUN_00db4764(&local_68);
            return 0;
          }
          uVar1 = FUN_0127191c(&local_68,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8));
          param_5 = param_5 + -0xc;
          param_4 = param_4 + 0xc;
        } while (uVar1 == 0);
        FUN_00949b70(&local_68);
      }
      FUN_019bb7e0(iVar3,iVar2);
    }
  }
  else {
    local_40 = 10;
    uVar1 = FUN_01966fbc(&local_40,0,0);
  }
  return uVar1;
}

