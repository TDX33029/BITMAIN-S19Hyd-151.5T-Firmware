// FUN_01513274 @ 01513274 size=456 calls_out=4 calls_in=0
// strings: 

bool FUN_01513274(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_68;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar6 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    iVar9 = *param_1;
    uVar10 = param_1[1];
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    iVar11 = param_1[3];
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
LAB_015132f8:
    uVar15 = FUN_01a41998(local_48);
    iVar2 = (int)uVar15;
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar8 = iVar11;
    }
    if (iVar2 != 0 && iVar8 != 0) {
      uVar7 = *(undefined4 *)(iVar2 + 4);
      iVar8 = *(int *)(iVar2 + 8);
      uVar3 = FUN_0155d010(param_1 + 4,uVar7,iVar8);
      uVar1 = uVar3 >> 0x19;
      local_68 = 0;
      while( true ) {
        uVar3 = uVar10 & uVar3;
        uVar12 = *(uint *)(iVar9 + uVar3);
        uVar4 = uVar12 ^ uVar1 * 0x1010101;
        uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
        while (uVar4 != 0) {
          uVar13 = uVar4 - 1 & uVar4;
          uVar14 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar10;
          iVar5 = iVar9 + -0x20 + uVar14 * -0x20;
          uVar4 = uVar13;
          if ((iVar8 == *(int *)(iVar5 + 8)) &&
             (iVar5 = thunk_FUN_01bed842(uVar7,*(undefined4 *)(iVar5 + 4),iVar8), iVar5 == 0)) {
            iVar8 = FUN_01577618(iVar9 + -0x14 + uVar14 * -0x20,(int)((ulonglong)uVar15 >> 0x20),
                                 param_3);
            if (iVar8 != 0) goto LAB_015132f8;
            goto LAB_01513428;
          }
        }
        if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
        local_68 = local_68 + 4;
        uVar3 = uVar3 + local_68;
      }
    }
LAB_01513428:
    bVar6 = iVar2 == 0;
  }
  return bVar6;
}

