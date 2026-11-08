// FUN_01be2ea4 @ 01be2ea4 size=276 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be2ef6) */

void FUN_01be2ea4(int param_1)

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
        if (DAT_01d51114 < uVar6) {
          if (0x7fffff < uVar6) {
            uVar6 = 0x800000;
          }
          DAT_01d51114 = uVar6;
        }
      }
    }
    piVar5 = (int *)((int)piVar5 + *(int *)(param_1 + 0x10));
  }
  if (piVar7 != (int *)0x0) {
    DAT_01d53550 = piVar7[4];
    DAT_01d5354c = piVar7[2] + iVar8;
    DAT_01d53558 = piVar7[7];
    DAT_01d53554 = piVar7[5];
    DAT_01d5357c = &DAT_01d53548;
    DAT_01d53588 = 1;
  }
  DAT_01d53554 = (-(DAT_01d53554 + DAT_01d5354c) & DAT_01d53558 - 1) + DAT_01d53554;
  DAT_01d5355c = (DAT_01d5354c - 8U & DAT_01d53558 - 1) + 8;
  if (DAT_01d53558 < 4) {
    iVar3 = 0x7f;
  }
  else {
    iVar3 = DAT_01d53558 + 0x7b;
  }
  DAT_01d53584 = DAT_01d53558;
  if (DAT_01d53558 < 4) {
    DAT_01d53584 = 4;
  }
  if (DAT_01d53558 < 4) {
    DAT_01d53558 = DAT_01d53584;
  }
  DAT_01d53580 = DAT_01d53554 + DAT_01d5355c + iVar3 & 0xfffffffc;
  if (DAT_01d53580 < 0xb5) {
    puVar2 = &DAT_01d53494;
    uVar6 = DAT_01d53584;
    iVar3 = DAT_01d5355c;
  }
  else {
    puVar2 = (undefined *)0x0;
    software_interrupt(0);
    uVar6 = 3;
    iVar3 = 0x22;
  }
  FUN_01be2e3c(puVar2,DAT_01d53580,uVar6,iVar3);
  iVar3 = FUN_01be2dd8();
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be2fb6);
    (*pcVar1)();
  }
  return;
}

