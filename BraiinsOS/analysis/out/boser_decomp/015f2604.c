// FUN_015f2604 @ 015f2604 size=1200 calls_out=6 calls_in=1
// strings: 

undefined4
FUN_015f2604(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 uVar16;
  int local_8c;
  uint local_84;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined2 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  uVar16 = (**(code **)(param_3 + 0x3c))(param_2);
  FUN_00664bdc(&local_58,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  local_4a = (**(code **)(param_3 + 0x40))(param_2);
  (**(code **)(param_3 + 0x30))(&local_48,param_2);
  local_34 = &local_4a;
  local_28 = &LAB_00632348;
  local_30 = &LAB_015df5cc;
  local_38 = &LAB_00632348;
  local_3c = &local_58;
  local_2c = &local_48;
  FUN_00664898(&local_64,&DAT_00591e89,&local_3c);
  FUN_0134bd64(local_48,local_44);
  FUN_0134bd64(local_58,local_54);
  iVar9 = param_1[6];
  iVar10 = param_1[7];
  iVar12 = param_1[4];
  uVar13 = param_1[5];
  if (param_1[3] != 0) {
    uVar3 = FUN_01adafd4(iVar12,uVar13,iVar9,iVar10,local_60,local_5c);
    uVar8 = uVar3 >> 0x19;
    iVar11 = *param_1;
    uVar14 = param_1[1];
    local_8c = 0;
    while( true ) {
      uVar3 = uVar14 & uVar3;
      uVar4 = *(uint *)(iVar11 + uVar3);
      uVar5 = uVar4 ^ uVar8 * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar14;
        iVar7 = iVar11 + -0x18 + uVar6 * -0x18;
        local_84 = uVar13;
        if ((local_5c == *(uint *)(iVar7 + 8)) &&
           (iVar7 = thunk_FUN_01bed842(local_60,*(undefined4 *)(iVar7 + 4),local_5c,iVar10),
           iVar7 == 0)) {
          iVar11 = iVar11 + uVar6 * -0x18;
          uVar3 = *(uint *)(iVar11 + -8);
          uVar14 = *(uint *)(iVar11 + -4);
          uVar8 = param_5 - uVar3;
          uVar4 = param_6 - (uVar14 + (uVar3 > param_5));
          if (param_6 <= uVar14 && (uint)(uVar3 <= param_5) <= param_6 - uVar14) {
            uVar8 = 0;
            uVar4 = 0;
          }
          if (-(uVar4 >> 3) < (uint)((uVar8 >> 3 | uVar4 << 0x1d) < 0x7d)) {
            FUN_0134bd64(local_64,local_60);
            return 0;
          }
          goto LAB_015f2888;
        }
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_8c = local_8c + 4;
      uVar3 = uVar3 + local_8c;
    }
  }
LAB_015f2888:
  uVar13 = FUN_01adafd4(iVar12,uVar13,iVar9,iVar10,local_60,local_5c);
  if (param_1[2] == 0) {
    FUN_015d5e24(param_1,param_1 + 4);
  }
  puVar15 = (uint *)*param_1;
  uVar3 = param_1[1];
  bVar2 = false;
  iVar9 = 0;
  uVar8 = uVar13;
  do {
    uVar8 = uVar3 & uVar8;
    uVar4 = *(uint *)((int)puVar15 + uVar8);
    uVar14 = uVar4 ^ (uVar13 >> 0x19) * 0x1010101;
    for (uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff; uVar14 != 0;
        uVar14 = uVar14 - 1 & uVar14) {
      uVar5 = uVar8 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) & uVar3;
      if ((local_5c == puVar15[uVar5 * -6 + -4]) &&
         (iVar10 = thunk_FUN_01bed842(local_60,puVar15[uVar5 * -6 + -5],local_5c), iVar10 == 0)) {
        puVar15[uVar5 * -6 + -2] = param_5;
        puVar15[uVar5 * -6 + -1] = param_6;
        FUN_0134bd64(local_64,local_60);
        return 1;
      }
    }
    uVar14 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_015f29a0:
      if ((uVar14 & uVar4 << 1) != 0) {
        uVar8 = (uint)*(char *)((int)puVar15 + local_84);
        if (-1 < (int)uVar8) {
          uVar8 = *puVar15 & 0x80808080;
          uVar14 = LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
          uVar8 = (uint)*(byte *)((int)puVar15 + (uVar14 >> 3));
          local_84 = uVar14 >> 3;
        }
        bVar1 = (byte)(uVar13 >> 0x19);
        *(byte *)((int)puVar15 + local_84) = bVar1;
        param_1[2] = param_1[2] - (uVar8 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar15 + (uVar3 & local_84 - 4) + 4) = bVar1;
        puVar15[local_84 * -6 + -2] = param_5;
        puVar15[local_84 * -6 + -1] = param_6;
        puVar15[local_84 * -6 + -6] = local_64;
        puVar15[local_84 * -6 + -5] = local_60;
        puVar15[local_84 * -6 + -4] = local_5c;
        return 1;
      }
      bVar2 = true;
    }
    else {
      if (uVar14 != 0) {
        local_84 = uVar8 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                          (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                   uVar3;
        goto LAB_015f29a0;
      }
      bVar2 = false;
    }
    iVar9 = iVar9 + 4;
    uVar8 = iVar9 + uVar8;
  } while( true );
}

