// FUN_016a2154 @ 016a2154 size=596 calls_out=5 calls_in=4
// strings: matcher write impl should not fail

void FUN_016a2154(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 *local_34;
  undefined4 **local_30;
  undefined1 *local_2c;
  undefined1 uStack_25;
  
  piVar7 = (int *)*param_1;
  if (piVar7[3] != 0) {
    local_44 = param_3;
    local_40 = param_4;
    uVar4 = FUN_016a7780(piVar7[4],piVar7[5],piVar7[6],piVar7[7],param_2);
    uVar5 = uVar4 >> 0x19;
    iVar6 = *piVar7;
    local_48 = 0;
    while( true ) {
      uVar4 = piVar7[1] & uVar4;
      uVar11 = *(uint *)(iVar6 + uVar4);
      uVar8 = uVar11 ^ uVar5 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar9 = uVar8 >> 8;
        uVar1 = uVar8 >> 0x10;
        uVar2 = uVar8 >> 0x18;
        uVar3 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        uVar9 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                        >> 3) & piVar7[1];
        iVar10 = iVar6 + -0x30 + uVar9 * -0x30;
        bVar12 = *(int *)(param_2 + 8) == *(int *)(iVar10 + 8);
        if (bVar12) {
          iVar10 = *(int *)(iVar10 + 0x10);
        }
        if (bVar12 && *(int *)(param_2 + 0x10) == iVar10) {
          iVar6 = iVar6 + uVar9 * -0x30;
          if (*(char *)(iVar6 + -0x18) == '\x05') {
            local_34 = &local_44;
            local_3c._4_4_ = *(undefined4 *)(iVar6 + -0x10);
            local_3c._0_4_ = *(int *)(iVar6 + -0x14) + 8;
            local_30 = &local_34;
            local_2c = &LAB_016a5b64;
            iVar10 = FUN_00fa948c(&local_3c,&DAT_018ae5a0,&DAT_00590e71,&local_30);
            if (iVar10 != 0) {
              return;
            }
          }
          else {
            if (*(char *)(iVar6 + -0x18) != '\x06') {
              return;
            }
            local_3c = FUN_016ae1d8(*(int *)(iVar6 + -0x14) + 8);
            local_34 = &local_44;
            local_30 = &local_34;
            local_2c = &LAB_016a5b64;
            iVar10 = FUN_00fa948c(&local_3c,&DAT_018aea04,&DAT_00590e71,&local_30);
            if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("matcher write impl should not fail",0x22,&uStack_25,&DAT_018ae9e4,
                           &DAT_018aea1c);
            }
            uVar5 = (uint)*(byte *)((int)local_3c + 0x15b) + local_3c._4_4_ + 1;
            if (*(uint *)((int)local_3c + 0x58) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar5,*(uint *)((int)local_3c + 0x58),&DAT_018ae9c4);
            }
            uVar5 = *(uint *)(*(int *)((int)local_3c + 0x54) + uVar5 * 4);
            if (uVar5 == 0) {
              return;
            }
            if (uVar5 < *(uint *)((int)local_3c + 8)) {
              return;
            }
            if (*(uint *)((int)local_3c + 0xc) < uVar5) {
              return;
            }
          }
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar6 + -8) = 1;
          return;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_48 = local_48 + 4;
      uVar4 = uVar4 + local_48;
    }
  }
  return;
}

