// FUN_0110ed6c @ 0110ed6c size=848 calls_out=9 calls_in=2
// strings: 

void FUN_0110ed6c(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char local_128;
  char cStack_127;
  char cStack_126;
  undefined1 uStack_125;
  uint local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 auStack_100 [64];
  undefined4 local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char local_98 [3];
  undefined1 local_95;
  uint local_94;
  undefined4 local_90;
  
  uVar7 = param_2[2];
  uVar8 = 0;
  if ((int)uVar7 < 0) {
LAB_0110ed88:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,uVar7);
  }
  if (uVar7 == 0) {
    pcVar3 = &DAT_00000001;
  }
  else {
    uVar8 = 1;
    pcVar3 = (char *)FUN_016d38c8(uVar7,1);
    if (pcVar3 == (char *)0x0) goto LAB_0110ed88;
  }
  bVar1 = *(byte *)(param_2 + 4);
  iVar6 = param_2[1];
  iVar9 = *param_2;
  if (bVar1 == 2) {
    FUN_00f5d750(&local_128,iVar6,uVar7,pcVar3,uVar7,param_2[3]);
  }
  else {
    cVar2 = *(char *)((int)param_2 + 0x11);
    FUN_00f5d750(local_98,iVar6,uVar7,pcVar3,uVar7,param_2[3]);
    if (local_98[0] == '\x06') {
      if (local_94 < 4) {
        local_128 = '\x05';
      }
      else {
        uVar4 = local_94 - 4;
        if (uVar7 < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar4,local_94,uVar7,&DAT_0187f964);
        }
        FUN_016dd606(auStack_100,0,0x40);
        local_124 = 0xbb67ae85;
        local_120 = 0x3c6ef372;
        uStack_11c = 0xa54ff53a;
        local_128 = 'g';
        cStack_127 = 0xe6;
        cStack_126 = 9;
        uStack_125 = 0x6a;
        local_118 = 0x510e527f;
        uStack_114 = 0x9b05688c;
        uStack_110 = 0x1f83d9ab;
        uStack_10c = 0x5be0cd19;
        local_104 = 0;
        local_108 = 0;
        local_c0 = 0;
        FUN_0159c478(&local_128,pcVar3,uVar4);
        FUN_016dd1aa(local_98,&local_128,0x70);
        local_9c = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_a8 = 0;
        local_ac = 0;
        local_b0 = 0;
        local_b4 = 0;
        local_b8 = 0;
        FUN_0159c570(local_98,&local_b8);
        local_168 = local_b8;
        uStack_164 = local_b4;
        uStack_160 = local_b0;
        uStack_15c = local_ac;
        local_158 = local_a8;
        uStack_154 = local_a4;
        uStack_150 = local_a0;
        uStack_14c = local_9c;
        FUN_016dd606(auStack_100,0,0x40);
        local_124 = 0xbb67ae85;
        local_120 = 0x3c6ef372;
        uStack_11c = 0xa54ff53a;
        local_128 = 'g';
        cStack_127 = -0x1a;
        cStack_126 = '\t';
        uStack_125 = 0x6a;
        local_118 = 0x510e527f;
        uStack_114 = 0x9b05688c;
        uStack_110 = 0x1f83d9ab;
        uStack_10c = 0x5be0cd19;
        local_104 = 0;
        local_108 = 0;
        local_c0 = 0;
        FUN_0159c478(&local_128,&local_168,0x20);
        FUN_016dd1aa(local_98,&local_128,0x70);
        local_9c = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_a8 = 0;
        local_ac = 0;
        local_b0 = 0;
        local_b4 = 0;
        local_b8 = 0;
        FUN_0159c570(local_98,&local_b8);
        local_148 = local_b8;
        uStack_144 = local_b4;
        uStack_140 = local_b0;
        uStack_13c = local_ac;
        local_138 = local_a8;
        uStack_134 = local_a4;
        uStack_130 = local_a0;
        uStack_12c = local_9c;
        if (local_b8 == *(int *)(pcVar3 + uVar4)) {
          if (((bVar1 & 1) == 0) || (*pcVar3 == cVar2)) {
            local_128 = '\x06';
            local_124 = uVar4;
          }
          else {
            local_128 = '\x04';
            cStack_127 = *pcVar3;
            cStack_126 = cVar2;
          }
        }
        else {
          cStack_127 = (char)local_b8;
          cStack_126 = (char)((uint)local_b8 >> 8);
          uStack_125 = (undefined1)((uint)local_b8 >> 0x10);
          iVar5 = *(int *)(pcVar3 + uVar4);
          local_128 = '\x03';
          local_124._1_3_ = (undefined3)iVar5;
          local_120._0_1_ = (undefined1)((uint)iVar5 >> 0x18);
          local_124 = CONCAT31(local_124._1_3_,(char)((uint)local_b8 >> 0x18));
        }
      }
    }
    else {
      cStack_127 = local_98[1];
      cStack_126 = local_98[2];
      local_128 = local_98[0];
      uStack_125 = local_95;
      local_120 = local_90;
      local_124 = local_94;
    }
  }
  if (iVar9 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if (local_128 == '\x06') {
    *param_1 = 0;
    param_1[1] = uVar7;
    param_1[2] = pcVar3;
    if (uVar7 <= local_124) {
      local_124 = uVar7;
    }
    param_1[3] = local_124;
  }
  else {
    *param_1 = 1;
    param_1[1] = CONCAT13(uStack_125,CONCAT12(cStack_126,CONCAT11(cStack_127,local_128)));
    param_1[2] = local_124;
    param_1[3] = local_120;
    if (uVar7 != 0) {
      thunk_FUN_016d3fb4(pcVar3);
      return;
    }
  }
  return;
}

