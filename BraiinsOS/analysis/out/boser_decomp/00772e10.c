// FUN_00772e10 @ 00772e10 size=484 calls_out=3 calls_in=1
// strings: 

void FUN_00772e10(short *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  short *unaff_r4;
  short *unaff_r7;
  short *psVar2;
  int *piVar3;
  short sVar4;
  uint local_3e8;
  undefined1 auStack_3e0 [240];
  undefined1 auStack_2f0 [240];
  undefined1 auStack_200 [236];
  short local_114 [120];
  
  if (*param_2 == 1) {
    piVar3 = param_2 + 1;
    if (*piVar3 != 0) {
      unaff_r4 = (short *)param_2[2];
      psVar2 = (short *)param_2[4];
      if (unaff_r4 != psVar2) {
        do {
          FUN_01bed4e2(auStack_200,unaff_r4,0xe8);
          unaff_r7 = local_114;
          unaff_r4 = unaff_r4 + 0x74;
          param_2[2] = (int)unaff_r4;
          FUN_0077e620(unaff_r7,param_3,auStack_200);
          sVar4 = local_114[0];
          if (local_114[0] != 2) goto LAB_00772fa4;
        } while (unaff_r4 != psVar2);
      }
      FUN_013d5d08(piVar3);
      *piVar3 = 0;
    }
    if (param_2[5] != 0) {
      unaff_r4 = (short *)param_2[6];
      psVar2 = (short *)param_2[8];
      if (unaff_r4 != psVar2) {
        do {
          FUN_01bed4e2(auStack_200,unaff_r4,0xe8);
          unaff_r7 = local_114;
          unaff_r4 = unaff_r4 + 0x74;
          param_2[6] = (int)unaff_r4;
          FUN_0077e620(unaff_r7,param_3,auStack_200);
          sVar4 = local_114[0];
          if (local_114[0] != 2) goto LAB_00772fa4;
        } while (unaff_r4 != psVar2);
      }
      FUN_013d5d08(param_2 + 5);
    }
    *param_2 = 0;
  }
  if (param_2[9] != 0) {
    unaff_r4 = (short *)param_2[10];
    unaff_r7 = (short *)param_2[0xc];
  }
  if (param_2[9] != 0 && unaff_r4 != unaff_r7) {
    do {
      FUN_01bed4e2(auStack_2f0,unaff_r4,0xe8);
      unaff_r4 = unaff_r4 + 0x74;
      param_2[10] = (int)unaff_r4;
      FUN_0077e620(local_114,param_3,auStack_2f0);
      if (local_114[0] != 2) {
        puVar1 = (undefined1 *)((uint)local_114 | 2);
        sVar4 = local_114[0];
        goto LAB_00772fe0;
      }
    } while (unaff_r4 != unaff_r7);
  }
  sVar4 = 2;
LAB_00772fe8:
  *param_1 = sVar4;
  return;
LAB_00772fa4:
  local_3e8 = (uint)local_114 | 2;
  FUN_01bed4e2(auStack_2f0,local_3e8,0xea);
  FUN_01bed4e2(auStack_3e0,auStack_2f0,0xea);
  puVar1 = auStack_3e0;
LAB_00772fe0:
  FUN_01bed4e2(param_1 + 1,puVar1,0xea);
  goto LAB_00772fe8;
}

