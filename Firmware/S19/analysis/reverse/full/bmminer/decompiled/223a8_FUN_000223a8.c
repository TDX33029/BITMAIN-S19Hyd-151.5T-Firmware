// FUN_000223a8 @ 000223a8  size=396  callers=0
// program: bmminer


void FUN_000223a8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char acStack_820 [2048];
  
  if (param_1 == 0 || 3 < param_2) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(acStack_820,0x800,"%s: input bad param\n","api_miner_chain_rate_array");
      FUN_00032218(3,acStack_820,0);
    }
    return;
  }
  uVar3 = FUN_00055ce0();
  if (DAT_0008920c < 0x18) {
    if (DAT_0008920c != 0) {
      uVar7 = 0;
      puVar6 = (undefined4 *)(&DAT_0071c480 + param_2 * 0xc0);
      do {
        uVar7 = uVar7 + 1;
        FUN_00067b0c(*puVar6,puVar6[1]);
        uVar4 = FUN_00056130();
        FUN_00056c34(uVar3,uVar4);
        puVar6 = puVar6 + 2;
      } while (uVar7 < DAT_0008920c);
    }
  }
  else {
    uVar8 = DAT_0008920c % 0x18;
    uVar7 = uVar8 + 0x18;
    do {
      iVar2 = uVar8 * -0x55555555;
      uVar5 = uVar8 % 0x18;
      uVar8 = uVar8 + 1;
      iVar1 = (param_2 * 0x18 + uVar5) * 8;
      FUN_00067b0c(*(undefined4 *)(&DAT_0071c480 + iVar1),*(undefined4 *)(&DAT_0071c484 + iVar1),
                   iVar2);
      uVar4 = FUN_00056130();
      FUN_00056c34(uVar3,uVar4);
    } while (uVar7 != uVar8);
  }
  FUN_00056774(param_1,"rate_array",uVar3);
  return;
}

