// FUN_0182ce28 @ 0182ce28 size=604 calls_out=8 calls_in=1
// strings: 

int FUN_0182ce28(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r11;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *local_2710;
  uint local_270c;
  undefined2 local_2704;
  undefined4 local_2700;
  uint local_26fc;
  uint local_26f8;
  undefined4 local_26f4;
  uint local_26f0;
  uint uStack_26ec;
  uint uStack_26e8;
  undefined4 local_26e0;
  undefined4 uStack_26dc;
  undefined4 uStack_26d8;
  uint local_26d0;
  uint local_26cc;
  uint local_26c8;
  undefined4 *local_26c4;
  uint local_26c0;
  undefined4 *local_26bc;
  undefined4 local_26b8;
  undefined4 local_26b4;
  undefined4 local_26b0;
  undefined4 uStack_26ac;
  undefined4 uStack_26a8;
  uint local_26a4;
  uint uStack_26a0;
  uint uStack_269c;
  undefined2 local_2698;
  undefined8 local_2690;
  undefined4 local_2688;
  undefined4 uStack_2684;
  undefined4 uStack_2680;
  undefined4 uStack_267c;
  undefined4 uStack_2678;
  undefined4 local_2674;
  undefined4 uStack_2670;
  undefined4 uStack_266c;
  undefined4 uStack_2668;
  undefined4 uStack_2664;
  undefined4 uStack_2660;
  undefined1 local_265c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_017970c4(&local_26d0,param_1 + 0x17);
  uVar4 = FUN_01823fd4(param_1 + 0x10,&local_26d0);
  iVar2 = 2;
  if ((uint)(*param_1 < 3) <= -param_1[1]) {
    iVar2 = *param_1 - 3;
  }
  if (iVar2 == 0) {
    uVar3 = 3;
    local_26c4 = param_2;
    local_2698 = local_2704;
  }
  else if (iVar2 == 1) {
    (**(code **)param_1[2])(&local_26d0,param_1 + 5,param_1[3],param_1[4]);
    uVar3 = 4;
    local_26f8 = local_26d0;
    local_26c0 = CONCAT31(local_26c0._1_3_,(char)param_1[6]);
    local_26fc = local_26c8;
    local_26f4 = local_26c0;
    unaff_r11 = local_26cc;
    local_2698 = local_2704;
  }
  else {
    uVar1 = param_1[0xe];
    uVar5 = FUN_01ac635c(param_1[6],param_1[7]);
    local_2700 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_26f4 = (undefined4)uVar5;
    FUN_0187b658(&local_30,param_1[9],param_1[10]);
    FUN_017260a4(&local_26d0,param_1[0xc],param_1[0xd]);
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else if (*param_1 == 1) {
      uVar3 = 1;
    }
    else {
      local_26f8 = param_1[2];
      local_270c = param_1[3];
      local_26fc = param_1[4];
      local_2710 = (undefined4 *)param_1[5];
      uVar3 = 2;
    }
    local_26e0 = local_30;
    uStack_26dc = uStack_2c;
    uStack_26d8 = uStack_28;
    local_26f0 = local_26d0;
    uStack_26ec = local_26cc;
    uStack_26e8 = local_26c8;
    local_26c4 = local_2710;
    unaff_r11 = local_270c;
    local_2698 = (short)uVar1;
  }
  local_2688 = *param_2;
  uStack_2684 = param_2[1];
  uStack_2680 = param_2[2];
  uStack_267c = param_2[3];
  uStack_2678 = param_2[4];
  local_2674 = param_2[5];
  uStack_2670 = param_2[6];
  uStack_266c = param_2[7];
  uStack_2668 = param_2[8];
  uStack_2664 = param_2[9];
  uStack_2660 = param_2[10];
  local_26c8 = local_26f8;
  local_26c0 = local_26fc;
  local_26b4 = local_2700;
  local_26b8 = local_26f4;
  local_26cc = 0;
  local_26b0 = local_26e0;
  uStack_26ac = uStack_26dc;
  uStack_26a8 = uStack_26d8;
  local_26a4 = local_26f0;
  uStack_26a0 = uStack_26ec;
  uStack_269c = uStack_26e8;
  local_265c = 0;
  local_26d0 = uVar3;
  local_26bc = local_26c4;
  local_26c4 = (undefined4 *)unaff_r11;
  local_2690 = uVar4;
  iVar2 = thunk_FUN_01be5118(0x26a0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x26a0);
  }
  FUN_01bed4e2(iVar2,&local_26d0,0x26a0);
  return iVar2;
}

