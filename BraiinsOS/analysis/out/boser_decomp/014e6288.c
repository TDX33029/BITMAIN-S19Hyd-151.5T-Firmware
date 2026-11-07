// FUN_014e6288 @ 014e6288 size=212 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_014e6288(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 **local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 **local_20;
  undefined1 *local_1c;
  undefined4 **local_18;
  code *local_14;
  
  local_1c = &LAB_0193a90c;
  local_20 = &local_28;
  local_30 = 0;
  local_38 = (undefined4 **)0x0;
  local_24 = param_1 + 3;
  local_14 = FUN_015fe674;
  local_18 = &local_24;
  local_34 = 1;
  local_28 = param_1;
  iVar1 = FUN_012fa178(&local_38,&DAT_01cfa1bc,&DAT_0059e6fb,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_20,&DAT_01cfa1d4,&DAT_01d30334);
  }
  local_20 = local_38;
  local_1c = (undefined1 *)local_34;
  local_18 = (undefined4 **)local_30;
  uVar2 = FUN_01966564(&local_20);
  FUN_019bb7e0(*param_1,param_1[1]);
  return uVar2;
}

