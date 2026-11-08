// FUN_009f4428 @ 009f4428 size=500 calls_out=3 calls_in=2
// strings: 

undefined1
FUN_009f4428(uint param_1,uint param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6
            ,uint param_7,uint param_8)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint *local_30;
  code *local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  uVar7 = 2;
  if ((param_3 != 0) && (FUN_016a4f80(&local_30,param_3,param_5 + -1), local_30 != (uint *)0x0)) {
    if ((*local_30 & param_1) != 0 || (local_30[1] & param_2) != 0) {
      uVar3 = local_30[0xe];
      local_30 = local_30 + 0xe;
      DataMemoryBarrier(0xb);
      while ((uVar3 & 3) != 2) {
        uVar4 = (uVar3 & 0x3fffffff) >> 2;
        uVar6 = uVar3 & 0xc0000000 | 3;
        uVar5 = uVar3 & 3 ^ 1 | uVar4 ^ 1;
        if (uVar5 != 0) {
          uVar6 = uVar4 * 4 - 4 | uVar3 & 0xc0000003;
        }
        uVar4 = *local_30;
        if (*local_30 == uVar3) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(local_30);
            if (bVar1) {
              *local_30 = uVar6;
              DataMemoryBarrier(0xb);
              goto LAB_009f4520;
            }
            uVar4 = *local_30;
          } while (*local_30 == uVar3);
        }
        uVar3 = uVar4;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
LAB_009f45e8:
      local_24 = 2;
      local_2c = FUN_00facc48;
      local_30 = &local_24;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_30,&DAT_018ae754);
    }
    uVar3 = local_30[0xe];
    puVar2 = local_30 + 0xe;
    DataMemoryBarrier(0xb);
    uVar7 = (*local_30 & param_7) == 0 && (local_30[1] & param_8) == 0;
    do {
      if ((uVar3 & 3) == 2) goto LAB_009f45e8;
      uVar4 = (uVar3 & 0x3fffffff) >> 2;
      uVar6 = uVar3 & 0xc0000000 | 3;
      uVar5 = uVar3 & 3 ^ 1 | uVar4 ^ 1;
      if (uVar5 != 0) {
        uVar6 = uVar4 * 4 - 4 | uVar3 & 0xc0000003;
      }
      uVar4 = *puVar2;
      if (uVar4 == uVar3) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
          if (bVar1) {
            *puVar2 = uVar6;
            bVar1 = true;
            uVar3 = uVar4;
            goto LAB_009f4574;
          }
          uVar4 = *puVar2;
        } while (uVar4 == uVar3);
      }
      bVar1 = false;
      ClearExclusiveLocal();
      uVar3 = uVar4;
LAB_009f4574:
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_009f4520:
    if (uVar5 == 0) {
      FUN_009ebe80(local_2c,uStack_28);
    }
  }
  return uVar7;
}

