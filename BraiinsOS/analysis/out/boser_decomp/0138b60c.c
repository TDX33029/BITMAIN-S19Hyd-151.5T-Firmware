// FUN_0138b60c @ 0138b60c size=380 calls_out=5 calls_in=1
// strings: 

void FUN_0138b60c(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 auStack_fe [54];
  char local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 auStack_c5 [73];
  char local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 auStack_50 [44];
  
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  local_1a4 = param_3[5];
  local_1a0 = param_3[6];
  local_19c = param_3[7];
  local_198 = param_3[8];
  uStack_194 = param_3[9];
  uStack_190 = param_3[10];
  if (*param_2 == 3 && param_2[1] == 0) {
    iVar2 = param_2[2];
    uVar1 = *(undefined1 *)((int)param_2 + 9);
    if ((*param_3 & 0xff) != 3) {
      FUN_017726bc(*param_3 & 0xff,param_3[1]);
    }
    if (uVar3 != 0) {
      (**(code **)(uVar3 + 0x10))(&local_1a4,uVar4,uVar5);
    }
    local_108 = 3;
    local_104 = 0;
    local_100 = (char)iVar2;
    local_7b = uVar1;
    if (local_1a0 != 0) {
      (**(code **)(local_1a0 + 0x10))(&uStack_194,local_19c,local_198);
    }
  }
  else {
    local_188 = *param_3;
    uStack_184 = param_3[1];
    uStack_180 = param_3[2];
    uStack_17c = param_3[3];
    uStack_178 = param_3[4];
    local_174 = param_3[5];
    uStack_170 = param_3[6];
    uStack_16c = param_3[7];
    uStack_168 = param_3[8];
    uStack_164 = param_3[9];
    uStack_160 = param_3[10];
    FUN_01bed4e2(&local_108,param_2,0x88);
    FUN_01414ce8(&local_7c,&local_188);
    if (local_7c == '\x03') {
      FUN_009d5814(&local_108);
      local_104 = 0;
      local_100 = 3;
      local_108 = 3;
    }
    else {
      FUN_01bed4e2(auStack_50,(uint)&local_7c | 3,0x29);
      FUN_01706d0c(&local_c8);
      local_c6 = local_7a;
      local_c7 = local_7b;
      local_c8 = local_7c;
      FUN_01bed4e2(auStack_c5,auStack_50,0x29);
      FUN_01bed4e2(&local_188,auStack_fe,0x7e);
      local_7b = local_ff;
    }
  }
  *(undefined1 *)((int)param_1 + 9) = local_7b;
  *(undefined1 *)(param_1 + 2) = local_100;
  *param_1 = local_108;
  param_1[1] = local_104;
  FUN_01bed4e2((int)param_1 + 10,&local_188,0x7e);
  return;
}

