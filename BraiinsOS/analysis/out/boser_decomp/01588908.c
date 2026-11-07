// FUN_01588908 @ 01588908 size=492 calls_out=4 calls_in=0
// strings: 

int FUN_01588908(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  int local_7c;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_58[2] = *(uint *)(param_2 + 4);
  local_4c = *(undefined4 *)(param_2 + 8);
  iVar7 = *param_1;
  uVar9 = param_1[1];
  local_38 = *(undefined4 *)(param_2 + 0xc);
  if (local_58[2] == 0) {
    local_38 = 0;
  }
  iVar10 = param_1[3];
  local_58[0] = (uint)(local_58[2] != 0);
  local_44 = 0;
  local_58[1] = 0;
  local_48 = local_58[0];
  local_40 = local_58[2];
  local_3c = local_4c;
LAB_01588990:
  do {
    do {
      uVar13 = FUN_01a41998(local_58);
      iVar6 = (int)uVar13;
      if (iVar6 == 0) {
        return 0;
      }
    } while (iVar10 == 0);
    uVar5 = *(undefined4 *)(iVar6 + 4);
    iVar6 = *(int *)(iVar6 + 8);
    uVar2 = FUN_01676700(param_1 + 4,uVar5,iVar6);
    uVar1 = uVar2 >> 0x19;
    local_7c = 0;
    while( true ) {
      uVar2 = uVar9 & uVar2;
      uVar11 = *(uint *)(iVar7 + uVar2);
      uVar3 = uVar11 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar3 != 0) {
        uVar8 = uVar3 - 1 & uVar3;
        uVar12 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar9;
        iVar4 = iVar7 + -0x20 + uVar12 * -0x20;
        uVar3 = uVar8;
        if ((iVar6 == *(int *)(iVar4 + 8)) &&
           (iVar4 = thunk_FUN_01bed842(uVar5,*(undefined4 *)(iVar4 + 4),iVar6), iVar4 == 0)) {
          local_34 = 0x80000000;
          local_30 = uVar5;
          local_2c = iVar6;
          local_28 = param_3;
          iVar6 = FUN_015776f4(iVar7 + -0x14 + uVar12 * -0x20,(int)((ulonglong)uVar13 >> 0x20),
                               &local_34,param_4,param_5);
          if (iVar6 != 0) {
            return iVar6;
          }
          goto LAB_01588990;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_7c = local_7c + 4;
      uVar2 = uVar2 + local_7c;
    }
  } while( true );
}

