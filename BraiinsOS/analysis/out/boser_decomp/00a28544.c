// FUN_00a28544 @ 00a28544 size=468 calls_out=6 calls_in=0
// strings: 

int FUN_00a28544(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_230;
  int local_22c;
  undefined4 uStack_228;
  int local_224;
  int local_21c;
  int local_218;
  int local_214;
  undefined4 local_210;
  int local_20c;
  int local_208;
  undefined1 auStack_200 [32];
  int local_1e0;
  int iStack_1dc;
  int local_180;
  undefined4 local_17c;
  int local_158;
  undefined4 local_154;
  int local_130;
  undefined4 local_12c;
  int local_108;
  undefined4 local_104;
  undefined1 auStack_f8 [144];
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  int local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  byte local_2b;
  
  local_230 = *param_1;
  iVar2 = param_1[1];
  uStack_228 = param_1[2];
  iVar5 = param_1[3];
  local_22c = iVar2;
  local_224 = iVar5;
  if (iVar2 == iVar5) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar7 = *(undefined4 *)(iVar2 + 0x1c);
      iVar6 = *(int *)(iVar2 + 0x20);
      iVar4 = *(int *)(iVar2 + 0x24);
      FUN_019bb7e0(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14));
      iVar1 = iVar4 * 0x1d8 + iVar6;
      local_21c = iVar3;
      local_218 = iVar6;
      local_214 = iVar6;
      local_210 = uVar7;
      local_20c = iVar1;
      if (iVar4 != 0) {
        iVar4 = iVar4 * 0x1d8;
        do {
          FUN_01bed4e2(auStack_200,iVar6,0x1d8);
          uVar8 = (uint)local_2b;
          local_208 = iVar3;
          FUN_019bb7e0(local_68,local_64);
          if (local_5c != -0x80000000) {
            FUN_019bb7e0(local_5c,local_58);
          }
          if (local_50 != -0x80000000) {
            FUN_019bb7e0(local_50,local_4c);
          }
          if (local_44 != -0x80000000) {
            FUN_019bb7e0(local_44,local_40);
          }
          if (local_38 != -0x80000000) {
            FUN_019bb7e0(local_38,local_34);
          }
          if (local_1e0 != 2 || iStack_1dc != 0) {
            if (local_180 != -0x80000000) {
              FUN_0132b958(local_180,local_17c,8,0x28);
            }
            if (local_158 != -0x80000000) {
              FUN_0132b958(local_158,local_154,8,0x28);
            }
            if (local_130 != -0x80000000) {
              FUN_0132b958(local_130,local_12c,8,0x28);
            }
            if (local_108 != -0x80000000) {
              FUN_0132b958(local_108,local_104,8,0x28);
            }
            FUN_00a27b10(auStack_f8);
          }
          iVar6 = iVar6 + 0x1d8;
          iVar3 = iVar3 + uVar8;
          iVar4 = iVar4 + -0x1d8;
        } while (iVar4 != 0);
        local_214 = iVar1;
      }
      iVar2 = iVar2 + 0x28;
      FUN_0094a438(&local_218);
    } while (iVar2 != iVar5);
    local_22c = iVar2;
  }
  FUN_0094aac0(&local_230);
  return iVar3;
}

