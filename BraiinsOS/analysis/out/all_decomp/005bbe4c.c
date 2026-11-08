// FUN_005bbe4c @ 005bbe4c size=328 calls_out=3 calls_in=3
// strings: 

void FUN_005bbe4c(int *param_1,uint param_2,undefined4 param_3)

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
  int local_34;
  uint local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  local_30 = param_2;
  if ((char)param_1[0xe] != '\x01') {
LAB_005bbf34:
    if (((uint)param_1[0xb] <= param_2) || (*(int *)(param_1[10] + param_2 * 0x28) == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_00412edc,0xb,param_3);
    }
    return;
  }
  if (param_1[3] != 0) {
    uVar5 = FUN_00c4fb58(param_1[4],param_1[5],param_1[6],param_1[7]);
    uVar1 = uVar5 >> 0x19;
    iVar8 = *param_1;
    local_34 = 0;
    while( true ) {
      uVar5 = param_1[1] & uVar5;
      uVar9 = *(uint *)(iVar8 + uVar5);
      uVar6 = uVar9 ^ uVar1 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        uVar7 = uVar6 >> 8;
        uVar2 = uVar6 >> 0x10;
        uVar3 = uVar6 >> 0x18;
        uVar4 = uVar6 << 0x18;
        uVar6 = uVar6 - 1 & uVar6;
        uVar7 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar7 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                        >> 3) & param_1[1];
        if (param_2 == *(uint *)(iVar8 + -8 + uVar7 * -8)) {
          param_2 = *(uint *)(iVar8 + uVar7 * -8 + -4);
          goto LAB_005bbf34;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_34 = local_34 + 4;
      uVar5 = uVar5 + local_34;
    }
  }
  local_2c = &local_30;
  local_28 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_005909dd,&local_2c,param_3);
}

