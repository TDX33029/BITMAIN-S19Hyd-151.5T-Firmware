// FUN_00660ea8 @ 00660ea8 size=240 calls_out=2 calls_in=1
// strings: 

void FUN_00660ea8(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  if (param_4 == param_5) {
    return;
  }
  if (param_4 < param_3) {
    if (param_5 < param_3) {
      puVar2 = (undefined4 *)(param_2 + param_4 * 0x14);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      uVar9 = puVar2[4];
      puVar10 = (undefined4 *)(param_2 + param_5 * 0x14);
      FUN_01bed864(puVar2,puVar10,0x14);
      *puVar10 = uVar4;
      puVar10[1] = uVar6;
      puVar10[2] = uVar7;
      puVar10[3] = uVar8;
      puVar10[4] = uVar9;
      uVar11 = *(uint *)(param_1 + 8);
      uVar3 = *(uint *)(param_1 + 0xc) & 0x1f;
      uVar1 = param_4 >> uVar3;
      if (uVar11 <= param_4 >> uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,uVar11,&DAT_01c03dd8);
      }
      param_5 = param_5 >> uVar3;
      if (uVar11 <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_5,uVar11,&DAT_01c03dd8);
      }
      iVar5 = *(int *)(param_1 + 4);
      uVar4 = *(undefined4 *)(iVar5 + uVar1 * 4);
      *(undefined4 *)(iVar5 + uVar1 * 4) = *(undefined4 *)(iVar5 + param_5 * 4);
      *(undefined4 *)(iVar5 + param_5 * 4) = uVar4;
      return;
    }
  }
  else {
    param_5 = param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_5,param_3,&DAT_01c03288);
}

