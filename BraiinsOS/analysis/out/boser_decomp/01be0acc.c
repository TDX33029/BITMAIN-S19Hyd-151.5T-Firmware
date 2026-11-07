// FUN_01be0acc @ 01be0acc size=242 calls_out=6 calls_in=1
// strings: libunwind: _Unwind_VRS_Pop(context=%p; regclass=%d; discriminator=%d; representation=%d) 

void FUN_01be0acc(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar4 = FUN_01be2734();
  if (iVar4 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,
                 "libunwind: _Unwind_VRS_Pop(context=%p, regclass=%d, discriminator=%d, representation=%d)\n"
                 ,param_1,0,param_2,0);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  iVar4 = FUN_01be0690(param_1,0,0xd,0,&local_2c);
  if (iVar4 == 0) {
    uVar5 = 0;
    bVar3 = false;
LAB_01be0b10:
    do {
      uVar1 = 1 << (uVar5 & 0xff) & param_2;
      puVar2 = local_2c;
      while (uVar1 != 0) {
        local_2c = puVar2 + 1;
        local_28 = *puVar2;
        if (uVar5 != 0xd) {
          iVar4 = FUN_01be0534(param_1,0,uVar5,0,&local_28);
          if (iVar4 != 0) goto LAB_01be0b54;
          uVar5 = uVar5 + 1;
          if (uVar5 == 0x10) goto LAB_01be0b4e;
          goto LAB_01be0b10;
        }
        iVar4 = FUN_01be0534(param_1,0,0xd,0,&local_28);
        if (iVar4 != 0) goto LAB_01be0b54;
        uVar5 = 0xe;
        bVar3 = true;
        puVar2 = local_2c;
        uVar1 = param_2 & 0x4000;
      }
      uVar5 = uVar5 + 1;
      local_2c = puVar2;
    } while (uVar5 != 0x10);
LAB_01be0b4e:
    if (!bVar3) {
      FUN_01be0534(param_1,0,0xd,0,&local_2c);
    }
  }
LAB_01be0b54:
  if (DAT_01d53560 != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

