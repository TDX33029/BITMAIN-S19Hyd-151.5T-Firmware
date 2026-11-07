// FUN_01214068 @ 01214068 size=7552 calls_out=5 calls_in=2
// strings: 

void FUN_01214068(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  undefined4 local_108 [44];
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar3 = (undefined4 *)FUN_011e4c9c();
  uVar33 = *puVar3;
  iVar49 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar5 = (**(code **)(iVar49 + 0xc))(uVar33);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  uVar10 = puVar4[8];
  uVar11 = puVar4[9];
  uVar12 = puVar4[10];
  uVar13 = puVar4[0xb];
  uVar14 = puVar4[0xc];
  uVar15 = puVar4[0xd];
  uVar16 = puVar4[0xe];
  uVar17 = puVar4[0xf];
  puVar3 = (undefined4 *)FUN_011e4c9c();
  uVar33 = *puVar3;
  iVar49 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar18 = (**(code **)(iVar49 + 0xc))(uVar33);
  uVar19 = *puVar4;
  uVar20 = puVar4[1];
  uVar21 = puVar4[2];
  uVar22 = puVar4[3];
  uVar56 = puVar4[8];
  uVar60 = puVar4[9];
  uVar69 = puVar4[10];
  uVar34 = puVar4[0xc];
  uVar46 = puVar4[0xd];
  uVar50 = puVar4[0xe];
  uVar66 = puVar4[0xb];
  uVar38 = puVar4[0xf];
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar23 = (undefined4 *)FUN_011e4c9c();
  uVar33 = *puVar23;
  iVar49 = puVar23[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar24 = (**(code **)(iVar49 + 0xc))(uVar33);
  uVar25 = puVar4[3];
  uVar51 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar1 = (ulonglong)uVar51 * 0xb36a80d2;
  uVar61 = (uint)lVar1;
  uVar24 = puVar4[2] ^ uVar24;
  uVar51 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18) * -0x4c957f2e + uVar51 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar27 = (uVar51 * 0x1000000 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
           uVar51 >> 0x18) ^ (uint)((ulonglong)uVar24 * 0x2df45158);
  uVar28 = uVar27 ^ puVar4[8];
  uVar57 = *puVar4;
  uVar62 = puVar4[1];
  uVar51 = (uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
           uVar61 >> 0x18) ^
           uVar25 * 0x2df45158 + uVar24 * 0x2d7f954c + (int)((ulonglong)uVar24 * 0x2df45158 >> 0x20)
  ;
  uVar24 = uVar51 ^ puVar4[9];
  uVar25 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  lVar1 = (ulonglong)uVar25 * 0xb36a80d2;
  uVar61 = (uint)lVar1;
  uVar25 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18) * -0x4c957f2e + uVar25 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar61 = uVar24 * 0x2df45158 + uVar28 * 0x2d7f954c + (int)((ulonglong)uVar28 * 0x2df45158 >> 0x20)
           ^ (uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
             uVar61 >> 0x18) ^ puVar4[0xd];
  uVar24 = uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
           uVar61 >> 0x18;
  lVar1 = (ulonglong)uVar24 * 0xb36a80d2;
  uVar67 = (uint)lVar1;
  uVar25 = (uint)((ulonglong)uVar28 * 0x2df45158) ^
           (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^ puVar4[0xc];
  uVar70 = uVar62 << 0x18 | (uVar62 >> 8 & 0xff) << 0x10 | (uVar62 >> 0x10 & 0xff) << 8 |
           uVar62 >> 0x18;
  uVar24 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar28 = (uVar24 * 0x1000000 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18) ^ (uint)((ulonglong)uVar25 * 0x2df45158);
  uVar29 = uVar57 << 0x18 | (uVar57 >> 8 & 0xff) << 0x10 | (uVar57 >> 0x10 & 0xff) << 8 |
           uVar57 >> 0x18;
  uVar57 = ~uVar57;
  uVar24 = (uVar67 << 0x18 | (uVar67 >> 8 & 0xff) << 0x10 | (uVar67 >> 0x10 & 0xff) << 8 |
           uVar67 >> 0x18) ^
           uVar61 * 0x2df45158 + uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20)
  ;
  uVar62 = ~uVar62;
  uVar25 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  lVar1 = (ulonglong)uVar57 * (ulonglong)uVar25;
  uVar61 = (uint)lVar1;
  uVar25 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18) * uVar57 + uVar25 * uVar62 + (int)((ulonglong)lVar1 >> 0x20);
  uVar24 = (uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
           uVar61 >> 0x18) ^
           uVar24 * uVar70 + uVar28 * uVar29 + (int)((ulonglong)uVar70 * (ulonglong)uVar28 >> 0x20);
  uVar61 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^ (uint)((ulonglong)uVar70 * (ulonglong)uVar28);
  uVar25 = uVar61;
  if ((uVar28 & 0x20) != 0) {
    uVar25 = uVar24;
    uVar24 = uVar61;
  }
  uVar61 = uVar27 ^ puVar4[10];
  uVar67 = uVar51 ^ puVar4[0xb];
  uVar26 = uVar67 << 0x18 | (uVar67 >> 8 & 0xff) << 0x10 | (uVar67 >> 0x10 & 0xff) << 8 |
           uVar67 >> 0x18;
  lVar1 = (ulonglong)uVar26 * 0xb36a80d2;
  uVar35 = (uint)lVar1;
  uVar72 = uVar67 * 0x2df45158 + uVar61 * 0x2d7f954c + (int)((ulonglong)uVar61 * 0x2df45158 >> 0x20)
           ^ (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18) ^ puVar4[0xf];
  uVar35 = uVar72 << 0x18 | (uVar72 >> 8 & 0xff) << 0x10 | (uVar72 >> 0x10 & 0xff) << 8 |
           uVar72 >> 0x18;
  lVar2 = (ulonglong)uVar35 * 0xb36a80d2;
  uVar63 = (uint)lVar2;
  uVar67 = (uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
           uVar61 >> 0x18) * -0x4c957f2e + uVar26 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar61 = (uint)((ulonglong)uVar61 * 0x2df45158) ^
           (uVar67 * 0x1000000 | (uVar67 >> 8 & 0xff) << 0x10 | (uVar67 >> 0x10 & 0xff) << 8 |
           uVar67 >> 0x18) ^ puVar4[0xe];
  uVar67 = (uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
           uVar61 >> 0x18) * -0x4c957f2e + uVar35 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar35 = (uVar67 * 0x1000000 | (uVar67 >> 8 & 0xff) << 0x10 | (uVar67 >> 0x10 & 0xff) << 8 |
           uVar67 >> 0x18) ^ (uint)((ulonglong)uVar61 * 0x2df45158);
  uVar61 = (uVar63 << 0x18 | (uVar63 >> 8 & 0xff) << 0x10 | (uVar63 >> 0x10 & 0xff) << 8 |
           uVar63 >> 0x18) ^
           uVar72 * 0x2df45158 + uVar61 * 0x2d7f954c + (int)((ulonglong)uVar61 * 0x2df45158 >> 0x20)
  ;
  uVar67 = uVar61 << 0x18 | (uVar61 >> 8 & 0xff) << 0x10 | (uVar61 >> 0x10 & 0xff) << 8 |
           uVar61 >> 0x18;
  lVar1 = (ulonglong)uVar57 * (ulonglong)uVar67;
  uVar26 = (uint)lVar1;
  uVar61 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^
           uVar61 * uVar70 + uVar35 * uVar29 + (int)((ulonglong)uVar70 * (ulonglong)uVar35 >> 0x20);
  uVar67 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
           uVar35 >> 0x18) * uVar57 + uVar67 * uVar62 + (int)((ulonglong)lVar1 >> 0x20);
  uVar26 = (uVar67 * 0x1000000 | (uVar67 >> 8 & 0xff) << 0x10 | (uVar67 >> 0x10 & 0xff) << 8 |
           uVar67 >> 0x18) ^ (uint)((ulonglong)uVar70 * (ulonglong)uVar35);
  uVar67 = uVar26;
  if ((uVar35 & 0x20) != 0) {
    uVar67 = uVar61;
    uVar61 = uVar26;
  }
  uVar63 = uVar27 ^ puVar4[0xc];
  uVar72 = uVar51 ^ puVar4[0xd];
  uVar39 = uVar72 << 0x18 | (uVar72 >> 8 & 0xff) << 0x10 | (uVar72 >> 0x10 & 0xff) << 8 |
           uVar72 >> 0x18;
  lVar1 = (ulonglong)uVar39 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar72 = uVar72 * 0x2df45158 + uVar63 * 0x2d7f954c + (int)((ulonglong)uVar63 * 0x2df45158 >> 0x20)
           ^ (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
             uVar26 >> 0x18) ^ puVar4[0xb];
  uVar36 = uVar72 << 0x18 | (uVar72 >> 8 & 0xff) << 0x10 | (uVar72 >> 0x10 & 0xff) << 8 |
           uVar72 >> 0x18;
  lVar2 = (ulonglong)uVar36 * 0xb36a80d2;
  uVar47 = (uint)lVar2;
  uVar26 = (uVar63 << 0x18 | (uVar63 >> 8 & 0xff) << 0x10 | (uVar63 >> 0x10 & 0xff) << 8 |
           uVar63 >> 0x18) * -0x4c957f2e + uVar39 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar26 = (uint)((ulonglong)uVar63 * 0x2df45158) ^
           (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^ puVar4[10];
  uVar63 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) * -0x4c957f2e + uVar36 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar36 = (uVar63 * 0x1000000 | (uVar63 >> 8 & 0xff) << 0x10 | (uVar63 >> 0x10 & 0xff) << 8 |
           uVar63 >> 0x18) ^ (uint)((ulonglong)uVar26 * 0x2df45158);
  uVar26 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
           uVar47 >> 0x18) ^
           uVar72 * 0x2df45158 + uVar26 * 0x2d7f954c + (int)((ulonglong)uVar26 * 0x2df45158 >> 0x20)
  ;
  uVar63 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18;
  lVar1 = (ulonglong)uVar57 * (ulonglong)uVar63;
  uVar72 = (uint)lVar1;
  uVar26 = (uVar72 << 0x18 | (uVar72 >> 8 & 0xff) << 0x10 | (uVar72 >> 0x10 & 0xff) << 8 |
           uVar72 >> 0x18) ^
           uVar26 * uVar70 + uVar36 * uVar29 + (int)((ulonglong)uVar70 * (ulonglong)uVar36 >> 0x20);
  uVar63 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
           uVar36 >> 0x18) * uVar57 + uVar63 * uVar62 + (int)((ulonglong)lVar1 >> 0x20);
  uVar72 = (uVar63 * 0x1000000 | (uVar63 >> 8 & 0xff) << 0x10 | (uVar63 >> 0x10 & 0xff) << 8 |
           uVar63 >> 0x18) ^ (uint)((ulonglong)uVar70 * (ulonglong)uVar36);
  uVar63 = uVar72;
  if ((uVar36 & 0x20) != 0) {
    uVar63 = uVar26;
    uVar26 = uVar72;
  }
  uVar27 = uVar27 ^ puVar4[0xe];
  uVar51 = uVar51 ^ puVar4[0xf];
  uVar72 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
           uVar51 >> 0x18;
  lVar1 = (ulonglong)uVar72 * 0xb36a80d2;
  uVar39 = (uint)lVar1;
  uVar72 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) * -0x4c957f2e + uVar72 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar39 = uVar51 * 0x2df45158 + uVar27 * 0x2d7f954c + (int)((ulonglong)uVar27 * 0x2df45158 >> 0x20)
           ^ (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
             uVar39 >> 0x18) ^ puVar4[9];
  uVar52 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18;
  lVar1 = (ulonglong)uVar52 * 0xb36a80d2;
  uVar47 = (uint)lVar1;
  uVar51 = (uint)((ulonglong)uVar27 * 0x2df45158) ^
           (uVar72 * 0x1000000 | (uVar72 >> 8 & 0xff) << 0x10 | (uVar72 >> 0x10 & 0xff) << 8 |
           uVar72 >> 0x18) ^ puVar4[8];
  uVar27 = (uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
           uVar51 >> 0x18) * -0x4c957f2e + uVar52 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar72 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) ^ (uint)((ulonglong)uVar51 * 0x2df45158);
  uVar51 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
           uVar47 >> 0x18) ^
           uVar39 * 0x2df45158 + uVar51 * 0x2d7f954c + (int)((ulonglong)uVar51 * 0x2df45158 >> 0x20)
  ;
  uVar27 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
           uVar51 >> 0x18;
  lVar1 = (ulonglong)uVar57 * (ulonglong)uVar27;
  uVar39 = (uint)lVar1;
  uVar51 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18) ^
           uVar51 * uVar70 + uVar72 * uVar29 + (int)((ulonglong)uVar70 * (ulonglong)uVar72 >> 0x20);
  uVar27 = (uVar72 << 0x18 | (uVar72 >> 8 & 0xff) << 0x10 | (uVar72 >> 0x10 & 0xff) << 8 |
           uVar72 >> 0x18) * uVar57 + uVar27 * uVar62 + (int)((ulonglong)lVar1 >> 0x20);
  uVar29 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) ^ (uint)((ulonglong)uVar70 * (ulonglong)uVar72);
  uVar27 = uVar29;
  if ((uVar72 & 0x20) != 0) {
    uVar27 = uVar51;
    uVar51 = uVar29;
  }
  local_108[0] = 0;
  puVar23 = (undefined4 *)FUN_011e4c9c();
  uVar33 = *puVar23;
  iVar49 = puVar23[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar29 = (**(code **)(iVar49 + 0xc))(uVar33);
  uVar57 = puVar4[3];
  uVar62 = uVar57 << 0x18 | (uVar57 >> 8 & 0xff) << 0x10 | (uVar57 >> 0x10 & 0xff) << 8 |
           uVar57 >> 0x18;
  lVar1 = (ulonglong)uVar62 * 0xb36a80d2;
  uVar52 = (uint)lVar1;
  uVar29 = puVar4[2] ^ uVar29;
  uVar62 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18) * -0x4c957f2e + uVar62 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar47 = (uVar62 * 0x1000000 | (uVar62 >> 8 & 0xff) << 0x10 | (uVar62 >> 0x10 & 0xff) << 8 |
           uVar62 >> 0x18) ^ (uint)((ulonglong)uVar29 * 0x2df45158);
  uVar39 = uVar47 ^ puVar4[8];
  uVar58 = *puVar4;
  uVar70 = puVar4[1];
  uVar57 = (uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8 |
           uVar52 >> 0x18) ^
           uVar57 * 0x2df45158 + uVar29 * 0x2d7f954c + (int)((ulonglong)uVar29 * 0x2df45158 >> 0x20)
  ;
  uVar29 = uVar57 ^ puVar4[9];
  uVar62 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18;
  lVar1 = (ulonglong)uVar62 * 0xb36a80d2;
  uVar52 = (uint)lVar1;
  uVar62 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18) * -0x4c957f2e + uVar62 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar53 = uVar29 * 0x2df45158 + uVar39 * 0x2d7f954c + (int)((ulonglong)uVar39 * 0x2df45158 >> 0x20)
           ^ (uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8 |
             uVar52 >> 0x18) ^ puVar4[0xd];
  uVar52 = uVar53 << 0x18 | (uVar53 >> 8 & 0xff) << 0x10 | (uVar53 >> 0x10 & 0xff) << 8 |
           uVar53 >> 0x18;
  lVar1 = (ulonglong)uVar52 * 0xb36a80d2;
  uVar71 = (uint)lVar1;
  uVar29 = (uint)((ulonglong)uVar39 * 0x2df45158) ^
           (uVar62 * 0x1000000 | (uVar62 >> 8 & 0xff) << 0x10 | (uVar62 >> 0x10 & 0xff) << 8 |
           uVar62 >> 0x18) ^ puVar4[0xc];
  uVar48 = uVar70 << 0x18 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
           uVar70 >> 0x18;
  uVar62 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18) * -0x4c957f2e + uVar52 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar52 = (uVar62 * 0x1000000 | (uVar62 >> 8 & 0xff) << 0x10 | (uVar62 >> 0x10 & 0xff) << 8 |
           uVar62 >> 0x18) ^ (uint)((ulonglong)uVar29 * 0x2df45158);
  uVar30 = uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
           uVar58 >> 0x18;
  uVar58 = ~uVar58;
  uVar29 = (uVar71 << 0x18 | (uVar71 >> 8 & 0xff) << 0x10 | (uVar71 >> 0x10 & 0xff) << 8 |
           uVar71 >> 0x18) ^
           uVar53 * 0x2df45158 + uVar29 * 0x2d7f954c + (int)((ulonglong)uVar29 * 0x2df45158 >> 0x20)
  ;
  uVar62 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18;
  uVar70 = ~uVar70;
  lVar1 = (ulonglong)uVar58 * (ulonglong)uVar62;
  uVar39 = (uint)lVar1;
  uVar62 = (uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8 |
           uVar52 >> 0x18) * uVar58 + uVar62 * uVar70 + (int)((ulonglong)lVar1 >> 0x20);
  uVar29 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18) ^
           uVar29 * uVar48 + uVar52 * uVar30 + (int)((ulonglong)uVar48 * (ulonglong)uVar52 >> 0x20);
  uVar39 = (uVar62 * 0x1000000 | (uVar62 >> 8 & 0xff) << 0x10 | (uVar62 >> 0x10 & 0xff) << 8 |
           uVar62 >> 0x18) ^ (uint)((ulonglong)uVar48 * (ulonglong)uVar52);
  uVar62 = uVar39;
  if ((uVar52 & 0x20) != 0) {
    uVar62 = uVar29;
    uVar29 = uVar39;
  }
  uVar71 = uVar29 << (uVar52 & 0x1f) | (uVar62 >> 1) >> (~uVar52 & 0x1f);
  uVar53 = uVar47 ^ puVar4[10];
  uVar40 = uVar57 ^ puVar4[0xb];
  uVar41 = uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
           uVar40 >> 0x18;
  lVar1 = (ulonglong)uVar41 * 0xb36a80d2;
  uVar39 = (uint)lVar1;
  uVar40 = uVar40 * 0x2df45158 + uVar53 * 0x2d7f954c + (int)((ulonglong)uVar53 * 0x2df45158 >> 0x20)
           ^ (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
             uVar39 >> 0x18) ^ puVar4[0xf];
  uVar54 = uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
           uVar40 >> 0x18;
  lVar2 = (ulonglong)uVar54 * 0xb36a80d2;
  uVar68 = (uint)lVar2;
  uVar39 = (uVar53 << 0x18 | (uVar53 >> 8 & 0xff) << 0x10 | (uVar53 >> 0x10 & 0xff) << 8 |
           uVar53 >> 0x18) * -0x4c957f2e + uVar41 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar39 = (uint)((ulonglong)uVar53 * 0x2df45158) ^
           (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18) ^ puVar4[0xe];
  uVar53 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18) * -0x4c957f2e + uVar54 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar41 = (uVar53 * 0x1000000 | (uVar53 >> 8 & 0xff) << 0x10 | (uVar53 >> 0x10 & 0xff) << 8 |
           uVar53 >> 0x18) ^ (uint)((ulonglong)uVar39 * 0x2df45158);
  uVar39 = (uVar68 << 0x18 | (uVar68 >> 8 & 0xff) << 0x10 | (uVar68 >> 0x10 & 0xff) << 8 |
           uVar68 >> 0x18) ^
           uVar40 * 0x2df45158 + uVar39 * 0x2d7f954c + (int)((ulonglong)uVar39 * 0x2df45158 >> 0x20)
  ;
  uVar53 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18;
  lVar1 = (ulonglong)uVar58 * (ulonglong)uVar53;
  uVar40 = (uint)lVar1;
  uVar39 = (uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
           uVar40 >> 0x18) ^
           uVar39 * uVar48 + uVar41 * uVar30 + (int)((ulonglong)uVar48 * (ulonglong)uVar41 >> 0x20);
  uVar53 = (uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
           uVar41 >> 0x18) * uVar58 + uVar53 * uVar70 + (int)((ulonglong)lVar1 >> 0x20);
  uVar40 = (uVar53 * 0x1000000 | (uVar53 >> 8 & 0xff) << 0x10 | (uVar53 >> 0x10 & 0xff) << 8 |
           uVar53 >> 0x18) ^ (uint)((ulonglong)uVar48 * (ulonglong)uVar41);
  uVar53 = uVar40;
  if ((uVar41 & 0x20) != 0) {
    uVar53 = uVar39;
    uVar39 = uVar40;
  }
  uVar68 = uVar39 << (uVar41 & 0x1f) | (uVar53 >> 1) >> (~uVar41 & 0x1f);
  uVar40 = uVar47 ^ puVar4[0xc];
  uVar42 = uVar57 ^ puVar4[0xd];
  uVar43 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
           uVar42 >> 0x18;
  lVar1 = (ulonglong)uVar43 * 0xb36a80d2;
  uVar54 = (uint)lVar1;
  uVar37 = uVar42 * 0x2df45158 + uVar40 * 0x2d7f954c + (int)((ulonglong)uVar40 * 0x2df45158 >> 0x20)
           ^ (uVar54 << 0x18 | (uVar54 >> 8 & 0xff) << 0x10 | (uVar54 >> 0x10 & 0xff) << 8 |
             uVar54 >> 0x18) ^ puVar4[0xb];
  uVar42 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
           uVar37 >> 0x18;
  lVar2 = (ulonglong)uVar42 * 0xb36a80d2;
  uVar59 = (uint)lVar2;
  uVar54 = (uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
           uVar40 >> 0x18) * -0x4c957f2e + uVar43 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar40 = (uint)((ulonglong)uVar40 * 0x2df45158) ^
           (uVar54 * 0x1000000 | (uVar54 >> 8 & 0xff) << 0x10 | (uVar54 >> 0x10 & 0xff) << 8 |
           uVar54 >> 0x18) ^ puVar4[10];
  uVar54 = (uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
           uVar40 >> 0x18) * -0x4c957f2e + uVar42 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar42 = (uVar54 * 0x1000000 | (uVar54 >> 8 & 0xff) << 0x10 | (uVar54 >> 0x10 & 0xff) << 8 |
           uVar54 >> 0x18) ^ (uint)((ulonglong)uVar40 * 0x2df45158);
  uVar40 = (uVar59 << 0x18 | (uVar59 >> 8 & 0xff) << 0x10 | (uVar59 >> 0x10 & 0xff) << 8 |
           uVar59 >> 0x18) ^
           uVar37 * 0x2df45158 + uVar40 * 0x2d7f954c + (int)((ulonglong)uVar40 * 0x2df45158 >> 0x20)
  ;
  uVar54 = uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
           uVar40 >> 0x18;
  lVar1 = (ulonglong)uVar58 * (ulonglong)uVar54;
  uVar37 = (uint)lVar1;
  uVar57 = uVar57 ^ puVar4[0xf];
  uVar40 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
           uVar37 >> 0x18) ^
           uVar40 * uVar48 + uVar42 * uVar30 + (int)((ulonglong)uVar48 * (ulonglong)uVar42 >> 0x20);
  uVar54 = (uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
           uVar42 >> 0x18) * uVar58 + uVar54 * uVar70 + (int)((ulonglong)lVar1 >> 0x20);
  uVar37 = (uVar54 * 0x1000000 | (uVar54 >> 8 & 0xff) << 0x10 | (uVar54 >> 0x10 & 0xff) << 8 |
           uVar54 >> 0x18) ^ (uint)((ulonglong)uVar48 * (ulonglong)uVar42);
  uVar54 = uVar37;
  if ((uVar42 & 0x20) != 0) {
    uVar54 = uVar40;
    uVar40 = uVar37;
  }
  uVar37 = uVar40 << (uVar42 & 0x1f) | (uVar54 >> 1) >> (~uVar42 & 0x1f);
  uVar47 = uVar47 ^ puVar4[0xe];
  uVar43 = uVar57 << 0x18 | (uVar57 >> 8 & 0xff) << 0x10 | (uVar57 >> 0x10 & 0xff) << 8 |
           uVar57 >> 0x18;
  lVar1 = (ulonglong)uVar43 * 0xb36a80d2;
  uVar59 = (uint)lVar1;
  uVar43 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
           uVar47 >> 0x18) * -0x4c957f2e + uVar43 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar57 = uVar57 * 0x2df45158 + uVar47 * 0x2d7f954c + (int)((ulonglong)uVar47 * 0x2df45158 >> 0x20)
           ^ (uVar59 << 0x18 | (uVar59 >> 8 & 0xff) << 0x10 | (uVar59 >> 0x10 & 0xff) << 8 |
             uVar59 >> 0x18) ^ puVar4[9];
  uVar59 = uVar57 << 0x18 | (uVar57 >> 8 & 0xff) << 0x10 | (uVar57 >> 0x10 & 0xff) << 8 |
           uVar57 >> 0x18;
  lVar1 = (ulonglong)uVar59 * 0xb36a80d2;
  uVar64 = (uint)lVar1;
  uVar47 = (uint)((ulonglong)uVar47 * 0x2df45158) ^
           (uVar43 * 0x1000000 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
           uVar43 >> 0x18) ^ puVar4[8];
  uVar43 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
           uVar47 >> 0x18) * -0x4c957f2e + uVar59 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar43 = (uVar43 * 0x1000000 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
           uVar43 >> 0x18) ^ (uint)((ulonglong)uVar47 * 0x2df45158);
  uVar57 = (uVar64 << 0x18 | (uVar64 >> 8 & 0xff) << 0x10 | (uVar64 >> 0x10 & 0xff) << 8 |
           uVar64 >> 0x18) ^
           uVar57 * 0x2df45158 + uVar47 * 0x2d7f954c + (int)((ulonglong)uVar47 * 0x2df45158 >> 0x20)
  ;
  uVar47 = uVar57 << 0x18 | (uVar57 >> 8 & 0xff) << 0x10 | (uVar57 >> 0x10 & 0xff) << 8 |
           uVar57 >> 0x18;
  lVar1 = (ulonglong)uVar58 * (ulonglong)uVar47;
  uVar59 = (uint)lVar1;
  uVar57 = (uVar59 << 0x18 | (uVar59 >> 8 & 0xff) << 0x10 | (uVar59 >> 0x10 & 0xff) << 8 |
           uVar59 >> 0x18) ^
           uVar57 * uVar48 + uVar43 * uVar30 + (int)((ulonglong)uVar48 * (ulonglong)uVar43 >> 0x20);
  uVar70 = (uVar43 << 0x18 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
           uVar43 >> 0x18) * uVar58 + uVar47 * uVar70 + (int)((ulonglong)lVar1 >> 0x20);
  uVar47 = (uVar70 * 0x1000000 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
           uVar70 >> 0x18) ^ (uint)((ulonglong)uVar48 * (ulonglong)uVar43);
  uVar70 = uVar47;
  if ((uVar43 & 0x20) != 0) {
    uVar70 = uVar57;
    uVar57 = uVar47;
  }
  uVar73 = uVar57 << (uVar43 & 0x1f) | (uVar70 >> 1) >> (~uVar43 & 0x1f);
  uVar57 = uVar70 << (uVar43 & 0x1f) | (uVar57 >> 1) >> (~uVar43 & 0x1f);
  uVar55 = uVar62 << (uVar52 & 0x1f) | (uVar29 >> 1) >> (~uVar52 & 0x1f);
  uVar44 = uVar53 << (uVar41 & 0x1f) | (uVar39 >> 1) >> (~uVar41 & 0x1f);
  uVar31 = uVar54 << (uVar42 & 0x1f) | (uVar40 >> 1) >> (~uVar42 & 0x1f);
  local_58 = &DAT_005674cc;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = uVar55;
  local_44 = uVar71;
  local_40 = uVar44;
  local_3c = uVar68;
  local_38 = uVar31;
  local_34 = uVar37;
  local_30 = uVar57;
  local_2c = uVar73;
  puVar23 = (undefined4 *)FUN_011e4c9c();
  uVar33 = *puVar23;
  iVar49 = puVar23[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar29 = (**(code **)(iVar49 + 0xc))(uVar33);
  uVar48 = *puVar4;
  uVar43 = puVar4[1];
  *(undefined1 *)((int)param_1 + 0x1d7) = 6;
  uVar53 = puVar4[8];
  uVar58 = puVar4[9];
  uVar47 = puVar4[10];
  uVar40 = puVar4[0xb];
  uVar30 = puVar4[0xc];
  uVar41 = puVar4[0xd];
  uVar52 = puVar4[0xe];
  uVar54 = puVar4[0xf];
  param_1[0x3a] = &DAT_005674cc;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  uVar62 = puVar4[2];
  uVar42 = puVar4[3];
  param_1[8] = &DAT_005674cc;
  param_1[9] = 0;
  param_1[0x14] = &DAT_005674cc;
  uVar70 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
  ;
  lVar1 = (ulonglong)uVar70 * 0xb36a80d2;
  uVar39 = (uint)lVar1;
  uVar8 = uVar8 ^ uVar5;
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * -0x4c957f2e + uVar70 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar59 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
  uVar5 = uVar59 ^ uVar16;
  uVar39 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18) ^
           uVar9 * 0x2df45158 + uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
  uVar9 = uVar39 ^ uVar17;
  uVar8 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar70 = (uint)lVar1;
  uVar8 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar70 = uVar9 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20) ^
           (uVar70 << 0x18 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
           uVar70 >> 0x18) ^ uVar11;
  uVar9 = uVar70 << 0x18 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
          uVar70 >> 0x18;
  lVar1 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar65 = (uint)lVar1;
  uVar8 = (uint)((ulonglong)uVar5 * 0x2df45158) ^
          (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ uVar10;
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar32 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  uVar64 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
  uVar9 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  uVar7 = ~uVar7;
  uVar6 = ~uVar6;
  uVar5 = (uVar65 << 0x18 | (uVar65 >> 8 & 0xff) << 0x10 | (uVar65 >> 0x10 & 0xff) << 8 |
          uVar65 >> 0x18) ^
          uVar70 * 0x2df45158 + uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
  uVar70 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar70;
  uVar8 = (uint)lVar1;
  uVar70 = (uVar64 << 0x18 | (uVar64 >> 8 & 0xff) << 0x10 | (uVar64 >> 0x10 & 0xff) << 8 |
           uVar64 >> 0x18) * uVar6 + uVar70 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar5 * uVar9 + uVar64 * uVar32 + (int)((ulonglong)uVar9 * (ulonglong)uVar64 >> 0x20);
  uVar70 = (uVar70 * 0x1000000 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
           uVar70 >> 0x18) ^ (uint)((ulonglong)uVar9 * (ulonglong)uVar64);
  uVar8 = uVar70;
  if ((uVar64 & 0x20) != 0) {
    uVar8 = uVar5;
    uVar5 = uVar70;
  }
  param_1[0x12] = uVar8 << (uVar64 & 0x1f) | (uVar5 >> 1) >> (~uVar64 & 0x1f);
  param_1[0x13] = uVar5 << (uVar64 & 0x1f) | (uVar8 >> 1) >> (~uVar64 & 0x1f);
  uVar5 = uVar39 ^ uVar15;
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar65 = (uint)lVar1;
  uVar64 = uVar59 ^ uVar14;
  uVar8 = (uVar64 << 0x18 | (uVar64 >> 8 & 0xff) << 0x10 | (uVar64 >> 0x10 & 0xff) << 8 |
          uVar64 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar70 = (uint)((ulonglong)uVar64 * 0x2df45158) ^
           (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ uVar12;
  uVar5 = uVar5 * 0x2df45158 + uVar64 * 0x2d7f954c + (int)((ulonglong)uVar64 * 0x2df45158 >> 0x20) ^
          (uVar65 << 0x18 | (uVar65 >> 8 & 0xff) << 0x10 | (uVar65 >> 0x10 & 0xff) << 8 |
          uVar65 >> 0x18) ^ uVar13;
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar64 = (uint)lVar1;
  uVar65 = (uVar64 << 0x18 | (uVar64 >> 8 & 0xff) << 0x10 | (uVar64 >> 0x10 & 0xff) << 8 |
           uVar64 >> 0x18) ^
           uVar5 * 0x2df45158 + uVar70 * 0x2d7f954c + (int)((ulonglong)uVar70 * 0x2df45158 >> 0x20);
  uVar5 = (uVar70 << 0x18 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
          uVar70 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = uVar65 << 0x18 | (uVar65 >> 8 & 0xff) << 0x10 | (uVar65 >> 0x10 & 0xff) << 8 |
          uVar65 >> 0x18;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar8;
  uVar45 = (uint)lVar1;
  uVar70 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar70 * 0x2df45158);
  uVar5 = (uVar70 << 0x18 | (uVar70 >> 8 & 0xff) << 0x10 | (uVar70 >> 0x10 & 0xff) << 8 |
          uVar70 >> 0x18) * uVar6 + uVar8 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar64 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar9 * (ulonglong)uVar70);
  uVar5 = (uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
          uVar45 >> 0x18) ^
          uVar65 * uVar9 + uVar70 * uVar32 + (int)((ulonglong)uVar9 * (ulonglong)uVar70 >> 0x20);
  uVar8 = uVar64;
  if ((uVar70 & 0x20) != 0) {
    uVar8 = uVar5;
    uVar5 = uVar64;
  }
  param_1[0x10] = uVar8 << (uVar70 & 0x1f) | (uVar5 >> 1) >> (~uVar70 & 0x1f);
  param_1[0x11] = uVar5 << (uVar70 & 0x1f) | (uVar8 >> 1) >> (~uVar70 & 0x1f);
  uVar13 = uVar39 ^ uVar13;
  uVar5 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar12 = uVar59 ^ uVar12;
  uVar5 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = (uint)((ulonglong)uVar12 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar16;
  uVar17 = uVar13 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20)
           ^ (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ uVar17;
  uVar5 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar8 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar17 * 0x2df45158 +
              uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
  uVar13 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  lVar2 = (ulonglong)uVar6 * (ulonglong)uVar13;
  uVar17 = (uint)lVar2;
  uVar5 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar12 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
  uVar5 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * uVar6 + uVar13 * uVar7 + (int)((ulonglong)lVar2 >> 0x20);
  uVar16 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar9 * (ulonglong)uVar12);
  uVar5 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) ^
          uVar8 * uVar9 + uVar12 * uVar32 + (int)((ulonglong)uVar9 * (ulonglong)uVar12 >> 0x20);
  uVar8 = uVar16;
  if ((uVar12 & 0x20) != 0) {
    uVar8 = uVar5;
    uVar5 = uVar16;
  }
  param_1[0xe] = uVar8 << (uVar12 & 0x1f) | (uVar5 >> 1) >> (~uVar12 & 0x1f);
  param_1[0xf] = uVar5 << (uVar12 & 0x1f) | (uVar8 >> 1) >> (~uVar12 & 0x1f);
  uVar39 = uVar39 ^ uVar11;
  uVar5 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
          uVar39 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar59 = uVar59 ^ uVar10;
  uVar5 = (uVar59 << 0x18 | (uVar59 >> 8 & 0xff) << 0x10 | (uVar59 >> 0x10 & 0xff) << 8 |
          uVar59 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uint)((ulonglong)uVar59 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar14;
  uVar15 = uVar39 * 0x2df45158 + uVar59 * 0x2d7f954c + (int)((ulonglong)uVar59 * 0x2df45158 >> 0x20)
           ^ (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ uVar15;
  uVar5 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar10 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^
           uVar15 * 0x2df45158 + uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20)
  ;
  uVar11 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar2 = (ulonglong)uVar6 * (ulonglong)uVar11;
  uVar12 = (uint)lVar2;
  uVar5 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar14 * 0x2df45158);
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * uVar6 + uVar11 * uVar7 + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar9 * (ulonglong)uVar8);
  uVar5 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^
          uVar10 * uVar9 + uVar8 * uVar32 + (int)((ulonglong)uVar9 * (ulonglong)uVar8 >> 0x20);
  uVar6 = uVar7;
  if ((uVar8 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar7;
  }
  param_1[0xc] = uVar6 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f);
  uVar7 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18;
  param_1[0xd] = uVar5 << (uVar8 & 0x1f) | (uVar6 >> 1) >> (~uVar8 & 0x1f);
  lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar21 = uVar21 ^ uVar18;
  uVar5 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar21 * 0x2df45158);
  uVar5 = uVar9 ^ uVar50;
  uVar10 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^
           uVar22 * 0x2df45158 + uVar21 * 0x2d7f954c + (int)((ulonglong)uVar21 * 0x2df45158 >> 0x20)
  ;
  uVar7 = uVar10 ^ uVar38;
  uVar6 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar6 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = uVar7 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20) ^
          (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar60;
  uVar7 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar12 = (uint)lVar1;
  uVar6 = (uint)((ulonglong)uVar5 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar56;
  uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  uVar14 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  uVar7 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18;
  uVar19 = ~uVar19;
  uVar5 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^
          uVar8 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
  uVar12 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar19 * (ulonglong)uVar12;
  uVar6 = (uint)lVar1;
  uVar8 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) ^ uVar5 * uVar7 + uVar14 * uVar11 + (int)((ulonglong)uVar7 * (ulonglong)uVar14 >> 0x20);
  uVar20 = ~uVar20;
  uVar5 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * uVar19 + uVar12 * uVar20 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar7 * (ulonglong)uVar14);
  uVar6 = uVar8;
  if ((uVar14 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar8;
  }
  param_1[0x1e] = uVar5 << (uVar14 & 0x1f) | (uVar6 >> 1) >> (~uVar14 & 0x1f);
  param_1[0x1f] = uVar6 << (uVar14 & 0x1f) | (uVar5 >> 1) >> (~uVar14 & 0x1f);
  uVar5 = uVar9 ^ uVar34;
  uVar6 = uVar10 ^ uVar46;
  uVar8 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar12 = (uint)lVar1;
  uVar12 = uVar6 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20) ^
           (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^ uVar66;
  uVar14 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  lVar2 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar16 = (uint)lVar2;
  uVar6 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uint)((ulonglong)uVar5 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar69;
  uVar6 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar5 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^
          uVar12 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar19 * (ulonglong)uVar6;
  uVar12 = (uint)lVar1;
  uVar12 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^
           uVar5 * uVar7 + uVar8 * uVar11 + (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20);
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * uVar19 + uVar6 * uVar20 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar7 * (ulonglong)uVar8);
  uVar6 = uVar12;
  if ((uVar8 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar12;
  }
  param_1[0x1d] = uVar6 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f);
  uVar69 = uVar9 ^ uVar69;
  param_1[0x1c] = uVar5 << (uVar8 & 0x1f) | (uVar6 >> 1) >> (~uVar8 & 0x1f);
  uVar66 = uVar10 ^ uVar66;
  uVar5 = uVar66 << 0x18 | (uVar66 >> 8 & 0xff) << 0x10 | (uVar66 >> 0x10 & 0xff) << 8 |
          uVar66 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar38 = uVar66 * 0x2df45158 + uVar69 * 0x2d7f954c + (int)((ulonglong)uVar69 * 0x2df45158 >> 0x20)
           ^ (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18) ^ uVar38;
  uVar6 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
          uVar38 >> 0x18;
  lVar2 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar12 = (uint)lVar2;
  uVar5 = (uVar69 << 0x18 | (uVar69 >> 8 & 0xff) << 0x10 | (uVar69 >> 0x10 & 0xff) << 8 |
          uVar69 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar50 = (uint)((ulonglong)uVar69 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar50;
  uVar5 = (uVar50 << 0x18 | (uVar50 >> 8 & 0xff) << 0x10 | (uVar50 >> 0x10 & 0xff) << 8 |
          uVar50 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar50 * 0x2df45158);
  uVar5 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^
          uVar38 * 0x2df45158 + uVar50 * 0x2d7f954c + (int)((ulonglong)uVar50 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar19 * (ulonglong)uVar6;
  uVar12 = (uint)lVar1;
  uVar12 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^
           uVar5 * uVar7 + uVar8 * uVar11 + (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20);
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * uVar19 + uVar6 * uVar20 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar7 * (ulonglong)uVar8);
  uVar6 = uVar12;
  if ((uVar8 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar12;
  }
  param_1[0x1b] = uVar6 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f);
  uVar9 = uVar9 ^ uVar56;
  param_1[0x1a] = uVar5 << (uVar8 & 0x1f) | (uVar6 >> 1) >> (~uVar8 & 0x1f);
  uVar10 = uVar10 ^ uVar60;
  uVar5 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar46 = uVar10 * 0x2df45158 + uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20) ^
           (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ uVar46;
  uVar6 = uVar46 << 0x18 | (uVar46 >> 8 & 0xff) << 0x10 | (uVar46 >> 0x10 & 0xff) << 8 |
          uVar46 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar10 = (uint)lVar1;
  uVar34 = (uint)((ulonglong)uVar9 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar34;
  uVar5 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
          uVar34 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar34 * 0x2df45158);
  uVar5 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) ^
          uVar46 * 0x2df45158 + uVar34 * 0x2d7f954c + (int)((ulonglong)uVar34 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar19 * (ulonglong)uVar6;
  uVar9 = (uint)lVar1;
  uVar9 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) ^ uVar5 * uVar7 + uVar8 * uVar11 + (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20);
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * uVar19 + uVar6 * uVar20 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar7 * (ulonglong)uVar8);
  uVar6 = uVar9;
  if ((uVar8 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar9;
  }
  param_1[0x18] = uVar5 << (uVar8 & 0x1f) | (uVar6 >> 1) >> (~uVar8 & 0x1f);
  param_1[0x19] = uVar6 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x72] = 0x80000000;
  param_1[0x26] = uVar25 << (uVar28 & 0x1f) | (uVar24 >> 1) >> (~uVar28 & 0x1f);
  param_1[0x27] = uVar24 << (uVar28 & 0x1f) | (uVar25 >> 1) >> (~uVar28 & 0x1f);
  param_1[0x28] = uVar67 << (uVar35 & 0x1f) | (uVar61 >> 1) >> (~uVar35 & 0x1f);
  param_1[0x29] = uVar61 << (uVar35 & 0x1f) | (uVar67 >> 1) >> (~uVar35 & 0x1f);
  param_1[0x2a] = uVar63 << (uVar36 & 0x1f) | (uVar26 >> 1) >> (~uVar36 & 0x1f);
  param_1[0x2b] = uVar26 << (uVar36 & 0x1f) | (uVar63 >> 1) >> (~uVar36 & 0x1f);
  param_1[0x2c] = uVar27 << (uVar72 & 0x1f) | (uVar51 >> 1) >> (~uVar72 & 0x1f);
  param_1[0x2d] = uVar51 << (uVar72 & 0x1f) | (uVar27 >> 1) >> (~uVar72 & 0x1f);
  param_1[0x20] = puVar3;
  param_1[0x21] = &DAT_0188a624;
  param_1[0x22] = &DAT_005674cc;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_016dd1aa(param_1 + 0x46,local_108,0xb0);
  *(undefined2 *)(param_1 + 0x75) = 0x101;
  param_1[0x32] = uVar55;
  param_1[0x33] = uVar71;
  param_1[0x34] = uVar44;
  param_1[0x35] = uVar68;
  param_1[0x36] = uVar31;
  param_1[0x37] = uVar37;
  param_1[0x38] = uVar57;
  param_1[0x39] = uVar73;
  uVar5 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
          uVar42 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar62 = uVar62 ^ uVar29;
  uVar5 = (uVar62 << 0x18 | (uVar62 >> 8 & 0xff) << 0x10 | (uVar62 >> 0x10 & 0xff) << 8 |
          uVar62 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar62 * 0x2df45158);
  uVar5 = uVar7 ^ uVar52;
  uVar10 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^
           uVar42 * 0x2df45158 + uVar62 * 0x2d7f954c + (int)((ulonglong)uVar62 * 0x2df45158 >> 0x20)
  ;
  uVar8 = uVar10 ^ uVar54;
  uVar6 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar9 = (uint)lVar1;
  uVar6 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = uVar8 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20) ^
          (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) ^ uVar58;
  uVar9 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar14 = (uint)lVar1;
  uVar6 = (uint)((ulonglong)uVar5 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar53;
  uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar12 = uVar43 << 0x18 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
           uVar43 >> 0x18;
  uVar9 = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
          uVar48 >> 0x18;
  uVar11 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  uVar48 = ~uVar48;
  uVar5 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) ^
          uVar8 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar48 * (ulonglong)uVar8;
  uVar6 = (uint)lVar1;
  uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) ^ uVar5 * uVar12 + uVar11 * uVar9 + (int)((ulonglong)uVar12 * (ulonglong)uVar11 >> 0x20)
  ;
  uVar43 = ~uVar43;
  uVar6 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * uVar48 + uVar8 * uVar43 + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar11);
  uVar6 = uVar8;
  if ((uVar11 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar8;
  }
  param_1[0x45] = uVar5 << (uVar11 & 0x1f) | (uVar6 >> 1) >> (~uVar11 & 0x1f);
  param_1[0x44] = uVar6 << (uVar11 & 0x1f) | (uVar5 >> 1) >> (~uVar11 & 0x1f);
  uVar5 = uVar7 ^ uVar30;
  uVar6 = uVar10 ^ uVar41;
  uVar11 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar8 = uVar6 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20) ^
          (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar40;
  uVar14 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  lVar2 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar16 = (uint)lVar2;
  uVar6 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uint)((ulonglong)uVar5 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar47;
  uVar6 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar5 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^
          uVar8 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar48 * (ulonglong)uVar6;
  uVar8 = (uint)lVar1;
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar5 * uVar12 + uVar11 * uVar9 + (int)((ulonglong)uVar12 * (ulonglong)uVar11 >> 0x20)
  ;
  uVar6 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * uVar48 + uVar6 * uVar43 + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar11);
  uVar6 = uVar8;
  if ((uVar11 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar8;
  }
  param_1[0x43] = uVar5 << (uVar11 & 0x1f) | (uVar6 >> 1) >> (~uVar11 & 0x1f);
  param_1[0x42] = uVar6 << (uVar11 & 0x1f) | (uVar5 >> 1) >> (~uVar11 & 0x1f);
  uVar47 = uVar7 ^ uVar47;
  uVar40 = uVar10 ^ uVar40;
  uVar5 = uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
          uVar40 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar54 = uVar40 * 0x2df45158 + uVar47 * 0x2d7f954c + (int)((ulonglong)uVar47 * 0x2df45158 >> 0x20)
           ^ (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18) ^ uVar54;
  uVar6 = uVar54 << 0x18 | (uVar54 >> 8 & 0xff) << 0x10 | (uVar54 >> 0x10 & 0xff) << 8 |
          uVar54 >> 0x18;
  lVar2 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar8 = (uint)lVar2;
  uVar5 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
          uVar47 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar52 = (uint)((ulonglong)uVar47 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar52;
  uVar5 = (uVar52 << 0x18 | (uVar52 >> 8 & 0xff) << 0x10 | (uVar52 >> 0x10 & 0xff) << 8 |
          uVar52 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar52 * 0x2df45158);
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar54 * 0x2df45158 +
              uVar52 * 0x2d7f954c + (int)((ulonglong)uVar52 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar48 * (ulonglong)uVar6;
  uVar8 = (uint)lVar1;
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar5 * uVar12 + uVar11 * uVar9 + (int)((ulonglong)uVar12 * (ulonglong)uVar11 >> 0x20)
  ;
  uVar6 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * uVar48 + uVar6 * uVar43 + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar11);
  uVar6 = uVar8;
  if ((uVar11 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar8;
  }
  param_1[0x40] = uVar6 << (uVar11 & 0x1f) | (uVar5 >> 1) >> (~uVar11 & 0x1f);
  uVar7 = uVar7 ^ uVar53;
  param_1[0x41] = uVar5 << (uVar11 & 0x1f) | (uVar6 >> 1) >> (~uVar11 & 0x1f);
  uVar10 = uVar10 ^ uVar58;
  uVar5 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar41 = uVar10 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20) ^
           (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ uVar41;
  uVar6 = uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
          uVar41 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar10 = (uint)lVar1;
  uVar30 = (uint)((ulonglong)uVar7 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar30;
  uVar5 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
          uVar30 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar30 * 0x2df45158);
  uVar5 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) ^
          uVar41 * 0x2df45158 + uVar30 * 0x2d7f954c + (int)((ulonglong)uVar30 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar48 * (ulonglong)uVar6;
  uVar7 = (uint)lVar1;
  uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) ^ uVar5 * uVar12 + uVar8 * uVar9 + (int)((ulonglong)uVar12 * (ulonglong)uVar8 >> 0x20);
  uVar6 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * uVar48 + uVar6 * uVar43 + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar8);
  uVar6 = uVar7;
  if ((uVar8 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar7;
  }
  param_1[0x3e] = uVar6 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f);
  param_1[0x3f] = uVar5 << (uVar8 & 0x1f) | (uVar6 >> 1) >> (~uVar8 & 0x1f);
  *(undefined1 *)((int)param_1 + 0x1d6) = 2;
  param_1[0x2e] = &DAT_005674cc;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 2;
  param_1[0x31] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

