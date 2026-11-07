// FUN_015720d8 @ 015720d8 size=360 calls_out=3 calls_in=1
// strings: 

uint * FUN_015720d8(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_2c;
  
  if (0x7ffffffe < *(uint *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01cfbe10);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) + 1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar8 = (uint *)0x0;
  }
  else {
    uVar3 = FUN_0155ce44(param_1 + 0x20,param_2);
    uVar9 = uVar3 >> 0x19;
    iVar11 = *(int *)(param_1 + 0x10);
    uVar10 = *(uint *)(param_1 + 0x14);
    local_2c = 0;
    while( true ) {
      uVar3 = uVar10 & uVar3;
      uVar4 = *(uint *)(iVar11 + uVar3);
      uVar5 = uVar4 ^ uVar9 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar10;
        iVar7 = FUN_0156f85c(param_2,iVar11 + -0x14 + uVar6 * -0x14);
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar7 != 0) {
          puVar8 = *(uint **)(iVar11 + uVar6 * -0x14 + -4);
          do {
            uVar9 = *puVar8;
            bVar2 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar2);
          *puVar8 = uVar9 + 1;
          if (0x7fffffff < uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x1572218);
            (*pcVar1)();
          }
          goto LAB_01572220;
        }
      }
      puVar8 = (uint *)0x0;
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar3 = uVar3 + local_2c;
    }
  }
LAB_01572220:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return puVar8;
}

