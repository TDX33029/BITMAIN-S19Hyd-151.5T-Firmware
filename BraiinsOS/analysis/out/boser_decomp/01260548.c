// FUN_01260548 @ 01260548 size=1004 calls_out=11 calls_in=2
// strings: 

void FUN_01260548(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined1 *local_104;
  uint local_100;
  undefined4 *local_98;
  uint local_94;
  uint local_90;
  
  iVar10 = *(int *)(param_2 + 0x48);
  iVar4 = param_2;
  if (iVar10 != 0) {
    iVar4 = *(int *)(param_2 + 0x50);
  }
  if (iVar10 != 0 && iVar4 != 0) {
    for (iVar4 = *(int *)(param_2 + 0x4c); iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar10 = *(int *)(iVar10 + 0x60);
    }
    if (*(short *)(iVar10 + 0x5e) == 0) {
      iVar4 = 0;
      do {
        iVar8 = *(int *)(iVar10 + 0x58);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fff0);
        }
        iVar4 = iVar4 + 1;
        puVar1 = (ushort *)(iVar10 + 0x5c);
        iVar10 = iVar8;
      } while (*(ushort *)(iVar8 + 0x5e) <= *puVar1);
      if (iVar4 != 0) {
        iVar4 = -iVar4;
        do {
          bVar13 = iVar4 != -1;
          iVar4 = iVar4 + 1;
        } while (bVar13);
      }
    }
  }
  uVar7 = param_3 + 1;
  uVar11 = param_4;
  if ((param_4 & 0xff) == 3) {
    uVar7 = 1;
    uVar11 = 2;
  }
  FUN_01260464(&local_128,uVar7,uVar11,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  iVar4 = *(int *)(param_2 + 0x48);
  if (iVar4 != 0) {
    iVar10 = *(int *)(param_2 + 0x4c);
    while( true ) {
      iVar8 = (uint)*(ushort *)(iVar4 + 0x5e) << 3;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = (uint)*(ushort *)(iVar4 + 0x5e);
        if (iVar8 == 0) goto LAB_01260614;
        uVar6 = *(uint *)(iVar4 + uVar5 * 8);
        iVar8 = iVar8 + -8;
        bVar12 = uVar7 < uVar6;
        bVar13 = !bVar12 && uVar7 != uVar6;
        uVar6 = uVar5 + 1;
      } while ((char)(bVar13 - bVar12) == '\x01');
      if (bVar13 == bVar12) break;
      uVar6 = uVar5;
LAB_01260614:
      if (iVar10 == 0) goto LAB_012606f0;
      iVar10 = iVar10 + -1;
      iVar4 = *(int *)(iVar4 + uVar6 * 4 + 0x60);
    }
    puVar3 = (undefined4 *)(iVar4 + uVar5 * 8);
    uVar9 = *puVar3;
    uVar2 = *(undefined1 *)(puVar3 + 1);
    FUN_01269070((int *)(param_2 + 0x48),uVar7,uVar11);
    FUN_01260548(&local_98,param_2,uVar9,uVar2);
    if (local_98 != (undefined4 *)0x0) {
      *param_1 = 1;
      param_1[1] = local_94;
      param_1[2] = local_90;
      goto LAB_012608fc;
    }
    uVar11 = local_90 & 0xff;
    uVar7 = local_94;
  }
LAB_012606f0:
  if ((param_4 & 0xff) == 3) {
    FUN_015e8ad4(&local_11c,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  }
  else {
    FUN_01260464(&local_11c,param_3,param_4,*(undefined4 *)(param_2 + 4),
                 *(undefined4 *)(param_2 + 8));
  }
  FUN_019adea8(&local_98,local_118,local_114);
  uVar9 = local_124;
  if (local_98 == (undefined4 *)0x1) {
    local_104 = (undefined1 *)local_94;
    local_100 = local_90;
    local_108 = (undefined4 *)0x1;
    FUN_0069603c((uint)&local_108 | 4);
    local_10c = local_114;
    local_104 = &LAB_019ba78c;
    local_108 = &local_110;
    local_110 = local_118;
    FUN_00664898(&local_98,&DAT_005847bb,&local_108);
    local_108 = local_98;
    local_104 = (undefined1 *)local_94;
    local_100 = local_90;
    FUN_01afbc08(&local_98,0,&local_108);
  }
  else {
    FUN_019adea8(&local_98,local_124,local_120);
    if (local_98 == (undefined4 *)0x1) {
      local_104 = (undefined1 *)local_94;
      local_100 = local_90;
      local_108 = (undefined4 *)0x1;
      FUN_0069603c((uint)&local_108 | 4);
      FUN_019adae8(&local_98,local_118,local_114,uVar9,local_120);
      FUN_019bb7e0(local_128,uVar9);
      FUN_019bb7e0(local_11c,local_118);
      if (((char)local_98 == '\x04') || (((uint)local_98 & 0xff) == 4)) {
        *(char *)(param_1 + 2) = (char)uVar11;
        *param_1 = 0;
        param_1[1] = uVar7;
        return;
      }
      param_1[1] = local_98;
      param_1[2] = local_94;
      *param_1 = 1;
      return;
    }
    local_10c = local_120;
    local_104 = &LAB_019ba78c;
    local_108 = &local_110;
    local_110 = uVar9;
    FUN_00664898(&local_98,&DAT_0058a58a,&local_108);
    local_108 = local_98;
    local_104 = (undefined1 *)local_94;
    local_100 = local_90;
    FUN_01afbc08(&local_98,0xc,&local_108);
  }
  param_1[1] = local_98;
  *param_1 = 1;
  param_1[2] = local_94;
  FUN_019bb7e0(local_11c,local_118);
LAB_012608fc:
  FUN_019bb7e0(local_128,local_124);
  return;
}

