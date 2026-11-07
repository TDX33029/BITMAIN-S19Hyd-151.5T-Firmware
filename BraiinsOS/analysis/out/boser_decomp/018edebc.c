// FUN_018edebc @ 018edebc size=608 calls_out=9 calls_in=1
// strings: 

void FUN_018edebc(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  uint local_58;
  uint local_54;
  uint local_50;
  undefined8 local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  
  FUN_0190de90(&local_34);
  uVar1 = local_34._2_1_;
  if ((char)local_34 != '\x18') {
    FUN_01bed4e2((int)param_1 + 7,(uint)&local_34 | 3,9);
    *(undefined1 *)((int)param_1 + 6) = local_34._2_1_;
    *(undefined1 *)((int)param_1 + 5) = local_34._1_1_;
    *(char *)(param_1 + 1) = (char)local_34;
    *param_1 = 0x80000001;
    return;
  }
  if ((local_34 & 0x100) != 0) {
    local_30 = FUN_019311a8(param_2);
    local_34 = 0x80000000;
    FUN_01935918(auStack_78,&local_34);
    FUN_01bed4e2((uint)auStack_68 | 2,auStack_78,0xc);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((int)param_1 + 5) = uVar1;
    *param_1 = 0x80000000;
    FUN_01bed4e2((int)param_1 + 6,auStack_68,0xe);
    return;
  }
  FUN_01930f74(&local_34,&DAT_0056a6b8,param_2);
  uVar7 = local_34 & 0xff;
  if (uVar7 == 0x18) {
    uVar9 = FUN_0192fac8(param_2,(uint)local_30);
    if ((int)uVar9 != 0) {
      uVar7 = 4;
      local_44 = 0;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if ((int)((ulonglong)uVar9 >> 0x20) != 0) {
        iVar8 = 0;
        do {
          uVar5 = local_38;
          local_4c = uVar9;
          FUN_01935dac(&local_34,&local_4c);
          uVar3 = local_28;
          uVar2 = local_30._4_4_;
          uVar6 = (uint)local_30;
          if (local_34 != 0) {
            FUN_018e26a0(&local_40);
            local_34 = (uint)local_30 >> 8;
            uVar5 = local_30._4_4_;
            uVar7 = (uint)local_30;
            goto LAB_018ee0e4;
          }
          uVar9 = local_4c;
          if (uVar5 == local_40) {
            FUN_018c4418(&local_40);
            uVar7 = local_3c;
            uVar9 = local_4c;
          }
          local_4c._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
          local_38 = uVar5 + 1;
          puVar4 = (uint *)(uVar7 + iVar8);
          *puVar4 = uVar6;
          iVar8 = iVar8 + 0xc;
          puVar4[1] = uVar2;
          puVar4[2] = uVar3;
        } while (local_44 < local_4c._4_4_);
      }
      uVar5 = local_38;
      uVar6 = local_3c;
      uVar7 = local_40;
      local_58 = local_40;
      local_54 = local_3c;
      local_50 = local_38;
      local_4c = uVar9;
      FUN_01935dac(&local_34,param_2);
      if (local_34 == 1) {
        FUN_018e26a0(&local_58);
        uVar5 = local_30._4_4_;
        uVar6 = (uint)local_30;
      }
      else {
        if (uVar7 != 0x80000000) {
          *param_1 = uVar7;
          param_1[1] = uVar6;
          param_1[2] = uVar5;
          param_1[3] = (uint)local_30;
          param_1[4] = local_30._4_4_;
          param_1[5] = local_28;
          return;
        }
        local_28 = (uint)local_30;
      }
      goto LAB_018ee0ec;
    }
    local_28 = 0;
    uVar7 = 0xb;
    local_34 = 0;
    uVar5 = param_2;
  }
  else {
    local_34 = local_34 >> 8;
    uVar5 = (uint)local_30;
    local_28 = local_30._4_4_;
  }
LAB_018ee0e4:
  uVar6 = uVar7 & 0xff | local_34 << 8;
LAB_018ee0ec:
  param_1[2] = uVar5;
  *param_1 = 0x80000001;
  param_1[1] = uVar6;
  param_1[3] = local_28;
  return;
}

