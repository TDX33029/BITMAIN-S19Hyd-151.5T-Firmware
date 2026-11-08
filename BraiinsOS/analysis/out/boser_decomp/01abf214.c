// FUN_01abf214 @ 01abf214 size=592 calls_out=6 calls_in=4
// strings: 

void FUN_01abf214(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 *local_34;
  undefined4 **local_30;
  undefined1 *local_2c;
  undefined1 uStack_25;
  
  piVar12 = (int *)*param_1;
  if (piVar12[3] != 0) {
    local_44 = param_3;
    local_40 = param_4;
    uVar5 = FUN_01ab2e08(piVar12[4],piVar12[5],piVar12[6],piVar12[7],param_2);
    uVar10 = uVar5 >> 0x19;
    iVar9 = *piVar12;
    local_48 = 0;
    while( true ) {
      uVar5 = piVar12[1] & uVar5;
      uVar13 = *(uint *)(iVar9 + uVar5);
      uVar7 = uVar13 ^ uVar10 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar8 = uVar7 >> 8;
        uVar1 = uVar7 >> 0x10;
        uVar2 = uVar7 >> 0x18;
        uVar3 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        uVar8 = uVar5 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                        >> 3) & piVar12[1];
        iVar11 = iVar9 + -0x30 + uVar8 * -0x30;
        bVar14 = *(int *)(param_2 + 8) == *(int *)(iVar11 + 8);
        if (bVar14) {
          iVar11 = *(int *)(iVar11 + 0x10);
        }
        if (bVar14 && *(int *)(param_2 + 0x10) == iVar11) {
          iVar9 = iVar9 + uVar8 * -0x30;
          if (*(char *)(iVar9 + -0x18) == '\x05') {
            local_34 = &local_44;
            local_3c._4_4_ = *(undefined4 *)(iVar9 + -0x10);
            local_3c._0_4_ = *(int *)(iVar9 + -0x14) + 8;
            local_30 = &local_34;
            local_2c = &LAB_01aedbd8;
            iVar11 = FUN_012fa178(&local_3c,&DAT_01d2f334,&DAT_00590e5f,&local_30);
            if (iVar11 != 0) {
              return;
            }
          }
          else {
            if (*(char *)(iVar9 + -0x18) != '\x06') {
              return;
            }
            local_3c = FUN_01abefc0(*(int *)(iVar9 + -0x14) + 8);
            local_34 = &local_44;
            local_30 = &local_34;
            local_2c = &LAB_01aedbd8;
            iVar6 = FUN_012fa178(&local_3c,&DAT_01d2f2ac,&DAT_00590e5f,&local_30);
            iVar4 = local_3c._4_4_;
            iVar11 = (int)local_3c;
            if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00531a5d,0x22,&uStack_25,&DAT_01d2f28c,&DAT_01d2f2c4);
            }
            uVar5 = FUN_016c2c08(*(byte *)((int)local_3c + 0x15b) + 1);
            uVar10 = (uVar5 & 0xffff) >> 8;
            if ((uVar5 & 1) != 0) {
              uVar10 = uVar5 >> 0x10;
            }
            uVar10 = uVar10 + iVar4;
            if (*(uint *)(iVar11 + 0x58) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar10,*(uint *)(iVar11 + 0x58),&DAT_01d2f26c);
            }
            uVar10 = *(uint *)(*(int *)(iVar11 + 0x54) + uVar10 * 4);
            if (uVar10 == 0) {
              return;
            }
            if (uVar10 < *(uint *)(iVar11 + 8)) {
              return;
            }
            if (*(uint *)(iVar11 + 0xc) < uVar10) {
              return;
            }
          }
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar9 + -8) = 1;
          return;
        }
      }
      if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
      local_48 = local_48 + 4;
      uVar5 = uVar5 + local_48;
    }
  }
  return;
}

