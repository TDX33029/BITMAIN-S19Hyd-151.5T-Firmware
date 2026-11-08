// FUN_01b5d8f8 @ 01b5d8f8 size=1660 calls_out=22 calls_in=2
// strings: 

int FUN_01b5d8f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *local_9804;
  byte *local_9800;
  undefined1 *local_97fc;
  undefined1 *local_97f8;
  undefined1 *local_97f4;
  int local_97f0;
  int local_97ec [3];
  undefined1 auStack_97e0 [1980];
  int aiStack_9024 [3601];
  undefined1 auStack_57e0 [4096];
  undefined1 local_47e0 [4096];
  int aiStack_37e0 [1024];
  int aiStack_27e0 [1024];
  undefined1 auStack_17e0 [4096];
  undefined1 auStack_7e0 [1024];
  undefined1 auStack_3e0 [768];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  int iStack_28;
  
  piVar10 = (int *)(auStack_60 + 0x3c);
  do {
    piVar10 = piVar10 + -0x400;
    *piVar10 = param_1;
  } while (piVar10 != aiStack_9024);
  local_2c = DAT_01d53560;
  local_97fc = auStack_60;
  local_97f4 = auStack_57e0;
  if (param_2 == 0x974) {
    puVar9 = auStack_57e0;
    FUN_01b269d8(local_97fc,param_7,0x20,&local_97fc);
    iVar7 = param_7 + 0x20;
    do {
      iVar8 = iVar7 + 0x140;
      FUN_01b1cc74(puVar9,iVar7);
      puVar9 = puVar9 + 0x400;
      iVar7 = iVar8;
    } while (iVar8 != param_7 + 0x520);
    local_97f8 = auStack_80;
    puVar9 = auStack_17e0;
    FUN_01b269d8(local_97f8,param_1,0x20);
    iVar7 = param_1 + 0x20;
    do {
      iVar8 = iVar7 + 0x240;
      FUN_01b1d18c(puVar9,iVar7);
      puVar9 = puVar9 + 0x400;
      iVar7 = iVar8;
    } while (iVar8 != param_1 + 0x920);
    FUN_01b25814(aiStack_37e0,0x1000);
    iVar7 = 0;
    uVar4 = 0;
    local_9800 = (byte *)(param_1 + 0x96f);
    do {
      local_9800 = local_9800 + 1;
      uVar5 = (uint)*local_9800;
      if (uVar5 < uVar4 || 0x50 < uVar5) goto LAB_01b5d9b4;
      pbVar6 = (byte *)(uVar4 + param_1 + 0x91f);
      for (uVar1 = uVar4; uVar1 < uVar5; uVar1 = uVar1 + 1) {
        uVar11 = (uint)pbVar6[1];
        if ((uVar4 < uVar1) && (uVar11 <= *pbVar6)) goto LAB_01b5d9b4;
        aiStack_37e0[iVar7 * 0x100 + uVar11] = 1;
        pbVar6 = pbVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      uVar4 = uVar5;
    } while (iVar7 != 4);
    pbVar6 = (byte *)(uVar5 + param_1 + 0x91f);
    do {
      if (pbVar6 == (byte *)(param_1 + 0x96f)) {
        iVar7 = FUN_01b1d31c(auStack_17e0,0x1ffb2);
        if (iVar7 == 0) {
          if (param_8 == 0) {
            FUN_01b5bbb8(auStack_3e0,0x40,param_7,0x520,0,0,0,0);
            FUN_01b5bbb8(auStack_e0,0x40,auStack_3e0,0x40,param_5,param_6,param_3,param_4);
            FUN_01b6b174(auStack_3e0,0x40);
          }
          else {
            FUN_01b269d8(auStack_e0,param_3,0x40);
          }
          FUN_01b5bcc4(auStack_7e0,local_97f8);
          FUN_01b25490(auStack_7e0);
          iVar7 = 0;
          puVar9 = local_97f4;
          do {
            FUN_01b1cb0c(puVar9,iVar7 + 1);
            puVar9 = puVar9 + 0x400;
            iVar7 = extraout_r1;
          } while (extraout_r1 != 4);
          iVar7 = 0;
          FUN_01b2556c(auStack_57e0);
          do {
            iVar8 = (int)aiStack_27e0 + iVar7;
            puVar9 = local_97f4 + iVar7;
            iVar7 = iVar7 + 0x400;
            FUN_01b1cb40(iVar8,auStack_7e0,puVar9);
          } while (iVar7 != 0x1000);
          FUN_01b5cc70(auStack_97e0,local_97fc);
          FUN_01b2556c(auStack_17e0);
          FUN_01b1d274(local_47e0,auStack_97e0,auStack_17e0);
          puVar9 = local_97f4;
          iVar7 = 0;
          do {
            iVar2 = (int)aiStack_27e0 + iVar7;
            iVar8 = iVar7 + 0x1000;
            iVar7 = iVar7 + 0x400;
            FUN_01b1cac8(puVar9 + iVar8,iVar2);
          } while (iVar7 != 0x1000);
          iVar7 = 0;
          FUN_01b1d370(local_47e0);
          FUN_01b28e9c(local_47e0);
          FUN_01b1d3b0(local_47e0);
          puVar9 = local_97f4;
          do {
            local_9804 = (undefined4 *)(puVar9 + iVar7 + 0xffc);
            iVar8 = 0;
            piVar10 = (int *)((int)aiStack_27e0 + iVar7);
            local_9800 = (byte *)((int)aiStack_37e0 + iVar7);
            do {
              iVar3 = *(int *)local_9800;
              local_9804 = local_9804 + 1;
              FUN_01b1c93c(&local_97f0,local_97ec,*local_9804);
              iVar2 = local_97ec[0];
              if (iVar3 != 0) {
                if (local_97f0 < 1) {
                  if (local_97ec[0] == 0) {
                    iVar2 = 0x2b;
                  }
                  else {
                    iVar2 = local_97ec[0] + -1;
                  }
                }
                else if (local_97ec[0] == 0x2b) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = local_97ec[0] + 1;
                }
              }
              iVar8 = iVar8 + 1;
              *piVar10 = iVar2;
              piVar10 = piVar10 + 1;
              local_9800 = (byte *)((int)local_9800 + 4);
            } while (iVar8 != 0x100);
            iVar7 = iVar7 + 0x400;
          } while (iVar7 != 0x1000);
          FUN_01b1d3f0(auStack_3e0,aiStack_27e0);
          FUN_01b5bbb8(auStack_a0,0x20,auStack_e0,0x40,auStack_3e0,0x300,0,0);
          iVar7 = FUN_01b1c8dc(local_97f8,auStack_a0,0x20);
          iVar7 = -(uint)(iVar7 != 0);
          goto LAB_01b5d9b8;
        }
        break;
      }
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 == 0);
  }
LAB_01b5d9b4:
  iVar7 = -1;
LAB_01b5d9b8:
  FUN_01b6b174(aiStack_37e0,0x1000);
  FUN_01b6b174(aiStack_27e0,0x1000);
  FUN_01b6b174(local_97f4,0x2000);
  FUN_01b6b174(auStack_17e0,0x1000);
  FUN_01b6b174(auStack_97e0,0x4000);
  FUN_01b6b174(auStack_7e0,0x400);
  FUN_01b6b174(auStack_a0,0x20);
  FUN_01b6b174(auStack_80,0x20);
  FUN_01b6b174(auStack_e0,0x40);
  FUN_01b6b174(local_97fc,0x20);
  FUN_01b6b174(auStack_3e0,0x300);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar7;
}

