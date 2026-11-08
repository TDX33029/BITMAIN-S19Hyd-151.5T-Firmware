// FUN_0133c5fc @ 0133c5fc size=260 calls_out=3 calls_in=21
// strings: 

void FUN_0133c5fc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_28;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar4 = FUN_009bd354(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_2);
    uVar7 = uVar4 >> 0x19;
    iVar8 = *(int *)(param_1 + 0x20);
    local_28 = 0;
    while( true ) {
      uVar4 = *(uint *)(param_1 + 0x24) & uVar4;
      uVar9 = *(uint *)(iVar8 + uVar4);
      uVar5 = uVar9 ^ uVar7 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar5 >> 8;
        uVar1 = uVar5 >> 0x10;
        uVar2 = uVar5 >> 0x18;
        uVar3 = uVar5 << 0x18;
        uVar5 = uVar5 - 1 & uVar5;
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar6 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                        >> 3) & *(uint *)(param_1 + 0x24);
        if (param_2 == *(int *)(iVar8 + -8 + uVar6 * -8)) {
          uVar7 = *(uint *)(iVar8 + uVar6 * -8 + -4);
          if (*(uint *)(param_1 + 0x4c) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,*(uint *)(param_1 + 0x4c),&DAT_01891eb8);
          }
          return;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar4 = uVar4 + local_28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01891ea8);
}

