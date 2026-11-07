// FUN_00b2041c @ 00b2041c size=544 calls_out=5 calls_in=0
// strings: 

void FUN_00b2041c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char *local_350;
  int local_34c;
  undefined1 auStack_340 [336];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined1 auStack_1a0 [336];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = *(char **)(param_2 + 8);
  uVar5 = 0;
  iVar6 = (int)pcVar4 * 0x178;
  if ("d5ab09ee9d583b888f934adbbe8d0/tokio-1.49.0/src/runtime/signal/mod.rs" < pcVar4) {
LAB_00b2044c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar6);
  }
  if (iVar6 == 0) {
    local_34c = 8;
    local_350 = (char *)0x0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    uVar5 = 8;
    local_34c = FUN_01298504(iVar6,8);
    if (local_34c == 0) goto LAB_00b2044c;
    local_350 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      iVar7 = 0;
      pcVar9 = (char *)0x0;
      puVar2 = (undefined4 *)((uint)&local_1c8 | 4);
      do {
        if (iVar6 == iVar7) break;
        piVar8 = (int *)(iVar1 + iVar7);
        if (*piVar8 == 7) {
          FUN_006666fc(&local_50,piVar8[2],piVar8[3]);
          FUN_006666fc(&local_40,piVar8[5],piVar8[6]);
          FUN_006666fc(&local_30,piVar8[8],piVar8[9]);
          uVar5 = 7;
          local_1c8 = local_50;
          uStack_1c4 = uStack_4c;
          uStack_1c0 = uStack_48;
          local_1f0 = local_50;
          uStack_1ec = uStack_4c;
          uStack_1e8 = uStack_48;
          uStack_1e4 = local_40;
          local_1e0 = uStack_3c;
          uStack_1dc = uStack_38;
          uStack_1d8 = local_30;
          uStack_1d4 = uStack_2c;
          uStack_1d0 = uStack_28;
        }
        else {
          FUN_00b1e4a0(&local_1c8,piVar8);
          uVar5 = local_1c8;
          local_1f0 = *puVar2;
          uStack_1ec = puVar2[1];
          uStack_1e8 = puVar2[2];
          uStack_1e4 = puVar2[3];
          local_1e0 = puVar2[4];
          uStack_1dc = puVar2[5];
          uStack_1d8 = puVar2[6];
          uStack_1d4 = puVar2[7];
          uStack_1d0 = puVar2[8];
          FUN_01bed4e2(auStack_340,auStack_1a0,0x150);
        }
        pcVar9 = pcVar9 + 1;
        puVar3 = (undefined4 *)(local_34c + iVar7);
        *puVar3 = uVar5;
        puVar3[1] = local_1f0;
        puVar3[2] = uStack_1ec;
        puVar3[3] = uStack_1e8;
        puVar3[4] = uStack_1e4;
        puVar3[5] = local_1e0;
        puVar3[6] = uStack_1dc;
        puVar3[7] = uStack_1d8;
        puVar3[8] = uStack_1d4;
        puVar3[9] = uStack_1d0;
        FUN_01bed4e2(puVar3 + 10,auStack_340,0x150);
        iVar7 = iVar7 + 0x178;
      } while (pcVar4 != pcVar9);
    }
  }
  *param_1 = local_350;
  param_1[1] = local_34c;
  param_1[2] = pcVar4;
  return;
}

