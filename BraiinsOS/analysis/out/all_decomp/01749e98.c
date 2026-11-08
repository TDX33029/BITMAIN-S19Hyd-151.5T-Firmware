// FUN_01749e98 @ 01749e98 size=1452 calls_out=4 calls_in=2
// strings: 

void FUN_01749e98(int param_1,undefined1 *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *extraout_r1;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [16];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  puVar7 = param_2;
  if ((param_3 < 0x10001) &&
     (puVar7 = *(undefined1 **)(param_1 + 0x114),
     puVar7 <= &DAT_0000ffff || 0x10000U - (int)puVar7 < (uint)(*(int *)(param_1 + 0x110) == 0))) {
    if (param_5 != 0) {
      if (0x30 < param_5) {
        uVar6 = 0;
        goto LAB_0174a1f0;
      }
      FUN_017476f0(param_1,param_4);
    }
    if (0xf < param_3) {
      puVar7 = (undefined1 *)(param_1 + 0x108);
      bVar2 = puVar7 < auStack_50 && auStack_54 < puVar7;
      bVar3 = puVar7 < auStack_4c && auStack_50 < puVar7;
      bVar5 = auStack_58 < puVar7 && puVar7 < auStack_54;
      bVar4 = auStack_5c < puVar7 && puVar7 < auStack_58;
      puVar14 = (undefined1 *)(param_1 + 0x10c);
      iVar9 = param_1 + 0xfc;
      if (auStack_48 < puVar7 && puVar7 < auStack_44) {
        do {
          if (*(int *)(param_1 + 0xf8) == 0) goto LAB_0174a440;
          uVar12 = param_3;
          if (0x1fff < param_3) {
            uVar12 = 0x2000;
          }
          uVar11 = uVar12 & 0xfffffff0;
          FUN_016dd606(param_2,0,uVar11);
          if (((bVar2) || ((puVar7 < auStack_54 && (auStack_54 < puVar14)))) ||
             ((uVar10 = *(uint *)(param_1 + 0x108), puVar7 < auStack_50 && (auStack_50 < puVar14))))
          goto LAB_0174a440;
          uVar10 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18) + 1;
          if (bVar3) goto LAB_0174a440;
          *(uint *)(param_1 + 0x108) =
               uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18;
          (**(code **)(param_1 + 0xf8))(param_2,param_2,uVar12 >> 4,param_1,iVar9);
          if (((bVar4) || ((puVar7 < auStack_5c && (auStack_5c < puVar14)))) ||
             ((uVar10 = *(uint *)(param_1 + 0x108), puVar7 < auStack_58 && (auStack_58 < puVar14))))
          goto LAB_0174a440;
          uVar12 = ((uVar12 >> 4) - 1) +
                   (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18);
          if (bVar5) goto LAB_0174a440;
          param_3 = param_3 - uVar11;
          param_2 = param_2 + uVar11;
          *(uint *)(param_1 + 0x108) =
               uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
        } while (0xf < param_3);
      }
      else {
        do {
          while( true ) {
            puVar13 = param_2;
            uVar12 = param_3;
            if (0x1fff < param_3) {
              uVar12 = 0x2000;
            }
            uVar11 = uVar12 & 0xfffffff0;
            if (*(int *)(param_1 + 0xf8) != 0) break;
            if (puVar7 < auStack_48 && auStack_4c < puVar7) goto LAB_0174a440;
            uVar12 = 0;
            do {
              if (((puVar7 < auStack_4c) && (auStack_4c < puVar14)) ||
                 ((uVar10 = *(uint *)(param_1 + 0x108), puVar7 < auStack_48 &&
                  (auStack_48 < puVar14)))) goto LAB_0174a440;
              puVar8 = puVar13 + uVar12;
              uVar10 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                       | uVar10 >> 0x18) + 1;
              *(uint *)(param_1 + 0x108) =
                   uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                   | uVar10 >> 0x18;
              uVar12 = uVar12 + 0x10;
              (**(code **)(param_1 + 0xf4))(iVar9,puVar8,param_1);
            } while (uVar12 < uVar11);
            param_3 = param_3 - uVar11;
            param_2 = puVar13 + uVar11;
            if (param_3 < 0x10) goto LAB_0174a1b0;
          }
          FUN_016dd606(puVar13,0,uVar11);
          if (((bVar2) || ((puVar7 < auStack_54 && (auStack_54 < puVar14)))) ||
             ((uVar10 = *(uint *)(param_1 + 0x108), puVar7 < auStack_50 && (auStack_50 < puVar14))))
          goto LAB_0174a440;
          uVar10 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18) + 1;
          if (bVar3) goto LAB_0174a440;
          *(uint *)(param_1 + 0x108) =
               uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18;
          (**(code **)(param_1 + 0xf8))(puVar13,puVar13,uVar12 >> 4,param_1,iVar9);
          if (((bVar4) || ((puVar7 < auStack_5c && (auStack_5c < puVar14)))) ||
             ((uVar10 = *(uint *)(param_1 + 0x108), puVar7 < auStack_58 && (auStack_58 < puVar14))))
          goto LAB_0174a440;
          uVar12 = ((uVar12 >> 4) - 1) +
                   (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18);
          if (bVar5) goto LAB_0174a440;
          param_3 = param_3 - uVar11;
          *(uint *)(param_1 + 0x108) =
               uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
          param_2 = puVar13 + uVar11;
        } while (0xf < param_3);
LAB_0174a1b0:
        param_2 = puVar13 + uVar11;
      }
    }
    if (param_3 != 0) {
      puVar7 = (undefined1 *)(param_1 + 0x108);
      if (((auStack_44 < puVar7 && puVar7 < auStack_40) ||
          ((puVar7 < auStack_44 && (auStack_44 < (undefined1 *)(param_1 + 0x10c))))) ||
         ((uVar12 = *(uint *)(param_1 + 0x108), puVar7 < auStack_40 &&
          (auStack_40 < (undefined1 *)(param_1 + 0x10c))))) {
LAB_0174a440:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x174a440);
        (*pcVar1)();
      }
      uVar12 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18) + 1;
      if (auStack_40 < puVar7 && puVar7 < auStack_3c) goto LAB_0174a440;
      *(uint *)(param_1 + 0x108) =
           uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
      (**(code **)(param_1 + 0xf4))(param_1 + 0xfc,auStack_3c,param_1);
      if (((param_2 < auStack_3c) && (auStack_3c < param_2 + param_3)) ||
         ((auStack_3c < param_2 && (param_2 < auStack_3c + param_3)))) goto LAB_0174a440;
      FUN_016dd1aa(param_2,auStack_3c,param_3);
    }
    FUN_017476f0(param_1,param_4,param_5);
    uVar12 = *(uint *)(param_1 + 0x110);
    uVar6 = 1;
    *(uint *)(param_1 + 0x110) = uVar12 + 1;
    *(uint *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + (uint)(0xfffffffe < uVar12);
    puVar7 = extraout_r1;
  }
  else {
    uVar6 = 0;
  }
LAB_0174a1f0:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar6,puVar7,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

