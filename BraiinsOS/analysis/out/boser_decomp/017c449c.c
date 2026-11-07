// FUN_017c449c @ 017c449c size=232 calls_out=3 calls_in=2
// strings: 

void FUN_017c449c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_130 [128];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 auStack_a6 [54];
  char local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 auStack_6d [73];
  
  uVar2 = *param_3;
  uStack_15c = param_3[1];
  uStack_158 = param_3[2];
  uStack_154 = param_3[3];
  uStack_150 = param_3[4];
  local_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  uStack_140 = param_3[8];
  uStack_13c = param_3[9];
  uStack_138 = param_3[10];
  local_160 = uVar2;
  if (*param_2 == 3 && param_2[1] == 0) {
    uVar4 = (undefined1)param_2[2];
    uVar3 = *(undefined1 *)((int)param_2 + 9);
    FUN_01706d0c(&local_160);
  }
  else {
    local_160._0_1_ = (char)uVar2;
    cVar1 = (char)local_160;
    local_160._1_1_ = (undefined1)((uint)uVar2 >> 8);
    uVar4 = local_160._1_1_;
    local_160._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
    uVar3 = local_160._2_1_;
    FUN_01bed4e2(&local_b0,param_2,0x88);
    if (cVar1 != '\x03') {
      FUN_01706d0c(&local_70);
      local_6e = uVar3;
      local_6f = uVar4;
      local_70 = cVar1;
      FUN_01bed4e2(auStack_6d,(int)param_3 + 3,0x29);
      FUN_01bed4e2(auStack_130,auStack_a6,0x7e);
      goto LAB_017c4560;
    }
    FUN_009d5814(&local_b0);
  }
  local_ac = 0;
  local_b0 = 3;
  local_a8 = uVar4;
  local_a7 = uVar3;
LAB_017c4560:
  *(undefined1 *)((int)param_1 + 9) = local_a7;
  *(undefined1 *)(param_1 + 2) = local_a8;
  *param_1 = local_b0;
  param_1[1] = local_ac;
  FUN_01bed4e2((int)param_1 + 10,auStack_130,0x7e);
  return;
}

