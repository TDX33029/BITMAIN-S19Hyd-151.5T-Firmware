// FUN_015aaf34 @ 015aaf34 size=1100 calls_out=10 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_015aaf34(undefined4 *param_1,short ******param_2)

{
  short sVar1;
  short *****pppppsVar2;
  ushort uVar3;
  undefined2 uVar4;
  short *******pppppppsVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *******pppppppsVar8;
  short *****pppppsVar9;
  undefined4 uVar10;
  short *******local_f0;
  short *****local_ec;
  short *******pppppppsStack_e8;
  short *******local_e0;
  short *****local_dc;
  undefined4 local_d8;
  short *****local_d4;
  short *******local_d0;
  short *****local_cc;
  short *****local_c8;
  short *****pppppsStack_c4;
  short *****local_c0;
  undefined1 auStack_bc [100];
  undefined4 local_58;
  short *******local_50;
  short *****local_4c;
  short *******local_48;
  short *****local_44;
  short *******pppppppsStack_40;
  short ******local_3c;
  short *******local_38;
  short *****local_34;
  short *******local_30;
  code *local_2c;
  
  sVar1 = *(short *)param_2;
  uVar10 = 2;
  if (sVar1 != 0) {
    uVar10 = 10;
  }
  FUN_01979d08(&local_d8,uVar10,2,0x11);
  pppppsVar2 = local_d4;
  if (((char)local_d8 != '\x04') &&
     (pppppsVar9 = local_d4, pppppppsVar5 = (short *******)local_d8, ((uint)local_d8 & 0xff) != 4))
  {
LAB_015ab178:
    local_34 = (short *****)FUN_019a7d7c;
    local_38 = (short *******)&local_48;
    local_48 = pppppppsVar5;
    local_44 = pppppsVar9;
    FUN_00664898(&local_d8,&DAT_005ae32c,&local_38);
    FUN_0069d8a4((uint)local_48 & 0xff,local_44);
    *param_1 = 2;
    param_1[1] = local_d8;
    param_1[2] = local_d4;
    param_1[3] = local_d0;
    return;
  }
  if (sVar1 == 0) {
    uVar6 = 0;
    uVar7 = 8;
  }
  else {
    uVar6 = 0x29;
    uVar7 = 0x31;
  }
  FUN_01979ebc(&local_d8,local_d4,uVar6,uVar7);
  pppppsVar9 = local_d4;
  pppppppsVar5 = (short *******)local_d8;
  if (((char)local_d8 != '\x04') && (((uint)local_d8 & 0xff) != 4)) {
    FUN_01bf01d6(pppppsVar2);
    goto LAB_015ab178;
  }
  FUN_01979dd0(&local_50,pppppsVar2,1,2,1);
  if ((char)local_50 == '\x04') {
    FUN_01979dd0(&local_f0,pppppsVar2,1,0xf,1);
    if ((char)local_f0 != '\x04') {
      local_44 = local_ec;
      local_48 = local_f0;
      if (3 < DAT_01d51b00) {
        local_38 = (short *******)&local_48;
        local_34 = (short *****)FUN_019a7d7c;
        local_c8 = (short *****)&DAT_01cfc6e8;
        local_cc = (short *****)0x17;
        local_d0 = (short *******)0x4b3d9f;
        local_d4 = (short *****)0x17;
        local_d8 = "m";
        FUN_015fb650(&DAT_005a7521,&local_38,4,&local_d8);
        local_f0 = (short *******)((uint)local_48 & 0xff);
      }
      FUN_0069d8a4(local_f0,local_44);
    }
    FUN_01979ca0(&local_50,pppppsVar2);
    if ((char)local_50 == '\x04') {
      if (sVar1 == 0) {
        pppppsVar9 = *(short ******)((int)param_2 + 2);
        uVar3 = *(ushort *)((int)param_2 + 6);
        FUN_01bed93e(&local_d0,0,0x78);
        uVar3 = uVar3 << 8 | uVar3 >> 8;
        local_58 = 0x10;
        uVar4 = 2;
      }
      else {
        local_d0 = (short *******)param_2[1];
        local_cc = param_2[2];
        local_c8 = param_2[3];
        pppppsStack_c4 = param_2[4];
        local_c0 = param_2[6];
        pppppsVar9 = param_2[5];
        uVar3 = *(ushort *)(param_2 + 7);
        FUN_01bed93e(auStack_bc,0,100);
        uVar3 = uVar3 << 8 | uVar3 >> 8;
        local_58 = 0x1c;
        uVar4 = 10;
      }
      local_d8 = (char *)CONCAT22(uVar3,uVar4);
      local_d4 = pppppsVar9;
      FUN_01979d50(&local_e0,pppppsVar2,&local_d8);
      if ((char)local_e0 == '\x04') {
        if (4 < DAT_01d51b00) {
          local_c8 = (short *****)&DAT_01cfc6f8;
          local_34 = (short *****)&LAB_015fb8f8;
          local_38 = (short *******)&local_48;
          local_cc = (short *****)0x17;
          local_d0 = (short *******)0x4b3d9f;
          local_d4 = (short *****)0x17;
          local_d8 = "m";
          local_48 = (short *******)param_2;
          FUN_015fb650(&DAT_005b5b44,&local_38,5,&local_d8);
        }
        *param_1 = 4;
        param_1[1] = pppppsVar2;
        param_1[2] = uVar10;
        return;
      }
      local_2c = FUN_019a7d7c;
      local_30 = (short *******)&local_50;
      local_38 = &local_3c;
      local_4c = local_dc;
      local_50 = local_e0;
      local_34 = (short *****)&LAB_015fb8f8;
      local_3c = param_2;
      FUN_00664898(&local_48,&DAT_0058a951,&local_38);
      local_f0 = local_48;
      local_ec = local_44;
      pppppppsStack_e8 = pppppppsStack_40;
      FUN_0069d8a4((uint)local_50 & 0xff,local_4c);
      pppppppsVar5 = local_f0;
      pppppsVar9 = local_ec;
      pppppppsVar8 = pppppppsStack_e8;
      goto LAB_015ab224;
    }
    local_ec = local_4c;
    local_f0 = local_50;
    local_44 = (short *****)FUN_019a7d7c;
    local_48 = (short *******)&local_f0;
    FUN_00664898(&local_d8,&DAT_0058ab22,&local_48);
    local_38 = (short *******)local_d8;
    local_34 = local_d4;
    local_30 = local_d0;
    FUN_0069d8a4((uint)local_f0 & 0xff,local_ec);
  }
  else {
    local_44 = (short *****)FUN_019a7d7c;
    local_48 = (short *******)&local_f0;
    local_ec = local_4c;
    local_f0 = local_50;
    FUN_00664898(&local_d8,&DAT_00593fa9,&local_48);
    local_38 = (short *******)local_d8;
    local_34 = local_d4;
    local_30 = local_d0;
    FUN_0069d8a4((uint)local_f0 & 0xff,local_ec);
  }
  pppppppsVar5 = local_38;
  pppppsVar9 = local_34;
  pppppppsVar8 = local_30;
LAB_015ab224:
  param_1[1] = pppppppsVar5;
  param_1[2] = pppppsVar9;
  param_1[3] = pppppppsVar8;
  *param_1 = 2;
  FUN_01bf01d6(pppppsVar2);
  return;
}

