// FUN_01b8da30 @ 01b8da30 size=1068 calls_out=5 calls_in=2
// strings: 

void FUN_01b8da30(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,int param_8,int param_9,uint param_10,int param_11)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_70 [3];
  undefined4 local_64;
  undefined4 local_60 [3];
  undefined4 local_54;
  undefined4 local_50 [3];
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar7 = param_1 + (param_2 - 4);
  local_30 = uVar7;
  if (4 < param_2) {
    iVar5 = param_10 - 1;
    FUN_01b8d3d0(local_70,param_3,*(undefined1 *)(param_4 + iVar5));
    FUN_01b8d3d0(local_60,param_5,*(undefined1 *)(param_6 + iVar5));
    uVar8 = 0;
    bVar1 = *(byte *)(param_8 + iVar5);
    FUN_01b8d3d0(local_50,param_7);
    iVar12 = param_10 + 0x1fffffff;
    iVar11 = param_9 + iVar12 * 8;
    local_40 = 0;
    local_3c = 0;
    local_34 = param_1;
    FUN_01b8d328(&local_40,*(undefined2 *)(iVar11 + 4),(&DAT_00562da1)[bVar1]);
    FUN_01b8d374(&local_40);
    FUN_01b8d328(&local_40,*(undefined2 *)(iVar11 + 6),(&DAT_00562d6c)[*(byte *)(param_4 + iVar5)]);
    FUN_01b8d374(&local_40);
    uVar6 = *(uint *)(param_9 + iVar12 * 8);
    uVar9 = (uint)*(byte *)(param_6 + iVar5);
    if (param_11 != 0) {
      if ((0x17 < uVar9) && (uVar8 = uVar9 - 0x18, uVar8 != 0)) {
        FUN_01b8d328(&local_40,uVar6,uVar8);
        FUN_01b8d374(&local_40);
      }
      uVar9 = uVar9 - uVar8;
      uVar6 = *(uint *)(param_9 + iVar12 * 8) >> (uVar8 & 0xff);
    }
    uVar8 = local_34;
    FUN_01b8d328(&local_40,uVar6,uVar9);
    local_34 = uVar8;
    FUN_01b8d374(&local_40);
    param_9 = param_9 + iVar12 * 8 + 8;
    for (uVar6 = param_10 - 2; uVar6 < param_10; uVar6 = uVar6 - 1) {
      bVar1 = *(byte *)(param_8 + uVar6);
      bVar2 = (&DAT_00562da1)[bVar1];
      bVar3 = *(byte *)(param_4 + uVar6);
      uVar8 = (uint)*(byte *)(param_6 + uVar6);
      bVar4 = (&DAT_00562d6c)[bVar3];
      FUN_01b8d450(&local_40,local_60,uVar8);
      FUN_01b8d450(&local_40,local_70,(uint)bVar3);
      FUN_01b8d374(&local_40);
      FUN_01b8d450(&local_40,local_50,(uint)bVar1);
      FUN_01b8d374(&local_40);
      uVar9 = local_34;
      FUN_01b8d328(&local_40,*(undefined2 *)(param_9 + -0xc),(uint)bVar2);
      if ((uint)bVar2 + (uint)bVar4 < 0x19) {
        local_34 = uVar9;
      }
      else {
        FUN_01b8d374(&local_40);
      }
      FUN_01b8d328(&local_40,*(undefined2 *)(param_9 + -10),(uint)bVar4);
      FUN_01b8d374(&local_40);
      uVar9 = *(uint *)(param_9 + -0x10);
      if (param_11 != 0) {
        if (uVar8 < 0x18) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar8 - 0x18;
          if (uVar10 != 0) {
            FUN_01b8d328(&local_40,uVar9,uVar10);
            FUN_01b8d374(&local_40);
          }
        }
        uVar8 = uVar8 - uVar10;
        uVar9 = *(uint *)(param_9 + -0x10) >> (uVar10 & 0xff);
      }
      uVar10 = local_34;
      FUN_01b8d328(&local_40,uVar9,uVar8);
      param_9 = param_9 + -8;
      local_34 = uVar10;
      FUN_01b8d374(&local_40);
    }
    FUN_01b8d328(&local_40,local_70[0],local_64);
    FUN_01b8d374(&local_40);
    FUN_01b8d328(&local_40,local_60[0],local_54);
    FUN_01b8d374(&local_40);
    FUN_01b8d328(&local_40,local_50[0],local_44);
    FUN_01b8d374(&local_40);
    local_40 = local_40 | 1 << (local_3c & 0xff);
    local_3c = local_3c + 1;
    FUN_01b8d374(&local_40);
    param_2 = extraout_r1;
    if (local_34 < uVar7) {
      iVar5 = local_34 - param_1;
      if (local_3c != 0) {
        iVar5 = iVar5 + 1;
      }
      if (iVar5 != 0) goto LAB_01b8daac;
    }
  }
  iVar5 = -0x46;
LAB_01b8daac:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(iVar5,param_2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

