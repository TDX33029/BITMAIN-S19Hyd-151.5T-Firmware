// FUN_0183802c @ 0183802c size=1176 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_0183802c(uint *param_1,uint *param_2,uint param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *local_64;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  local_64 = param_2;
  local_2c[0] = DAT_018ddaf8;
  if (0xf < param_3) goto LAB_0183843c;
  while( true ) {
    FUN_016dd1aa(&local_3c,param_2);
    *(undefined1 *)((int)local_2c + (param_3 - 0x10)) = 1;
    if (param_3 != 0xf) {
      FUN_016dd606((int)&local_3c + param_3 + 1,0,0xf - param_3);
    }
    if (((((&local_3c < &uStack_40 && &uStack_40 < &local_38) ||
          (&local_3c < &uStack_44 && &uStack_44 < &local_38)) ||
         (&local_38 < &uStack_44 && &uStack_44 < &local_34)) ||
        ((&uStack_48 < &local_34 && &local_34 < &uStack_44 ||
         (&local_34 < &uStack_48 && &uStack_48 < &local_30)))) ||
       ((&uStack_4c < &local_30 && &local_30 < &uStack_48 ||
        (&uStack_4c < local_2c && &local_30 < &uStack_4c)))) break;
    uVar5 = param_1[0xd] + (local_30 >> 8);
    uVar4 = (local_3c & 0x3ffffff) + param_1[9];
    uVar7 = (local_3c >> 0x1a | (local_38 & 0xfffff) << 6) + param_1[10];
    uVar8 = (local_38 >> 0x14 | (local_34 & 0x3fff) << 0xc) + param_1[0xb];
    uVar9 = (local_34 >> 0xe | (local_30 & 0xff) << 0x12) + param_1[0xc];
    param_3 = 0;
    local_64 = param_2;
    while( true ) {
      uVar2 = (ulonglong)param_1[5] * (ulonglong)uVar5 +
              (ulonglong)param_1[6] * (ulonglong)uVar9 +
              (ulonglong)param_1[7] * (ulonglong)uVar8 +
              (ulonglong)param_1[8] * (ulonglong)uVar7 + (ulonglong)*param_1 * (ulonglong)uVar4;
      lVar3 = (uVar2 >> 0x1a) +
              (ulonglong)param_1[6] * (ulonglong)uVar5 +
              (ulonglong)param_1[7] * (ulonglong)uVar9 +
              (ulonglong)param_1[8] * (ulonglong)uVar8 +
              (ulonglong)*param_1 * (ulonglong)uVar7 + (ulonglong)uVar4 * (ulonglong)param_1[1];
      uVar11 = (uint)lVar3;
      param_1[10] = uVar11 & 0x3ffffff;
      lVar3 = (ulonglong)param_1[7] * (ulonglong)uVar5 +
              (ulonglong)param_1[8] * (ulonglong)uVar9 +
              (ulonglong)*param_1 * (ulonglong)uVar8 +
              (ulonglong)uVar7 * (ulonglong)param_1[1] + (ulonglong)uVar4 * (ulonglong)param_1[2] +
              (ulonglong)(uVar11 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar11 = (uint)lVar3;
      param_1[0xb] = uVar11 & 0x3ffffff;
      lVar3 = (ulonglong)param_1[8] * (ulonglong)uVar5 +
              (ulonglong)*param_1 * (ulonglong)uVar9 +
              (ulonglong)uVar8 * (ulonglong)param_1[1] +
              (ulonglong)uVar7 * (ulonglong)param_1[2] + (ulonglong)uVar4 * (ulonglong)param_1[3] +
              (ulonglong)(uVar11 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar11 = (uint)lVar3;
      param_1[0xc] = uVar11 & 0x3ffffff;
      lVar3 = (ulonglong)*param_1 * (ulonglong)uVar5 +
              (ulonglong)uVar9 * (ulonglong)param_1[1] +
              (ulonglong)uVar8 * (ulonglong)param_1[2] +
              (ulonglong)uVar4 * (ulonglong)param_1[4] + (ulonglong)uVar7 * (ulonglong)param_1[3] +
              (ulonglong)(uVar11 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar4 = (uint)lVar3;
      param_1[0xd] = uVar4 & 0x3ffffff;
      param_1[9] = (uVar4 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40) * 5 +
                   ((uint)uVar2 & 0x3ffffff);
      if (param_3 < 0x10) break;
LAB_0183843c:
      if ((local_64 < &uStack_4c && &uStack_50 < local_64) ||
         ((puVar6 = local_64 + 1, local_64 < &uStack_50 && (&uStack_50 < puVar6))))
      goto LAB_018384c0;
      if ((puVar6 < &uStack_50 && &uStack_54 < puVar6) ||
         ((puVar10 = local_64 + 2, puVar6 < &uStack_54 && (&uStack_54 < puVar10))))
      goto LAB_018384c0;
      if ((&uStack_58 < puVar10 && puVar10 < &uStack_54) ||
         ((puVar6 = local_64 + 3, puVar10 < &uStack_58 && (&uStack_58 < puVar6))))
      goto LAB_018384c0;
      if ((&uStack_5c < puVar6 && puVar6 < &uStack_58) ||
         ((puVar6 < &uStack_5c && (&uStack_5c < local_64 + 4)))) goto LAB_018384c0;
      uVar4 = (*local_64 & 0x3ffffff) + param_1[9];
      uVar7 = (*local_64 >> 0x1a | (local_64[1] & 0xfffff) << 6) + param_1[10];
      uVar8 = (local_64[1] >> 0x14 | (local_64[2] & 0x3fff) << 0xc) + param_1[0xb];
      param_3 = param_3 - 0x10;
      uVar9 = (local_64[2] >> 0xe | (local_64[3] & 0xff) << 0x12) + param_1[0xc];
      uVar5 = (local_64[3] >> 8 | 0x1000000) + param_1[0xd];
      local_64 = local_64 + 4;
    }
    if (param_3 == 0) {
      if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
    param_2 = local_64;
  }
LAB_018384c0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x18384c0);
  (*pcVar1)();
}

