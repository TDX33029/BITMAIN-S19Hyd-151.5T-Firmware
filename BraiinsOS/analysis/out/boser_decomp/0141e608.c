// FUN_0141e608 @ 0141e608 size=144 calls_out=2 calls_in=3
// strings: 

void FUN_0141e608(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *(uint *)(param_2 + 0x28);
  if (param_3 < uVar3) {
    piVar1 = (int *)(*(int *)(param_2 + 0x24) + param_3 * 0x34);
    if (*piVar1 == 1) {
      FUN_0141ce48(param_2,piVar1[1]);
      uVar3 = *(uint *)(param_2 + 0x28);
    }
    if (param_3 < uVar3) {
      iVar2 = param_3 * 0x34 + *(int *)(param_2 + 0x24);
      uVar5 = *(undefined4 *)(iVar2 + 0x10);
      uVar6 = *(undefined4 *)(iVar2 + 0x14);
      uVar7 = *(undefined4 *)(iVar2 + 0x18);
      uVar8 = *(undefined4 *)(iVar2 + 0x1c);
      *param_1 = *(undefined4 *)(iVar2 + 0xc);
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      uVar5 = param_4[1];
      uVar6 = param_4[2];
      uVar7 = param_4[3];
      uVar8 = param_4[4];
      *(undefined4 *)(iVar2 + 0xc) = *param_4;
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined4 *)(iVar2 + 0x14) = uVar6;
      *(undefined4 *)(iVar2 + 0x18) = uVar7;
      *(undefined4 *)(iVar2 + 0x1c) = uVar8;
      return;
    }
    puVar4 = &DAT_01d1e444;
  }
  else {
    puVar4 = &DAT_01d1e434;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_3,uVar3,puVar4);
}

