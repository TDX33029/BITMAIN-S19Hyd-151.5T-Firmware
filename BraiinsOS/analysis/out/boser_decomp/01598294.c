// FUN_01598294 @ 01598294 size=644 calls_out=7 calls_in=2
// strings: 

bool FUN_01598294(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_124;
  undefined4 local_120;
  undefined *local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined *local_fc;
  undefined4 local_c8;
  undefined *local_c4;
  undefined4 local_94;
  undefined *local_90;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  
  local_76 = 0x41;
  local_78 = 0x41;
  local_58 = 0;
  local_74 = 0;
  local_94 = 0;
  local_c8 = 0;
  local_100 = 0;
  local_120 = 0;
  local_fc = &DAT_01cf9020;
  local_54 = &DAT_01cf9084;
  local_70 = &DAT_01cf9014;
  local_90 = &DAT_01cf9054;
  local_c4 = &DAT_01cf9084;
  local_104 = 1;
  local_11c = &DAT_01cf906c;
  local_124 = 1;
  local_64 = &DAT_01cf915c;
  local_60 = &DAT_01cf90fc;
  local_5c = &DAT_01cf912c;
  FUN_0144d298(&local_134,&local_124,param_1,param_2,0xffffffff,0xfc009fff,0xffffffff,0xf8000001,2,2
              );
  uVar3 = local_12c;
  uVar2 = local_130;
  iVar1 = local_134;
  if (local_134 == -0x7fffffff) {
    FUN_013da4dc(&local_124);
    bVar6 = false;
  }
  else {
    FUN_013da4dc(&local_124);
    iVar4 = FUN_015985b0(uVar2,uVar3);
    if (iVar4 == 0) {
      bVar6 = false;
      if (iVar1 != -0x80000000) {
        FUN_019bb7e0(iVar1,uVar2);
      }
    }
    else {
      local_54 = &DAT_01cf9084;
      local_76 = 0x41;
      local_78 = 0x41;
      local_70 = &DAT_01cf9014;
      local_58 = 0;
      local_74 = 0;
      local_90 = &DAT_01cf9054;
      local_94 = 0;
      local_c4 = &DAT_01cf9084;
      local_c8 = 0;
      local_100 = 0;
      local_fc = &DAT_01cf9020;
      local_104 = 1;
      local_120 = 0;
      local_11c = &DAT_01cf906c;
      local_124 = 1;
      local_5c = &DAT_01cf912c;
      local_60 = &DAT_01cf90fc;
      local_64 = &DAT_01cf915c;
      FUN_0144994c(&local_134,&local_124,uVar2,uVar3);
      FUN_013da4dc(&local_124);
      local_100 = CONCAT22(local_100._2_2_,1);
      local_10c = 1;
      local_104 = local_12c;
      local_108 = 0;
      local_110 = 0x2e;
      local_114 = local_12c;
      local_118 = 0;
      local_11c = (undefined *)local_12c;
      local_120 = local_130;
      local_124 = 0x2e;
      do {
        uVar7 = FUN_014379b8(&local_124);
        iVar4 = (int)uVar7;
        if (iVar4 == 0 || (int)((ulonglong)uVar7 >> 0x20) == 0) break;
        iVar5 = FUN_01598d24(iVar4);
      } while (iVar5 != 0);
      if (local_134 != -0x80000000) {
        FUN_019bb7e0(local_134,local_130);
      }
      if (iVar1 != -0x80000000) {
        FUN_019bb7e0(iVar1,uVar2);
      }
      bVar6 = iVar4 == 0;
    }
  }
  return bVar6;
}

