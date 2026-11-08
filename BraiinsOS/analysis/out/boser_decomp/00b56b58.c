// FUN_00b56b58 @ 00b56b58 size=304 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_00b56b58(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined *local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  int local_1c;
  undefined2 local_18;
  undefined1 uStack_11;
  
  local_40 = 0;
  local_38 = &DAT_01c12e74;
  local_3c = &local_48;
  local_48 = 0;
  local_30 = 0;
  local_44 = 1;
  local_34 = 0x60000020;
  iVar3 = FUN_013025ec(local_50,&local_3c);
  iVar2 = local_44;
  uVar1 = local_48;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01c12e8c,&DAT_01d30334);
  }
  local_18 = 1;
  local_24 = 1;
  local_1c = local_40;
  local_20 = 0;
  local_28 = 0x2e;
  local_2c = local_40;
  local_30 = 0;
  local_34 = local_40;
  local_38 = (undefined *)local_44;
  local_3c = (undefined4 *)0x2e;
  FUN_01ad0a10(&local_48,&local_3c);
  if (local_40 == 1) {
    uVar4 = 0;
  }
  else {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(1,0,&DAT_01c12e0c);
    }
    uVar4 = *(undefined4 *)(local_44 + 0xc);
  }
  FUN_0134aee0(local_48,local_44,4,8);
  FUN_019bb7e0(uVar1,iVar2);
  return uVar4;
}

