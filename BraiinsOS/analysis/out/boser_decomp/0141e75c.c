// FUN_0141e75c @ 0141e75c size=244 calls_out=2 calls_in=3
// strings: 

void FUN_0141e75c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_48 [8];
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == 1) {
    FUN_0141cec4(auStack_48,param_2[4],param_2[5],param_2[6],param_2[1]);
    bVar9 = (local_40 & 1) != 0;
    if (bVar9) {
      param_2[1] = local_3c;
    }
    *param_2 = (uint)bVar9;
    param_1[5] = local_38;
    param_1[6] = uStack_34;
    param_1[7] = uStack_30;
    param_1[8] = uStack_2c;
    param_1[9] = uStack_28;
    *param_1 = 0;
  }
  else {
    uVar1 = param_2[2];
    if (uVar1 == param_2[3]) {
      *param_1 = 2;
    }
    else {
      param_2[2] = uVar1 + 1;
      if (param_2[5] <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,param_2[5],&DAT_01cf45f0);
      }
      uVar8 = param_2[4];
      iVar7 = uVar1 * 0x34 + uVar8;
      uVar2 = *(undefined4 *)(iVar7 + 0x24);
      uVar4 = *(undefined4 *)(iVar7 + 0x28);
      uVar5 = *(undefined4 *)(iVar7 + 0x2c);
      param_1[1] = *(undefined4 *)(iVar7 + 0x20);
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      param_1[4] = uVar5;
      uVar2 = *(undefined4 *)(iVar7 + 0x10);
      uVar4 = *(undefined4 *)(iVar7 + 0x14);
      uVar5 = *(undefined4 *)(iVar7 + 0x18);
      uVar6 = *(undefined4 *)(iVar7 + 0x1c);
      param_1[5] = *(undefined4 *)(iVar7 + 0xc);
      param_1[6] = uVar2;
      param_1[7] = uVar4;
      param_1[8] = uVar5;
      param_1[9] = uVar6;
      uVar3 = *(uint *)(iVar7 + 4);
      uVar1 = *(uint *)(uVar8 + uVar1 * 0x34);
      *param_1 = 1;
      *param_2 = uVar1;
      param_2[1] = uVar3;
    }
  }
  return;
}

