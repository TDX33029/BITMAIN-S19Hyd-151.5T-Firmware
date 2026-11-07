// FUN_0122692c @ 0122692c size=668 calls_out=7 calls_in=2
// strings: 

bool FUN_0122692c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_134;
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
  
  local_60 = &DAT_0188aa18;
  local_76 = 0x41;
  local_78 = 0x41;
  local_54 = &DAT_0188a948;
  local_5c = &DAT_0188aa48;
  local_58 = 0;
  local_64 = &DAT_0188a9e8;
  local_70 = &DAT_0188a9dc;
  local_74 = 0;
  local_90 = &DAT_0188a9ac;
  local_94 = 0;
  local_c4 = &DAT_0188a948;
  local_c8 = 0;
  local_fc = &DAT_0188a978;
  local_100 = 0;
  local_104 = 1;
  local_11c = &DAT_0188a9c4;
  local_120 = 0;
  local_124 = 1;
  FUN_010d872c(&local_134,&local_124,param_1,param_2,0xffffffff,0xfc009fff,0xffffffff,0xf8000001,2,2
              );
  uVar3 = local_12c;
  uVar2 = local_130;
  uVar1 = local_134;
  if (local_134 == 0x80000001) {
    FUN_01049d28(&local_124);
  }
  else {
    FUN_01049d28(&local_124);
    iVar4 = FUN_01226c60(uVar2,uVar3);
    if (iVar4 != 0) {
      local_54 = &DAT_0188a948;
      local_5c = &DAT_0188aa48;
      local_58 = 0;
      local_64 = &DAT_0188a9e8;
      local_60 = &DAT_0188aa18;
      local_70 = &DAT_0188a9dc;
      local_74 = 0;
      local_76 = 0x41;
      local_78 = 0x41;
      local_94 = 0;
      local_90 = &DAT_0188a9ac;
      local_c4 = &DAT_0188a948;
      local_c8 = 0;
      local_100 = 0;
      local_fc = &DAT_0188a978;
      local_104 = 1;
      local_120 = 0;
      local_11c = &DAT_0188a9c4;
      local_124 = 1;
      FUN_010d46d8(&local_134,&local_124,uVar2,uVar3);
      FUN_01049d28(&local_124);
      local_100 = CONCAT22(local_100._2_2_,1);
      local_10c = 1;
      local_108 = 0;
      local_118 = 0;
      local_104 = local_12c;
      local_110 = 0x2e;
      local_114 = local_12c;
      local_124 = 0x2e;
      local_120 = local_130;
      local_11c = (undefined *)local_12c;
      do {
        uVar6 = FUN_016bd48c(&local_124);
        iVar4 = (int)uVar6;
        if (iVar4 == 0 || (int)((ulonglong)uVar6 >> 0x20) == 0) break;
        iVar5 = FUN_01226fe4(iVar4);
      } while (iVar5 != 0);
      if ((local_134 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_130);
      }
      if ((uVar1 & 0x7fffffff) == 0) {
        return iVar4 == 0;
      }
      thunk_FUN_016d3fb4(uVar2);
      return iVar4 == 0;
    }
    if ((uVar1 & 0x7fffffff) == 0) {
      return false;
    }
    thunk_FUN_016d3fb4(uVar2);
  }
  return false;
}

