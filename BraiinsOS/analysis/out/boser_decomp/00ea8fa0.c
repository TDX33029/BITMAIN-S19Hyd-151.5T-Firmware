// FUN_00ea8fa0 @ 00ea8fa0 size=308 calls_out=5 calls_in=2
// strings: 

void FUN_00ea8fa0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  FUN_01933ff0(&local_34,param_2 + 8);
  uVar2 = local_2c;
  iVar1 = local_30;
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01c1810c,&DAT_01d2c8e8);
  }
  FUN_01656cb0(&local_34,param_3 + 8);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01c180fc,&DAT_01d2c8f8);
  }
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_4 + 0x14);
  }
  else if (param_5 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  }
  FUN_01a86320(param_1,iVar1 + 0xe8,param_4,local_30 + 8,iVar1 + 0x158,iVar1 + 8,iVar1 + 0xe0);
  FUN_011967dc(local_30,local_2c);
  FUN_011967dc(iVar1,uVar2);
  return;
}

