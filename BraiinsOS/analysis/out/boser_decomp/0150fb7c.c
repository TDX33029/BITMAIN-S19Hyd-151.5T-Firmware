// FUN_0150fb7c @ 0150fb7c size=480 calls_out=4 calls_in=0
// strings: 

bool FUN_0150fb7c(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_68;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar7 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    iVar9 = *param_1;
    uVar11 = param_1[1];
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    iVar12 = param_1[3];
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
    do {
      uVar16 = FUN_01a41998(local_48);
      iVar2 = (int)uVar16;
      if (iVar2 == 0) break;
      if (iVar12 != 0) {
        uVar8 = *(undefined4 *)(iVar2 + 4);
        iVar13 = *(int *)(iVar2 + 8);
        uVar3 = FUN_0155d010(param_1 + 4,uVar8,iVar13);
        uVar1 = uVar3 >> 0x19;
        local_68 = 0;
        while( true ) {
          uVar3 = uVar11 & uVar3;
          uVar10 = *(uint *)(iVar9 + uVar3);
          uVar4 = uVar10 ^ uVar1 * 0x1010101;
          uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
          while (uVar4 != 0) {
            uVar15 = uVar4 - 1 & uVar4;
            uVar14 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar11;
            iVar6 = iVar9 + -0x20 + uVar14 * -0x20;
            uVar4 = uVar15;
            if ((iVar13 == *(int *)(iVar6 + 8)) &&
               (iVar6 = thunk_FUN_01bed842(uVar8,*(undefined4 *)(iVar6 + 4),iVar13), iVar6 == 0)) {
              piVar5 = (int *)(iVar9 + -0x14 + uVar14 * -0x20);
              goto LAB_0150fd34;
            }
          }
          if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
          local_68 = local_68 + 4;
          uVar3 = uVar3 + local_68;
        }
      }
      piVar5 = param_1 + 0xc;
LAB_0150fd34:
      iVar13 = FUN_01577618(piVar5,(int)((ulonglong)uVar16 >> 0x20),param_3);
    } while (iVar13 != 0);
    bVar7 = iVar2 == 0;
  }
  return bVar7;
}

