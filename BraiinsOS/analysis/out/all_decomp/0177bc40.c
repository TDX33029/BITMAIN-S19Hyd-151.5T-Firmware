// FUN_0177bc40 @ 0177bc40 size=316 calls_out=6 calls_in=1
// strings: 

void FUN_0177bc40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_01781f34(&DAT_018dfe64,param_2,&PTR_018bc3f4,0);
  if (DAT_018dfe58 != 0) {
    local_28 = param_1;
    iVar1 = FUN_017794f4(DAT_018dfe58,auStack_2c,&LAB_0177b718,&LAB_0177b6f8);
    if (iVar1 != 0) {
      FUN_01781f94(&DAT_018dfe64);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      uVar3 = extraout_r1;
      goto LAB_0177bd1c;
    }
  }
  FUN_01781f94(&DAT_018dfe64);
  uVar5 = FUN_016dcc60(param_1,&DAT_0044d6b8,0x3d4,2,&LAB_0177b840);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar2 = 0;
  if ((ushort *)uVar5 != (ushort *)0x0) {
    uVar4 = *(ushort *)uVar5 - 1;
    if (0x3e5 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
    uVar3 = 0x18;
    uVar2 = *(undefined4 *)(&DAT_018b6340 + uVar4 * 0x18);
  }
LAB_0177bd1c:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

