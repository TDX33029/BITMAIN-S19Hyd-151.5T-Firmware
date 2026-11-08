// FUN_016bcb44 @ 016bcb44 size=528 calls_out=2 calls_in=0
// strings: 

int FUN_016bcb44(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (param_3 < uVar3) {
    iVar7 = *(int *)(param_1 + 4);
    uVar9 = (uint)*(byte *)(param_1 + (param_4 & 0xff) + 0x2c);
    do {
      uVar2 = *(uint *)(iVar7 + param_3 * 4);
      if ((uVar2 & 0xff) == 0xfe) {
        if (uVar9 == (uVar2 & 0xffff) >> 8) {
          param_3 = param_3 + 2;
          if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(param_3,uVar3,&DAT_01d091f0);
          }
LAB_016bccbc:
          return *(int *)(iVar7 + param_3 * 4);
        }
LAB_016bcbb0:
        if (param_2 != 0) {
          return 0;
        }
      }
      else {
        if ((uVar2 & 0xff) != 0xff) {
          uVar8 = (uVar2 & 0xff) >> 2;
          if ((uVar2 & 3) != 0) {
            uVar8 = uVar8 + 1;
          }
          uVar2 = param_3 + 2;
          if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar2,uVar3,uVar3,&DAT_01d09190);
          }
          if (uVar3 - uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar8,uVar3 - uVar2,&DAT_01d091a0);
          }
          iVar4 = uVar8 << 2;
          iVar1 = 0;
          while (iVar5 = iVar1, iVar4 != 0) {
            uVar6 = *(uint *)(iVar7 + uVar2 * 4 + iVar5 * 4);
            if (uVar9 == (uVar6 & 0xff)) {
              param_3 = uVar8 + uVar2 + iVar5 * 4;
              if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(param_3,uVar3,&DAT_01d091e0);
              }
              goto LAB_016bccbc;
            }
            if (uVar9 == (uVar6 & 0xffff) >> 8) {
              param_3 = uVar8 + uVar2 + iVar5 * 4 + 1;
              if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(param_3,uVar3,&DAT_01d091d0);
              }
              goto LAB_016bccbc;
            }
            if (uVar9 == (uVar6 & 0xffffff) >> 0x10) {
              param_3 = uVar8 + uVar2 + iVar5 * 4 + 2;
              if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(param_3,uVar3,&DAT_01d091c0);
              }
              goto LAB_016bccbc;
            }
            iVar4 = iVar4 + -4;
            iVar1 = iVar5 + 1;
            if (uVar9 == uVar6 >> 0x18) {
              param_3 = uVar8 + uVar2 + iVar5 * 4 + 3;
              if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(param_3,uVar3,&DAT_01d091b0);
              }
              goto LAB_016bccbc;
            }
          }
          goto LAB_016bcbb0;
        }
        uVar2 = uVar9 + 2 + param_3;
        if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,uVar3,&DAT_01d09200);
        }
        iVar4 = *(int *)(iVar7 + uVar2 * 4);
        if (param_2 != 0 || iVar4 != 1) {
          if (iVar4 == 1) {
            return 0;
          }
          return iVar4;
        }
      }
      param_3 = param_3 + 1;
      if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_3,uVar3,&DAT_01d09210);
      }
      param_3 = *(uint *)(iVar7 + param_3 * 4);
    } while (param_3 < uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_3,uVar3,&DAT_01d09180);
}

