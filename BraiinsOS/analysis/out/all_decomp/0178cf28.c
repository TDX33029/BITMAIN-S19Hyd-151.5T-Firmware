// FUN_0178cf28 @ 0178cf28 size=460 calls_out=5 calls_in=2
// strings: 

uint FUN_0178cf28(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_18 = 0;
  if (param_1 == 0) {
    local_18 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0178cdfc(param_1);
    local_2c = param_3;
    local_1c = param_2;
    if (iVar1 == 0) {
      for (; local_2c != 0; local_2c = local_2c - local_14) {
        FUN_0178f618(param_1);
        uVar2 = FUN_0178eb74(param_1);
        if (uVar2 != 0) {
          if ((uVar2 & 0x10000) == 0) {
            if ((uVar2 & 0x20000) == 0) {
              if ((uVar2 & 0x40000) == 0) {
                if ((uVar2 & 1) == 0) {
                  if ((uVar2 & 2) == 0) {
                    local_18 = 0xfffffffb;
                  }
                  else {
                    local_18 = 0xfffffffd;
                  }
                }
                else {
                  local_18 = 0xfffffffe;
                }
              }
              else {
                local_18 = 0xfffffff8;
              }
            }
            else {
              local_18 = 0xfffffff9;
            }
          }
          else {
            local_18 = 0xfffffffa;
          }
          goto LAB_0178d0b8;
        }
        if (local_2c < 0x21) {
          local_14 = local_2c;
        }
        else {
          local_14 = 0x20;
        }
        FUN_0178f710(param_1,local_1c,local_14);
        local_1c = local_1c + local_14;
      }
      FUN_0178f710(param_1,0,0);
LAB_0178d0b8:
      FUN_0178ce24(param_1);
      if (local_18 == 0) {
        local_18 = param_3;
      }
    }
    else {
      local_18 = 0xfffffffc;
    }
  }
  return local_18;
}

