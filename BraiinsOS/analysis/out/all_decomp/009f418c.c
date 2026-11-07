// FUN_009f418c @ 009f418c size=656 calls_out=3 calls_in=10
// strings: 

void FUN_009f418c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint *local_34;
  code *local_30;
  undefined4 local_2c;
  uint local_28;
  
  if ((param_5 == 0) || (FUN_016a4f80(&local_34,param_5,param_7 + -1), local_34 == (uint *)0x0)) {
LAB_009f42b8:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar1 = *local_34;
  uVar3 = local_34[1];
  if ((uVar1 & param_3) == 0 && (uVar3 & param_4) == 0) {
    uVar2 = local_34[0xe];
    local_34 = local_34 + 0xe;
    DataMemoryBarrier(0xb);
    while ((uVar2 & 3) != 2) {
      uVar5 = (uVar2 & 0x3fffffff) >> 2;
      uVar7 = uVar2 & 3 ^ 1;
      uVar4 = uVar2 & 0xc0000000 | 3;
      uVar6 = uVar5 ^ 1;
      if (uVar7 != 0 || uVar6 != 0) {
        uVar4 = uVar5 * 4 - 4 | uVar2 & 0xc0000003;
      }
      uVar5 = *local_34;
      if (*local_34 == uVar2) {
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(local_34);
          if (bVar8) {
            *local_34 = uVar4;
            DataMemoryBarrier(0xb);
            if (uVar7 == 0 && uVar6 == 0) {
              FUN_009ebe80(local_30,local_2c);
            }
            if ((uVar1 & param_9) != 0 || (uVar3 & param_10) != 0) {
              *param_1 = 0;
              param_1[1] = 0;
              return;
            }
            bVar8 = (param_3 & param_4) != 0xffffffff;
            if (bVar8) {
              param_9 = param_9 | param_3;
            }
            param_1[2] = param_9;
            if (bVar8) {
              param_10 = param_10 | param_4;
            }
            param_1[3] = param_10;
            param_1[4] = param_5;
            *param_1 = 1;
            param_1[1] = 0;
            return;
          }
          uVar5 = *local_34;
        } while (*local_34 == uVar2);
      }
      uVar2 = uVar5;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
  }
  else {
    uVar1 = local_34[0xe];
    local_34 = local_34 + 0xe;
    DataMemoryBarrier(0xb);
    while ((uVar1 & 3) != 2) {
      uVar3 = (uVar1 & 0x3fffffff) >> 2;
      uVar4 = uVar1 & 3 ^ 1;
      uVar5 = uVar1 & 0xc0000000 | 3;
      uVar2 = uVar3 ^ 1;
      if (uVar4 != 0 || uVar2 != 0) {
        uVar5 = uVar3 * 4 - 4 | uVar1 & 0xc0000003;
      }
      uVar3 = *local_34;
      if (*local_34 == uVar1) {
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(local_34);
          if (bVar8) {
            *local_34 = uVar5;
            DataMemoryBarrier(0xb);
            if (uVar4 == 0 && uVar2 == 0) {
              FUN_009ebe80(local_30,local_2c);
            }
            goto LAB_009f42b8;
          }
          uVar3 = *local_34;
        } while (*local_34 == uVar1);
      }
      uVar1 = uVar3;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
  }
  local_28 = 2;
  local_30 = FUN_00facc48;
  local_34 = &local_28;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0041504f,&local_34,&DAT_018ae754);
}

