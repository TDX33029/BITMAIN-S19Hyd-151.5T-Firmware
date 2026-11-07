// FUN_006bc95c @ 006bc95c size=416 calls_out=5 calls_in=2
// strings: 

void FUN_006bc95c(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 == 1) {
    iVar8 = param_2[1];
    iVar10 = param_2[2];
    iVar2 = FUN_006e59bc(param_3,iVar8,iVar10);
    if (iVar2 != 0) {
      return;
    }
    FUN_006e6200(param_3,iVar8,iVar10);
  }
  if (param_1[3] != 0) {
    uVar3 = FUN_006c4c10(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
    uVar1 = uVar3 >> 0x19;
    iVar2 = *param_1;
    uVar7 = param_1[1];
    local_3c = 0;
    while( true ) {
      uVar3 = uVar7 & uVar3;
      uVar4 = *(uint *)(iVar2 + uVar3);
      uVar5 = uVar4 ^ uVar1 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar7;
        iVar8 = FUN_006bcafc(param_2,iVar2 + -0x18 + uVar6 * -0x18);
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar8 != 0) {
          iVar2 = iVar2 + uVar6 * -0x18;
          iVar8 = *(int *)(iVar2 + -4);
          if (iVar8 == 0) {
            return;
          }
          puVar11 = *(undefined4 **)(iVar2 + -8);
          puVar9 = puVar11 + iVar8 * 2;
          do {
            local_2c = *puVar11;
            local_28 = puVar11[1];
            local_30 = 1;
            FUN_006bc95c(param_1,&local_30,param_3);
            puVar11 = puVar11 + 2;
          } while (puVar11 != puVar9);
          return;
        }
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_3c = local_3c + 4;
      uVar3 = uVar3 + local_3c;
    }
  }
  return;
}

