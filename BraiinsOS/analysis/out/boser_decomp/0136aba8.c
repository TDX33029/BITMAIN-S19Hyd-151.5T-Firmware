// FUN_0136aba8 @ 0136aba8 size=388 calls_out=2 calls_in=6
// strings: 

void FUN_0136aba8(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  
  puVar6 = (undefined4 *)param_2[6];
  if (puVar6 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar6 == (undefined4 *)&DAT_00000001) {
    iVar8 = param_2[5];
    puVar2 = (undefined4 *)0x0;
    iVar7 = *param_3;
    if (iVar7 == *(int *)(iVar8 + 4)) {
LAB_0136abe4:
      if (puVar6 <= puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(puVar2,puVar6,&DAT_01d2c084);
      }
      param_1[1] = *(undefined4 *)(iVar8 + (int)puVar2 * 0xc + 8);
      param_1[2] = iVar7;
      puVar2 = param_2;
    }
  }
  else {
    iVar7 = *param_3;
    uVar3 = FUN_0137e188(*param_2,param_2[1],param_2[2],param_2[3],iVar7);
    uVar1 = uVar3 >> 0x19;
    iVar8 = param_2[5];
    local_2c = 0;
    while( true ) {
      uVar3 = param_2[8] & uVar3;
      uVar4 = *(uint *)(param_2[7] + uVar3);
      uVar5 = uVar4 ^ uVar1 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        puVar2 = *(undefined4 **)
                  (param_2[7] + -4 +
                  (uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                  param_2[8]) * -4);
        if (puVar6 <= puVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar2,puVar6,&DAT_01d307c8);
        }
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar7 == *(int *)(iVar8 + (int)puVar2 * 0xc + 4)) goto LAB_0136abe4;
      }
      puVar2 = (undefined4 *)0x0;
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar3 = local_2c + uVar3;
    }
  }
  *param_1 = puVar2;
  return;
}

