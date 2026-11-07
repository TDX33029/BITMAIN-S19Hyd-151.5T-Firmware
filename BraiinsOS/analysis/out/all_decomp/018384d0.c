// FUN_018384d0 @ 018384d0 size=560 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_018384d0(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c [2];
  
  uVar2 = DAT_018ddaf8;
  local_1c[0] = DAT_018ddaf8;
  if ((param_2 <= &uStack_20 || local_1c <= param_2) &&
     ((puVar3 = param_2 + 1, &uStack_20 <= param_2 || (puVar3 <= &uStack_20)))) {
    uVar7 = *param_2;
    if ((puVar3 <= &uStack_24 || &uStack_20 <= puVar3) &&
       ((puVar5 = param_2 + 2, &uStack_24 <= puVar3 || (puVar5 <= &uStack_24)))) {
      uVar8 = param_2[1];
      if ((&uStack_24 <= puVar5 || puVar5 <= &uStack_28) &&
         ((puVar3 = param_2 + 3, &uStack_28 <= puVar5 || (puVar3 <= &uStack_28)))) {
        uVar9 = param_2[2];
        if ((&uStack_28 <= puVar3 || puVar3 <= &uStack_2c) &&
           ((puVar5 = param_2 + 4, &uStack_2c <= puVar3 || (puVar5 <= &uStack_2c)))) {
          puVar3 = (uint *)(param_1 + 0x3fU & 0xffffffc0);
          uVar4 = param_2[3];
          uVar6 = ((uVar8 & 0xfffff) << 6 | uVar7 >> 0x1a) & 0xffffff03;
          puVar3[1] = uVar6;
          puVar3[5] = uVar6 * 5;
          *puVar3 = uVar7 & 0x3ffffff;
          uVar7 = ((uVar9 & 0x3fff) << 0xc | uVar8 >> 0x14) & 0xffffc0ff;
          puVar3[2] = uVar7;
          puVar3[6] = uVar7 * 5;
          uVar7 = (uVar4 & 0xfffffff) >> 8;
          puVar10 = puVar3 + 0x13;
          puVar3[4] = uVar7;
          uVar8 = ((uVar4 & 0xff) << 0x12 | uVar9 >> 0xe) & 0xfff03fff;
          puVar3[3] = uVar8;
          puVar3[8] = uVar7 * 5;
          puVar3[7] = uVar8 * 5;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          puVar3[0x12] = 0;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          if (puVar10 < puVar5) {
            if (puVar3 + 0x17 <= puVar5) {
LAB_01838694:
              uVar8 = param_2[6];
              uVar9 = param_2[7];
              uVar7 = param_2[5];
              *puVar10 = param_2[4];
              puVar3[0x14] = uVar7;
              puVar3[0x15] = uVar8;
              puVar3[0x16] = uVar9;
              if (uVar2 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                FUN_016d2b78();
              }
              return 0;
            }
          }
          else if ((puVar10 == puVar5) || (param_2 + 8 <= puVar10)) goto LAB_01838694;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x18386f8);
  (*pcVar1)();
}

