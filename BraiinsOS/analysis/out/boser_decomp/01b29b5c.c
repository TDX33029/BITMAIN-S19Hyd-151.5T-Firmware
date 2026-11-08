// FUN_01b29b5c @ 01b29b5c size=312 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b29b5c(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  uint *extraout_r2_02;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  
  puVar8 = param_2 + 4;
  if (param_1 < param_2) {
    bVar10 = param_1 + 4 <= param_2;
  }
  else {
    if (param_1 == param_2) goto LAB_01b29b9c;
    bVar10 = puVar8 <= param_1;
  }
  if (!bVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1b29b8c);
    (*pcVar1)();
  }
LAB_01b29b9c:
  puVar9 = param_1;
  do {
    uVar2 = *param_2;
    uVar6 = param_2[1];
    param_2 = param_2 + 2;
    *puVar9 = uVar2;
    puVar9[1] = uVar6;
    puVar9 = puVar9 + 2;
  } while (param_2 != puVar8);
  uVar3 = FUN_01b29b14(*param_1);
  uVar4 = FUN_01b29b14(*(undefined4 *)(extraout_r2 + 4));
  uVar2 = FUN_01b29b14(*(undefined4 *)(extraout_r2_00 + 8));
  uVar11 = FUN_01b29b14(*(undefined4 *)(extraout_r2_01 + 0xc),uVar2);
  uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar5 = (uint)uVar11;
  *extraout_r2_02 = uVar3 & 0xff | uVar5 << 0x18 | (uVar4 & 0xff) << 8 | (uVar7 & 0xff) << 0x10;
  extraout_r2_02[1] =
       (uVar3 & 0xffff) >> 8 | (uVar5 >> 8) << 0x18 | uVar4 & 0xff00 | (uVar7 & 0xff00) << 8;
  extraout_r2_02[2] =
       (uVar3 & 0xffffff) >> 0x10 | (uVar5 >> 0x10) << 0x18 | uVar7 & 0xff0000 | uVar4 >> 8 & 0xff00
  ;
  extraout_r2_02[3] =
       uVar5 & 0xff000000 | uVar3 >> 0x18 | (uVar4 >> 0x18) << 8 | (uVar7 >> 0x18) << 0x10;
  return 0;
}

