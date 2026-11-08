// FUN_00659164 @ 00659164 size=248 calls_out=4 calls_in=1
// strings: 

void FUN_00659164(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x3c) & 0x1f;
  if (param_2 >> uVar1 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c03808);
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_003d3ff3,0x49,&DAT_01c03818);
  }
  uVar7 = (param_2 >> uVar1) - 2;
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar8 = *(int *)(param_1 + 0x24);
  piVar4 = (int *)(*(int *)(param_1 + 0x10) + uVar7 * 0xc);
  while( true ) {
    iVar8 = iVar8 + 4;
    if (param_4 <= param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_5,param_4,&DAT_01d08f68);
    }
    if (uVar1 <= uVar7) break;
    iVar6 = piVar4[2];
    puVar2 = (undefined4 *)(param_3 + param_5 * 8);
    uVar5 = *puVar2;
    param_5 = puVar2[1];
    if (iVar6 == *piVar4) {
      FUN_01a54b48(piVar4);
    }
    iVar3 = piVar4[1];
    *(int *)(param_1 + 0x24) = iVar8;
    *(undefined4 *)(iVar3 + iVar6 * 4) = uVar5;
    piVar4[2] = iVar6 + 1;
    if (param_5 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar7,uVar1,&DAT_01c03828);
}

