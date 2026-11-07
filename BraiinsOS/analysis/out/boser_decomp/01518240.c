// FUN_01518240 @ 01518240 size=584 calls_out=4 calls_in=0
// strings: 

byte FUN_01518240(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  int local_70;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  bVar9 = 1;
  if (*param_2 == '\x05') {
    local_28 = *(int *)(param_2 + 0xc);
    if (local_28 == 0) {
LAB_01518470:
      bVar9 = 0;
    }
    else {
      local_48[2] = *(uint *)(param_2 + 4);
      bVar7 = 0;
      iVar13 = *param_1;
      if (local_48[2] == 0) {
        local_28 = 0;
      }
      local_3c = *(undefined4 *)(param_2 + 8);
      uVar10 = param_1[1];
      iVar11 = param_1[3];
      iVar12 = param_1[0x11];
      iVar2 = param_1[0x12];
      local_48[0] = (uint)(local_48[2] != 0);
      local_34 = 0;
      local_48[1] = 0;
      local_38 = local_48[0];
      local_30 = local_48[2];
      local_2c = local_3c;
LAB_015182f4:
      uVar18 = FUN_01a41998(local_48);
      iVar6 = (int)uVar18;
      bVar9 = bVar7;
      if (iVar6 != 0) {
        if (iVar11 == 0) goto LAB_01518470;
        iVar14 = *(int *)(iVar6 + 8);
        uVar15 = *(undefined4 *)(iVar6 + 4);
        uVar3 = FUN_0155d010(param_1 + 4,uVar15,iVar14);
        uVar1 = uVar3 >> 0x19;
        local_70 = 0;
        while( true ) {
          uVar3 = uVar10 & uVar3;
          uVar4 = *(uint *)(iVar13 + uVar3);
          uVar5 = uVar4 ^ uVar1 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar17 = uVar5 - 1 & uVar5;
            uVar16 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                     uVar10;
            iVar8 = iVar13 + -0x20 + uVar16 * -0x20;
            uVar5 = uVar17;
            if ((iVar14 == *(int *)(iVar8 + 8)) &&
               (iVar8 = thunk_FUN_01bed842(uVar15,*(undefined4 *)(iVar8 + 4),iVar14), iVar8 == 0)) {
              iVar14 = FUN_01577618(iVar13 + -0x14 + uVar16 * -0x20,(int)((ulonglong)uVar18 >> 0x20)
                                    ,param_3);
              if (iVar14 == 0) goto LAB_01518470;
              if (*(int *)(iVar6 + 8) == iVar2) {
                iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 4),iVar12,iVar2);
                bVar7 = iVar6 == 0 | bVar7;
              }
              goto LAB_015182f4;
            }
          }
          bVar9 = 0;
          if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
          local_70 = local_70 + 4;
          uVar3 = uVar3 + local_70;
        }
      }
    }
  }
  return bVar9;
}

