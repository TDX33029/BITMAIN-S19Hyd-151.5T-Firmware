// FUN_0155dde4 @ 0155dde4 size=496 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_0155dde4(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 **ppuVar5;
  code *pcVar6;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  code *local_28;
  undefined4 *local_24;
  
  ppuVar5 = (undefined4 **)*param_2;
  pcVar6 = (code *)param_2[1];
  pcVar4 = *(code **)(pcVar6 + 0xc);
  iVar1 = (*pcVar4)(ppuVar5,&DAT_0040c69e,0xd);
  local_30 = *(undefined4 *)(param_1 + 8);
  local_28 = FUN_00933120;
  local_2c = &local_34;
  local_34 = &local_30;
  FUN_00600d2c(&local_40,&DAT_005825a5,&local_2c);
  uVar3 = 1;
  if (iVar1 != 0) goto LAB_0155de58;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(ppuVar5,&DAT_00414a79,3);
    if (((iVar1 != 0) || (iVar1 = (*pcVar4)(ppuVar5,&DAT_0040c6ab,5), iVar1 != 0)) ||
       (iVar1 = (*pcVar4)(ppuVar5,&DAT_00414a7c,2), iVar1 != 0)) goto LAB_0155de58;
    iVar1 = FUN_00faa4e8(local_3c,uStack_38,ppuVar5,pcVar6);
  }
  else {
    iVar1 = (*pcVar4)(ppuVar5,&DAT_00414a7e,3);
    if (iVar1 != 0) goto LAB_0155de58;
    local_30 = CONCAT31(local_30._1_3_,1);
    local_2c = ppuVar5;
    local_28 = pcVar6;
    local_24 = &local_30;
    iVar1 = FUN_00fb1f64(&local_2c,&DAT_0040c6ab,5);
    if (((iVar1 != 0) || (iVar1 = FUN_00fb1f64(&local_2c,&DAT_00414a7c,2), iVar1 != 0)) ||
       (iVar1 = FUN_00faa4e8(local_3c,uStack_38,&local_2c,&DAT_01880dc4), iVar1 != 0)) {
      uVar3 = 1;
      goto LAB_0155de58;
    }
    iVar1 = FUN_00fb1f64(&local_2c,&DAT_00414a81,2);
  }
  uVar3 = 1;
  if (iVar1 == 0) {
    pcVar2 = "}";
    uVar3 = 1;
    if ((param_2[2] & 0x800000U) == 0) {
      uVar3 = 2;
      pcVar2 = " }";
    }
    uVar3 = (*pcVar4)(ppuVar5,pcVar2,uVar3);
  }
LAB_0155de58:
  if (local_40 != 0) {
    thunk_FUN_016d3fb4(local_3c);
  }
  return uVar3;
}

