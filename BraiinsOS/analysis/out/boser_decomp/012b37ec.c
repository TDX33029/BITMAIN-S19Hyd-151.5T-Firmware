// FUN_012b37ec @ 012b37ec size=228 calls_out=4 calls_in=1
// strings: 

void FUN_012b37ec(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  uVar3 = 0;
  if (-1 < (int)param_2) {
    uVar3 = 1;
    local_2c = FUN_01298504(param_2,1);
    if (local_2c != 0) {
      local_28 = 0;
      local_30 = param_2;
      FUN_01ac6d2c(&local_30,&DAT_005319c3,&DAT_005319c4);
      uVar1 = local_2c;
      if (param_2 != 1) {
        uVar2 = param_2;
        uVar4 = local_28;
        do {
          FUN_01bed4e2(uVar1 + uVar4,uVar1,uVar4);
          bVar5 = 3 < uVar2;
          uVar4 = uVar4 << 1;
          uVar2 = uVar2 >> 1;
        } while (bVar5);
        local_28 = uVar4;
      }
      if (param_2 != local_28) {
        FUN_01bed4e2(local_2c + local_28,local_2c,param_2 - local_28);
        local_28 = param_2;
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,param_2);
}

