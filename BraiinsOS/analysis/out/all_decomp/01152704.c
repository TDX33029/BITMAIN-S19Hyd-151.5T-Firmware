// FUN_01152704 @ 01152704 size=544 calls_out=3 calls_in=2
// strings: 

void FUN_01152704(int *param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar12 = param_1[1];
  uVar13 = param_1[2];
  if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar13,uVar12,&DAT_01888c04);
  }
  uVar2 = param_3 - param_4;
  iVar7 = *param_1;
  uVar5 = uVar13 + 1;
  cVar11 = -0x10;
  if (uVar2 < 0xf) {
    cVar11 = (char)uVar2 * '\x10';
  }
  *(char *)(iVar7 + uVar13) = cVar11;
  param_1[2] = uVar5;
  if (0xe < uVar2) {
    for (uVar13 = uVar2 - 0xf; 0xfe < uVar13; uVar13 = uVar13 - 0xff) {
      if (uVar12 == uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,uVar12,&DAT_01888c04);
      }
      *(undefined1 *)(iVar7 + uVar5) = 0xff;
      uVar5 = uVar5 + 1;
      param_1[2] = uVar5;
    }
    if (uVar12 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar12,&DAT_01888c04);
    }
    *(char *)(iVar7 + uVar5) = (char)uVar13;
    uVar5 = uVar5 + 1;
    param_1[2] = uVar5;
  }
  if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_4,param_3,param_3,&DAT_01888c64);
  }
  uVar13 = uVar5 + uVar2;
  if ((CARRY4(uVar5,uVar2)) || (uVar12 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar13,uVar12,&DAT_01888bf4);
  }
  if (param_3 != param_4) {
    puVar1 = (undefined4 *)(param_2 + param_4);
    puVar3 = (undefined4 *)(iVar7 + uVar5);
    if (3 < uVar2) {
      if (uVar2 < 8) {
        *puVar3 = *puVar1;
        *(undefined4 *)((int)puVar3 + (uVar2 - 4)) = *(undefined4 *)((int)puVar1 + (uVar2 - 4));
        param_1[2] = uVar13;
        return;
      }
      if (uVar2 < 0x11) {
        uVar4 = *puVar1;
        puVar8 = (undefined4 *)((int)puVar1 + (uVar2 - 8));
        uVar6 = *puVar8;
        uVar9 = puVar8[1];
        puVar3[1] = puVar1[1];
        *puVar3 = uVar4;
        puVar3 = (undefined4 *)((int)puVar3 + (uVar2 - 8));
        *puVar3 = uVar6;
        param_1[2] = uVar13;
        puVar3[1] = uVar9;
        return;
      }
      if (uVar2 < 0x21) {
        uVar14 = *puVar1;
        uVar15 = puVar1[1];
        uVar4 = puVar1[2];
        puVar8 = (undefined4 *)((int)puVar1 + (uVar2 - 0x10));
        uVar9 = *puVar8;
        puVar3[3] = puVar1[3];
        puVar3[2] = uVar4;
        uVar6 = puVar8[1];
        uVar10 = puVar8[2];
        uVar4 = puVar8[3];
        puVar3[1] = uVar15;
        *puVar3 = uVar14;
        puVar3 = (undefined4 *)((int)puVar3 + (uVar2 - 0x10));
        *puVar3 = uVar9;
        param_1[2] = uVar13;
        puVar3[1] = uVar6;
        puVar3[2] = uVar10;
        puVar3[3] = uVar4;
        return;
      }
      FUN_016dd1aa(puVar3);
      param_1[2] = uVar13;
      return;
    }
    *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
    if (uVar2 != 1) {
      *(undefined2 *)puVar3 = *(undefined2 *)puVar1;
      *(undefined2 *)((int)puVar3 + (uVar2 - 2)) = *(undefined2 *)((int)puVar1 + (uVar2 - 2));
      param_1[2] = uVar13;
      return;
    }
  }
  param_1[2] = uVar13;
  return;
}

