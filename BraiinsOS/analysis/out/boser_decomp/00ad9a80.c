// FUN_00ad9a80 @ 00ad9a80 size=176 calls_out=3 calls_in=1
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

undefined4 FUN_00ad9a80(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c;
  int local_28;
  
  iVar3 = *param_1;
  iVar5 = param_1[1];
  iVar4 = param_1[3];
  iVar6 = param_1[4];
  *param_1 = -0x80000000;
  param_1[3] = -0x7fffffff;
  if (iVar4 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01c18664);
  }
  if (iVar3 == -0x80000000) {
    local_2c = 0x80000000;
    local_28 = iVar5;
  }
  else {
    FUN_006666fc(&local_2c,iVar5,param_1[2]);
  }
  iVar2 = local_28;
  uVar1 = local_2c;
  if (iVar4 != -0x80000000) {
    FUN_019bb7e0(iVar4,iVar6);
  }
  if (iVar3 != -0x80000000) {
    FUN_019bb7e0(uVar1,iVar2);
    FUN_019bb7e0(iVar3,iVar5);
  }
  return 0;
}

