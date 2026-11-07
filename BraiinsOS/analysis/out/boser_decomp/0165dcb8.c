// FUN_0165dcb8 @ 0165dcb8 size=2752 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0165dcb8(undefined4 *param_1,undefined1 **param_2,uint param_3,int param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  bool bVar9;
  int local_190;
  uint local_18c;
  undefined4 local_188;
  undefined2 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_170;
  int local_16c;
  undefined1 auStack_168 [64];
  char local_128;
  undefined1 local_120 [16];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  int local_fc;
  undefined2 uStack_f8;
  undefined1 auStack_f6 [22];
  undefined1 auStack_e0 [40];
  undefined1 local_b8;
  undefined4 local_b0 [4];
  undefined1 *local_a0;
  undefined1 *local_9c;
  int *local_98;
  undefined1 *local_94;
  undefined4 *local_90;
  undefined1 *local_8c;
  undefined4 local_88 [16];
  char local_48;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_18c = param_5;
  local_184 = 0;
  local_188 = 0;
  local_190 = param_4;
  FUN_016633f0(&local_a0,param_4,param_5,&local_188,6);
  if (local_a0 == &DAT_80000004) {
    FUN_01bed93e(auStack_168,0,0x41);
    local_180 = 0x67452301;
    uStack_17c = 0xefcdab89;
    uStack_178 = 0x98badcfe;
    uStack_174 = 0x10325476;
    uVar6 = param_3 >> 6;
    local_16c = 0;
    local_170 = 0;
    if (uVar6 == 0) {
      ppuVar8 = param_2;
      uVar4 = param_3;
    }
    else {
      local_16c = 0;
      local_170 = uVar6;
      FUN_0165e7b8(&local_180,param_2);
      ppuVar8 = (undefined1 **)((int)param_2 + (param_3 & 0x7fffffc0));
      uVar4 = param_3 & 0x3f;
    }
    FUN_01bed4e2(auStack_168,ppuVar8,uVar4);
    uVar7 = param_5;
    uVar3 = 0x40 - uVar4;
    local_128 = (char)uVar4;
    if (param_5 < uVar3) {
      FUN_01bed4e2(auStack_168 + uVar4,param_4,param_5);
      uVar4 = uVar4 + uVar7;
    }
    else {
      iVar5 = param_4;
      if (uVar4 != 0) {
        FUN_01bed4e2(auStack_168 + uVar4,param_4,uVar3);
        bVar9 = 0xfffffffe < local_170;
        local_170 = local_170 + 1;
        local_16c = local_16c + (uint)bVar9;
        FUN_0165e7b8(&local_180,auStack_168,1);
        uVar7 = uVar7 - uVar3;
        iVar5 = param_4 + uVar3;
      }
      uVar4 = uVar7 & 0x3f;
      uVar3 = uVar7 >> 6;
      if (uVar3 != 0) {
        bVar9 = CARRY4(local_170,uVar3);
        local_170 = local_170 + uVar3;
        local_16c = local_16c + (uint)bVar9;
        FUN_0165e7b8(&local_180);
      }
      FUN_01bed4e2(auStack_168,iVar5 + (uVar7 & 0x7fffffc0),uVar4);
    }
    uVar7 = 0x40 - uVar4;
    cVar1 = (char)uVar4;
    local_128 = cVar1;
    if (param_3 < uVar7) {
      FUN_01bed4e2(auStack_168 + uVar4,param_2,param_3);
      local_128 = cVar1 + (char)param_3;
    }
    else {
      uVar3 = param_3;
      ppuVar8 = param_2;
      if (uVar4 != 0) {
        FUN_01bed4e2(auStack_168 + uVar4,param_2,uVar7);
        bVar9 = 0xfffffffe < local_170;
        local_170 = local_170 + 1;
        local_16c = local_16c + (uint)bVar9;
        FUN_0165e7b8(&local_180,auStack_168,1);
        uVar3 = param_3 - uVar7;
        ppuVar8 = (undefined1 **)((int)param_2 + uVar7);
      }
      uVar4 = uVar3 >> 6;
      if (uVar4 != 0) {
        bVar9 = CARRY4(local_170,uVar4);
        local_170 = local_170 + uVar4;
        local_16c = local_16c + (uint)bVar9;
        FUN_0165e7b8(&local_180);
      }
      FUN_01bed4e2(auStack_168,(undefined1 *)((int)ppuVar8 + (uVar3 & 0x7fffffc0)),uVar3 & 0x3f);
      local_128 = (char)(uVar3 & 0x3f);
    }
    FUN_0165f228(local_120,&local_180);
    FUN_01bed93e(&uStack_f8,0,0x41);
    local_110 = 0x67452301;
    uStack_10c = 0xefcdab89;
    uStack_108 = 0x98badcfe;
    uStack_104 = 0x10325476;
    local_fc = 0;
    local_100 = 0;
    if (uVar6 == 0) {
      ppuVar8 = param_2;
      uVar6 = param_3;
    }
    else {
      local_fc = 0;
      local_100 = uVar6;
      FUN_0165e7b8(&local_110,param_2);
      ppuVar8 = (undefined1 **)((int)param_2 + (param_3 & 0x7fffffc0));
      uVar6 = param_3 & 0x3f;
    }
    FUN_01bed4e2(&uStack_f8,ppuVar8,uVar6);
    local_b8 = (undefined1)uVar6;
    if (uVar6 < 0x3d) {
      *(undefined2 *)((int)&uStack_f8 + uVar6) = 0x3124;
      iVar5 = uVar6 + 3;
      auStack_f6[uVar6] = 0x24;
    }
    else {
      FUN_01bed4e2((int)&uStack_f8 + uVar6,&DAT_004c19ea,-uVar6 + 0x40);
      bVar9 = 0xfffffffe < local_100;
      local_100 = local_100 + 1;
      local_fc = local_fc + (uint)bVar9;
      FUN_0165e7b8(&local_110,&uStack_f8,1);
      iVar5 = uVar6 - 0x3d;
      FUN_01bed4e2(&uStack_f8,(int)&UNK_004c1a2a + -uVar6,iVar5);
    }
    uVar6 = param_5;
    uVar4 = 0x40 - iVar5;
    local_b8 = (undefined1)iVar5;
    if (param_5 < uVar4) {
      FUN_01bed4e2((int)&uStack_f8 + iVar5,param_4,param_5);
      uVar6 = iVar5 + uVar6;
    }
    else {
      uVar7 = param_5;
      iVar2 = param_4;
      if (iVar5 != 0) {
        FUN_01bed4e2((int)&uStack_f8 + iVar5,param_4,uVar4);
        bVar9 = 0xfffffffe < local_100;
        local_100 = local_100 + 1;
        local_fc = local_fc + (uint)bVar9;
        FUN_0165e7b8(&local_110,&uStack_f8,1);
        uVar7 = uVar6 - uVar4;
        iVar2 = param_4 + uVar4;
      }
      uVar6 = uVar7 & 0x3f;
      uVar4 = uVar7 >> 6;
      if (uVar4 != 0) {
        bVar9 = CARRY4(local_100,uVar4);
        local_100 = local_100 + uVar4;
        local_fc = local_fc + (uint)bVar9;
        FUN_0165e7b8(&local_110);
      }
      FUN_01bed4e2(&uStack_f8,iVar2 + (uVar7 & 0x7fffffc0),uVar6);
    }
    local_b8 = (undefined1)uVar6;
    if (param_3 != 0) {
      uVar4 = param_3;
      do {
        uVar6 = uVar6 & 0xff;
        uVar3 = 0x40 - uVar6;
        iVar5 = (int)&uStack_f8 + uVar6;
        uVar7 = uVar4;
        if (0xf < uVar4) {
          uVar7 = 0x10;
        }
        if (uVar7 < uVar3) {
          FUN_01bed4e2(iVar5,local_120,uVar7);
          uVar6 = uVar7 + uVar6;
        }
        else {
          FUN_01bed4e2(iVar5,local_120,uVar3);
          bVar9 = 0xfffffffe < local_100;
          local_100 = local_100 + 1;
          local_fc = local_fc + (uint)bVar9;
          FUN_0165e7b8(&local_110,&uStack_f8,1);
          uVar6 = uVar7 - uVar3;
          FUN_01bed4e2(&uStack_f8,local_120 + uVar3,uVar6);
        }
        bVar9 = 0xf < uVar4;
        uVar4 = uVar4 - 0x10;
        local_b8 = (undefined1)uVar6;
      } while (bVar9 && uVar4 != 0);
      uVar4 = param_3;
      do {
        if ((uVar4 & 1) == 0) {
          if (uVar6 != 0x3f) {
            *(undefined1 *)((int)&uStack_f8 + uVar6) = *(undefined1 *)param_2;
            goto LAB_0165e1c4;
          }
          ppuVar8 = param_2;
LAB_0165e1e8:
          FUN_01bed4e2((int)&uStack_f8 + uVar6,ppuVar8,0x40 - uVar6);
          bVar9 = 0xfffffffe < local_100;
          local_100 = local_100 + 1;
          local_fc = local_fc + (uint)bVar9;
          FUN_0165e7b8(&local_110,&uStack_f8,1);
          uVar6 = 0;
        }
        else {
          local_a0 = (undefined1 *)((uint)local_a0 & 0xffffff00);
          if (uVar6 == 0x3f) {
            ppuVar8 = &local_a0;
            goto LAB_0165e1e8;
          }
          *(undefined1 *)((int)&uStack_f8 + uVar6) = 0;
LAB_0165e1c4:
          uVar6 = uVar6 + 1;
        }
        uVar4 = uVar4 >> 1;
        local_b8 = (undefined1)uVar6;
      } while (uVar4 != 0);
    }
    FUN_0165f228(local_b0,&local_110);
    iVar5 = 0;
    uVar6 = 0;
    do {
      FUN_01bed93e(local_88,0,0x41);
      local_a0 = (undefined1 *)0x67452301;
      local_9c = (undefined1 *)0xefcdab89;
      local_98 = (int *)0x98badcfe;
      local_94 = (undefined1 *)0x10325476;
      if ((uVar6 & 1) == 0) {
        local_88[0] = local_b0[0];
        local_88[1] = local_b0[1];
        local_88[2] = local_b0[2];
        local_88[3] = local_b0[3];
        uVar4 = 0x10;
      }
      else if (param_3 < 0x40) {
        FUN_01bed4e2(local_88,param_2,param_3);
        uVar4 = param_3;
      }
      else {
        FUN_0165e7b8(&local_a0,param_2);
        FUN_01bed4e2(local_88,(undefined1 *)((int)param_2 + (param_3 & 0x7fffffc0)),param_3 & 0x3f);
        uVar4 = param_3 & 0x3f;
      }
      uVar7 = param_5;
      local_48 = (char)uVar4;
      if (iVar5 + ((uint)((ulonglong)uVar6 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar6 / 3 != 0) {
        uVar3 = 0x40 - uVar4;
        if (param_5 < uVar3) {
          FUN_01bed4e2((int)local_88 + uVar4,param_4,param_5);
          uVar4 = uVar7 + uVar4;
        }
        else {
          iVar2 = param_4;
          if (uVar4 != 0) {
            FUN_01bed4e2((int)local_88 + uVar4,param_4,uVar3);
            FUN_0165e7b8(&local_a0,local_88,1);
            iVar2 = param_4 + uVar3;
            uVar7 = param_5 - uVar3;
          }
          if (uVar7 >> 6 != 0) {
            FUN_0165e7b8(&local_a0,iVar2);
          }
          uVar4 = uVar7 & 0x3f;
          FUN_01bed4e2(local_88,iVar2 + (uVar7 & 0x7fffffc0),uVar4);
        }
        local_48 = (char)uVar4;
      }
      if (iVar5 + ((uVar6 / 7) * 8 - uVar6 / 7) != 0) {
        uVar7 = 0x40 - uVar4;
        if (param_3 < uVar7) {
          FUN_01bed4e2((int)local_88 + uVar4,param_2,param_3);
          uVar4 = param_3 + uVar4;
        }
        else {
          uVar3 = param_3;
          ppuVar8 = param_2;
          if (uVar4 != 0) {
            FUN_01bed4e2((int)local_88 + uVar4,param_2,uVar7);
            FUN_0165e7b8(&local_a0,local_88,1);
            uVar3 = param_3 - uVar7;
            ppuVar8 = (undefined1 **)((int)param_2 + uVar7);
          }
          if (uVar3 >> 6 != 0) {
            FUN_0165e7b8(&local_a0,ppuVar8);
          }
          uVar4 = uVar3 & 0x3f;
          FUN_01bed4e2(local_88,(undefined1 *)((int)ppuVar8 + (uVar3 & 0x7fffffc0)),uVar4);
        }
        local_48 = (char)uVar4;
      }
      if ((uVar6 & 1) == 0) {
        uVar7 = 0x40 - uVar4;
        if (param_3 < uVar7) {
          FUN_01bed4e2((int)local_88 + uVar4,param_2,param_3);
          local_48 = (char)param_3 + (char)uVar4;
        }
        else {
          uVar3 = param_3;
          ppuVar8 = param_2;
          if (uVar4 != 0) {
            FUN_01bed4e2((int)local_88 + uVar4,param_2,uVar7);
            FUN_0165e7b8(&local_a0,local_88,1);
            uVar3 = param_3 - uVar7;
            ppuVar8 = (undefined1 **)((int)param_2 + uVar7);
          }
          if (uVar3 >> 6 != 0) {
            FUN_0165e7b8(&local_a0,ppuVar8);
          }
          FUN_01bed4e2(local_88,(undefined1 *)((int)ppuVar8 + (uVar3 & 0x7fffffc0)),uVar3 & 0x3f);
          local_48 = (char)(uVar3 & 0x3f);
        }
      }
      else {
        iVar2 = (int)local_88 + uVar4;
        local_40[0] = local_b0[0];
        local_40[1] = local_b0[1];
        local_40[2] = local_b0[2];
        local_40[3] = local_b0[3];
        if (uVar4 < 0x30) {
          FUN_01bed4e2(iVar2,local_b0,0x10);
          uVar7 = uVar4 + 0x10;
        }
        else {
          FUN_01bed4e2(iVar2,local_40,0x40 - uVar4);
          FUN_0165e7b8(&local_a0,local_88,1);
          uVar7 = uVar4 - 0x30;
          FUN_01bed4e2(local_88,(int)local_40 + (uVar7 & 0x7fffffc0) + (0x40 - uVar4),uVar7);
        }
        local_48 = (char)uVar7;
      }
      uVar6 = uVar6 + 1;
      FUN_0165f228(local_b0,&local_a0);
      iVar5 = iVar5 + -1;
    } while (uVar6 != 1000);
    local_90 = local_40;
    iVar5 = 0;
    do {
      uVar6 = (uint)(byte)(&DAT_00567648)[iVar5];
      if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,0x10,&DAT_01d06d94);
      }
      local_120[iVar5] = *(undefined1 *)((int)local_b0 + uVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x10);
    FUN_01663550(local_90,local_120,0x10);
    local_8c = &LAB_00632348;
    local_98 = &local_190;
    local_94 = &LAB_018a13b8;
    local_9c = &LAB_018a13b8;
    local_a0 = &DAT_01d06d8c;
    FUN_00664898(&local_30,&DAT_00584984,&local_a0);
    FUN_0134bd64(local_40[0],local_40[1]);
    param_1[1] = local_30;
    param_1[2] = uStack_2c;
    param_1[3] = uStack_28;
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_a0;
    param_1[2] = local_9c;
    param_1[3] = local_98;
  }
  return;
}

