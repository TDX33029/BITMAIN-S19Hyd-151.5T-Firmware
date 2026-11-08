// FUN_01609c4c @ 01609c4c size=328 calls_out=3 calls_in=2
// strings: assertion failed: len >= size_of::<c::sockaddr_in>() | assertion failed: len >= size_of::<c::sockaddr_in6>()

void FUN_01609c4c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int unaff_r8;
  int unaff_r9;
  int extraout_r12;
  short local_ac;
  ushort local_aa;
  int local_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined *local_94;
  uint local_2c;
  undefined1 uStack_25;
  undefined2 local_24;
  
  local_2c = 0x80;
  iVar5 = 0;
  iVar1 = FUN_01be8db2(param_2,param_3,param_4,0,&local_ac,&local_2c);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    local_94 = (undefined *)*puVar2;
    uVar3 = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    iVar4 = 4;
    iVar1 = 0xc;
  }
  else {
    if (local_ac == 10) {
      if (local_2c < 0x1c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,&DAT_01d278d0);
      }
      uVar6 = 1;
      uVar3 = local_aa << 8 | local_aa >> 8;
      unaff_r8 = local_a8;
      unaff_r9 = iStack_a0;
    }
    else {
      if (local_ac != 2) {
        uVar3 = 2;
        iVar4 = 4;
        param_1[2] = CONCAT22(local_24,CONCAT11(uStack_25,2));
        iVar1 = 0xc;
        local_94 = &DAT_01d278e0;
        goto LAB_01609d50;
      }
      if (local_2c < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: len >= size_of::<c::sockaddr_in>()",0x34,&DAT_01d278c0);
      }
      uVar6 = 0;
      uVar3 = local_aa << 8 | local_aa >> 8;
      local_a4 = CONCAT22(uVar3,(short)((uint)local_a8 >> 0x10));
      local_94 = (undefined *)0x2;
      iVar5 = local_a8;
      iStack_9c = extraout_r12;
      iStack_98 = 0x1609c84;
    }
    *param_1 = iVar1;
    param_1[2] = local_a4;
    param_1[3] = unaff_r9;
    param_1[4] = iStack_9c;
    param_1[5] = iStack_98;
    iVar4 = 0x20;
    iVar1 = 0x1c;
    *(short *)((int)param_1 + 6) = (short)iVar5;
    *(undefined2 *)(param_1 + 1) = uVar6;
    param_1[6] = unaff_r8;
  }
LAB_01609d50:
  *(undefined **)((int)param_1 + iVar1) = local_94;
  *(ushort *)((int)param_1 + iVar4) = uVar3;
  return;
}

