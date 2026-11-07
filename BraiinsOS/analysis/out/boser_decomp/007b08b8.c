// FUN_007b08b8 @ 007b08b8 size=656 calls_out=7 calls_in=4
// strings: ZipWriter was already closed

void FUN_007b08b8(uint *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint local_5158;
  uint local_5154;
  undefined1 *local_5150;
  undefined1 auStack_514c [4124];
  uint local_4130;
  uint uStack_412c;
  uint uStack_4128;
  uint uStack_4124;
  uint uStack_4120;
  uint local_411c;
  uint uStack_4118;
  uint uStack_4114;
  uint uStack_4110;
  uint uStack_410c;
  undefined1 auStack_4108 [4128];
  uint local_30e8;
  uint uStack_30e4;
  uint uStack_30e0;
  undefined1 *local_30d8;
  undefined1 *local_30d4;
  uint local_30d0;
  uint uStack_30cc;
  uint uStack_30c8;
  undefined1 auStack_30c4 [4156];
  undefined1 auStack_2088 [4160];
  undefined1 *local_1048;
  undefined1 *local_1044;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  iVar2 = 2;
  *param_2 = 2;
  param_2[1] = 0;
  puVar5 = (undefined1 *)param_2[2];
  if ((uint)(uVar3 < 2) <= -uVar4) {
    iVar2 = uVar3 - 2;
  }
  if (iVar2 == 0) {
    FUN_019a18a8(&local_30d8,0xb,"ZipWriter was already closed",0x1c);
    puVar5 = local_30d4;
    local_1048 = local_30d8;
LAB_007b0a28:
    *param_1 = 0x80000001;
    param_1[1] = (uint)local_1048;
    param_1[2] = (uint)puVar5;
    FUN_018f2d80(param_3,param_4);
  }
  else {
    if (iVar2 == 1) {
      FUN_01bed4e2(auStack_4108,param_2 + 3,0x101c);
    }
    else {
      local_5158 = uVar3;
      local_5154 = uVar4;
      local_5150 = puVar5;
      FUN_01bed4e2(auStack_514c,param_2 + 3,0x101c);
      local_4130 = param_2[0x40a];
      uStack_412c = param_2[0x40b];
      uStack_4128 = param_2[0x40c];
      uStack_4124 = param_2[0x40d];
      uStack_4120 = param_2[0x40e];
      local_411c = param_2[0x40f];
      uStack_4118 = param_2[0x410];
      uStack_4114 = param_2[0x411];
      uStack_4110 = param_2[0x412];
      uStack_410c = param_2[0x413];
      FUN_007af0d4(&local_1048,&local_5158);
      puVar5 = local_5150;
      uVar3 = local_5158;
      puVar6 = auStack_514c;
      if (((char)local_1048 == '\x04') || (puVar6 = local_1048, ((uint)local_1048 & 0xff) == 4)) {
        bVar1 = false;
        local_5158 = 0;
        local_5154 = 0;
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce6854,auStack_514c);
        }
        FUN_01bed4e2(&local_30d8,auStack_514c,0x101c);
        local_1048 = puVar6;
      }
      else {
        bVar1 = true;
        puVar5 = local_1044;
      }
      FUN_007ae0bc(&local_5158);
      if (bVar1) goto LAB_007b0a28;
      FUN_01bed4e2(auStack_4108,&local_30d8,0x101c);
    }
    local_1048 = puVar5;
    FUN_01bed4e2((uint)&local_1048 | 4,auStack_4108,0x101c);
    (**(code **)(param_4 + 0xc))(&local_30d8,param_3,&local_1048);
    if (*(int *)(param_4 + 4) != 0) {
      thunk_FUN_01be4678(param_3);
    }
    local_30e8 = local_30d0;
    uStack_30e4 = uStack_30cc;
    uStack_30e0 = uStack_30c8;
    if (local_30d8 == &SUB_00000004 && local_30d4 == (undefined1 *)0x0) {
      *param_1 = local_30d0;
      param_1[1] = uStack_30cc;
      param_1[2] = uStack_30c8;
    }
    else {
      FUN_01bed4e2(auStack_2088,auStack_30c4,0x103c);
      *param_2 = (uint)local_30d8;
      param_2[1] = (uint)local_30d4;
      param_2[2] = local_30e8;
      param_2[3] = uStack_30e4;
      param_2[4] = uStack_30e0;
      FUN_01bed4e2(param_2 + 5,auStack_2088,0x103c);
      *param_1 = 0x80000007;
    }
  }
  return;
}

