// FUN_01967064 @ 01967064 size=252 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01967064(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 *local_40;
  undefined *local_3c;
  int local_38;
  code *local_34;
  int local_30;
  code *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar3 = *param_1;
  local_40 = &local_28;
  local_20 = 0;
  local_28 = 0;
  local_34 = (code *)0x0;
  local_24 = 1;
  local_38 = 0x60000020;
  local_3c = &DAT_01d2726c;
  iVar1 = FUN_019671a8(iVar3,&local_40);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01d272c4,&DAT_01d30334);
  }
  local_40 = &local_50;
  local_50 = local_28;
  local_4c = local_24;
  uStack_48 = local_20;
  local_30 = iVar3 + 0x10;
  local_2c = FUN_012fd02c;
  local_34 = FUN_012fd02c;
  local_38 = iVar3 + 0xc;
  local_3c = &LAB_005fdc1c;
  uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_005b0998,&local_40);
  FUN_0134bd64(local_50,local_4c);
  return uVar2;
}

