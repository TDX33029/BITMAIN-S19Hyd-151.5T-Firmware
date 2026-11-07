// FUN_010184c4 @ 010184c4 size=468 calls_out=4 calls_in=1
// strings: 

void FUN_010184c4(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_b0;
  int *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = FUN_01a9c24c(param_2[4],param_2[5],param_2[6],param_2[7],param_3,param_4);
  uVar1 = uVar3 >> 0x19;
  iVar10 = *param_2;
  uVar11 = param_2[1];
  local_b0 = 0;
  do {
    uVar3 = uVar11 & uVar3;
    uVar4 = *(uint *)(iVar10 + uVar3);
    uVar5 = uVar4 ^ uVar1 * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar8 = uVar5 - 1 & uVar5;
      uVar9 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar11;
      piVar7 = (int *)(iVar10 + -0x40 + uVar9 * -0x40);
      uVar5 = uVar8;
      if ((param_4 == piVar7[1]) &&
         (iVar6 = thunk_FUN_01bed842(param_3,*piVar7 + 8,param_4), iVar6 == 0)) {
        FUN_0118f3e0(&local_68,param_2,iVar10 + uVar9 * -0x40);
        if (local_58 != -0x80000000) {
          *param_1 = uStack_60;
          param_1[1] = uStack_5c;
          param_1[2] = local_58;
          param_1[3] = local_54;
          param_1[4] = uStack_50;
          param_1[5] = uStack_4c;
          param_1[6] = uStack_48;
          param_1[7] = uStack_44;
          param_1[8] = local_40;
          param_1[9] = uStack_3c;
          param_1[10] = uStack_38;
          param_1[0xb] = uStack_34;
          param_1[0xc] = uStack_30;
          param_1[0xd] = uStack_2c;
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *local_68;
            bVar2 = (bool)hasExclusiveAccess(local_68);
          } while (!bVar2);
          *local_68 = iVar10 + -1;
          if (iVar10 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0070451c(local_68,uStack_64);
            return;
          }
          return;
        }
        goto LAB_0101862c;
      }
    }
    if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) {
LAB_0101862c:
      param_1[2] = 0x80000000;
      return;
    }
    local_b0 = local_b0 + 4;
    uVar3 = uVar3 + local_b0;
  } while( true );
}

