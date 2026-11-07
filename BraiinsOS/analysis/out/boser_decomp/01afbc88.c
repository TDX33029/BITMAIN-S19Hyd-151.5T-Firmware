// FUN_01afbc88 @ 01afbc88 size=240 calls_out=8 calls_in=1
// strings: 

void FUN_01afbc88(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar1 = FUN_01b81c74(param_2);
  uVar2 = FUN_01bedbda();
  FUN_012fbd94(&local_34,uVar1,uVar2);
  if (local_34 == 1) {
    local_28 = local_30;
    local_24 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00534aa5,0x1b,&local_28,&DAT_01d308b4,&DAT_01d308c4);
  }
  uVar1 = 0;
  if (local_2c < 0) {
LAB_01afbcd0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,local_2c);
  }
  if (local_2c == 0) {
    iVar3 = 1;
    iVar4 = 0;
  }
  else {
    uVar1 = 1;
    iVar3 = FUN_01298504(local_2c,1);
    iVar4 = local_2c;
    if (iVar3 == 0) goto LAB_01afbcd0;
  }
  FUN_01bed4e2(iVar3,local_30,local_2c);
  local_34 = iVar4;
  local_30 = iVar3;
  FUN_01afbc08(param_1,0x28,&local_34);
  return;
}

