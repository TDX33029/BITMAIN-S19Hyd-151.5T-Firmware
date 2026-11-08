// FUN_01a87610 @ 01a87610 size=408 calls_out=8 calls_in=1
// strings: 

void FUN_01a87610(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar7 = param_3[1];
  iVar4 = param_3[2];
  iVar1 = FUN_01367c40(*(undefined4 *)(*param_3 + 0x34),*(undefined4 *)(*param_3 + 0x38),iVar7,iVar4
                      );
  puVar2 = *(undefined1 **)(iVar1 + 0x18);
  FUN_01bed4e2(&local_f0,param_4,0xb0);
  uVar6 = *(undefined4 *)(param_4 + 0xb0);
  uVar5 = *(undefined4 *)(param_4 + 0xb4);
  FUN_013584e0(&local_108,uVar6,&local_f0,param_3);
  if ((char)local_108 == '\x03') {
    local_ec = 1;
    local_f0 = CONCAT31(local_f0._1_3_,3);
    local_e8 = iVar7;
    local_e4 = iVar4;
  }
  else {
    FUN_01656cb0(&local_f0,uVar5);
    iVar1 = local_ec;
    if (local_f0 == 1) {
      local_3c = CONCAT31(local_3c._1_3_,(undefined1)local_e8);
      local_40 = local_ec;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d2de9c,&DAT_01d2de8c);
    }
    uVar3 = local_e8 & 0xff;
    local_f0 = local_108;
    local_ec = uStack_104;
    local_e8 = iStack_100;
    local_e4 = iStack_fc;
    iStack_e0 = iStack_f8;
    iStack_dc = iStack_f4;
    FUN_01a63e74(&local_40,uVar6,iVar1 + 8,param_3,param_2,&local_f0);
    if ((char)local_40 == '\x03') {
      local_f0 = CONCAT31(local_f0._1_3_,3);
      local_ec = 0;
    }
    else {
      local_f0 = local_40;
      local_ec = local_3c;
      local_e8 = iStack_38;
      local_e4 = iStack_34;
      iStack_e0 = iStack_30;
      iStack_dc = iStack_2c;
    }
    FUN_00a97e8c(iVar1,uVar3);
  }
  FUN_01387ff4(param_2,param_3,puVar2 != &DAT_3b9aca00);
  *param_1 = local_f0;
  param_1[1] = local_ec;
  param_1[2] = local_e8;
  param_1[3] = local_e4;
  param_1[4] = iStack_e0;
  param_1[5] = iStack_dc;
  return;
}

