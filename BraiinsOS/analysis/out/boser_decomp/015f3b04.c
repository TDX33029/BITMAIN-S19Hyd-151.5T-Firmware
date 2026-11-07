// FUN_015f3b04 @ 015f3b04 size=544 calls_out=3 calls_in=3
// strings: 

longlong FUN_015f3b04(uint param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r3;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  
  uVar17 = thunk_FUN_01bee35a(param_1,600);
  puVar5 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
  if ((char)puVar5[2] == '\0') {
    puVar5 = (uint *)FUN_01340514(puVar5,0);
  }
  uVar11 = *puVar5 + 0xaa6c78a5;
  uVar8 = puVar5[1] + 0x2d358dcc + (uint)(0x5593875a < *puVar5);
  uVar3 = (ulonglong)uVar11 * (ulonglong)(uVar11 ^ 0x962eacc9);
  lVar1 = (ulonglong)uVar11 * (ulonglong)(uVar8 ^ 0x8bb84b93) + (uVar3 >> 0x20);
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar4 = (ulonglong)uVar8 * (ulonglong)(uVar11 ^ 0x962eacc9);
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar2 = (ulonglong)uVar8 * (ulonglong)(uVar8 ^ 0x8bb84b93) +
          (ulonglong)
          CONCAT14(CARRY4(uVar10,uVar9) ||
                   CARRY4(uVar10 + uVar9,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                   (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
  uVar12 = param_3 - param_1;
  uVar14 = param_4 - (param_2 + (param_3 < param_1));
  uVar9 = (uint)lVar2 ^ (uint)uVar3;
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20) ^ (uint)(lVar1 + lVar4);
  lVar1 = (ulonglong)uVar12 * (ulonglong)uVar9;
  uVar15 = (uint)lVar1;
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)uVar14 * (ulonglong)uVar9;
  uVar7 = (uint)lVar1;
  uVar13 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)uVar12 * (ulonglong)uVar10 + (ulonglong)uVar6;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  bVar16 = CARRY4(uVar7,(uint)lVar1);
  lVar1 = (ulonglong)uVar14 * (ulonglong)uVar10 +
          (ulonglong)
          CONCAT14(CARRY4(uVar9,uVar13) || CARRY4(uVar9 + uVar13,(uint)bVar16),
                   uVar9 + uVar13 + (uint)bVar16);
  uVar7 = uVar6 + uVar12 * uVar10 + uVar7;
  uVar9 = param_4 + ~param_2 + (uint)CARRY4(param_3,~param_1);
  if ((uVar7 < uVar9 || uVar9 - uVar7 < (uint)(uVar15 <= param_3 + ~param_1)) &&
     (FUN_01bf0ff0(param_1 - param_3,param_2 - (param_4 + (uint)(param_1 < param_3)),uVar12,uVar14),
     uVar7 <= extraout_r3 && (uint)(extraout_r2 <= uVar15) <= uVar7 - extraout_r3)) {
    do {
      bVar16 = 0x5593875a < uVar11;
      uVar11 = uVar11 + 0xaa6c78a5;
      uVar8 = uVar8 + 0x2d358dcc + (uint)bVar16;
      uVar3 = (ulonglong)uVar11 * (ulonglong)(uVar11 ^ 0x962eacc9);
      lVar1 = (ulonglong)uVar11 * (ulonglong)(uVar8 ^ 0x8bb84b93) + (uVar3 >> 0x20);
      uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar4 = (ulonglong)uVar8 * (ulonglong)(uVar11 ^ 0x962eacc9);
      uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar2 = (ulonglong)uVar8 * (ulonglong)(uVar8 ^ 0x8bb84b93) +
              (ulonglong)
              CONCAT14(CARRY4(uVar9,uVar10) ||
                       CARRY4(uVar9 + uVar10,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                       (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
      uVar10 = (uint)lVar2 ^ (uint)uVar3;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20) ^ (uint)(lVar1 + lVar4);
      uVar6 = uVar14 * uVar10 +
              uVar12 * uVar9 + (int)((ulonglong)uVar10 * (ulonglong)uVar12 >> 0x20);
    } while (uVar6 <= extraout_r3 &&
             (uint)(extraout_r2 <= (uint)((ulonglong)uVar10 * (ulonglong)uVar12)) <=
             uVar6 - extraout_r3);
    uVar7 = (uint)((ulonglong)uVar14 * (ulonglong)uVar10 >> 0x20);
    lVar1 = (ulonglong)uVar12 * (ulonglong)uVar9 + ((ulonglong)uVar12 * (ulonglong)uVar10 >> 0x20);
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar16 = CARRY4((uint)((ulonglong)uVar14 * (ulonglong)uVar10),(uint)lVar1);
    lVar1 = (ulonglong)uVar14 * (ulonglong)uVar9 +
            (ulonglong)
            CONCAT14(CARRY4(uVar6,uVar7) || CARRY4(uVar6 + uVar7,(uint)bVar16),
                     uVar6 + uVar7 + (uint)bVar16);
  }
  *puVar5 = uVar11;
  puVar5[1] = uVar8;
  return lVar1 + CONCAT44(param_2,param_1);
}

