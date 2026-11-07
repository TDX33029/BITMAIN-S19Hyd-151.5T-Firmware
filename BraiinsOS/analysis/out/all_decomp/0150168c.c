// FUN_0150168c @ 0150168c size=432 calls_out=5 calls_in=1
// strings: 

void FUN_0150168c(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_30;
  
  uVar8 = 0x80000003;
  if (param_4[3] == 0) {
LAB_0150181c:
    *param_1 = uVar8;
    return;
  }
  uVar2 = FUN_015023d0(param_4[4],param_4[5],param_4[6],param_4[7],param_2,param_3);
  uVar1 = uVar2 >> 0x19;
  iVar11 = *param_4;
  uVar12 = param_4[1];
  local_30 = 0;
  do {
    uVar2 = uVar12 & uVar2;
    uVar3 = *(uint *)(iVar11 + uVar2);
    uVar4 = uVar3 ^ uVar1 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar9 = uVar4 - 1 & uVar4;
      uVar10 = uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar12;
      puVar7 = (undefined4 *)(iVar11 + -0x10 + uVar10 * -0x10);
      uVar4 = uVar9;
      if ((param_3 == puVar7[1]) &&
         (iVar5 = thunk_FUN_016dd50a(param_2,*puVar7,param_3), iVar5 == 0)) {
        iVar11 = iVar11 + uVar10 * -0x10;
        iVar5 = *(int *)(iVar11 + -4);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,iVar5);
        }
        uVar8 = *(undefined4 *)(iVar11 + -8);
        if (iVar5 == 0) {
          iVar11 = 0;
          iVar6 = 1;
        }
        else {
          iVar6 = thunk_FUN_016d4a50(iVar5);
          iVar11 = iVar5;
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar5);
          }
        }
        FUN_016dd1aa(iVar6,uVar8,iVar5);
        uVar8 = 0x80000007;
        param_1[1] = iVar11;
        param_1[2] = iVar6;
        param_1[3] = iVar5;
        goto LAB_0150181c;
      }
    }
    if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) {
      *param_1 = 0x80000003;
      return;
    }
    local_30 = local_30 + 4;
    uVar2 = uVar2 + local_30;
  } while( true );
}

