// FUN_0124d2a4 @ 0124d2a4 size=356 calls_out=5 calls_in=2
// strings: Antminer X19

undefined4 FUN_0124d2a4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_1 & 1) == 0) {
    local_2c = 1;
    local_1c = &DAT_01c24ef0;
    local_20 = &local_30;
    local_18 = 0x60000020;
    local_28 = 0;
    local_30 = 0;
    local_14 = 0;
    iVar1 = FUN_012fb940(&local_20,(&PTR_s_Antminer_X19_01d312d4)[param_2 & 0xff],
                         *(undefined4 *)(&DAT_00535ac8 + (param_2 & 0xff) * 4));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c24f08,&DAT_01d30334);
    }
  }
  else {
    local_2c = 1;
    local_20 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_1c = &DAT_01c24ef0;
    local_18 = 0x60000020;
    local_14 = 0;
    iVar1 = FUN_01259514(param_2,&local_20);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c24f08,&DAT_01d30334);
    }
  }
  local_40 = local_30;
  local_3c = local_2c;
  uStack_38 = local_28;
  local_20 = &local_40;
  local_1c = &LAB_00632348;
  uVar2 = FUN_012fa178(param_3,param_4,&DAT_00590e5f,&local_20);
  FUN_019bb7e0(local_40,local_3c);
  return uVar2;
}

