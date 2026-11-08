// FUN_016d2828 @ 016d2828 size=276 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d287a) */

void FUN_016d2828(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = 0;
  piVar7 = (int *)0x0;
  piVar5 = *(int **)(param_1 + 0xc);
  for (iVar3 = *(int *)(param_1 + 0x14); iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar4 = *piVar5;
    if (iVar4 == 6) {
      iVar8 = (int)*(int **)(param_1 + 0xc) - piVar5[2];
    }
    else if (iVar4 != 2) {
      if (iVar4 == 7) {
        piVar7 = piVar5;
      }
      else if (iVar4 == 0x6474e551) {
        uVar6 = piVar5[5];
        if (DAT_018db6fc < uVar6) {
          if (0x7fffff < uVar6) {
            uVar6 = 0x800000;
          }
          DAT_018db6fc = uVar6;
        }
      }
    }
    piVar5 = (int *)((int)piVar5 + *(int *)(param_1 + 0x10));
  }
  if (piVar7 != (int *)0x0) {
    DAT_018ddae8 = piVar7[4];
    DAT_018ddae4 = piVar7[2] + iVar8;
    DAT_018ddaf0 = piVar7[7];
    DAT_018ddaec = piVar7[5];
    DAT_018ddb14 = &DAT_018ddae0;
    DAT_018ddb20 = 1;
  }
  DAT_018ddaec = (-(DAT_018ddaec + DAT_018ddae4) & DAT_018ddaf0 - 1) + DAT_018ddaec;
  DAT_018ddaf4 = (DAT_018ddae4 - 8U & DAT_018ddaf0 - 1) + 8;
  if (DAT_018ddaf0 < 4) {
    iVar3 = 0x7f;
  }
  else {
    iVar3 = DAT_018ddaf0 + 0x7b;
  }
  DAT_018ddb1c = DAT_018ddaf0;
  if (DAT_018ddaf0 < 4) {
    DAT_018ddb1c = 4;
  }
  if (DAT_018ddaf0 < 4) {
    DAT_018ddaf0 = DAT_018ddb1c;
  }
  DAT_018ddb18 = DAT_018ddaec + DAT_018ddaf4 + iVar3 & 0xfffffffc;
  if (DAT_018ddb18 < 0xb5) {
    puVar2 = &DAT_018dda2c;
    uVar6 = DAT_018ddb1c;
    iVar3 = DAT_018ddaf4;
  }
  else {
    puVar2 = (undefined *)0x0;
    software_interrupt(0);
    uVar6 = 3;
    iVar3 = 0x22;
  }
  FUN_016d27c0(puVar2,DAT_018ddb18,uVar6,iVar3);
  iVar3 = FUN_016d275c();
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d293a);
    (*pcVar1)();
  }
  return;
}

