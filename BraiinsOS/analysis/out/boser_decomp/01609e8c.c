// FUN_01609e8c @ 01609e8c size=316 calls_out=4 calls_in=2
// strings: 

void FUN_01609e8c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_r10;
  int unaff_r11;
  ushort extraout_r12;
  ushort uVar4;
  undefined2 uVar5;
  short local_e0;
  ushort local_de;
  int local_dc;
  undefined1 auStack_d8 [8];
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined2 local_50;
  undefined2 uStack_4e;
  ushort local_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined1 local_40 [8];
  undefined2 local_38;
  
  local_5c = 0x80;
  iVar1 = FUN_01be70fa(param_2,&local_e0,&local_5c,0x80800);
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_01be3244();
    iVar3 = *piVar2;
    iVar1 = 0;
LAB_01609fb4:
    param_1[2] = iVar1;
    param_1[3] = iVar3;
    *(undefined2 *)(param_1 + 1) = 2;
  }
  else {
    if (local_e0 == 10) {
      FUN_01bed4e2((uint)local_40 | 2,auStack_d8,0x10);
      uVar5 = 1;
      local_50 = local_40._0_2_;
      uStack_4e = local_40._2_2_;
      local_4c = local_40._4_2_;
      local_4a = local_40._6_2_;
      uStack_48 = local_38;
      uVar4 = local_de << 8 | local_de >> 8;
      local_54 = local_cc;
      local_58 = local_d0;
      unaff_r10 = local_c8;
      unaff_r11 = local_dc;
    }
    else {
      if (local_e0 != 2) {
        FUN_01bf01d6(iVar1);
        iVar3 = 0;
        iVar1 = 0x1401;
        goto LAB_01609fb4;
      }
      uVar5 = 0;
      local_4c = local_de << 8 | local_de >> 8;
      local_50 = (undefined2)local_dc;
      uStack_4e = (undefined2)((uint)local_dc >> 0x10);
      uVar4 = extraout_r12;
    }
    param_1[6] = unaff_r11;
    param_1[2] = CONCAT22(local_4c,uStack_4e);
    param_1[3] = CONCAT22(uStack_48,local_4a);
    param_1[4] = local_58;
    param_1[5] = local_54;
    *(undefined2 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((int)param_1 + 6) = local_50;
    *(ushort *)(param_1 + 8) = uVar4;
    param_1[7] = unaff_r10;
    *param_1 = iVar1;
  }
  return;
}

