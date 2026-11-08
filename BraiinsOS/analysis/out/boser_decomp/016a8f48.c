// FUN_016a8f48 @ 016a8f48 size=1152 calls_out=24 calls_in=2
// strings: 

void FUN_016a8f48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_a90 [328];
  int local_948;
  int iStack_944;
  int iStack_940;
  int iStack_93c;
  undefined1 auStack_938 [328];
  int local_7f0;
  int iStack_7ec;
  int iStack_7e8;
  int iStack_7e4;
  undefined1 local_7e0 [424];
  int local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  int local_494;
  undefined1 auStack_490 [352];
  undefined1 auStack_330 [32];
  undefined1 auStack_310 [388];
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  undefined1 auStack_15c [12];
  int *local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined1 auStack_144 [264];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [3];
  
  FUN_006547e8(&local_638);
  if (local_494 == -0x80000000) {
    param_1[2] = local_638;
    param_1[3] = local_634;
    param_1[4] = local_630;
    param_1[5] = uStack_62c;
    param_1[6] = uStack_628;
    param_1[7] = uStack_624;
  }
  else {
    FUN_01bed4e2(local_7e0,&local_638,0x1a4);
    FUN_01bed4e2(&local_188,auStack_490,0x160);
    FUN_01bed4e2(auStack_330,local_7e0,0x1a4);
    local_18c = local_494;
    if (local_178 == local_180) {
      FUN_00664178(&local_180);
    }
    puVar2 = (undefined1 *)(local_17c + local_178 * 9);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    local_178 = local_178 + 1;
    if (local_160 == local_168) {
      FUN_015f5ab8(&local_168);
    }
    puVar3 = (undefined4 *)(local_164 + local_160 * 8);
    *puVar3 = 0;
    puVar3[1] = 0;
    local_160 = local_160 + 1;
    if (local_16c == local_174) {
      FUN_01a54b48(&local_174);
    }
    *(undefined4 *)(local_170 + local_16c * 4) = 0;
    local_16c = local_16c + 1;
    FUN_00653614(&local_638,&local_18c,0);
    if ((local_638 != 3) || (FUN_00653614(&local_638,&local_18c,0), local_638 != 3))
    goto LAB_016a9364;
    FUN_00653614(&local_638,&local_18c,0);
    iVar5 = local_638;
    uVar4 = local_634;
    if (local_638 == 3) {
      local_34 = local_634;
      FUN_00653614(&local_638,&local_18c,0);
      iVar5 = local_638;
      uVar4 = local_634;
      if (local_638 == 3) {
        local_30[0] = local_634;
        FUN_0065459c(&local_638,auStack_330);
        if (((local_638 == 3) && (FUN_00653acc(&local_638,&local_18c,0,0), local_638 == 3)) &&
           (FUN_016a93f0(&local_638,auStack_330,param_3,param_4), local_638 == 3)) {
          FUN_016a8da4(&local_18c);
          FUN_0065fb18(&local_638,auStack_330);
          FUN_01bed4e2(auStack_144,&local_638,0x100);
          FUN_006543e0(&local_638,auStack_330);
          if (local_638 != 3) {
            iVar5 = local_638;
            uVar4 = local_634;
            goto LAB_016a936c;
          }
          FUN_0065461c(auStack_330);
          FUN_00654a14(&local_638,auStack_330);
          if ((local_638 == 3) && (FUN_00653c7c(&local_638,auStack_330), local_638 == 3)) {
            FUN_006546c0(auStack_330);
            FUN_00654de0(auStack_330);
            FUN_00656340(&local_638);
            if (local_150 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *local_150;
                bVar1 = (bool)hasExclusiveAccess(local_150);
              } while (!bVar1);
              *local_150 = iVar5 + -1;
              if (iVar5 == 1) {
                DataMemoryBarrier(0xb);
                FUN_018531c0(local_150,local_14c);
              }
            }
            local_150 = (int *)local_638;
            local_14c = local_634;
            uStack_148 = local_630;
            puVar3 = local_30;
            if (local_638 == 0) {
              puVar3 = &local_38;
            }
            local_3c = *puVar3;
            FUN_016a8dd4(&local_180);
            FUN_016a8e34(&local_174);
            FUN_016a8e04(&local_168);
            FUN_016a8e34(auStack_15c);
            iVar5 = local_18c;
            local_7f0 = local_180;
            iStack_7ec = local_17c;
            iStack_7e8 = local_178;
            iStack_7e4 = local_174;
            FUN_01bed4e2(auStack_938,&local_170,0x148);
            FUN_016a8e64(auStack_310);
            local_948 = local_7f0;
            iStack_944 = iStack_7ec;
            iStack_940 = iStack_7e8;
            iStack_93c = iStack_7e4;
            FUN_01bed4e2(auStack_a90,auStack_938,0x148);
            param_1[1] = iVar5;
            param_1[2] = local_188;
            param_1[3] = local_184;
            param_1[4] = local_948;
            param_1[5] = iStack_944;
            param_1[6] = iStack_940;
            param_1[7] = iStack_93c;
            FUN_01bed4e2(param_1 + 8,auStack_a90,0x148);
            uVar4 = 0;
            goto LAB_016a93ac;
          }
        }
LAB_016a9364:
        iVar5 = local_638;
        uVar4 = local_634;
      }
    }
LAB_016a936c:
    local_7f0 = local_630;
    iStack_7ec = uStack_62c;
    iStack_7e8 = uStack_628;
    iStack_7e4 = uStack_624;
    FUN_016a8e94(auStack_330);
    param_1[2] = iVar5;
    param_1[3] = uVar4;
    param_1[4] = local_7f0;
    param_1[5] = iStack_7ec;
    param_1[6] = iStack_7e8;
    param_1[7] = iStack_7e4;
  }
  uVar4 = 1;
LAB_016a93ac:
  *param_1 = uVar4;
  return;
}

