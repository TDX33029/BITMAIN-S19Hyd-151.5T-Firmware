// FUN_0150fe5c @ 0150fe5c size=508 calls_out=4 calls_in=0
// strings: 

int FUN_0150fe5c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar6 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    iVar9 = *param_1;
    uVar10 = param_1[1];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    iVar11 = param_1[3];
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
    do {
      uVar14 = FUN_01a41998(local_58);
      iVar6 = (int)uVar14;
      if (iVar6 == 0) {
        return 0;
      }
      local_30 = *(undefined4 *)(iVar6 + 4);
      local_2c = *(undefined4 *)(iVar6 + 8);
      uVar8 = *(undefined4 *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 8);
      local_34 = 0x80000000;
      local_28 = param_3;
      if (iVar11 != 0) {
        uVar2 = FUN_0155d010(param_1 + 4,uVar8,iVar6);
        uVar1 = uVar2 >> 0x19;
        iVar7 = 0;
        while( true ) {
          uVar2 = uVar10 & uVar2;
          uVar13 = *(uint *)(iVar9 + uVar2);
          uVar3 = uVar13 ^ uVar1 * 0x1010101;
          for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0;
              uVar3 = uVar3 - 1 & uVar3) {
            uVar12 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                     uVar10;
            iVar4 = iVar9 + -0x20 + uVar12 * -0x20;
            if ((iVar6 == *(int *)(iVar4 + 8)) &&
               (iVar4 = thunk_FUN_01bed842(uVar8,*(undefined4 *)(iVar4 + 4),iVar6), iVar4 == 0)) {
              piVar5 = (int *)(iVar9 + -0x14 + uVar12 * -0x20);
              goto LAB_01510028;
            }
          }
          if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
          iVar7 = iVar7 + 4;
          uVar2 = uVar2 + iVar7;
        }
      }
      piVar5 = param_1 + 0xc;
LAB_01510028:
      iVar6 = FUN_015776f4(piVar5,(int)((ulonglong)uVar14 >> 0x20),&local_34,param_4,param_5);
    } while (iVar6 == 0);
  }
  return iVar6;
}

