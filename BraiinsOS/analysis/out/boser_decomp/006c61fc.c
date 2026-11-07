// FUN_006c61fc @ 006c61fc size=620 calls_out=3 calls_in=5
// strings: no entry found for key | no entry found for key

bool FUN_006c61fc(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_40;
  int local_30;
  
  if (param_1[3] != 0) {
    iVar2 = param_1[4];
    iVar14 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    uVar3 = FUN_01adafd4(iVar2,iVar14,iVar6,iVar7,param_2,param_3);
    uVar1 = uVar3 >> 0x19;
    iVar8 = *param_1;
    uVar13 = param_1[1];
    local_40 = 0;
    while( true ) {
      uVar3 = uVar13 & uVar3;
      uVar9 = *(uint *)(iVar8 + uVar3);
      uVar4 = uVar9 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar4 != 0) {
        uVar10 = uVar4 - 1 & uVar4;
        uVar11 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar13;
        iVar5 = iVar8 + -0x10 + uVar11 * -0x10;
        uVar4 = uVar10;
        if ((param_3 == *(int *)(iVar5 + 8)) &&
           (iVar5 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar5 + 4),param_3), iVar5 == 0)) {
          uVar3 = FUN_01adafd4(iVar2,iVar14,iVar6,iVar7,param_4,param_5);
          uVar1 = uVar3 >> 0x19;
          local_30 = 0;
          do {
            uVar3 = uVar13 & uVar3;
            uVar9 = *(uint *)(iVar8 + uVar3);
            uVar4 = uVar9 ^ uVar1 * 0x1010101;
            uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
            while (uVar4 != 0) {
              uVar10 = uVar4 - 1 & uVar4;
              uVar12 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                              (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                       uVar13;
              iVar2 = iVar8 + -0x10 + uVar12 * -0x10;
              uVar4 = uVar10;
              if ((param_5 == *(int *)(iVar2 + 8)) &&
                 (iVar2 = thunk_FUN_01bed842(param_4,*(undefined4 *)(iVar2 + 4)), iVar2 == 0)) {
                return *(uint *)(iVar8 + uVar11 * -0x10 + -4) <
                       *(uint *)(iVar8 + uVar12 * -0x10 + -4);
              }
            }
            if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("no entry found for key",0x16,&DAT_01c0600c);
            }
            local_30 = local_30 + 4;
            uVar3 = uVar3 + local_30;
          } while( true );
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_40 = local_40 + 4;
      uVar3 = uVar3 + local_40;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("no entry found for key",0x16,&DAT_01c05ffc);
}

