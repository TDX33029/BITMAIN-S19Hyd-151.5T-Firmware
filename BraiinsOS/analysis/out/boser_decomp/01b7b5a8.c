// FUN_01b7b5a8 @ 01b7b5a8 size=460 calls_out=5 calls_in=1
// strings: 

uint FUN_01b7b5a8(int param_1,int param_2,uint param_3)

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
    iVar1 = FUN_01b7b47c(param_1);
    local_2c = param_3;
    local_1c = param_2;
    if (iVar1 == 0) {
      for (; local_2c != 0; local_2c = local_2c - local_14) {
        FUN_01b7dc98(param_1);
        uVar2 = FUN_01b7d1f4(param_1);
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
          goto LAB_01b7b738;
        }
        if (local_2c < 0x21) {
          local_14 = local_2c;
        }
        else {
          local_14 = 0x20;
        }
        FUN_01b7dd90(param_1,local_1c,local_14);
        local_1c = local_1c + local_14;
      }
      FUN_01b7dd90(param_1,0,0);
LAB_01b7b738:
      FUN_01b7b4a4(param_1);
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

