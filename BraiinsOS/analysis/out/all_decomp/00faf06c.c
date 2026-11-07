// FUN_00faf06c @ 00faf06c size=504 calls_out=4 calls_in=1
// strings: 

uint * FUN_00faf06c(uint *param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_cc;
  uint local_c8 [41];
  
  FUN_016dd606(local_c8,0,0xa0);
  uVar3 = param_1[0x28];
  if (uVar3 < param_3) {
    puVar4 = param_1;
    uVar8 = 0;
    local_cc = 0;
    while (uVar6 = uVar8, puVar4 != param_1 + uVar3) {
      puVar7 = puVar4 + 1;
      uVar9 = *puVar4;
      uVar8 = uVar6 + 1;
      puVar4 = puVar7;
      if (uVar9 != 0) {
        uVar5 = 0;
        uVar2 = uVar6;
        puVar7 = param_2;
        iVar10 = param_3 << 2;
        do {
          if (0x27 < uVar2) goto LAB_00faf254;
          iVar10 = iVar10 + -4;
          lVar1 = (ulonglong)*puVar7 * (ulonglong)uVar9 + (ulonglong)local_c8[uVar2] +
                  (ulonglong)uVar5;
          uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
          local_c8[uVar2] = (uint)lVar1;
          uVar2 = uVar2 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar10 != 0);
        uVar9 = param_3;
        if (uVar5 != 0) {
          uVar2 = uVar6 + param_3;
          if (0x27 < uVar2) goto LAB_00faf254;
          local_c8[uVar2] = uVar5;
          uVar9 = param_3 + 1;
        }
        if (local_cc <= uVar9 + uVar6) {
          local_cc = uVar9 + uVar6;
        }
      }
    }
  }
  else {
    if (0x28 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0x28,&DAT_01880e5c);
    }
    local_cc = 0;
    uVar8 = 0;
    puVar4 = param_2;
    while (uVar6 = uVar8, puVar4 != param_2 + param_3) {
      puVar7 = puVar4 + 1;
      uVar9 = *puVar4;
      uVar8 = uVar6 + 1;
      puVar4 = puVar7;
      if (uVar9 != 0) {
        uVar5 = 0;
        uVar2 = uVar6;
        puVar7 = param_1;
        iVar10 = uVar3 << 2;
        do {
          if (0x27 < uVar2) goto LAB_00faf254;
          iVar10 = iVar10 + -4;
          lVar1 = (ulonglong)*puVar7 * (ulonglong)uVar9 + (ulonglong)local_c8[uVar2] +
                  (ulonglong)uVar5;
          uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
          local_c8[uVar2] = (uint)lVar1;
          uVar2 = uVar2 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar10 != 0);
        uVar9 = uVar3;
        if (uVar5 != 0) {
          uVar2 = uVar6 + uVar3;
          if (0x27 < uVar2) {
LAB_00faf254:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar2,0x28,&DAT_01880e5c);
          }
          local_c8[uVar2] = uVar5;
          uVar9 = uVar3 + 1;
        }
        if (local_cc <= uVar9 + uVar6) {
          local_cc = uVar9 + uVar6;
        }
      }
    }
  }
  FUN_016dd1aa(param_1,local_c8,0xa0);
  param_1[0x28] = local_cc;
  return param_1;
}

