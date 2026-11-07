// FUN_0178ee7c @ 0178ee7c size=636 calls_out=7 calls_in=1
// strings: 

undefined8
FUN_0178ee7c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  bool bVar2;
  uint local_220;
  uint uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined1 auStack_208 [356];
  undefined1 auStack_a4 [32];
  undefined4 local_84;
  undefined4 local_80;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_016dd606(auStack_a4,0,0x88,auStack_a4,param_3,param_4);
  local_220 = 0;
  uStack_21c = 0;
  local_210 = FUN_0178ee18(param_1,3,0);
  FUN_01791988(auStack_208);
  if (param_5 != 0 || param_6 != 0) {
    local_210 = CONCAT44(param_6,param_5);
  }
  local_220 = 0;
  uVar1 = local_210;
  for (uStack_21c = 0; local_210._4_4_ = (uint)((ulonglong)uVar1 >> 0x20),
      local_210._0_4_ = (uint)uVar1, local_210 = uVar1,
      uStack_21c <= local_210._4_4_ &&
      (uint)((uint)local_210 <= local_220) <= uStack_21c - local_210._4_4_;
      uStack_21c = uStack_21c + bVar2) {
    FUN_01791aa0(auStack_208,auStack_a4,0x20);
    FUN_01791aa0(auStack_208,param_1 + 9,4);
    FUN_01791aa0(auStack_208,param_1 + 10,4);
    FUN_01791aa0(auStack_208,param_1 + 0xc,4);
    FUN_01791aa0(auStack_208,param_1 + 0xd,4);
    FUN_01791aa0(auStack_208,param_1 + 0xe,8);
    FUN_01791aa0(auStack_208,&local_220,8);
    FUN_01791c40(auStack_208,auStack_a4);
    bVar2 = 0xfffffffe < local_220;
    local_220 = local_220 + 1;
    uVar1 = local_210;
  }
  if (param_7 == 0) {
    local_218 = param_3;
    uStack_214 = param_4;
  }
  else {
    local_218 = 0;
    uStack_214 = 0;
  }
  local_84 = local_218;
  local_80 = uStack_214;
  FUN_01791aa0(*param_1,auStack_a4,0x88);
  FUN_0178ed4c(auStack_208,0x160);
  FUN_0178ed4c(auStack_a4,0x88);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

